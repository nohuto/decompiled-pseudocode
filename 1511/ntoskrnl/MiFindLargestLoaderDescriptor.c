/*
 * XREFs of MiFindLargestLoaderDescriptor @ 0x140746E7C
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140746FA8 (MxInitializeFreeNodeDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1407477A8 (MxComputeFreeNodeDescriptorRequirements.c)
 */

__int64 __fastcall MiFindLargestLoaderDescriptor(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *i; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  ULONG_PTR v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // ecx
  ULONG_PTR v10; // rcx
  _BYTE v12[512]; // [rsp+20h] [rbp-218h] BYREF

  qword_140301380 = -1LL;
  MxComputeFreeNodeDescriptorRequirements(a1, v12);
  v2 = (__int64 **)(a1 + 32);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v4 = *((int *)i + 4);
    if ( (unsigned int)v4 <= 0x20 )
    {
      v5 = 0x1C0C00048LL;
      if ( _bittest64(&v5, v4) )
        continue;
    }
    v6 = i[3];
    v7 = i[4];
    if ( v7 + v6 > BugCheckParameter3 )
      BugCheckParameter3 = v7 + v6 - 1;
    qword_140301390 += v7;
    if ( v6 < qword_140301380 )
      qword_140301380 = v6;
    v8 = *((_DWORD *)i + 4);
    if ( v8 <= 0x18 )
    {
      v9 = 16777524;
      if ( _bittest(&v9, v8) )
        MxInitializeFreeNodeDescriptors(i, v12);
    }
  }
  v10 = (unsigned int)dword_1403810F4;
  qword_1402FE758 = MmDynamicPfn - 1;
  if ( !dword_1403810F4 )
  {
    v10 = 0x80000LL;
    dword_1403810F4 = 0x80000;
  }
  if ( (MiFlags & 1) != 0 )
  {
    v10 = 4294967294LL;
    dword_1403810F4 = -2;
  }
  if ( qword_140301390 <= v10 || (MiFlags & 0x10000) != 0 )
    MxUseLargePagesForKernelAndHal = 0;
  return 1LL;
}

/*
 * XREFs of MiFindLargestLoaderDescriptor @ 0x1407C558C
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1407C56C0 (MxInitializeFreeNodeDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1407C6010 (MxComputeFreeNodeDescriptorRequirements.c)
 */

__int64 __fastcall MiFindLargestLoaderDescriptor(__int64 a1)
{
  unsigned __int64 v2; // rdx
  __int64 **v3; // rdi
  __int64 *i; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  ULONG_PTR v7; // rax
  __int64 v8; // rcx
  ULONG_PTR v9; // r8
  unsigned int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // rcx
  _BYTE v14[512]; // [rsp+20h] [rbp-218h] BYREF

  qword_1403551C0 = -1LL;
  MxComputeFreeNodeDescriptorRequirements(a1, v14);
  v2 = BugCheckParameter3;
  v3 = (__int64 **)(a1 + 32);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    v5 = *((int *)i + 4);
    if ( (unsigned int)v5 <= 0x20 )
    {
      v6 = 0x1C0C00048LL;
      if ( _bittest64(&v6, v5) )
        continue;
    }
    v7 = i[3];
    v8 = i[4];
    v9 = v8 + v7;
    if ( v8 + v7 > v2 )
    {
      v2 = v9 - 1;
      BugCheckParameter3 = v9 - 1;
    }
    qword_1403551D0 += v8;
    if ( v7 < qword_1403551C0 )
      qword_1403551C0 = v7;
    v10 = *((_DWORD *)i + 4);
    if ( v10 <= 0x18 )
    {
      v11 = 16777524;
      if ( _bittest(&v11, v10) )
      {
        MxInitializeFreeNodeDescriptors(i, v14);
        v2 = BugCheckParameter3;
      }
    }
  }
  v12 = MmDynamicPfn;
  if ( MmDynamicPfn )
  {
    if ( v2 > MmDynamicPfn - 1 )
    {
      v12 = v2 + 1;
      MmDynamicPfn = v2 + 1;
    }
    if ( v12 > qword_14034EC10 + 1 )
    {
      v12 = qword_14034EC10 + 1;
      MmDynamicPfn = qword_14034EC10 + 1;
    }
    qword_14034EC10 = v12 - 1;
  }
  else
  {
    qword_14034EC10 = v2;
  }
  return 1LL;
}

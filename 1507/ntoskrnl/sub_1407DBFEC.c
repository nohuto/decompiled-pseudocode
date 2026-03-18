/*
 * XREFs of sub_1407DBFEC @ 0x1407DBFEC
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x14051D354 (NtQueryLicenseValue.c)
 *     MiFindLoaderGap @ 0x1407DC100 (MiFindLoaderGap.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x1407DC2A0 (MiLimitLoaderBlockTotalMemory.c)
 *     MiLimitLoaderBlockHighMemory @ 0x1407DC374 (MiLimitLoaderBlockHighMemory.c)
 */

__int64 __fastcall sub_1407DBFEC(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-10h] BYREF
  const wchar_t *v6; // [rsp+38h] [rbp-8h]
  unsigned __int64 v7; // [rsp+68h] [rbp+28h] BYREF
  int v8; // [rsp+70h] [rbp+30h] BYREF
  int v9; // [rsp+78h] [rbp+38h] BYREF

  v9 = 0;
  LODWORD(v7) = 0;
  v6 = L"Kernel-WindowsMaxMemAllowedx64";
  v5 = 4063292;
  v8 = 4;
  if ( (int)NtQueryLicenseValue((ULONG64)&v5, (ULONG64)&v9, &v7, 4u, (ULONG64)&v8) >= 0 && (_DWORD)v7 )
    v2 = (unsigned __int64)(unsigned int)v7 << 8;
  else
    v2 = 0x80000LL;
  v3 = 0xFFFFFFFFCLL;
  qword_14034EBB0 = v2;
  if ( ((unsigned __int64)qword_14034EBC0 >> 12) - 1 < 0xFFFFFFFFCLL )
    v3 = ((unsigned __int64)qword_14034EBC0 >> 12) - 1;
  MiLimitLoaderBlockHighMemory(a1, v3);
  result = MiLimitLoaderBlockTotalMemory(a1, v2);
  qword_14034F420 = -1LL;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  if ( MmDynamicPfn
    || (v7 = 2048LL, result = MiFindLoaderGap(a1, &v7), v7 < 0x800)
    || (qword_14034F420 = result, result == -1) )
  {
    if ( v3 > 0xFFFFFF7FCLL )
    {
      v3 = 0xFFFFFF7FCLL;
      result = MiLimitLoaderBlockHighMemory(a1, 0xFFFFFF7FCLL);
    }
  }
  qword_14034EC10 = v3;
  return result;
}

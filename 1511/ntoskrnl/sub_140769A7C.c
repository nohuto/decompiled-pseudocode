/*
 * XREFs of sub_140769A7C @ 0x140769A7C
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x140489ACC (NtQueryLicenseValue.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140769B40 (MiLimitLoaderBlockHighMemory.c)
 */

__int64 __fastcall sub_140769A7C(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-18h] BYREF
  const wchar_t *v4; // [rsp+38h] [rbp-10h]
  unsigned int v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0;
  v5 = 0;
  v3 = 4063292;
  v4 = L"Kernel-WindowsMaxMemAllowedx64";
  v6 = 4;
  if ( (int)NtQueryLicenseValue((ULONG64)&v3, (ULONG64)&v7, &v5, 4u, (ULONG64)&v6) >= 0 && v5 )
    qword_1402FE700 = (unsigned __int64)v5 << 8;
  else
    qword_1402FE700 = 0x80000LL;
  MiLimitLoaderBlockHighMemory(a1, 0xFFFFFFFFCLL);
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  qword_1402FEF60 = 0xFFFFFF7FCLL;
  result = MiLimitLoaderBlockHighMemory(a1, 0xFFFFFF7FCLL);
  qword_1402FEF60 = 0xFFFFFF7FCLL;
  qword_1402FE758 = 0xFFFFFF7FCLL;
  return result;
}

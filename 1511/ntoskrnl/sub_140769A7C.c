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
  UNICODE_STRING v3; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+58h] [rbp+10h] BYREF
  ULONG v5; // [rsp+60h] [rbp+18h] BYREF
  ULONG v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v4 = 0;
  *(_DWORD *)&v3.Length = 4063292;
  v3.Buffer = L"Kernel-WindowsMaxMemAllowedx64";
  v5 = 4;
  if ( NtQueryLicenseValue(&v3, &v6, &v4, 4u, &v5) >= 0 && v4 )
    qword_1402FE700 = (unsigned __int64)v4 << 8;
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

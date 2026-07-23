/*
 * XREFs of MiMemoryLicense @ 0x14078EC84
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x14051C200 (NtQueryLicenseValue.c)
 *     MiLimitLoaderBlockHighMemory @ 0x14078ED68 (MiLimitLoaderBlockHighMemory.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x14078EDB0 (MiLimitLoaderBlockTotalMemory.c)
 */

__int64 __fastcall MiMemoryLicense(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  UNICODE_STRING v5; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+68h] [rbp+10h] BYREF
  ULONG v7; // [rsp+70h] [rbp+18h] BYREF
  ULONG v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v6 = 0;
  *(_DWORD *)&v5.Length = 4063292;
  v5.Buffer = L"Kernel-WindowsMaxMemAllowedx64";
  v7 = 4;
  if ( NtQueryLicenseValue(&v5, &v8, &v6, 4u, &v7) >= 0 && v6 )
    v2 = (unsigned __int64)v6 << 8;
  else
    v2 = 0x80000LL;
  v3 = 0xFFFFFFFFALL;
  qword_140326A30 = v2;
  if ( ((unsigned __int64)qword_140326A40 >> 12) - 1 < 0xFFFFFFFFALL )
    v3 = ((unsigned __int64)qword_140326A40 >> 12) - 1;
  MiLimitLoaderBlockHighMemory(a1, v3);
  result = MiLimitLoaderBlockTotalMemory(a1, v2);
  qword_1403273A0 = -1LL;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  if ( v3 > 0xFFFFFF7FALL )
    result = MiLimitLoaderBlockHighMemory(a1, 0xFFFFFF7FALL);
  qword_1403273A0 = 0xFFFFFF7FALL;
  qword_140326AD0 = 0xFFFFFF7FALL;
  return result;
}

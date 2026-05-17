/*
 * XREFs of LdrpFindKnownDll @ 0x18000E074
 * Callers:
 *     LdrpLoadKnownDll @ 0x1800105C0 (LdrpLoadKnownDll.c)
 * Callees:
 *     LdrpAllocateUnicodeString @ 0x18000E008 (LdrpAllocateUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenSection @ 0x1800A57A0 (NtOpenSection.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindKnownDll(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3, HANDLE *a4)
{
  int v8; // eax
  int UnicodeString; // ebx
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  unsigned __int16 *v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-28h]

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1263,
      (unsigned int)"LdrpFindKnownDll",
      3,
      (__int64)"DLL name: %wZ\n");
  if ( !LdrpKnownDllDirectoryHandle )
  {
LABEL_11:
    UnicodeString = -1073741515;
    goto LABEL_7;
  }
  v12 = 48;
  v13 = LdrpKnownDllDirectoryHandle;
  v15 = 64;
  v14 = a1;
  v16 = 0LL;
  v8 = NtOpenSection(a4, 15LL, &v12);
  UnicodeString = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_7;
    goto LABEL_11;
  }
  UnicodeString = LdrpAllocateUnicodeString((__int64)a3, *a1 + (unsigned int)(unsigned __int16)LdrpKnownDllPath + 2);
  if ( UnicodeString < 0 )
  {
    NtClose(*a4);
  }
  else
  {
    RtlAppendUnicodeStringToString(a3, &LdrpKnownDllPath);
    RtlAppendUnicodeToString(a3, L"\\");
    v10 = *((_QWORD *)a3 + 1) + *a3;
    RtlAppendUnicodeStringToString(a3, a1);
    RtlInitUnicodeStringEx(a2, v10);
    UnicodeString = 0;
  }
LABEL_7:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1335,
      (unsigned int)"LdrpFindKnownDll",
      4,
      (__int64)"Status: 0x%08lx\n");
  return (unsigned int)UnicodeString;
}

/*
 * XREFs of LdrpFindKnownDll @ 0x1800101B0
 * Callers:
 *     LdrpLoadKnownDll @ 0x180012040 (LdrpLoadKnownDll.c)
 * Callees:
 *     LdrpAllocateUnicodeString @ 0x18000FD28 (LdrpAllocateUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180010440 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x180013C90 (RtlAppendUnicodeToString.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenSection @ 0x1800A6B00 (NtOpenSection.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindKnownDll(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3, HANDLE *a4)
{
  int v8; // eax
  int UnicodeString; // ebx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // r8
  int v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  unsigned __int16 *v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+48h] [rbp-30h]
  __int128 v18; // [rsp+50h] [rbp-28h]

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1263,
      (unsigned int)"LdrpFindKnownDll",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  if ( !LdrpKnownDllDirectoryHandle )
  {
LABEL_11:
    UnicodeString = -1073741515;
    goto LABEL_7;
  }
  v14 = 48;
  v15 = LdrpKnownDllDirectoryHandle;
  v17 = 64;
  v16 = a1;
  v18 = 0LL;
  v8 = NtOpenSection(a4, 15LL, &v14);
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
    RtlAppendUnicodeStringToString(a3, &LdrpKnownDllPath, v10);
    RtlAppendUnicodeToString(a3, L"\\");
    v11 = *((_QWORD *)a3 + 1) + *a3;
    RtlAppendUnicodeStringToString(a3, a1, v12);
    RtlInitUnicodeStringEx(a2, v11);
    UnicodeString = 0;
  }
LABEL_7:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1335,
      (unsigned int)"LdrpFindKnownDll",
      4,
      (__int64)"Status: 0x%08lx\n",
      UnicodeString);
  return (unsigned int)UnicodeString;
}

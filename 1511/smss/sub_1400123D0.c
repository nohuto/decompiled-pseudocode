/*
 * XREFs of sub_1400123D0 @ 0x1400123D0
 * Callers:
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 *     sub_140011DD0 @ 0x140011DD0 (sub_140011DD0.c)
 *     sub_1400127F8 @ 0x1400127F8 (sub_1400127F8.c)
 *     sub_14001290C @ 0x14001290C (sub_14001290C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1400123D0(void **a1, ACCESS_MASK a2, struct _OBJECT_ATTRIBUTES *a3)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  int FileInformation; // [rsp+68h] [rbp+20h] BYREF
  int v7; // [rsp+6Ch] [rbp+24h]

  result = NtOpenFile(a1, a2, a3, &IoStatusBlock, 3u, 0x204020u);
  if ( result >= 0 )
  {
    if ( NtQueryInformationFile(*a1, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation) < 0
      || (FileInformation & 0x400) == 0
      || (v7 & 0x20000000) != 0 )
    {
      return 0;
    }
    else
    {
      NtClose(*a1);
      *a1 = 0LL;
      return -1073741608;
    }
  }
  return result;
}

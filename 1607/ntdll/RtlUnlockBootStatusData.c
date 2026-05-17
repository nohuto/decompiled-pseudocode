/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800898D0
 * Callers:
 *     <none>
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwFsControlFile @ 0x1800A6B40 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x1800A6D80 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall RtlUnlockBootStatusData(HANDLE Handle)
{
  _BYTE v3[24]; // [rsp+50h] [rbp-18h] BYREF
  __int16 v4; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  ZwFsControlFile(Handle, 0LL, 0LL, 0LL, v3, 639040, &v4, 2, 0LL, 0);
  ZwFlushBuffersFile(Handle, v3);
  return NtClose(Handle);
}

/*
 * XREFs of FsRtlRegisterUncProvider @ 0x1405F4118
 * Callers:
 *     VerifierFsRtlRegisterUncProvider @ 0x1406C068C (VerifierFsRtlRegisterUncProvider.c)
 * Callees:
 *     FsRtlpRegisterUncProvider @ 0x140544B70 (FsRtlpRegisterUncProvider.c)
 */

NTSTATUS __stdcall FsRtlRegisterUncProvider(
        PHANDLE MupHandle,
        PCUNICODE_STRING RedirectorDeviceName,
        BOOLEAN MailslotsSupported)
{
  int v4; // [rsp+48h] [rbp+20h] BYREF
  BOOL v5; // [rsp+4Ch] [rbp+24h]

  v4 = 16777224;
  v5 = MailslotsSupported != 0;
  return FsRtlpRegisterUncProvider((__int64)RedirectorDeviceName, 0LL, (__int64)&v4, MupHandle);
}

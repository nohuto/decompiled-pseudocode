/*
 * XREFs of FsRtlRegisterUncProvider @ 0x14066D094
 * Callers:
 *     VerifierFsRtlRegisterUncProvider @ 0x140741E80 (VerifierFsRtlRegisterUncProvider.c)
 * Callees:
 *     FsRtlpRegisterUncProvider @ 0x1405BB718 (FsRtlpRegisterUncProvider.c)
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

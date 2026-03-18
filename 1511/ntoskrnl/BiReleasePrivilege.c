/*
 * XREFs of BiReleasePrivilege @ 0x1404FB4AC
 * Callers:
 *     BiUnloadHiveByName @ 0x1404F4D38 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x1404FB31C (BiLoadHive.c)
 *     BiAddBootEntry @ 0x14068EC20 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140690024 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140690068 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x140690140 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x140690DC0 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x140690E04 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140690EB4 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140690F64 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140690FB8 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140691130 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140692030 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1401507C0 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x1404FB56C (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiReleasePrivilege(unsigned int *a1)
{
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)a1 + 4) )
    result = BiAdjustPrivilege(*a1, 0LL, &ThreadInformation);
  if ( !*((_BYTE *)a1 + 5) )
  {
    ThreadInformation = 0LL;
    return ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}

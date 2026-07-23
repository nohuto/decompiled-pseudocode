/*
 * XREFs of BiReleasePrivilege @ 0x14053C260
 * Callers:
 *     BiUnloadHiveByName @ 0x1405341F4 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14053C0C0 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x1406D34C4 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1406D48FC (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x1406D4940 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x1406D4A18 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1406D56C0 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x1406D5704 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1406D57B4 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1406D5868 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1406D58BC (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x1406D5A34 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1406D6900 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14015A390 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x14053C320 (BiAdjustPrivilege.c)
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

/*
 * XREFs of BiReleasePrivilege @ 0x14053BD20
 * Callers:
 *     BiUnloadHiveByName @ 0x140533CB4 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14053BB80 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x1406D338C (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1406D47C4 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x1406D4808 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x1406D48E0 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1406D5588 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x1406D55CC (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1406D567C (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1406D5730 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1406D5784 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x1406D58FC (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1406D67C8 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x140159E20 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x14053BDE0 (BiAdjustPrivilege.c)
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

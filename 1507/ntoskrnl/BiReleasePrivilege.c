/*
 * XREFs of BiReleasePrivilege @ 0x14056DA44
 * Callers:
 *     BiUnloadHiveByName @ 0x140569140 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14056D8B4 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x14070E738 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x14070FB3C (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x14070FB80 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x14070FC58 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1407108D8 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x14071091C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407109CC (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140710A7C (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140710AD0 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140710C48 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140711B48 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14017F190 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x14056DB04 (BiAdjustPrivilege.c)
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

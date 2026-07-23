/*
 * XREFs of BiAcquirePrivilege @ 0x14053C2AC
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
 *     RtlImpersonateSelfEx @ 0x1404BF77C (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14053C320 (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  NTSTATUS result; // eax
  int v6; // edi
  char v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 ThreadInformation; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    result = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
    if ( result < 0 )
      return result;
  }
  LOBYTE(a2) = 1;
  v6 = BiAdjustPrivilege(a1, a2, &v7);
  if ( v6 < 0 )
  {
    if ( !v4 )
    {
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
  }
  else
  {
    *(_BYTE *)(v2 + 4) = v7;
    *(_BYTE *)(v2 + 5) = v4;
    *(_DWORD *)v2 = a1;
  }
  return v6;
}

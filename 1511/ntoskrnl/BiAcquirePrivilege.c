/*
 * XREFs of BiAcquirePrivilege @ 0x1404FB4F8
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
 *     RtlImpersonateSelfEx @ 0x1404B4274 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x1404FB56C (BiAdjustPrivilege.c)
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
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 8) != 0 )
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

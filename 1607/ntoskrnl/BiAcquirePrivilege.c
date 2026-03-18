/*
 * XREFs of BiAcquirePrivilege @ 0x14053BD6C
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
 *     RtlImpersonateSelfEx @ 0x1404DC178 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14053BDE0 (BiAdjustPrivilege.c)
 */

__int64 __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  __int64 result; // rax
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
    result = RtlImpersonateSelfEx(2, 0, 0LL);
    if ( (int)result < 0 )
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
  return (unsigned int)v6;
}

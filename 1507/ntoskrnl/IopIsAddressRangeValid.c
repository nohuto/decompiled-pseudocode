/*
 * XREFs of IopIsAddressRangeValid @ 0x14016F880
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x14016F7DC (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x1401F2E8C (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1401F3664 (IoGetLoadedDriverInfo.c)
 *     IopWriteDriverList @ 0x1401F53D4 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401F9578 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401F9680 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401F9814 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401F991C (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401F9A04 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401F9B7C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401F9C68 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401F9CF0 (IopAddBugcheckTriageWorkQueue.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402338C4 (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 */

char __fastcall IopIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( !(((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12) )
    return 1;
  while ( v2 >= 0x10000 && MiIsAddressValid(v2) )
  {
    v2 = v3 + 4096;
    if ( v4 == 1 )
      return 1;
  }
  return 0;
}

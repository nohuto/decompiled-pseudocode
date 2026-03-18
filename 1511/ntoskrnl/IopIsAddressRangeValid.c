/*
 * XREFs of IopIsAddressRangeValid @ 0x1401418A4
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x140141800 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x1401B7B00 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1401B8298 (IoGetLoadedDriverInfo.c)
 *     IopWriteDriverList @ 0x1401BA1CC (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401BDD10 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401BDE18 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401BDFAC (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401BE0B4 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401BE19C (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401BE314 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401BE400 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401BE488 (IopAddBugcheckTriageWorkQueue.c)
 *     PopInternalSaveStackToDumpFile @ 0x1401E678C (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
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

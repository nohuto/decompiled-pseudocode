/*
 * XREFs of IopIsAddressRangeValid @ 0x14014B4B0
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x14014B400 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x1401C5868 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1401C604C (IoGetLoadedDriverInfo.c)
 *     IopWriteDriverList @ 0x1401C7FF8 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401CC284 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401CC388 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401CC51C (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401CC624 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401CC70C (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401CC88C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401CC980 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401CCA14 (IopAddBugcheckTriageWorkQueue.c)
 *     PopInternalSaveStackToDumpFile @ 0x1401FF12C (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MiIsAddressValid @ 0x140037540 (MiIsAddressValid.c)
 */

char __fastcall IopIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( !v3 )
    return 1;
  while ( v2 >= 0x10000 && MiIsAddressValid(v2) )
  {
    v2 += 4096LL;
    if ( !--v3 )
      return 1;
  }
  return 0;
}

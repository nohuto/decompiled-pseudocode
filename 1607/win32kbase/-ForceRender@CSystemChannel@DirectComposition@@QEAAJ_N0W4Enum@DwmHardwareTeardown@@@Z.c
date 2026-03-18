/*
 * XREFs of ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z @ 0x1C00E4FB4
 * Callers:
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z @ 0x1C00E4060 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C001AC78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C003DB48 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003EBDC (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::ForceRender(
        DirectComposition::CBatchSharedMemoryPool ***a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4)
{
  _DWORD *v8; // r8
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)a1);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(a1[23], 0x14uLL, &v10) )
    return 3221225473LL;
  v8 = v10;
  *(_DWORD *)v10 = 20;
  v8[2] = a2;
  v8[3] = a3;
  v8[1] = 6;
  v8[4] = a4;
  return DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)a1, 0LL, 1);
}

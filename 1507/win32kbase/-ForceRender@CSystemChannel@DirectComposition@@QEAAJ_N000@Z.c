/*
 * XREFs of ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N000@Z @ 0x1C00D5748
 * Callers:
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N000@Z @ 0x1C00D4C50 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N000@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C00205A4 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002DA00 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C0030914 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::ForceRender(
        DirectComposition::CBatchSharedMemoryPool ***this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        bool a5)
{
  _DWORD *v9; // r8
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)this);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(this[15], 0x18uLL, &v11) )
    return 3221225473LL;
  v9 = v11;
  *(_DWORD *)v11 = 24;
  v9[2] = a2;
  v9[3] = a3;
  v9[4] = a4;
  v9[5] = a5;
  v9[1] = 5;
  return DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)this, 0LL, 1);
}

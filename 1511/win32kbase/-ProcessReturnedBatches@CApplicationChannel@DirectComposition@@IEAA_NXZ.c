/*
 * XREFs of ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00D7318
 * Callers:
 *     NtDCompositionGetAnimationTime @ 0x1C0015D20 (NtDCompositionGetAnimationTime.c)
 *     ?CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAVCAnimationBinding@2@@Z @ 0x1C001A8C4 (-CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCB.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C001AE40 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C001C6C4 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C94C (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C001CE2C (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001CFF0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C00D74CC (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 * Callees:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C001A344 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::ProcessReturnedBatches(
        DirectComposition::CApplicationChannel *this)
{
  char v2; // si
  PSLIST_ENTRY v3; // rdi
  unsigned __int64 v4; // rax

  v2 = 0;
  KeResetEvent(**((PRKEVENT **)this + 20));
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 9);
  if ( v3 )
  {
    v2 = 1;
    do
    {
      --*((_DWORD *)this + 43);
      v4 = *((_QWORD *)&v3[4].Next + 1);
      if ( v4 > *((_QWORD *)this + 22) )
      {
        *((_BYTE *)this + 184) |= 2u;
        *((_QWORD *)this + 22) = v4;
      }
      DirectComposition::CBatch::Clear((DirectComposition::CConnection ***)v3);
      v3->Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v3;
      v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 9);
    }
    while ( v3 );
  }
  return v2;
}

/*
 * XREFs of ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C003F5F4
 * Callers:
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C003DBC8 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAVCAnimationBinding@2@@Z @ 0x1C003E96C (-CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCB.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C003F3D0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C0040038 (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0041A44 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0042038 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0042210 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C001ACA8 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::ProcessReturnedBatches(
        DirectComposition::CApplicationChannel *this)
{
  char v2; // si
  PSLIST_ENTRY v3; // rdi
  unsigned __int64 v5; // rax

  v2 = 0;
  KeResetEvent(**((PRKEVENT **)this + 28));
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13);
  if ( v3 )
  {
    v2 = 1;
    do
    {
      --*((_DWORD *)this + 59);
      v5 = *((_QWORD *)&v3[4].Next + 1);
      if ( v5 > *((_QWORD *)this + 30) )
      {
        *((_BYTE *)this + 248) |= 2u;
        *((_QWORD *)this + 30) = v5;
      }
      DirectComposition::CBatch::Clear((DirectComposition::CBatch *)v3);
      v3->Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = v3;
      v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13);
    }
    while ( v3 );
  }
  return v2;
}

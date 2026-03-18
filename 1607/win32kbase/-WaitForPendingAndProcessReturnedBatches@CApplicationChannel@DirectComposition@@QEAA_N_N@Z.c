/*
 * XREFs of ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C003DBC8
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0041844 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     NtDCompositionWaitForChannel @ 0x1C007D420 (NtDCompositionWaitForChannel.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C003F5F4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  char v4; // si
  char v5; // al
  char v6; // di
  char v7; // bl

  v4 = 0;
  v5 = 0;
  v6 = 1;
  v7 = 1;
  do
  {
    if ( *((int *)this + 59) <= 0 )
      break;
    if ( v5 && KeWaitForSingleObject(**((PVOID **)this + 28), UserRequest, 0, 1u, 0LL) )
      v7 = 0;
    if ( DirectComposition::CApplicationChannel::ProcessReturnedBatches(this) )
      v4 = 1;
    if ( !a2 && v4 )
      v7 = 0;
    v5 = 1;
  }
  while ( v7 );
  if ( !v4 || a2 && *((_DWORD *)this + 59) )
    return 0;
  return v6;
}

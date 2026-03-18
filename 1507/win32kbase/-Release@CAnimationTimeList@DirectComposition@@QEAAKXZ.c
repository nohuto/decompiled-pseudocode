/*
 * XREFs of ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C00121E0
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C00205D4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1C002C2A8 (--1CAnimationMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C002C348 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002D868 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C002F340 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CAnimationTimeList::Release(DirectComposition::CAnimationTimeList *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 12);
  if ( !v1 )
    Win32FreePool(this);
  return v1;
}

/*
 * XREFs of ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C0040038
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C003F5F4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z @ 0x1C004D530 (-GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetAnimationTime(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned __int64 a3,
        __int64 *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v6; // rcx
  __int64 v9; // rbx

  v4 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( a2 && v6 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v9 = *(_QWORD *)(v6 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 112LL))(v9, 88LL) )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    DirectComposition::CAnimationMarshaler::GetAnimationTime(
      (DirectComposition::CAnimationMarshaler *)(v9 - 16),
      a3,
      a4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}

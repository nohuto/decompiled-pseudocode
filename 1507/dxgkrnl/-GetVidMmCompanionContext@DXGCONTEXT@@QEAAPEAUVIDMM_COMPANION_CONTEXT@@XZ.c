/*
 * XREFs of ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C0132D28
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01304C0 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0132D90 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 */

struct VIDMM_COMPANION_CONTEXT *__fastcall DXGCONTEXT::GetVidMmCompanionContext(DXGCONTEXT *this)
{
  struct _VIDSCH_CONTEXT *VidSchCompanionContext; // rax

  if ( !*((_QWORD *)this + 29) )
  {
    VidSchCompanionContext = DXGCONTEXT::GetVidSchCompanionContext(this);
    if ( VidSchCompanionContext )
      *((_QWORD *)this + 29) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _VIDSCH_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 952LL))(
                                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL),
                                 *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
                                 VidSchCompanionContext);
  }
  return (struct VIDMM_COMPANION_CONTEXT *)*((_QWORD *)this + 29);
}

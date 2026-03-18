/*
 * XREFs of ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C0136FC8
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0135050 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0137030 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 */

struct VIDMM_COMPANION_CONTEXT *__fastcall DXGCONTEXT::GetVidMmCompanionContext(DXGCONTEXT *this)
{
  struct _VIDSCH_CONTEXT *VidSchCompanionContext; // rax

  if ( !*((_QWORD *)this + 29) )
  {
    VidSchCompanionContext = DXGCONTEXT::GetVidSchCompanionContext(this);
    if ( VidSchCompanionContext )
      *((_QWORD *)this + 29) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _VIDSCH_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 960LL))(
                                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
                                 *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
                                 VidSchCompanionContext);
  }
  return (struct VIDMM_COMPANION_CONTEXT *)*((_QWORD *)this + 29);
}

/*
 * XREFs of ?OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z @ 0x180014250
 * Callers:
 *     ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180032F9C (-UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180015F2C (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 */

void __fastcall CAccent::OnBlurBehindUpdated(CAccent *this, struct CWindowData *a2)
{
  CAccentBlurBehind *v3; // rcx

  v3 = (CAccentBlurBehind *)*((_QWORD *)this + 40);
  if ( v3
    && (*((_QWORD *)a2 + 5) == *((_QWORD *)this + 44)
     || CAccentBlurBehind::IsBlurBehindDirty(
          v3,
          a2,
          (const struct tagRECT *)((char *)this + 568),
          *((_QWORD *)this + 45),
          *((HWND *)this + 44))) )
  {
    CVisual::SetDirtyFlags(this, 0x10000u);
  }
}

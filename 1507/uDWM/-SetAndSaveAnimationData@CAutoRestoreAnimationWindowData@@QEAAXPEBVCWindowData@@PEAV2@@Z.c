/*
 * XREFs of ?SetAndSaveAnimationData@CAutoRestoreAnimationWindowData@@QEAAXPEBVCWindowData@@PEAV2@@Z @ 0x18004A118
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094080 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::SetAndSaveAnimationData(
        CAutoRestoreAnimationWindowData *this,
        const struct CWindowData *a2,
        struct CWindowData *a3)
{
  *((_DWORD *)this + 142) = *((_DWORD *)a3 + 142);
  *(_OWORD *)((char *)this + 572) = *(_OWORD *)((char *)a3 + 572);
  *(_OWORD *)((char *)this + 588) = *(_OWORD *)((char *)a3 + 588);
  *(_OWORD *)((char *)this + 604) = *(_OWORD *)((char *)a3 + 604);
  *(_OWORD *)((char *)this + 620) = *(_OWORD *)((char *)a3 + 620);
  *((_DWORD *)a3 + 142) = *((_DWORD *)a2 + 142);
  *(_OWORD *)((char *)a3 + 572) = *(_OWORD *)((char *)a2 + 572);
  *(_OWORD *)((char *)a3 + 588) = *(_OWORD *)((char *)a2 + 588);
  *(_OWORD *)((char *)a3 + 604) = *(_OWORD *)((char *)a2 + 604);
  *(_OWORD *)((char *)a3 + 620) = *(_OWORD *)((char *)a2 + 620);
  *((_QWORD *)this + 152) = a3;
}

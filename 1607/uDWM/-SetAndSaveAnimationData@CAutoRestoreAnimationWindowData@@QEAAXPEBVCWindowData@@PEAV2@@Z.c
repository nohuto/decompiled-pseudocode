/*
 * XREFs of ?SetAndSaveAnimationData@CAutoRestoreAnimationWindowData@@QEAAXPEBVCWindowData@@PEAV2@@Z @ 0x180003748
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::SetAndSaveAnimationData(
        CAutoRestoreAnimationWindowData *this,
        const struct CWindowData *a2,
        struct CWindowData *a3)
{
  *((_DWORD *)this + 146) = *((_DWORD *)a3 + 146);
  *(_OWORD *)((char *)this + 588) = *(_OWORD *)((char *)a3 + 588);
  *(_OWORD *)((char *)this + 604) = *(_OWORD *)((char *)a3 + 604);
  *(_OWORD *)((char *)this + 620) = *(_OWORD *)((char *)a3 + 620);
  *(_OWORD *)((char *)this + 636) = *(_OWORD *)((char *)a3 + 636);
  *((_DWORD *)a3 + 146) = *((_DWORD *)a2 + 146);
  *(_OWORD *)((char *)a3 + 588) = *(_OWORD *)((char *)a2 + 588);
  *(_OWORD *)((char *)a3 + 604) = *(_OWORD *)((char *)a2 + 604);
  *(_OWORD *)((char *)a3 + 620) = *(_OWORD *)((char *)a2 + 620);
  *(_OWORD *)((char *)a3 + 636) = *(_OWORD *)((char *)a2 + 636);
  *((_QWORD *)this + 154) = a3;
}

/*
 * XREFs of ?SetAndSaveAnimationData@CAutoRestoreAnimationWindowData@@QEAAXPEBVCWindowData@@PEAV2@@Z @ 0x1800507C4
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::SetAndSaveAnimationData(
        CAutoRestoreAnimationWindowData *this,
        const struct CWindowData *a2,
        struct CWindowData *a3)
{
  *((_DWORD *)this + 144) = *((_DWORD *)a3 + 144);
  *(_OWORD *)((char *)this + 580) = *(_OWORD *)((char *)a3 + 580);
  *(_OWORD *)((char *)this + 596) = *(_OWORD *)((char *)a3 + 596);
  *(_OWORD *)((char *)this + 612) = *(_OWORD *)((char *)a3 + 612);
  *(_OWORD *)((char *)this + 628) = *(_OWORD *)((char *)a3 + 628);
  *((_DWORD *)a3 + 144) = *((_DWORD *)a2 + 144);
  *(_OWORD *)((char *)a3 + 580) = *(_OWORD *)((char *)a2 + 580);
  *(_OWORD *)((char *)a3 + 596) = *(_OWORD *)((char *)a2 + 596);
  *(_OWORD *)((char *)a3 + 612) = *(_OWORD *)((char *)a2 + 612);
  *(_OWORD *)((char *)a3 + 628) = *(_OWORD *)((char *)a2 + 628);
  *((_QWORD *)this + 153) = a3;
}

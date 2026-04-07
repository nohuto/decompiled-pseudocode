/*
 * XREFs of ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800036C8
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::~CAutoRestoreAnimationWindowData(
        CAutoRestoreAnimationWindowData *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 154);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 584) = *((_DWORD *)this + 146);
    *(_OWORD *)(*((_QWORD *)this + 154) + 588LL) = *(_OWORD *)((char *)this + 588);
    *(_OWORD *)(*((_QWORD *)this + 154) + 604LL) = *(_OWORD *)((char *)this + 604);
    *(_OWORD *)(*((_QWORD *)this + 154) + 620LL) = *(_OWORD *)((char *)this + 620);
    *(_OWORD *)(*((_QWORD *)this + 154) + 636LL) = *(_OWORD *)((char *)this + 636);
  }
  CWindowData::~CWindowData(this);
}

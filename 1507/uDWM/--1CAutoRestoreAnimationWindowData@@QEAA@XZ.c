/*
 * XREFs of ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800902F0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094080 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::~CAutoRestoreAnimationWindowData(
        CAutoRestoreAnimationWindowData *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 152);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 568) = *((_DWORD *)this + 142);
    *(_OWORD *)(*((_QWORD *)this + 152) + 572LL) = *(_OWORD *)((char *)this + 572);
    *(_OWORD *)(*((_QWORD *)this + 152) + 588LL) = *(_OWORD *)((char *)this + 588);
    *(_OWORD *)(*((_QWORD *)this + 152) + 604LL) = *(_OWORD *)((char *)this + 604);
    *(_OWORD *)(*((_QWORD *)this + 152) + 620LL) = *(_OWORD *)((char *)this + 620);
  }
  CWindowData::~CWindowData(this);
}

/*
 * XREFs of ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x1800897A8
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18003C590 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimatedTransitionVisual::SetChopPosition(
        CAnimatedTransitionVisual *this,
        const double *a2,
        const double *a3)
{
  __int64 v3; // xmm0_8
  __int64 v4; // xmm1_8

  v3 = 0LL;
  if ( a2 )
    v4 = *(_QWORD *)a2;
  else
    v4 = 0LL;
  *((_QWORD *)this + 122) = v4;
  *((_BYTE *)this + 984) = a2 != 0LL;
  if ( a3 )
    v3 = *(_QWORD *)a3;
  *((_QWORD *)this + 124) = v3;
  *((_DWORD *)this + 243) = 1;
  *((_BYTE *)this + 1000) = a3 != 0LL;
}

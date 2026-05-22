/*
 * XREFs of ?ToggleMagnifier@MagnifierComponent@@QEAAJUtagPOINT@@@Z @ 0x1800817E8
 * Callers:
 *     ?OnTouchInfo@MagnifierTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x180082090 (-OnTouchInfo@MagnifierTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 *     ?MagnifierOobeConfirmCallback@MagnifierTarget@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800823D0 (-MagnifierOobeConfirmCallback@MagnifierTarget@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetScaleAndPosition@MagnifierComponent@@AEAAXMUtagPOINT@@@Z @ 0x180081688 (-SetScaleAndPosition@MagnifierComponent@@AEAAXMUtagPOINT@@@Z.c)
 *     ?UpdateMagnifier@MagnifierComponent@@AEAAJXZ @ 0x180081714 (-UpdateMagnifier@MagnifierComponent@@AEAAJXZ.c)
 */

__int64 __fastcall MagnifierComponent::ToggleMagnifier(MagnifierComponent *this, struct tagPOINT a2)
{
  bool v2; // zf
  unsigned int v3; // ebx
  float v4; // xmm1_4
  int updated; // eax
  __int64 v6; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 56) == 0;
  v8 = 1;
  if ( v2 )
  {
    v3 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 568, 255);
  }
  else
  {
    if ( *((_BYTE *)this + 88) )
    {
      *((_BYTE *)this + 88) = 0;
    }
    else
    {
      v4 = fmaxf(1.1, *((float *)this + 10));
      *((_BYTE *)this + 88) = 1;
      v8 = 2;
      MagnifierComponent::SetScaleAndPosition((struct tagPOINT *)this, v4, a2);
    }
    updated = MagnifierComponent::UpdateMagnifier(this);
    v3 = updated;
    if ( updated >= 0 )
    {
      RtlPublishWnfStateData(WNF_SHL_MAGNIFIER_STATE_CHANGED, 0LL, &v8, 4LL, 0LL);
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 589, updated);
    }
  }
  return v3;
}

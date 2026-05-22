/*
 * XREFs of ?UpdateScale@MagnifierComponent@@QEAAJM@Z @ 0x180081618
 * Callers:
 *     ?OnTouchInfo@MagnifierTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x180082090 (-OnTouchInfo@MagnifierTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetScaleAndPosition@MagnifierComponent@@AEAAXMUtagPOINT@@@Z @ 0x180081688 (-SetScaleAndPosition@MagnifierComponent@@AEAAXMUtagPOINT@@@Z.c)
 *     ?UpdateMagnifier@MagnifierComponent@@AEAAJXZ @ 0x180081714 (-UpdateMagnifier@MagnifierComponent@@AEAAJXZ.c)
 */

__int64 __fastcall MagnifierComponent::UpdateScale(struct tagPOINT *this, float a2)
{
  unsigned int v2; // ebx
  MagnifierComponent *v3; // rcx
  int updated; // eax
  __int64 v5; // rcx

  v2 = 0;
  if ( LOBYTE(this[7].x) )
  {
    if ( a2 != *(float *)&this[5].x )
    {
      MagnifierComponent::SetScaleAndPosition((MagnifierComponent *)this, a2, this[4]);
      updated = MagnifierComponent::UpdateMagnifier(v3);
      v2 = updated;
      if ( updated < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 483, updated);
    }
  }
  else
  {
    v2 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 476, 255);
  }
  return v2;
}

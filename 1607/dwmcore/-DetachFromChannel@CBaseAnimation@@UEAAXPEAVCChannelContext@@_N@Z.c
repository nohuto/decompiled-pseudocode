/*
 * XREFs of ?DetachFromChannel@CBaseAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18010E350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBaseAnimation::DetachFromChannel(CBaseAnimation *this, struct CChannelContext *a2)
{
  if ( a2 == *((struct CChannelContext **)this + 20) )
    *((_QWORD *)this + 20) = 0LL;
}

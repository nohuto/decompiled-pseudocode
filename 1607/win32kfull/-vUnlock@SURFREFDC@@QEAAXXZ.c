/*
 * XREFs of ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C003A9D0
 * Callers:
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x1C027DF80 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0033DDC (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 */

void __fastcall SURFREFDC::vUnlock(SURFREFDC *this)
{
  struct SURFACE *v2; // rcx

  v2 = (struct SURFACE *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    if ( v2 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v2);
    }
    else
    {
      GreAcquireHmgrSemaphore();
      SURFACE::vDec_cRef(*((SURFACE **)this + 4));
      GreReleaseHmgrSemaphore();
    }
    *((_QWORD *)this + 4) = 0LL;
  }
}

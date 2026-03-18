/*
 * XREFs of ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C01C1520
 * Callers:
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x1C0280130 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0269FE8 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 */

void __fastcall SURFREFDC::vUnlock(SURFREFDC *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct SURFACE *v5; // rcx
  MLOCKFAST *v6; // rcx

  v5 = (struct SURFACE *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    if ( v5 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v5);
    }
    else
    {
      GreAcquireHmgrSemaphore(v5, a2, a3, a4);
      SURFACE::vDec_cRef(*((SURFACE **)this + 4));
      GreReleaseHmgrSemaphore(v6);
    }
    *((_QWORD *)this + 4) = 0LL;
  }
}

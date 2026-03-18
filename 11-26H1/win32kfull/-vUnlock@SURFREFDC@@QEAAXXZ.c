/*
 * XREFs of ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x140076628
 * Callers:
 *     GreDrawStream @ 0x140075C4C (GreDrawStream.c)
 *     ??1SURFREFDC@@QEAA@XZ @ 0x140076814 (--1SURFREFDC@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x14031D8F0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400766D8 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 */

void __fastcall SURFREFDC::vUnlock(SURFACE **this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  SURFACE *v3; // rdx
  HSEMAPHORE v4; // rdi

  if ( this[4] )
  {
    v2 = Gre::Base::Globals((Gre::Base *)this);
    v3 = this[4];
    if ( v3 == *((SURFACE **)v2 + 547) )
    {
      DEC_SHARE_REF_CNT(v2, v3);
    }
    else
    {
      v4 = (HSEMAPHORE)(*(_QWORD *)v2 + 1512LL);
      GreAcquireSemaphoreInternal(v4);
      GrepAcquireLockValidate<20>();
      SURFACE::vDec_cRef(this[4]);
      if ( v4 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Hmgr", v4);
        GrepReleaseLockValidate<20>();
        GreReleaseSemaphoreExclusiveInternal(v4);
      }
    }
    this[4] = 0LL;
  }
}

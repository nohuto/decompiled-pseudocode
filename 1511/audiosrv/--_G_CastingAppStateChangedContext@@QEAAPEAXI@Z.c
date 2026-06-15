/*
 * XREFs of ??_G_CastingAppStateChangedContext@@QEAAPEAXI@Z @ 0x1800032C0
 * Callers:
 *     PbmCastingAppStateChanged @ 0x1800030AC (PbmCastingAppStateChanged.c)
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@UEAAXXZ @ 0x180003200 (-Invoke@-$CGenericApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@UEAAXXZ.c)
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@UEAAXXZ @ 0x18009E010 (-Invoke@-$CGenericApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@UEAAXXZ.c)
 *     PbmPlayToStreamStateChanged @ 0x18009E13C (PbmPlayToStreamStateChanged.c)
 *     s_SetScreenReaderState @ 0x18009E2C0 (s_SetScreenReaderState.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 */

_CastingAppStateChangedContext *__fastcall _CastingAppStateChangedContext::`scalar deleting destructor'(
        CUnknown **this)
{
  CUnknown *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CUnknown::Release(v2);
    *this = 0LL;
  }
  operator delete(this);
  return (_CastingAppStateChangedContext *)this;
}

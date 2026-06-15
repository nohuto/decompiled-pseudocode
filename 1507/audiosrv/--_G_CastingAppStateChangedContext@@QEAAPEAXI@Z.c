/*
 * XREFs of ??_G_CastingAppStateChangedContext@@QEAAPEAXI@Z @ 0x1800A0E5C
 * Callers:
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@UEAAXXZ @ 0x1800A0E90 (-Invoke@-$CGenericApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@UEAAXXZ.c)
 *     PbmCastingAppStateChanged @ 0x1800A0FBC (PbmCastingAppStateChanged.c)
 *     PbmPlayToStreamStateChanged @ 0x1800A1080 (PbmPlayToStreamStateChanged.c)
 *     s_SetScreenReaderState @ 0x1800A1150 (s_SetScreenReaderState.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
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

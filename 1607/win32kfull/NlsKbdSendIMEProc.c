/*
 * XREFs of NlsKbdSendIMEProc @ 0x1C0228BF8
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02281C0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228420 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228500 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228630 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02286E0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     GetAppImeCompatFlags @ 0x1C010B8BC (GetAppImeCompatFlags.c)
 *     NlsKbdSendIMENotification @ 0x1C0114D30 (NlsKbdSendIMENotification.c)
 */

__int64 __fastcall NlsKbdSendIMEProc(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // ebx
  __int64 v7; // rcx

  result = gpqForeground;
  v6 = a2;
  if ( gpqForeground )
  {
    v7 = *(_QWORD *)(gpqForeground + 64LL);
    if ( v7 )
    {
      result = GetAppImeCompatFlags(v7, a2, a3, a4);
      if ( (result & 0x800000) == 0 )
        return NlsKbdSendIMENotification(a1, v6);
    }
  }
  return result;
}

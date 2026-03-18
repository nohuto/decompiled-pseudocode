/*
 * XREFs of NlsKbdSendIMEProc @ 0x1C02292F8
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02288C0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228B20 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228C00 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228D30 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228DE0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     GetAppImeCompatFlags @ 0x1C0082004 (GetAppImeCompatFlags.c)
 *     NlsKbdSendIMENotification @ 0x1C0085B00 (NlsKbdSendIMENotification.c)
 */

__int64 __fastcall NlsKbdSendIMEProc(int a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = gpqForeground;
  if ( gpqForeground )
  {
    v5 = *(_QWORD *)(gpqForeground + 56LL);
    if ( v5 )
    {
      result = GetAppImeCompatFlags(v5);
      if ( (result & 0x800000) == 0 )
        return NlsKbdSendIMENotification(a1, a2);
    }
  }
  return result;
}

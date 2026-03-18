/*
 * XREFs of NlsKbdSendIMEProc @ 0x1C0228FF8
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02285C0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228820 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228900 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228A30 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228AE0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     NlsKbdSendIMENotification @ 0x1C0047570 (NlsKbdSendIMENotification.c)
 *     GetAppImeCompatFlags @ 0x1C0047AD0 (GetAppImeCompatFlags.c)
 */

__int64 __fastcall NlsKbdSendIMEProc(unsigned int a1, int a2)
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

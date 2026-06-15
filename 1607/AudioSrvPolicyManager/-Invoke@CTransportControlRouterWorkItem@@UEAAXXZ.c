/*
 * XREFs of ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x1800217D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 */

void __fastcall CTransportControlRouterWorkItem::Invoke(CTransportControlRouterWorkItem *this)
{
  CApplicationManager *v2; // rcx

  v2 = (CApplicationManager *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Fu,
      &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
      *((const wchar_t **)this + 2));
  }
  CApplicationManager::HandleMediaPlaybackRequestForApp(
    v2,
    *((const unsigned __int16 **)this + 2),
    *((_DWORD *)this + 2));
}

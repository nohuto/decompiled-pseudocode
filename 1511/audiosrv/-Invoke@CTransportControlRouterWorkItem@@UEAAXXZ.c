/*
 * XREFs of ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x1800A43E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

void __fastcall CTransportControlRouterWorkItem::Invoke(CTransportControlRouterWorkItem *this)
{
  CApplicationManager *v2; // rcx

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Fu,
      (__int64)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      *((const wchar_t **)this + 2));
  }
  CApplicationManager::HandleMediaPlaybackRequestForApp(v2, *((wchar_t **)this + 2), *((_DWORD *)this + 2));
}

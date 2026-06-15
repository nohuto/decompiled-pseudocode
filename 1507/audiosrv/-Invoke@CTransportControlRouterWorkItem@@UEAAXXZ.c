/*
 * XREFs of ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x1800A6FB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

void __fastcall CTransportControlRouterWorkItem::Invoke(CTransportControlRouterWorkItem *this)
{
  CApplicationManager *v2; // rcx

  v2 = *(CApplicationManager **)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Fu,
      (__int64)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      *((const wchar_t **)this + 2));
  }
  CApplicationManager::HandleMediaPlaybackRequestForApp(v2, *((wchar_t **)this + 2), *((_DWORD *)this + 2));
}

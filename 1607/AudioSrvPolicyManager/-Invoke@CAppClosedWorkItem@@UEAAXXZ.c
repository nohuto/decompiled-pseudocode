/*
 * XREFs of ?Invoke@CAppClosedWorkItem@@UEAAXXZ @ 0x180021AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x18000A814 (WPP_SF_Sd.c)
 */

void __fastcall CAppClosedWorkItem::Invoke(CAppClosedWorkItem *this)
{
  char v2[4]; // [rsp+20h] [rbp-18h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    *(_DWORD *)v2 = *((_DWORD *)this + 4);
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x22u,
      &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
      *((const wchar_t **)this + 1),
      *(_DWORD *)v2);
  }
  CApplicationManager::OnApplicationClosed(
    g_ApplicationManager,
    *((unsigned __int16 **)this + 1),
    *((_DWORD *)this + 4));
}

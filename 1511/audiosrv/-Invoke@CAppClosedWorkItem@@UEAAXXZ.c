/*
 * XREFs of ?Invoke@CAppClosedWorkItem@@UEAAXXZ @ 0x180002770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

void __fastcall CAppClosedWorkItem::Invoke(CAppClosedWorkItem *this)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      34,
      (unsigned int)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      *((_QWORD *)this + 1),
      *((_DWORD *)this + 4));
  }
  CApplicationManager::OnApplicationClosed(
    g_ApplicationManager,
    *((unsigned __int16 **)this + 1),
    *((_DWORD *)this + 4));
}

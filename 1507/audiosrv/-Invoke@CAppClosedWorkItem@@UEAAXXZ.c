/*
 * XREFs of ?Invoke@CAppClosedWorkItem@@UEAAXXZ @ 0x180003BC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 */

void __fastcall CAppClosedWorkItem::Invoke(CAppClosedWorkItem *this)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
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

/*
 * XREFs of ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x18002D100
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C168 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

void __fastcall CProcessTerminatedWorkItem::Invoke(CProcessTerminatedWorkItem *this)
{
  CApplicationManager *v2; // rcx

  v2 = *(CApplicationManager **)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      26LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      *(unsigned int *)(*((_QWORD *)this + 1) + 168LL));
  }
  CApplicationManager::ProcessTerminated(v2, *((struct CProcess **)this + 1));
  CUnknown::Release(*((CUnknown **)this + 1));
}

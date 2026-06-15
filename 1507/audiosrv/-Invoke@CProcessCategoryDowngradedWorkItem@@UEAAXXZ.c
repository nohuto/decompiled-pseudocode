/*
 * XREFs of ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x1800A6EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x180002CA8 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001C568 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x1800A2D88 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 */

void __fastcall CProcessCategoryDowngradedWorkItem::Invoke(CProcessCategoryDowngradedWorkItem *this)
{
  __int64 v1; // rax
  CApplication *v3; // rdi
  _DWORD *v4; // rax
  __int64 v5; // rdx
  bool v6; // r8

  v1 = *((_QWORD *)this + 1);
  v3 = *(CApplication **)(v1 + 224);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x17u,
      (__int64)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      *(_DWORD *)(v1 + 168));
  }
  v4 = (_DWORD *)(*((_QWORD *)this + 1) + 440LL);
  if ( *v4 == 3 )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 4;
  }
  CProcess::DeleteInactivityTimer(*((struct _RTL_CRITICAL_SECTION **)this + 1));
  if ( v3 )
  {
    CApplication::RemoveAudioPlaybackRestriction(v3, v5, v6);
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, v3, 209);
  }
  CUnknown::Release(*((CUnknown **)this + 1));
}

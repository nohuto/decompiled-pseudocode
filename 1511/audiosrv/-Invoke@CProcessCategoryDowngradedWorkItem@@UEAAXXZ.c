/*
 * XREFs of ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x1800A4320
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x180004710 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001ED40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18009FFE8 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
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
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
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
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, v3, 0xD1u);
  }
  CUnknown::Release(*((CUnknown **)this + 1));
}

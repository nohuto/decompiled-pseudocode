/*
 * XREFs of ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x18001E070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18000C4BC (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18000E9EC (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180012B40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessCategoryDowngradedWorkItem::Invoke(CProcessCategoryDowngradedWorkItem *this)
{
  __int64 v1; // rax
  CApplication *v3; // rdi
  _DWORD *v4; // rax
  volatile signed __int32 *v5; // rbx

  v1 = *((_QWORD *)this + 1);
  v3 = *(CApplication **)(v1 + 224);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
      *(_DWORD *)(v1 + 168));
  }
  v4 = (_DWORD *)(*((_QWORD *)this + 1) + 452LL);
  if ( *v4 == 3 )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 4;
  }
  CProcess::DeleteInactivityTimer(*((CProcess **)this + 1));
  if ( v3 )
  {
    CApplication::RemoveAudioPlaybackRestriction(v3);
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, v3, 209);
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 32LL))(v5);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
  }
}

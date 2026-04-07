/*
 * XREFs of ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x180091700
 * Callers:
 *     <none>
 * Callees:
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18000C02C (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800905F0 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     Template_tttt @ 0x180097800 (Template_tttt.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnAnimationStart(CAppArrangementDelayed *this)
{
  unsigned __int8 v2; // bp
  unsigned __int8 v3; // r14
  unsigned __int8 v4; // r12
  char v5; // r15
  unsigned int v6; // esi
  bool v7; // zf
  __int64 v8; // rax
  int v9; // edx

  v2 = 0;
  v3 = 1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !*((_DWORD *)this + 28) )
    goto LABEL_20;
  do
  {
    v7 = GetPropW(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v6) + 16LL), L"ImmersiveGhostWindowProp") == 0LL;
    v8 = *((_QWORD *)this + 11);
    if ( !v7 )
      v3 = 0;
    switch ( *(_DWORD *)(*(_QWORD *)(v8 + 8LL * v6) + 24LL) & 0xFFF )
    {
      case 1:
      case 3:
      case 6:
      case 21:
        goto LABEL_15;
      case 23:
        goto LABEL_14;
      case 30:
      case 34:
        goto LABEL_15;
      case 39:
LABEL_14:
        v5 = 1;
LABEL_15:
        v2 = 1;
        v4 = 1;
        break;
      case 47:
        goto LABEL_15;
    }
    ++v6;
  }
  while ( v6 < *((_DWORD *)this + 28) );
  if ( !v2 )
  {
LABEL_20:
    CStoryboard::Abandon(this);
    goto LABEL_21;
  }
  if ( v3 )
    CAnimationScheduler::AbandonTransition(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24),
      77);
LABEL_21:
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24), 68);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_tttt(v4, v9, v2, v3, v4, v5);
  return 0LL;
}

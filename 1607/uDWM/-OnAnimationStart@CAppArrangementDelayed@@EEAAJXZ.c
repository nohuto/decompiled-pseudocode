/*
 * XREFs of ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x180002D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000436C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18001065C (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     Template_tttt @ 0x180095FB0 (Template_tttt.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnAnimationStart(CAppArrangementDelayed *this)
{
  unsigned __int8 v2; // bp
  unsigned __int8 v3; // r14
  unsigned __int8 v4; // r12
  char v5; // r15
  unsigned int v6; // esi
  unsigned int v7; // edx
  int v8; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx

  v2 = 0;
  v3 = 1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !*((_DWORD *)this + 28) )
    goto LABEL_22;
  do
  {
    if ( GetPropW(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v6) + 16LL), L"ImmersiveGhostWindowProp") )
      v3 = 0;
    v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v6) + 24LL) & 0xFFF;
    if ( v7 <= 0x1E )
    {
      if ( v7 == 30 )
        goto LABEL_21;
      v10 = v7 - 1;
      if ( !v10 )
        goto LABEL_21;
      v11 = v10 - 2;
      if ( !v11 )
        goto LABEL_21;
      v12 = v11 - 3;
      if ( !v12 )
        goto LABEL_21;
      v13 = v12 - 15;
      if ( !v13 )
        goto LABEL_21;
      if ( v13 == 2 )
        goto LABEL_23;
    }
    else
    {
      switch ( v7 )
      {
        case '"':
          goto LABEL_21;
        case '\'':
LABEL_23:
          v5 = 1;
LABEL_21:
          v2 = 1;
          v4 = 1;
          break;
        case '/':
        case 'S':
          goto LABEL_21;
      }
    }
    ++v6;
  }
  while ( v6 < *((_DWORD *)this + 28) );
  if ( !v2 )
  {
LABEL_22:
    CStoryboard::Abandon(this);
    goto LABEL_13;
  }
  if ( v3 )
    CAnimationScheduler::AbandonTransition(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
      75);
LABEL_13:
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22), 67);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_tttt(v4, v8, v2, v3, v4, v5);
  return 0LL;
}

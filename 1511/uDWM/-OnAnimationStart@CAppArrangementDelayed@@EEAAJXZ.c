/*
 * XREFs of ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x180003EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18000646C (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180093430 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     Template_tttt @ 0x180099100 (Template_tttt.c)
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
    goto LABEL_25;
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
        goto LABEL_22;
    }
    else
    {
      switch ( v7 )
      {
        case '"':
          goto LABEL_21;
        case '\'':
LABEL_22:
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
LABEL_25:
    CStoryboard::Abandon(this);
    goto LABEL_13;
  }
  if ( v3 )
    CAnimationScheduler::AbandonTransition(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24),
      77);
LABEL_13:
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24), 68);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_tttt(v4, v8, v2, v3, v4, v5);
  return 0LL;
}

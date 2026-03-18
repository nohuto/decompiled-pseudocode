/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14015B5D0
 * Callers:
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14015B4C0 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 * Callees:
 *     SelectWindowRgn @ 0x140018490 (SelectWindowRgn.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x14015A030 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x14015C0C8 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x140238BF0 (xxxBroadcastDisplaySettingsChange.c)
 */

__int64 __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        struct tagWINDOWSTATION *a2,
        unsigned __int16 a3,
        unsigned int a4,
        _DWORD *a5,
        struct CMonitorTopology *a6)
{
  char WorkAreasFromShell; // r14
  BOOL v11; // ebp
  struct _DXGK_SET_DISPLAY_CONFIG_PARAMS_EX *v12; // r9
  __int64 v13; // rdx
  bool v14; // bl
  bool v15; // di
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rcx
  struct tagWND *i; // rbx
  __int64 v21; // rcx
  __int64 result; // rax
  _BOOL8 v23; // rdx
  bool v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  _BYTE v29[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v30; // [rsp+48h] [rbp-30h]

  WorkAreasFromShell = xxxGetWorkAreasFromShell(a1, (__int64)a2);
  v11 = a2 != 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v29);
  if ( a2 )
  {
    DesktopRecalc::OnMonitorRectsChanged(*(DesktopRecalc **)(a1 + 40), a2, a6, v12);
  }
  else
  {
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v29);
    v14 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        7,
        10,
        (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
    }
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    for ( i = *(struct tagWND **)(v19 + 112); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 21LL) & 8) != 0 )
        SelectWindowRgn(i, 2LL, 0);
    }
  }
  v21 = *(_QWORD *)(W32GetUserSessionState(v19, v13) + 19904);
  result = (__int64)a5;
  v23 = *(_WORD *)(v21 + 6996) != a3;
  if ( (*a5 & 4) == 0 || (*a5 & 1) == 0 )
    result = xxxBroadcastDisplaySettingsChange(a1, v23, v11, a4);
  if ( WorkAreasFromShell )
  {
    v24 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 69152),
        4,
        7,
        11,
        (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
    }
    result = xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x2FuLL, 0LL, 1);
  }
  if ( v29[0] )
  {
    result = v30;
    --*(_DWORD *)(v30 + 28);
  }
  return result;
}

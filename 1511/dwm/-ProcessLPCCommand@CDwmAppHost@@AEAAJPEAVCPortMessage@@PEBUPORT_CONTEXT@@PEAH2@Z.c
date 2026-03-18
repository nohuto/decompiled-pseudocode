/*
 * XREFs of ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001300
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001060 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 * Callees:
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x1400012B0 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001A30 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x140002AD0 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 *     _guard_check_icall_nop @ 0x140003700 (_guard_check_icall_nop.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140003C04 (IsDWMGhostHandleGhostMsgPresent.c)
 */

__int64 __fastcall CDwmAppHost::ProcessLPCCommand(
        CDwmAppHost *this,
        struct CPortMessage *a2,
        const struct PORT_CONTEXT *a3,
        int *a4,
        int *a5)
{
  unsigned int v7; // edi
  CDwmAppHost *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  CDwmAppHost *v20; // rcx
  int v21; // eax

  v7 = 0;
  v9 = (*(__int64 (__fastcall **)(struct CPortMessage *, struct CPortMessage *, const struct PORT_CONTEXT *))(*(_QWORD *)a2 + 16LL))(
         a2,
         a2,
         a3);
  LOBYTE(v10) = *(__int16 *)(v9 + 4) < 0;
  *a4 = 1;
  *a5 = 0;
  if ( (*(_WORD *)(v9 + 4) & 0x7FFF) == 1 )
  {
    v16 = *(_DWORD *)(v9 + 40);
    if ( v16 < 0x40000034 && v16 >= 0x20000004 )
      goto LABEL_5;
    v17 = v16 - 536870913;
    if ( !v17 )
    {
      if ( *(_DWORD *)(v9 + 8) == (_DWORD)qword_14000A820 )
      {
        (*(void (__fastcall **)(struct CPortMessage *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, 0LL);
        *a5 = 1;
        CDwmAppHost::Shutdown(v20, -805305602);
      }
      return v7;
    }
    v18 = v17 - 2;
    if ( v18 )
    {
      v19 = v18 - 536870961;
      if ( !v19 )
      {
        if ( !(_BYTE)v10 || !(unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
          return v7;
        DWMGhostHandleGhostMsg(a2);
LABEL_28:
        *a5 = 1;
        return v7;
      }
      if ( v19 != 22 )
        goto LABEL_5;
      v21 = DwmRenderDesktopForDDA(v8, v10);
      v7 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x1CCu);
      *(_DWORD *)(v9 + 44) = v7;
    }
    else
    {
      if ( *(_DWORD *)(v9 + 8) != (_DWORD)qword_14000A820 )
        return v7;
      CSettingsManager::PropagateUserLogon((CSettingsManager *)&qword_14000A848, 0LL, 0LL, 1);
    }
    (*(void (__fastcall **)(struct CPortMessage *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, 0LL);
    goto LABEL_28;
  }
  if ( (*(_WORD *)(v9 + 4) & 0x7FFF) != 3 )
    return v7;
  v11 = *(_DWORD *)(v9 + 40);
  if ( v11 < 0x40000034 && v11 >= 0x20000003 )
    goto LABEL_5;
  v13 = v11 - 536870914;
  if ( v13 )
  {
    v14 = v13 - 536870962;
    if ( v14 )
    {
      if ( v14 == 2 )
      {
        if ( (_BYTE)v10 )
        {
          v15 = CDwmAppHost::HandleDisplayModeChange(v8);
          v7 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x184u);
        }
        return v7;
      }
LABEL_5:
      *a4 = 0;
      return v7;
    }
    if ( (_BYTE)v10 && (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
      DWMGhostHandleGhostMsg(a2);
  }
  else if ( *(_DWORD *)(v9 + 8) == (_DWORD)qword_14000A820 )
  {
    CSettingsManager::PropagateUserLogon(
      (CSettingsManager *)&qword_14000A848,
      *(HKEY *)(v9 + 52),
      *(HKEY *)(v9 + 60),
      *(_DWORD *)(v9 + 68) != 0);
  }
  return v7;
}

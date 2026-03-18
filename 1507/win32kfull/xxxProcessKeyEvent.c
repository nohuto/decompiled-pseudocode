/*
 * XREFs of xxxProcessKeyEvent @ 0x1C00482A8
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C0048038 (xxxInternalKeyEventDirect.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C012DCD8 (xxxRemoteStopScreenUpdates.c)
 *     ?ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01D7D14 (-ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8014 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01D8640 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01D88FC (-SendKeyUpDown@@YAXEE@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE130 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE210 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EEB00 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EF070 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01EF3E8 (-xxxUpdateModifierState@@YAXHH@Z.c)
 * Callees:
 *     ?TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z @ 0x1C0008D54 (-TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0041278 (IsForegroundShellFrameQueueAccessible.c)
 *     ?UpdateRawKeyState@@YAXEH@Z @ 0x1C0048564 (-UpdateRawKeyState@@YAXEH@Z.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxKELocaleProcs @ 0x1C004A420 (xxxKELocaleProcs.c)
 *     KEOEMProcs @ 0x1C004A474 (KEOEMProcs.c)
 *     UpdateInputGlobalsEx @ 0x1C004A4E0 (UpdateInputGlobalsEx.c)
 *     GetActiveHKL @ 0x1C004A700 (GetActiveHKL.c)
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     zzzStartSonar @ 0x1C01E7CF0 (zzzStartSonar.c)
 */

char __fastcall xxxProcessKeyEvent(struct tagKE *a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  unsigned __int8 v6; // di
  __int16 ActiveHKL; // ax
  unsigned int v11; // r10d
  int v12; // edx
  __int64 v13; // r9
  __int16 v14; // ax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int16 v22; // r8
  __int64 v23; // r8
  int v24; // edx
  int v25; // r9d
  __int64 v26; // rcx

  v6 = *((_BYTE *)a1 + 2);
  ActiveHKL = GetActiveHKL(a1);
  v11 = 1;
  if ( (ActiveHKL & 0x3FF) != 0x12 )
  {
    v12 = *((_WORD *)a1 + 1) & 0x8000;
LABEL_3:
    UpdateRawKeyState(v6, v12);
    goto LABEL_4;
  }
  v22 = *((_WORD *)a1 + 1);
  if ( (v22 & 0x9000) != 0x8000
    || (unsigned __int8)(*(_BYTE *)a1 + 15) > 1u
    || ((unsigned __int8)(1 << (2 * (v6 & 3))) & gafRawKeyState[(unsigned __int64)v6 >> 2]) != 0 )
  {
    v12 = v22 & 0x8000;
    goto LABEL_3;
  }
  *((_WORD *)a1 + 1) = v22 & 0x7FFF;
LABEL_4:
  if ( (unsigned __int8)(v6 + 96) <= 5u )
  {
    v6 = (v6 - 160) / 2 + 16;
    UpdateRawKeyState(v6, *((_WORD *)a1 + 1) & 0x8000);
  }
  if ( v6 < 0xADu || v6 > 0xB3u )
    v13 = v11;
  else
    v13 = 0LL;
  UpdateInputGlobalsEx(
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    a3,
    0LL,
    v13);
  if ( !a3 || !*((_DWORD *)a1 + 1) )
    *((_DWORD *)a1 + 1) = glinp[0];
  v14 = *((_WORD *)a1 + 1);
  if ( (v14 & 0x4000) == 0 )
  {
    if ( v14 < 0 )
    {
      if ( v6 == 17 && gbLastVkForSonar == 17 && ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
        zzzStartSonar();
      if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 && gbLastVkForSonar )
        gbLastVkForSonar = 0;
    }
    else
    {
      if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 && (LODWORD(gfade[6]) & 0x80u) != 0 )
      {
        StopFade();
        giSonarRadius = -1;
      }
      if ( gbLastVkForSonar != v6 )
        gbLastVkForSonar = v6;
    }
  }
  v15 = *((unsigned __int16 *)a1 + 1);
  if ( (v15 & 0x1000) != 0 )
  {
    LOBYTE(v16) = xxxKeyEvent(v15, *(unsigned __int16 *)a1, *((_DWORD *)a1 + 1), a2, 0LL, 0LL, a3, a4, a5);
    return v16;
  }
  v16 = KEOEMProcs(a1);
  if ( v16 )
  {
    v16 = xxxKELocaleProcs(a1);
    if ( v16 )
    {
      if ( !gpKbdNlsTbl || (v23 = *(_QWORD *)(gpKbdNlsTbl + 8)) == 0 || (v24 = *(_DWORD *)(gpKbdNlsTbl + 4)) == 0 )
      {
LABEL_19:
        v16 = 1;
        goto LABEL_20;
      }
      while ( 1 )
      {
        v25 = v24 - 1;
        if ( *(_BYTE *)(132LL * (unsigned int)(v24 - 1) + v23) == *((_BYTE *)a1 + 2) )
          break;
        --v24;
        if ( !v25 )
          goto LABEL_19;
      }
      v26 = 132LL * (unsigned int)(v24 - 1) + v23;
      LOBYTE(v16) = *(_BYTE *)(v26 + 1);
      if ( (unsigned __int8)v16 < 3u )
      {
        v16 = ((__int64 (__fastcall *)(__int64, struct tagKE *, __int64))(&aNLSVKFProc)[(unsigned __int8)v16])(
                v26,
                a1,
                a2);
LABEL_20:
        if ( v16 )
        {
          if ( !a3
            || !gpqForeground
            || (v17 = *(_QWORD *)(gptiCurrent + 384LL),
                v18 = *(_QWORD *)(gpqForeground + 372LL),
                v19 = *(_QWORD *)(v17 + 832),
                !gbEnforceUIPI)
            || (unsigned int)v19 > (unsigned int)v18
            || (_DWORD)v19 == (_DWORD)v18
            && ((v20 = HIDWORD(v19), v21 = HIDWORD(v18), (_DWORD)v20 == (_DWORD)v21)
             || (_DWORD)v20 == -1
             || (_DWORD)v21 == -1)
            || (*(_DWORD *)(v17 + 12) & 0x80000000) != 0
            || IsForegroundShellFrameQueueAccessible(gptiCurrent) )
          {
            if ( !a4 && (!a3 || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) & 0x80000000) != 0) )
              TPAAPOnKeyEvent(a1);
            LOBYTE(v16) = xxxKeyEvent(
                            *((unsigned __int16 *)a1 + 1),
                            *(unsigned __int8 *)a1,
                            *((_DWORD *)a1 + 1),
                            a2,
                            *((_QWORD *)a1 + 1),
                            (__int64)a1 + 16,
                            a3,
                            a4,
                            a5);
          }
          else
          {
            LOBYTE(v16) = EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
          }
        }
      }
    }
  }
  return v16;
}

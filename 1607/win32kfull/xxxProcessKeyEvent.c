/*
 * XREFs of xxxProcessKeyEvent @ 0x1C00A24AC
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C00A21FC (xxxInternalKeyEventDirect.c)
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C00E8688 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8950 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00EC208 (xxxRemoteStopScreenUpdates.c)
 *     ?ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01D06B0 (-ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01D0B68 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01D0E24 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4850 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4930 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E52D0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01E5648 (-xxxUpdateModifierState@@YAXHH@Z.c)
 * Callees:
 *     ?UpdateRawKeyState@@YAXEH@Z @ 0x1C00A275C (-UpdateRawKeyState@@YAXEH@Z.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxKELocaleProcs @ 0x1C00A3E5C (xxxKELocaleProcs.c)
 *     KEOEMProcs @ 0x1C00A3EB0 (KEOEMProcs.c)
 *     UpdateInputGlobalsEx @ 0x1C00A3FC0 (UpdateInputGlobalsEx.c)
 *     GetActiveHKL @ 0x1C00A41B4 (GetActiveHKL.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 *     ?TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z @ 0x1C01301F0 (-TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z.c)
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     zzzStartSonar @ 0x1C01DE9E8 (zzzStartSonar.c)
 */

char __fastcall xxxProcessKeyEvent(struct tagKE *a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  unsigned __int8 v6; // di
  int v10; // edx
  _BOOL8 v11; // r9
  __int16 v12; // ax
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int16 v20; // r8
  __int64 v21; // r8
  int v22; // edx
  int v23; // r9d
  __int64 v24; // rcx

  v6 = *((_BYTE *)a1 + 2);
  if ( (GetActiveHKL() & 0x3FF) != 0x12 )
  {
    v10 = *((_WORD *)a1 + 1) & 0x8000;
LABEL_3:
    UpdateRawKeyState(v6, v10);
    goto LABEL_4;
  }
  v20 = *((_WORD *)a1 + 1);
  if ( (v20 & 0x9000) != 0x8000
    || *(_BYTE *)a1 != 0xF1 && *(_BYTE *)a1 != 0xF2
    || ((unsigned __int8)(1 << (2 * (v6 & 3))) & gafRawKeyState[(unsigned __int64)v6 >> 2]) != 0 )
  {
    v10 = v20 & 0x8000;
    goto LABEL_3;
  }
  *((_WORD *)a1 + 1) = v20 & 0x7FFF;
LABEL_4:
  if ( (unsigned __int8)(v6 + 96) <= 5u )
  {
    v6 = (v6 - 160) / 2 + 16;
    UpdateRawKeyState(v6, *((_WORD *)a1 + 1) & 0x8000);
  }
  v11 = v6 < 0xADu || v6 > 0xB3u;
  UpdateInputGlobalsEx(
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    a3,
    0LL,
    v11);
  if ( !a3 || !*((_DWORD *)a1 + 1) )
    *((_DWORD *)a1 + 1) = glinp[0];
  v12 = *((_WORD *)a1 + 1);
  if ( (v12 & 0x4000) == 0 )
  {
    if ( v12 < 0 )
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
  v13 = *((unsigned __int16 *)a1 + 1);
  if ( (v13 & 0x1000) != 0 )
  {
    LOBYTE(v14) = xxxKeyEvent(v13, *(unsigned __int16 *)a1, *((_DWORD *)a1 + 1), a2, 0LL, 0LL, a3, a4, a5);
    return v14;
  }
  v14 = KEOEMProcs(a1);
  if ( v14 )
  {
    v14 = xxxKELocaleProcs(a1);
    if ( v14 )
    {
      if ( !gpKbdNlsTbl || (v21 = *(_QWORD *)(gpKbdNlsTbl + 8)) == 0 || (v22 = *(_DWORD *)(gpKbdNlsTbl + 4)) == 0 )
      {
LABEL_19:
        v14 = 1;
        goto LABEL_20;
      }
      while ( 1 )
      {
        v23 = v22 - 1;
        if ( *(_BYTE *)(132LL * (unsigned int)(v22 - 1) + v21) == *((_BYTE *)a1 + 2) )
          break;
        --v22;
        if ( !v23 )
          goto LABEL_19;
      }
      v24 = 132LL * (unsigned int)(v22 - 1) + v21;
      LOBYTE(v14) = *(_BYTE *)(v24 + 1);
      if ( (unsigned __int8)v14 < 3u )
      {
        v14 = ((__int64 (__fastcall *)(__int64, struct tagKE *, __int64))(&aNLSVKFProc)[(unsigned __int8)v14])(
                v24,
                a1,
                a2);
LABEL_20:
        if ( v14 )
        {
          if ( !a3
            || !gpqForeground
            || (v15 = *(_QWORD *)(gptiCurrent + 376LL),
                v16 = *(_QWORD *)(gpqForeground + 380LL),
                v17 = *(_QWORD *)(v15 + 824),
                !gbEnforceUIPI)
            || (unsigned int)v17 > (unsigned int)v16
            || (_DWORD)v17 == (_DWORD)v16
            && ((v18 = HIDWORD(v17), v19 = HIDWORD(v16), (_DWORD)v18 == (_DWORD)v19)
             || (_DWORD)v19 == -1
             || (_DWORD)v18 == -1)
            || (*(_DWORD *)(v15 + 12) & 0x80000000) != 0
            || (unsigned int)IsForegroundShellFrameQueueAccessible(gptiCurrent) )
          {
            if ( !a4 && (!a3 || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x80000000) != 0) )
              TPAAPOnKeyEvent(a1);
            LOBYTE(v14) = xxxKeyEvent(
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
            LOBYTE(v14) = EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
          }
        }
      }
    }
  }
  return v14;
}

/*
 * XREFs of ApplyGatheredDeviceInfoSummaryInformation @ 0x1402204F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x14002A69C (-MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 */

__int64 __fastcall ApplyGatheredDeviceInfoSummaryInformation(int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  int v6; // ebp
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  CursorApiRouter *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rax

  v6 = 0;
  if ( !a1 )
    goto LABEL_4;
  result = (unsigned int)(a1 - 1);
  if ( a1 == 1 )
    return ApplyGatheredKeyboardDeviceCount(a6);
  if ( a1 == 2 )
  {
LABEL_4:
    UpdateTPCurrentActiveState();
    UserSessionState = W32GetUserSessionState(v13, v12);
    if ( a2 )
    {
      if ( !*(_DWORD *)(UserSessionState + 16312) )
      {
        v24 = W32GetUserSessionState(v16, v15);
        *(_DWORD *)(v24 + 68440) |= 1u;
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v25) + 19904) + 1972LL) = 1;
        SetGlobalCursorLevel(0);
        v29 = *(CursorApiRouter **)(W32GetUserSessionState(v28, v27) + 36336);
        v32 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19904);
        v33 = *(_DWORD *)(v32 + 4964);
        v35 = *(_QWORD *)(W32GetUserSessionState(v34, v32) + 19904);
        v36 = *(_DWORD *)(v35 + 4960);
        v38 = W32GetUserSessionState(v37, v35);
        CursorApiRouter::MovePointerAsync(v29, *(HDEV *)(*(_QWORD *)(v38 + 56968) + 40LL), v36, v33, 1u);
      }
    }
    else if ( *(_DWORD *)(UserSessionState + 16312) )
    {
      v17 = W32GetUserSessionState(v16, v15);
      *(_DWORD *)(v17 + 68440) &= ~1u;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v19, v18) + 19904) + 1972LL) = 0;
      SetGlobalCursorLevel(-1);
      ForceResetMouseButtonsDownState();
    }
    if ( !a1 )
    {
      LOBYTE(v6) = a4 != 0;
      v20 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19904);
      *(_DWORD *)(v20 + 2068) = a3;
      v22 = *(_QWORD *)(W32GetUserSessionState(v20, v21) + 19904);
      *(_DWORD *)(v22 + 2196) = v6;
      v16 = *(_QWORD *)(W32GetUserSessionState(v22, v23) + 19904);
      *(_DWORD *)(v16 + 2260) = a5;
    }
    result = W32GetUserSessionState(v16, v15);
    *(_DWORD *)(result + 16312) = a2;
  }
  return result;
}

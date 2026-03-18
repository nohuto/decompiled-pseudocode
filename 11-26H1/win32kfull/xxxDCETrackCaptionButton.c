/*
 * XREFs of xxxDCETrackCaptionButton @ 0x14014B2F4
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x140220B3C (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     xxxTrackCaptionButton @ 0x140149F00 (xxxTrackCaptionButton.c)
 *     xxxSleepThread @ 0x14014A7D0 (xxxSleepThread.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x14014AB08 (xxxSetCapture.c)
 *     ?xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z @ 0x14014AF64 (-xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z.c)
 *     DwmSyncHitTestQuery @ 0x14014C4C4 (DwmSyncHitTestQuery.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(struct tagWND *a1, int a2)
{
  unsigned __int16 v2; // si
  int v5; // r15d
  unsigned __int16 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  char IsFastResourceHeldExclusive; // al
  __int64 v15; // rcx
  unsigned __int16 v16; // r12
  __int16 v17; // di
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // bl
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  unsigned __int64 v29; // [rsp+20h] [rbp-59h]
  __int16 v30; // [rsp+50h] [rbp-29h]
  __int64 v31; // [rsp+54h] [rbp-25h] BYREF
  struct tagTHREADINFO *v32; // [rsp+60h] [rbp-19h]
  PVOID Object; // [rsp+68h] [rbp-11h]
  __int128 v34; // [rsp+70h] [rbp-9h] BYREF
  __int64 v35[2]; // [rsp+80h] [rbp+7h]
  __int128 v36; // [rsp+90h] [rbp+17h]
  PVOID v38; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v39; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  LODWORD(v39) = a2;
  LOWORD(v38) = 0;
  v30 = 0;
  v5 = 0;
  v31 = 1LL;
  v6 = 0;
  v34 = 0LL;
  *(_OWORD *)v35 = 0LL;
  v36 = 0LL;
  v32 = PtiCurrent((__int64)a1);
  PtiCurrent(v7);
  Object = (PVOID)ReferenceDwmApiPort(v9, v8);
  v10 = 0;
  UserSessionState = W32GetUserSessionState(v12, v11);
  IsFastResourceHeldExclusive = ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16));
  v15 = 1LL;
  if ( IsFastResourceHeldExclusive == 1 )
  {
    v10 = 1;
    LeaveMitRitHazardCrit();
  }
  UserSessionSwitchLeaveCrit(v15);
  DwmSyncHitTestQuery(Object, 1LL, 0LL, a2, (__int64)&v39, (__int64)&v31);
  EnterCrit(1LL, 0LL);
  if ( v10 )
    EnterMitRitHazardCrit();
  if ( !(_DWORD)v31 )
    return xxxTrackCaptionButton(a1, a2);
  switch ( a2 )
  {
    case 8:
      v5 = 2;
      v6 = 1344;
      break;
    case 9:
      v5 = 3;
      v6 = 1312;
      break;
    case 20:
      v5 = 5;
      v6 = 1296;
      break;
    case 21:
      v5 = 4;
      v6 = 1408;
      break;
  }
  xxxDCECalcCaptionButton(a1, v5, (unsigned __int16 *)&v38);
  v16 = (unsigned __int16)v38;
  if ( (_WORD)v38 )
  {
    v30 = 1;
    v17 = 1;
    SetOrClrWF(1, a1, v6, 1);
    xxxWindowEvent(0x800Au, a1, -2, v5, 0);
  }
  else
  {
    v17 = 0;
    v5 = 0;
  }
  xxxSetCapture(a1);
  v18 = v39;
  while ( !HIDWORD(v31) )
  {
    LODWORD(v29) = 1;
    if ( (unsigned int)xxxInternalGetMessage((__int64)&v34, 0, 512, 526, v29, 0) )
    {
      if ( DWORD2(v34) == 514 )
      {
        xxxReleaseCapture(v19);
        HIDWORD(v31) = 1;
      }
      else if ( DWORD2(v34) == 512 && v16 )
      {
        PtiCurrent(v19);
        v38 = (PVOID)ReferenceDwmApiPort(v22, v21);
        v23 = 0;
        v26 = W32GetUserSessionState(v25, v24);
        v27 = ExIsFastResourceHeldExclusive(*(_QWORD *)(v26 + 16));
        v28 = 1LL;
        if ( v27 == 1 )
        {
          v23 = 1;
          LeaveMitRitHazardCrit();
        }
        UserSessionSwitchLeaveCrit(v28);
        DwmSyncHitTestQuery(v38, v35[0], v35[1], a2, (__int64)&v39, (__int64)&v31);
        EnterCrit(1LL, 0LL);
        if ( v23 )
          EnterMitRitHazardCrit();
        v18 = v39;
        v17 = v30;
        if ( v30 != ((_DWORD)v39 == a2) )
        {
          v17 = (_DWORD)v39 == a2;
          v30 = v17;
          SetOrClrWF(v39 == a2, a1, v6, 1);
          xxxWindowEvent(0x800Au, a1, -2, v5, 0);
        }
      }
    }
    else
    {
      LODWORD(v29) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v34, 0, 577, 599, v29, 0) )
      {
        _InterlockedOr((volatile signed __int32 *)v32 + 130, 0x8000u);
        xxxDispatchMessage((struct tagMSG *)&v34);
        _InterlockedAnd((volatile signed __int32 *)v32 + 130, 0xFFFF7FFF);
      }
      else if ( !(unsigned int)xxxSleepThread(0x1006u, 0, 1, 0) )
      {
        break;
      }
    }
    if ( a1 != *(struct tagWND **)(*((_QWORD *)PtiCurrent(v19) + 58) + 112LL) )
      break;
  }
  if ( v16 )
  {
    if ( v17 && v16 != 0xF180 )
    {
      SetOrClrWF(0, a1, v6, 1);
      xxxWindowEvent(0x800Au, a1, -2, v5, 0);
    }
    if ( HIDWORD(v31) )
    {
      if ( v18 == a2 )
        return v16;
    }
  }
  return v2;
}

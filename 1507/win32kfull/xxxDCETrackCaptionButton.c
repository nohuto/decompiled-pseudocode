/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C01082B0
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0107B34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     DwmSyncHitTestQuery @ 0x1C003E64C (DwmSyncHitTestQuery.c)
 *     xxxMNCanClose @ 0x1C004F188 (xxxMNCanClose.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C007C9DC (xxxDispatchMessage.c)
 *     xxxSetCapture @ 0x1C00F8EC0 (xxxSetCapture.c)
 *     xxxReleaseCapture @ 0x1C00FB250 (xxxReleaseCapture.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     xxxTrackCaptionButton @ 0x1C02387C8 (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(__int64 a1, unsigned int a2)
{
  unsigned __int16 v4; // si
  int v5; // r12d
  unsigned __int16 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v16; // r14
  __int16 v17; // di
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rbx
  void *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // ax
  __int64 v29; // [rsp+50h] [rbp-29h] BYREF
  __int64 v30; // [rsp+58h] [rbp-21h]
  _OWORD v31[7]; // [rsp+60h] [rbp-19h] BYREF
  int v32; // [rsp+E0h] [rbp+67h]
  __int64 v34; // [rsp+F0h] [rbp+77h] BYREF
  BOOL v35; // [rsp+F8h] [rbp+7Fh]

  memset(v31, 0, 0x30uLL);
  v4 = 0;
  LODWORD(v34) = a2;
  LOWORD(v35) = 0;
  v5 = 0;
  v32 = 0;
  v6 = 0;
  LODWORD(v29) = 1;
  v30 = gptiCurrent;
  v7 = *(_QWORD *)(gptiCurrent + 692LL);
  v12 = (void *)ReferenceDwmApiPort(v9, v8, v10, v11);
  UserSessionSwitchLeaveCrit(v14, v13);
  DwmSyncHitTestQuery(v12, *(_QWORD *)a1, 512, v7, 1LL, 0LL, a2, &v34, &v29);
  EnterCrit(1LL);
  if ( !(_DWORD)v29 )
    return xxxTrackCaptionButton(a1, a2);
  if ( a2 == 8 )
  {
    v5 = 2;
    v6 = 1344;
    goto LABEL_11;
  }
  if ( a2 == 9 )
  {
    v5 = 3;
    v6 = 1312;
    v16 = 0;
    if ( (*(_BYTE *)(a1 + 54) & 1) == 0 )
      goto LABEL_26;
    if ( (*(_BYTE *)(a1 + 55) & 1) == 0 )
    {
      v16 = -4048;
      goto LABEL_25;
    }
LABEL_17:
    v16 = -3808;
    goto LABEL_25;
  }
  if ( a2 != 20 )
  {
    if ( a2 == 21 )
    {
      v5 = 4;
      v6 = 1408;
      v16 = 0;
      if ( (*(_BYTE *)(a1 + 49) & 4) != 0 )
      {
        v16 = -3712;
        goto LABEL_25;
      }
LABEL_26:
      v17 = v35;
      v5 = 0;
      goto LABEL_27;
    }
LABEL_11:
    v16 = 0;
    if ( v5 != 2 || (*(_BYTE *)(a1 + 54) & 2) == 0 )
      goto LABEL_26;
    if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
    {
      v16 = -4064;
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  v5 = 5;
  v6 = 1296;
  v16 = 0;
  if ( !(unsigned int)xxxMNCanClose(a1) )
    goto LABEL_26;
  v16 = -4000;
LABEL_25:
  v35 = 1;
  v17 = 1;
  SetOrClrWF(1, (_DWORD *)a1, v6, 1);
  xxxWindowEvent(0x800Au, (__int64 *)a1, -2, v5, 0);
LABEL_27:
  xxxSetCapture((__int64 *)a1);
  v18 = v34;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage(v31, 0LL, 0x200u, 0x20Eu, 1u, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage(v31, 0LL, 0x241u, 0x257u, 1u, 0) )
      {
        *(_DWORD *)(v30 + 448) |= 0x8000u;
        xxxDispatchMessage(v31);
        *(_DWORD *)(v30 + 448) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_38;
    }
    if ( DWORD2(v31[0]) != 514 )
    {
      if ( DWORD2(v31[0]) == 512 )
      {
        if ( v16 )
        {
          v24 = *(_QWORD *)(gptiCurrent + 692LL);
          v25 = (void *)ReferenceDwmApiPort(v20, v19, v21, v22);
          UserSessionSwitchLeaveCrit(v27, v26);
          DwmSyncHitTestQuery(
            v25,
            *(_QWORD *)a1,
            512,
            v24,
            *(__int64 *)&v31[1],
            *((__int64 *)&v31[1] + 1),
            a2,
            &v34,
            &v29);
          EnterCrit(1LL);
          v18 = v34;
          v28 = (_DWORD)v34 == a2;
          v17 = v35;
          if ( v35 != v28 )
          {
            v17 = (_DWORD)v34 == a2;
            v35 = v34 == a2;
            SetOrClrWF(v28 == 1, (_DWORD *)a1, v6, 1);
            xxxWindowEvent(0x800Au, (__int64 *)a1, -2, v5, 0);
          }
        }
      }
LABEL_38:
      v23 = v32;
      continue;
    }
    xxxReleaseCapture();
    v23 = 1;
    v32 = 1;
  }
  while ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) && !v23 );
  if ( v16 )
  {
    if ( v17 && v16 != 0xF180 )
    {
      SetOrClrWF(0, (_DWORD *)a1, v6, 1);
      xxxWindowEvent(0x800Au, (__int64 *)a1, -2, v5, 0);
    }
    if ( v32 )
    {
      if ( v18 == a2 )
        return v16;
    }
  }
  return v4;
}

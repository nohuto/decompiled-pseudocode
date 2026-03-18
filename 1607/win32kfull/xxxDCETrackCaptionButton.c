/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C00BB630
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BB4F4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxMNCanClose @ 0x1C00AEA0C (xxxMNCanClose.c)
 *     DwmSyncHitTestQuery @ 0x1C00B75BC (DwmSyncHitTestQuery.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00BB9A4 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int16 v6; // si
  int v7; // r12d
  unsigned __int16 v8; // r13
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int16 v13; // r15
  __int16 v14; // di
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  void *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // ax
  __int16 v29; // [rsp+50h] [rbp-19h]
  _DWORD v30[3]; // [rsp+54h] [rbp-15h] BYREF
  __int64 v31[12]; // [rsp+60h] [rbp-9h] BYREF
  int v33; // [rsp+E0h] [rbp+77h]
  __int64 v34; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v31, 0, 0x30uLL);
  v6 = 0;
  v29 = 0;
  v7 = 0;
  v33 = 0;
  v8 = 0;
  LODWORD(v34) = a2;
  *(_QWORD *)&v30[1] = gptiCurrent;
  v30[0] = 1;
  v9 = *(_QWORD *)(gptiCurrent + 684LL);
  if ( gdwInAtomicOperation )
  {
    v4 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v10 = (void *)ReferenceDwmApiPort(v4, gdwInAtomicOperation, 1LL, v5);
  UserSessionSwitchLeaveCrit(v12, v11);
  DwmSyncHitTestQuery(v10, *(_QWORD *)a1, 512, v9, 1LL, 0LL, a2, &v34, v30);
  EnterCrit(0LL, 1LL);
  if ( !v30[0] )
    return xxxTrackCaptionButton(a1, a2);
  if ( a2 == 8 )
  {
    v7 = 2;
    v8 = 1344;
LABEL_37:
    v13 = 0;
    if ( v7 != 2 || (*(_BYTE *)(a1 + 54) & 2) == 0 )
      goto LABEL_42;
    if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
    {
      v13 = -4064;
      goto LABEL_8;
    }
    goto LABEL_41;
  }
  if ( a2 == 9 )
  {
    v7 = 3;
    v8 = 1312;
    v13 = 0;
    if ( (*(_BYTE *)(a1 + 54) & 1) == 0 )
      goto LABEL_42;
    if ( (*(_BYTE *)(a1 + 55) & 1) == 0 )
    {
      v13 = -4048;
      goto LABEL_8;
    }
LABEL_41:
    v13 = -3808;
    goto LABEL_8;
  }
  if ( a2 != 20 )
  {
    if ( a2 == 21 )
    {
      v7 = 4;
      v8 = 1408;
      v13 = 0;
      if ( (*(_BYTE *)(a1 + 49) & 4) != 0 )
      {
        v13 = -3712;
        goto LABEL_8;
      }
LABEL_42:
      v14 = 0;
      v7 = 0;
      goto LABEL_9;
    }
    goto LABEL_37;
  }
  v7 = 5;
  v8 = 1296;
  v13 = 0;
  if ( !(unsigned int)xxxMNCanClose(a1) )
    goto LABEL_42;
  v13 = -4000;
LABEL_8:
  v29 = 1;
  v14 = 1;
  SetOrClrWF(1, (_DWORD *)a1, v8, 1);
  xxxWindowEvent(0x800Au, (__int64 *)a1, -2, v7, 0);
LABEL_9:
  xxxSetCapture(a1);
  v15 = v34;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)v31, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((unsigned int)v31, 0, 577, 599, 1, 0) )
      {
        *(_DWORD *)(*(_QWORD *)&v30[1] + 440LL) |= 0x8000u;
        xxxDispatchMessage(v31, v21, v22, v23);
        *(_DWORD *)(*(_QWORD *)&v30[1] + 440LL) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_24;
    }
    if ( LODWORD(v31[1]) != 514 )
    {
      if ( LODWORD(v31[1]) == 512 && v13 )
      {
        v24 = *(_QWORD *)(gptiCurrent + 684LL);
        if ( gdwInAtomicOperation )
        {
          v16 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v25 = (void *)ReferenceDwmApiPort(v16, gdwInAtomicOperation, v17, v18);
        UserSessionSwitchLeaveCrit(v27, v26);
        DwmSyncHitTestQuery(v25, *(_QWORD *)a1, 512, v24, v31[2], v31[3], a2, &v34, v30);
        EnterCrit(0LL, 1LL);
        v15 = v34;
        v28 = (_DWORD)v34 == a2;
        v14 = v29;
        if ( v29 != v28 )
        {
          v14 = (_DWORD)v34 == a2;
          v29 = v14;
          SetOrClrWF(v28 == 1, (_DWORD *)a1, v8, 1);
          xxxWindowEvent(0x800Au, (__int64 *)a1, -2, v7, 0);
        }
      }
LABEL_24:
      v19 = v33;
      continue;
    }
    xxxReleaseCapture();
    v19 = 1;
    v33 = 1;
  }
  while ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) && !v19 );
  if ( v13 )
  {
    if ( v14 && v13 != 0xF180 )
    {
      SetOrClrWF(0, (_DWORD *)a1, v8, 1);
      xxxWindowEvent(0x800Au, (__int64 *)a1, -2, v7, 0);
    }
    if ( v33 )
    {
      if ( v15 == a2 )
        return v13;
    }
  }
  return v6;
}

/*
 * XREFs of xxxTrackCaptionButton @ 0x1C0230C3C
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BB4F4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BB630 (xxxDCETrackCaptionButton.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00BB9A4 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C022F294 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxTrackCaptionButton(__int64 *a1, int a2)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // r14
  __int64 v6; // r12
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  HDC DCEx; // rbx
  __int16 v13; // bx
  int v14; // eax
  unsigned __int16 v15; // r12
  HDC v16; // rbx
  HDC v17; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int16 v22[2]; // [rsp+38h] [rbp-29h] BYREF
  int v23; // [rsp+3Ch] [rbp-25h]
  _WORD v24[2]; // [rsp+40h] [rbp-21h] BYREF
  int v25; // [rsp+44h] [rbp-1Dh]
  unsigned int v26; // [rsp+48h] [rbp-19h]
  unsigned int v27; // [rsp+4Ch] [rbp-15h]
  __int64 v28; // [rsp+50h] [rbp-11h]
  _DWORD v29[4]; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v30[6]; // [rsp+68h] [rbp+7h] BYREF

  memset(v30, 0, sizeof(v30));
  v4 = 0;
  v23 = 0;
  v25 = 0;
  v5 = 0;
  v6 = gptiCurrent;
  v28 = gptiCurrent;
  v7 = a2 - 8;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 11;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v10 = 4;
          v5 = 1408;
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = 5;
        v5 = 1296;
      }
    }
    else
    {
      v10 = 3;
      v5 = 1312;
    }
  }
  else
  {
    v10 = 2;
    v5 = 1344;
  }
  v11 = xxxCalcCaptionButton((__int64)a1, v10, (__int16 *)v22, v29, v24, 0);
  v26 = SHIWORD(v11);
  v27 = (__int16)v11;
  if ( v22[0] )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, v27, v26, (unsigned int)v24[0] + 1);
    _ReleaseDC(DCEx);
    v25 = 1;
    v13 = 1;
    SetOrClrWF(1, a1, v5, 1);
    xxxWindowEvent(0x800Au, a1, -2, v10, 0);
  }
  else
  {
    v13 = v25;
    v10 = 0;
  }
  xxxSetCapture(a1);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((__int64)v30, 0LL, 0x200u, 0x20Eu, 1u, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((__int64)v30, 0LL, 0x241u, 0x257u, 1u, 0) )
      {
        *(_DWORD *)(v6 + 440) |= 0x8000u;
        xxxDispatchMessage(v30, v19, v20, v21);
        *(_DWORD *)(v6 + 440) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_23;
    }
    if ( LODWORD(v30[1]) != 514 )
    {
      if ( LODWORD(v30[1]) == 512 && v22[0] )
      {
        v15 = PtInRect(v29, *(unsigned __int64 *)((char *)&v30[4] + 4));
        if ( v13 != v15 )
        {
          LOWORD(v25) = v15;
          v16 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
          BitBltSysBmp(v16, v27, v26, v24[0] + (unsigned int)v15);
          _ReleaseDC(v16);
          SetOrClrWF(v15 == 1, a1, v5, 1);
          xxxWindowEvent(0x800Au, a1, -2, v10, 0);
        }
        v6 = v28;
      }
LABEL_23:
      v14 = v23;
      goto LABEL_24;
    }
    xxxReleaseCapture();
    v14 = 1;
    v23 = 1;
LABEL_24:
    if ( a1 != *(__int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) || v14 )
      break;
    v13 = v25;
  }
  if ( v22[0] )
  {
    if ( (_WORD)v25 && v22[0] != 0xF180 )
    {
      v17 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v17, v27, v26, v24[0]);
      _ReleaseDC(v17);
      SetOrClrWF(0, a1, v5, 1);
      xxxWindowEvent(0x800Au, a1, -2, v10, 0);
    }
    if ( v23 && PtInRect(v29, *(unsigned __int64 *)((char *)&v30[4] + 4)) )
      return v22[0];
  }
  return v4;
}

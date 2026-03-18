/*
 * XREFs of xxxTrackCaptionButton @ 0x140149F00
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x14014B2F4 (xxxDCETrackCaptionButton.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x140220B3C (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     xxxSleepThread @ 0x14014A7D0 (xxxSleepThread.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x14014AB08 (xxxSetCapture.c)
 *     xxxCalcCaptionButton @ 0x14014AFF8 (xxxCalcCaptionButton.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTrackCaptionButton(struct tagWND *a1, int a2)
{
  unsigned __int16 v2; // di
  unsigned __int16 v5; // r14
  struct tagTHREADINFO *v6; // r13
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  HDC DCEx; // rbx
  __int16 v13; // bx
  __int64 v14; // rcx
  BOOL v15; // eax
  BOOL v16; // eax
  HDC v17; // rbx
  HDC v18; // rbx
  unsigned __int64 v20; // [rsp+28h] [rbp-39h]
  unsigned __int16 v21; // [rsp+38h] [rbp-29h] BYREF
  int v22; // [rsp+3Ch] [rbp-25h]
  unsigned int v23; // [rsp+40h] [rbp-21h] BYREF
  int v24; // [rsp+44h] [rbp-1Dh]
  int v25; // [rsp+48h] [rbp-19h]
  int v26; // [rsp+4Ch] [rbp-15h]
  BOOL v27; // [rsp+50h] [rbp-11h]
  BOOL v28; // [rsp+54h] [rbp-Dh]
  __int128 v29; // [rsp+58h] [rbp-9h] BYREF
  _OWORD v30[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v31; // [rsp+88h] [rbp+27h]

  v2 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  memset(v30, 0, sizeof(v30));
  v26 = 0;
  v5 = 0;
  v31 = 0LL;
  v29 = 0LL;
  v6 = PtiCurrent((__int64)a1);
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
  v11 = xxxCalcCaptionButton((_DWORD)a1, v10, (unsigned int)&v21, (unsigned int)&v29, (__int64)&v23, 0);
  v24 = SHIWORD(v11);
  v25 = (__int16)v11;
  if ( v21 )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, v25, v24, v23 + 1, 1);
    _ReleaseDC(DCEx);
    v22 = 1;
    v13 = 1;
    SetOrClrWF(1, a1, v5, 1);
    xxxWindowEvent(0x800Au, a1, -2, v10, 0);
  }
  else
  {
    v13 = v22;
    v10 = 0;
  }
  xxxSetCapture(a1);
  while ( !v26 )
  {
    LODWORD(v20) = 1;
    if ( (unsigned int)xxxInternalGetMessage((__int64)v30, 0, 512, 526, v20, 0) )
    {
      if ( DWORD2(v30[0]) == 514 )
      {
        xxxReleaseCapture();
        v26 = 1;
      }
      else if ( DWORD2(v30[0]) == 512 )
      {
        if ( v21 )
        {
          v15 = PtInRect(&v29, *(unsigned __int64 *)((char *)&v31 + 4));
          v14 = v15;
          v28 = v15;
          v16 = v15;
          v27 = v16;
          if ( v13 != v16 )
          {
            LOWORD(v22) = v16;
            v17 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
            BitBltSysBmp(v17, v25, v24, v23 + v27, 1);
            _ReleaseDC(v17);
            SetOrClrWF(v28, a1, v5, 1);
            xxxWindowEvent(0x800Au, a1, -2, v10, 0);
          }
        }
      }
    }
    else
    {
      LODWORD(v20) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)v30, 0, 577, 599, v20, 0) )
      {
        _InterlockedOr((volatile signed __int32 *)v6 + 130, 0x8000u);
        xxxDispatchMessage((struct tagMSG *)v30);
        _InterlockedAnd((volatile signed __int32 *)v6 + 130, 0xFFFF7FFF);
      }
      else if ( !(unsigned int)xxxSleepThread(4102LL, 0LL, 1LL, 0LL) )
      {
        break;
      }
    }
    if ( a1 != *(struct tagWND **)(*((_QWORD *)PtiCurrent(v14) + 58) + 112LL) )
      break;
    v13 = v22;
  }
  if ( v21 )
  {
    if ( (_WORD)v22 && v21 != 0xF180 )
    {
      v18 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v18, v25, v24, v23, 1);
      _ReleaseDC(v18);
      SetOrClrWF(0, a1, v5, 1);
      xxxWindowEvent(0x800Au, a1, -2, v10, 0);
    }
    if ( v26 && PtInRect(&v29, *(unsigned __int64 *)((char *)&v31 + 4)) )
      return v21;
  }
  return v2;
}

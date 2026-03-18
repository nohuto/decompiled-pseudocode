/*
 * XREFs of xxxPerformTargetingWithinPwnd @ 0x1C0223A7C
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C02219DC (-TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z @ 0x1C0221BD4 (-_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z.c)
 *     ?_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0221C3C (-_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     TouchTargetingCreateContact @ 0x1C0247BB0 (TouchTargetingCreateContact.c)
 */

__int64 __fastcall xxxPerformTargetingWithinPwnd(struct tagWND *a1, struct tagPOINTEREVENTINT *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  struct tagRECT *v10; // rsi
  __int64 v11; // r8
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  struct tagRECT v17; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v18; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v19; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v20[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-60h]
  int v22; // [rsp+A8h] [rbp-58h]
  int v23; // [rsp+130h] [rbp+30h]
  int v24; // [rsp+134h] [rbp+34h]
  int v25; // [rsp+138h] [rbp+38h]
  int v26; // [rsp+13Ch] [rbp+3Ch]
  struct tagRECT v27; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v28[3]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v29; // [rsp+15Ch] [rbp+5Ch]
  __int128 v30; // [rsp+16Ch] [rbp+6Ch]
  int v31; // [rsp+17Ch] [rbp+7Ch]

  *a3 = 0;
  a3[1] = 0;
  result = GetProp((__int64)a1, (unsigned __int16)gatomPtrTargetFlags, 1LL);
  if ( (result & 0xFFFD) != 0 )
  {
    result = TouchTargetingEnabledForInput(*(struct tagPOINT *)((char *)a2 + 40), a2, v7, v8);
    if ( (_DWORD)result )
    {
      v27 = 0LL;
      v10 = 0LL;
      v17 = 0LL;
      v26 = 0;
      v25 = 0;
      if ( (unsigned int)_GetDeviceRects(a2, &v27, &v17, v9) )
      {
        v18 = v17;
        v19 = v27;
        _SetHimetricToPixelRatio(&v19, &v18, (struct tagTOUCHTARGETINGCONTACT *)v20);
        v10 = &v27;
      }
      v12 = *((_OWORD *)a2 + 7);
      v28[0] = *((_DWORD *)a2 + 3);
      *(_QWORD *)&v28[1] = *((_QWORD *)a2 + 5);
      v13 = *((_DWORD *)a2 + 27);
      v29 = v12;
      v30 = v12;
      if ( (v13 & 2) != 0 )
        v31 = *((_DWORD *)a2 + 36);
      else
        v31 = 0;
      result = TouchTargetingCreateContact(v28, v10, v11, v20);
      if ( v23 )
      {
        if ( v24 )
        {
          *(_QWORD *)&v28[1] = v21;
          v31 = v22;
          v29 = v20[1];
          v30 = v20[0];
          _InterlockedIncrement(&glSendMessage);
          v14 = xxxSendTransformableMessageTimeout(a1, 589LL, 0LL, (__int64)v28, 0, 0, 0LL, 1, 0);
          result = 4093LL;
          if ( ((unsigned __int16)(v14 >> 20) & 0xFFFu) <= 0xFFD )
          {
            v15 = (v14 >> 10) & 0x3FF;
            *a3 = v15;
            if ( ((unsigned int)(v14 >> 10) & 0x3FF) > 0x1FF )
            {
              result = (unsigned int)(v15 - 1024);
              *a3 = result;
            }
            v16 = v14 & 0x3FF;
            a3[1] = v16;
            if ( v16 > 511 )
            {
              result = (unsigned int)(v16 - 1024);
              a3[1] = result;
            }
          }
        }
      }
    }
  }
  return result;
}

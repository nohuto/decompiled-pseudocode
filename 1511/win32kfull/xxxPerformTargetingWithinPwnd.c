/*
 * XREFs of xxxPerformTargetingWithinPwnd @ 0x1C022DD08
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C022BD14 (-TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z @ 0x1C022BF0C (-_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z.c)
 *     ?_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C022BF74 (-_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     TouchTargetingCreateContact @ 0x1C024B880 (TouchTargetingCreateContact.c)
 */

__int64 __fastcall xxxPerformTargetingWithinPwnd(struct tagWND *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  struct tagRECT *v7; // rsi
  __int64 v8; // r8
  __int128 v9; // xmm0
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  struct tagRECT v14; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v15; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v16; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v17[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  int v20; // [rsp+130h] [rbp+30h]
  int v21; // [rsp+134h] [rbp+34h]
  int v22; // [rsp+138h] [rbp+38h]
  int v23; // [rsp+13Ch] [rbp+3Ch]
  int v24; // [rsp+140h] [rbp+40h] BYREF
  __int64 v25; // [rsp+144h] [rbp+44h]
  __int128 v26; // [rsp+14Ch] [rbp+4Ch]
  __int128 v27; // [rsp+15Ch] [rbp+5Ch]
  int v28; // [rsp+16Ch] [rbp+6Ch]
  struct tagRECT v29; // [rsp+170h] [rbp+70h] BYREF

  *a3 = 0;
  a3[1] = 0;
  result = GetProp((__int64)a1, (unsigned __int16)gatomPtrTargetFlags, 1LL);
  if ( (result & 0xFFFD) != 0 )
  {
    result = TouchTargetingEnabledForInput(*(struct tagPOINT *)(a2 + 40), (const struct tagPOINTEREVENTINT *)a2);
    if ( (_DWORD)result )
    {
      v29 = 0LL;
      v7 = 0LL;
      v14 = 0LL;
      v23 = 0;
      v22 = 0;
      if ( (unsigned int)_GetDeviceRects((const struct tagPOINTEREVENTINT *)a2, &v29, &v14) )
      {
        v15 = v14;
        v16 = v29;
        _SetHimetricToPixelRatio(&v16, &v15, (struct tagTOUCHTARGETINGCONTACT *)v17);
        v7 = &v29;
      }
      v9 = *(_OWORD *)(a2 + 112);
      v24 = *(_DWORD *)(a2 + 12);
      v25 = *(_QWORD *)(a2 + 40);
      v10 = *(_DWORD *)(a2 + 108);
      v26 = v9;
      v27 = v9;
      if ( (v10 & 2) != 0 )
        v28 = *(_DWORD *)(a2 + 144);
      else
        v28 = 0;
      result = TouchTargetingCreateContact(&v24, v7, v8, v17);
      if ( v20 )
      {
        if ( v21 )
        {
          v25 = v18;
          v28 = v19;
          v26 = v17[1];
          v27 = v17[0];
          _InterlockedIncrement(&glSendMessage);
          v11 = xxxSendTransformableMessageTimeout(a1, 589LL, 0LL, (__int64)&v24, 0, 0, 0LL, 1, 0);
          result = 4093LL;
          if ( ((unsigned __int16)(v11 >> 20) & 0xFFFu) <= 0xFFD )
          {
            v12 = (v11 >> 10) & 0x3FF;
            *a3 = v12;
            if ( ((unsigned int)(v11 >> 10) & 0x3FF) > 0x1FF )
            {
              result = (unsigned int)(v12 - 1024);
              *a3 = result;
            }
            v13 = v11 & 0x3FF;
            a3[1] = v13;
            if ( v13 > 511 )
            {
              result = (unsigned int)(v13 - 1024);
              a3[1] = result;
            }
          }
        }
      }
    }
  }
  return result;
}

/*
 * XREFs of xxxPerformTargetingWithinPwnd @ 0x1400865E0
 * Callers:
 *     PerformTargetingWithinPwnd @ 0x1400864F0 (PerformTargetingWithinPwnd.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     TouchTargetingCreateContact @ 0x140086EF8 (TouchTargetingCreateContact.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxPerformTargetingWithinPwnd(struct tagTHREADINFO **a1, __int64 a2, __int64 a3)
{
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 *v8; // r14
  __int128 v9; // xmm0
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int128 v13; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+74h] [rbp-8Ch]
  __int128 v17; // [rsp+7Ch] [rbp-84h]
  __int128 v18; // [rsp+8Ch] [rbp-74h]
  int v19; // [rsp+9Ch] [rbp-64h]
  __int128 v20; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v22[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-20h]
  int v24; // [rsp+E8h] [rbp-18h]
  int v25; // [rsp+170h] [rbp+70h]
  int v26; // [rsp+174h] [rbp+74h]
  __int64 v27; // [rsp+178h] [rbp+78h]

  *(_QWORD *)a3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  result = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41388), 1u);
  if ( (_WORD)result != 2 )
  {
    if ( (_WORD)result )
    {
      result = TouchTargetingEnabledForInput(*(_QWORD *)(a2 + 40), a2 + 8);
      if ( (_DWORD)result )
      {
        v20 = 0LL;
        v21 = 0LL;
        v8 = 0LL;
        v17 = 0LL;
        v18 = 0LL;
        memset_0(v22, 0, 0xB8uLL);
        v27 = 0LL;
        if ( (unsigned int)_GetDeviceRects(a2 + 8, &v20, &v21) )
        {
          v13 = v21;
          v14 = v20;
          _SetHimetricToPixelRatio(&v14, &v13, v22);
          v8 = &v20;
        }
        v9 = *(_OWORD *)(a2 + 112);
        v15 = *(_DWORD *)(a2 + 12);
        v16 = *(_QWORD *)(a2 + 40);
        v10 = *(_DWORD *)(a2 + 108);
        v17 = v9;
        v18 = v9;
        if ( (v10 & 2) != 0 )
          v19 = *(_DWORD *)(a2 + 144);
        else
          v19 = 0;
        result = TouchTargetingCreateContact(&v15, v8, 1LL, v22);
        if ( v25 )
        {
          if ( v26 )
          {
            v16 = v23;
            v19 = v24;
            v17 = v22[1];
            v18 = v22[0];
            v11 = xxxSendTransformableMessageTimeout(a1, 589LL, 0LL, (__int64)&v15, 0, 0, 0LL, 1u, 0);
            result = 4093LL;
            if ( ((unsigned __int16)(v11 >> 20) & 0xFFFu) <= 0xFFD )
            {
              result = (v11 >> 10) & 0x3FF;
              *(_DWORD *)a3 = result;
              if ( (unsigned int)result > 0x1FF )
              {
                result = (unsigned int)(result - 1024);
                *(_DWORD *)a3 = result;
              }
              v12 = v11 & 0x3FF;
              *(_DWORD *)(a3 + 4) = v12;
              if ( v12 > 0x1FF )
              {
                result = v12 - 1024;
                *(_DWORD *)(a3 + 4) = result;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

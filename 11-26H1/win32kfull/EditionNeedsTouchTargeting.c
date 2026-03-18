/*
 * XREFs of EditionNeedsTouchTargeting @ 0x1402C2840
 * Callers:
 *     <none>
 * Callees:
 *     TouchTargetingCreateContact @ 0x140086EF8 (TouchTargetingCreateContact.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall EditionNeedsTouchTargeting(__int64 a1, __int64 a2)
{
  __int128 *v4; // rsi
  __int128 v5; // xmm0
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-39h] BYREF
  __int128 v9; // [rsp+30h] [rbp-29h] BYREF
  __int128 v10; // [rsp+40h] [rbp-19h] BYREF
  __int128 v11; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v12[3]; // [rsp+60h] [rbp+7h] BYREF

  if ( !(unsigned int)TouchTargetingEnabledForInput(*(_QWORD *)(a1 + 32), a1) )
    return 0LL;
  v4 = 0LL;
  v10 = 0LL;
  *(_QWORD *)(a2 + 184) = 0LL;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( (unsigned int)_GetDeviceRects(a1, &v10, &v11) )
  {
    v8 = v11;
    v9 = v10;
    _SetHimetricToPixelRatio(&v9, &v8, a2);
    v4 = &v10;
  }
  v5 = *(_OWORD *)(a1 + 104);
  *(_QWORD *)((char *)v12 + 4) = *(_QWORD *)(a1 + 32);
  v6 = *(_DWORD *)(a1 + 100);
  *(_OWORD *)((char *)v12 + 12) = v5;
  *(_OWORD *)((char *)&v12[1] + 12) = v5;
  if ( (v6 & 2) != 0 )
    HIDWORD(v12[2]) = *(_DWORD *)(a1 + 136);
  else
    HIDWORD(v12[2]) = 0;
  TouchTargetingCreateContact((__int64)v12, (__int64)v4, 1LL, (_DWORD *)a2);
  return 1LL;
}

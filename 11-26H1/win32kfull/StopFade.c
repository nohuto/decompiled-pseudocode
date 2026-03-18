/*
 * XREFs of StopFade @ 0x14009B510
 * Callers:
 *     MNAnimate @ 0x14000ED10 (MNAnimate.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     StopSonar @ 0x1402A4434 (StopSonar.c)
 *     zzzAnimateFade @ 0x1402A456C (zzzAnimateFade.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     DeleteFadeSprite @ 0x14009B6F0 (DeleteFadeSprite.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 */

__int64 __fastcall StopFade(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  HDC DCEx; // rsi
  unsigned int v11; // r14d
  int Layout; // eax
  _QWORD *v13; // rdi
  __int64 StockObject; // rax
  __int64 result; // rax
  __int64 v16; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = W32GetUserSessionState(v4, v3);
  FindTimer(*(_QWORD *)(v5 + 68464), 65526LL, 2u, 1, 0LL);
  v6 = DeleteFadeSprite();
  v8 = *(unsigned int *)(UserSessionState + 43056);
  LOBYTE(v8) = v8 & 3;
  if ( (_BYTE)v8 == 1 )
  {
    if ( v6 )
    {
      v9 = 0;
      DCEx = (HDC)_GetDCEx(v6, 0LL, 3LL);
      v11 = 0;
    }
    else
    {
      v16 = W32GetUserSessionState(v8, v7);
      v9 = *(_DWORD *)(UserSessionState + 43032);
      v11 = *(_DWORD *)(UserSessionState + 43036);
      DCEx = *(HDC *)(*(_QWORD *)(v16 + 56968) + 56LL);
    }
    Layout = GreGetLayout(DCEx);
    v13 = (_QWORD *)(UserSessionState + 43016);
    GreBitBltInternal(
      DCEx,
      v9,
      v11,
      *(unsigned int *)(UserSessionState + 43040),
      *(_DWORD *)(UserSessionState + 43044),
      *(_QWORD *)(UserSessionState + 43016),
      0,
      0,
      (Layout << 31) + 13369376,
      0,
      0);
    _ReleaseDC(DCEx);
  }
  else
  {
    v13 = (_QWORD *)(UserSessionState + 43016);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(*v13, StockObject);
  GreCleanDC(*v13);
  GreSetDCOwnerEx(*v13, 0LL, 0LL, 1LL);
  result = GreDeleteObject(*(_QWORD *)(UserSessionState + 43024));
  *(_QWORD *)(UserSessionState + 43024) = 0LL;
  *(_DWORD *)(UserSessionState + 43056) = 0;
  return result;
}

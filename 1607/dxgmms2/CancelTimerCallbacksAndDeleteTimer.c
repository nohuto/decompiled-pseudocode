/*
 * XREFs of CancelTimerCallbacksAndDeleteTimer @ 0x1C00280DC
 * Callers:
 *     DestroyAggregateSession @ 0x1C0028378 (DestroyAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C0028AB4 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CancelTimerCallbacksAndDeleteTimer(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  __int64 v5; // rcx
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a1 && *(_QWORD *)(a1 + 416) )
  {
    v4 = *(_WORD *)(a1 + 320);
    *(_WORD *)(a1 + 320) = 2;
    if ( v4 == 1 )
      KeWaitForSingleObject((PVOID)(a1 + 296), Executive, 0, 0, 0LL);
    v5 = *(_QWORD *)(a1 + 416);
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    memset(v7, 0, 24);
    result = ExDeleteTimer(v5, a2, a3, v7);
    *(_QWORD *)(a1 + 416) = 0LL;
  }
  return result;
}

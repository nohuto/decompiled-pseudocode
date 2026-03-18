/*
 * XREFs of xxxCancelTracking @ 0x1C0109250
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxCancelTrackingForThread @ 0x1C0202E30 (xxxCancelTrackingForThread.c)
 */

__int64 __fastcall xxxCancelTracking(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  _QWORD *i; // rsi
  _QWORD *v5; // r15
  int v6; // ebx
  __int64 *v7; // rax
  __int64 *v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v15[84]; // [rsp+20h] [rbp-2C8h] BYREF

  v2 = 0LL;
  result = grpdeskRitInput;
  for ( i = *(_QWORD **)(grpdeskRitInput + 160LL); i != (_QWORD *)(grpdeskRitInput + 160LL); i = (_QWORD *)*i )
  {
    v5 = i - 82;
    if ( *(i - 8) )
    {
      if ( (unsigned int)v2 < 0xC )
      {
        LockW32Thread((__int64)(i - 82), (__int64)&v15[3 * v2 + 48]);
        v7 = (__int64 *)v5[74];
        v8 = &v15[3 * v2 + 12];
        v15[v2] = v5;
        a2 = *v7;
        result = *(_QWORD *)(gptiCurrent + 368LL);
        *v8 = result;
        *(_QWORD *)(gptiCurrent + 368LL) = v8;
        v15[3 * v2 + 13] = a2;
        ++*(_DWORD *)(a2 + 8);
        v2 = (unsigned int)(v2 + 1);
      }
    }
  }
  v6 = v2 - 1;
  if ( (int)v2 - 1 >= 0 )
  {
    v9 = &v15[v6];
    v10 = &v15[3 * v6 + 48];
    do
    {
      v11 = *v9;
      if ( (*(_DWORD *)(*v9 + 440LL) & 1) == 0 )
        xxxCancelTrackingForThread();
      ThreadUnlock1(v11, a2);
      result = PopAndFreeW32ThreadLock((__int64)v10, v12, v13, v14);
      v10 -= 3;
      --v9;
      --v6;
    }
    while ( v6 >= 0 );
  }
  return result;
}

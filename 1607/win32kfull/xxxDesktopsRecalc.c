/*
 * XREFs of xxxDesktopsRecalc @ 0x1C010DDE8
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C010DB70 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxDesktopRecalc @ 0x1C010DE48 (xxxDesktopRecalc.c)
 */

__int64 __fastcall xxxDesktopsRecalc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD **)(a1 + 16);
  while ( v4 )
  {
    PushW32ThreadLock((__int64)v4, v10, UserDereferenceObject, a4);
    ObfReferenceObject(v4);
    xxxDesktopRecalc(v4, a2);
    v4 = (_QWORD *)v4[2];
    result = PopAndFreeW32ThreadLock((__int64)v10, v6, v7, v8);
  }
  return result;
}

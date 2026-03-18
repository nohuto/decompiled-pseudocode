/*
 * XREFs of xxxDesktopsRecalc @ 0x1C00EF5E0
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00EF320 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     xxxDesktopRecalc @ 0x1C00EF640 (xxxDesktopRecalc.c)
 */

__int64 __fastcall xxxDesktopsRecalc(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD **)(a1 + 16);
  while ( v2 )
  {
    PushW32ThreadLock((__int64)v2, v5, UserDereferenceObject);
    ObfReferenceObject(v2);
    xxxDesktopRecalc(v2, a2);
    v2 = (_QWORD *)v2[2];
    result = PopAndFreeW32ThreadLock((__int64)v5);
  }
  return result;
}

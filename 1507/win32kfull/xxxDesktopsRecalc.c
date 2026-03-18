/*
 * XREFs of xxxDesktopsRecalc @ 0x1C00396B0
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00393F0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     xxxDesktopRecalc @ 0x1C0039710 (xxxDesktopRecalc.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxDesktopsRecalc(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD **)(a1 + 16);
  while ( v2 )
  {
    PushW32ThreadLock(v2, v5, UserDereferenceObject);
    ObfReferenceObject(v2);
    xxxDesktopRecalc(v2, a2);
    v2 = (_QWORD *)v2[2];
    result = PopAndFreeW32ThreadLock(v5);
  }
  return result;
}

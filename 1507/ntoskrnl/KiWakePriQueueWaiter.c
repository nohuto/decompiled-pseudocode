/*
 * XREFs of KiWakePriQueueWaiter @ 0x14000C440
 * Callers:
 *     KeInsertPriQueue @ 0x140029C68 (KeInsertPriQueue.c)
 *     KiActivateWaiterPriQueue @ 0x140119EAC (KiActivateWaiterPriQueue.c)
 * Callees:
 *     KiTryUnwaitThreadWithPriority @ 0x14000D710 (KiTryUnwaitThreadWithPriority.c)
 */

__int64 __fastcall KiWakePriQueueWaiter(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // r11
  __int64 result; // rax

  v4 = *(_QWORD **)(a2 + 16);
  do
  {
    v9 = v4;
    v4 = (_QWORD *)v4[1];
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v4 != v9 )
      __fastfail(3u);
    *v4 = v10;
    *(_QWORD *)(v10 + 8) = v4;
    result = KiTryUnwaitThreadWithPriority(a1, v9, a3, a4);
  }
  while ( !(_BYTE)result && v4 != (_QWORD *)(a2 + 8) );
  return result;
}

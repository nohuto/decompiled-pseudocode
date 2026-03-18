/*
 * XREFs of ClearForegroundQueue @ 0x1402728E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x140271878 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 */

void __fastcall __noreturn ClearForegroundQueue(__int64 a1, __int64 a2)
{
  ResetForegroundQueue(0LL, a2);
}

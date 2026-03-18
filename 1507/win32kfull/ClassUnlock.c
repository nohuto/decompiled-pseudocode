/*
 * XREFs of ClassUnlock @ 0x1C0154834
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C0127AFC (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0154734 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022A194 (xxxRecreateSmallIcons.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 */

struct tagCLS *__fastcall ClassUnlock(struct tagCLS *a1, _QWORD *a2)
{
  PopW32ThreadLock(a2);
  return ClassUnlockWorker(a1);
}

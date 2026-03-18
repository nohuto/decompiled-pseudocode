/*
 * XREFs of ClassUnlock @ 0x1C01E86C4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C0103C44 (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E8530 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022A494 (xxxRecreateSmallIcons.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 */

struct tagCLS *__fastcall ClassUnlock(struct tagCLS *a1, _QWORD *a2)
{
  PopW32ThreadLock(a2);
  return ClassUnlockWorker(a1);
}

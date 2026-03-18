/*
 * XREFs of ClassUnlock @ 0x1C01DEF3C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C0125654 (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01DEDA8 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0229754 (xxxRecreateSmallIcons.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 */

struct tagCLS *__fastcall ClassUnlock(struct tagCLS *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx

  PopW32ThreadLock(a2, (__int64)a2, a3, a4);
  return ClassUnlockWorker(a1, v5);
}

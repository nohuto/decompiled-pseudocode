/*
 * XREFs of GrepInitializeNineGridGlobals @ 0x14025DB70
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall GrepInitializeNineGridGlobals(int a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  memset_0((void *)(v2 + 152), 0, 0x200uLL);
  *(_QWORD *)(v2 + 680) = 0LL;
  RtlInitializeBitMap((PRTL_BITMAP)(v2 + 664), (PULONG)(v2 + 680), 0x40u);
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v2 + 688));
}

/*
 * XREFs of ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x1C0287D5C
 * Callers:
 *     ?PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0287C40 (-PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vUnLockShadow@PANSURFLOCK@@QEAAXXZ @ 0x1C0288E14 (-vUnLockShadow@PANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0288E88 (-vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockShadowW@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0288F10 (-vUnLockShadowW@MULTIPANSURFLOCK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ShadowUnLock(struct _PANDEV *a1)
{
  struct _KSEMAPHORE *v2; // rcx
  LONG Limit; // r8d

  KeWaitForSingleObject((PVOID)(*((_QWORD *)a1 + 99) + 32LL), UserRequest, 0, 0, 0LL);
  v2 = (struct _KSEMAPHORE *)*((_QWORD *)a1 + 99);
  Limit = v2[2].Limit;
  if ( Limit )
  {
    KeReleaseSemaphore(v2, 0, Limit, 0);
    *(_DWORD *)(*((_QWORD *)a1 + 99) + 88LL) = 0;
  }
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)a1 + 99) + 32LL), 0);
}

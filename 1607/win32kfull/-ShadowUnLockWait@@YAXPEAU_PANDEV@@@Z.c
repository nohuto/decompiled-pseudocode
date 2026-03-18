/*
 * XREFs of ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C0287DC8
 * Callers:
 *     ?PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0287070 (-PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0287F4C (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0288664 (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0288890 (-vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ShadowUnLockWait(struct _PANDEV *a1)
{
  ++*(_DWORD *)(*((_QWORD *)a1 + 99) + 88LL);
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)a1 + 99) + 32LL), 0);
  KeWaitForSingleObject(*((PVOID *)a1 + 99), UserRequest, 0, 0, 0LL);
}

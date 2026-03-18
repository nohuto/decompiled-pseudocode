/*
 * XREFs of ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C02893AC
 * Callers:
 *     ?PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0288650 (-PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0289530 (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0289C48 (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0289E74 (-vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ShadowUnLockWait(struct _PANDEV *a1)
{
  ++*(_DWORD *)(*((_QWORD *)a1 + 99) + 88LL);
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)a1 + 99) + 32LL), 0);
  KeWaitForSingleObject(*((PVOID *)a1 + 99), UserRequest, 0, 0, 0LL);
}

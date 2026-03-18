/*
 * XREFs of ViCtxIsr @ 0x140719FC4
 * Callers:
 *     <none>
 * Callees:
 *     ViCtxCaptureInitialIsrState @ 0x140719D1C (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140719DC8 (ViCtxCheckAndReleaseIsrState.c)
 */

char __fastcall ViCtxIsr(__int64 a1, __int64 a2)
{
  char *v4; // rsi
  char v5; // bl
  __int64 v6; // r8

  v4 = ViCtxCaptureInitialIsrState(a1);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1, *(_QWORD *)(a2 + 8));
  if ( v4 )
    ViCtxCheckAndReleaseIsrState((__int64)v4, *(const void **)a2, v6);
  return v5;
}

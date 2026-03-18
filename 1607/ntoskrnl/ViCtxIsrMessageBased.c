/*
 * XREFs of ViCtxIsrMessageBased @ 0x14071A010
 * Callers:
 *     <none>
 * Callees:
 *     ViCtxCaptureInitialIsrState @ 0x140719D1C (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140719DC8 (ViCtxCheckAndReleaseIsrState.c)
 */

char __fastcall ViCtxIsrMessageBased(__int64 a1, __int64 a2, unsigned int a3)
{
  char *v6; // rbp
  char v7; // bl
  __int64 v8; // r8

  v6 = ViCtxCaptureInitialIsrState(a1);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(a2 + 16))(a1, *(_QWORD *)(a2 + 8), a3);
  if ( v6 )
    ViCtxCheckAndReleaseIsrState((__int64)v6, *(const void **)(a2 + 16), v8);
  return v7;
}

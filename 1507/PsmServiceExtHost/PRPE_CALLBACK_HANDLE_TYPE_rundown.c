/*
 * XREFs of PRPE_CALLBACK_HANDLE_TYPE_rundown @ 0x1800196F0
 * Callers:
 *     <none>
 * Callees:
 *     Srv_ClosePolicyEngineClientContext @ 0x1800196D0 (Srv_ClosePolicyEngineClientContext.c)
 */

__int64 __fastcall PRPE_CALLBACK_HANDLE_TYPE_rundown(void *a1)
{
  void *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return Srv_ClosePolicyEngineClientContext(&v2);
}

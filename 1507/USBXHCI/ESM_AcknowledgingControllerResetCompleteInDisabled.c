/*
 * XREFs of ESM_AcknowledgingControllerResetCompleteInDisabled @ 0x1C0039100
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_AcknowledgeControllerResetComplete @ 0x1C0019C8C (Endpoint_SM_AcknowledgeControllerResetComplete.c)
 */

__int64 __fastcall ESM_AcknowledgingControllerResetCompleteInDisabled(__int64 a1)
{
  Endpoint_SM_AcknowledgeControllerResetComplete(*(_QWORD *)(a1 + 960));
  return 29LL;
}

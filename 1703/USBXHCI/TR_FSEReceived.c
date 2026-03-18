/*
 * XREFs of TR_FSEReceived @ 0x1C0025484
 * Callers:
 *     ESM_NotifyingTransferRingsFSEReceived @ 0x1C0037AC0 (ESM_NotifyingTransferRingsFSEReceived.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_FSEReceived(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 136LL))();
}

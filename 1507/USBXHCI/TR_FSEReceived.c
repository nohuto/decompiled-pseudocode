/*
 * XREFs of TR_FSEReceived @ 0x1C00206A4
 * Callers:
 *     ESM_NotifyingTransferRingsFSEReceived @ 0x1C00393E0 (ESM_NotifyingTransferRingsFSEReceived.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_FSEReceived(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 136LL))();
}

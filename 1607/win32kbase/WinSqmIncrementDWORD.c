/*
 * XREFs of WinSqmIncrementDWORD @ 0x1C00707F0
 * Callers:
 *     SqmPowerState @ 0x1C0070710 (SqmPowerState.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall WinSqmIncrementDWORD(struct _GUID *a1, unsigned int a2, unsigned int a3)
{
  _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, a1, a2, a3);
}

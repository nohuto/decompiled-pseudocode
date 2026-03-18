/*
 * XREFs of WinSqmSetDWORD @ 0x1C00706F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WinSqmSetDWORD(struct _GUID *a1, unsigned int a2, unsigned int a3)
{
  _WinSqmDWORDEvent(&SQM_SET_DWORD, a1, a2, a3);
}

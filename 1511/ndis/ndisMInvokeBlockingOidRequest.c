/*
 * XREFs of ndisMInvokeBlockingOidRequest @ 0x1C00CBB78
 * Callers:
 *     ndisOidPrePDCloseProvider @ 0x1C00DB3A0 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00DB6E0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ndisMInvokeOidRequest @ 0x1C009631C (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisMInvokeBlockingOidRequest(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a2 + 88) |= 0x400u;
  KeInitializeEvent((PRKEVENT)(a2 + 112), NotificationEvent, 0);
  result = ndisMInvokeOidRequest(a1, (_NDIS_OID_REQUEST *)a2);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject((PVOID)(a2 + 112), Executive, 0, 0, 0LL);
    return *(unsigned int *)(a2 + 80);
  }
  return result;
}

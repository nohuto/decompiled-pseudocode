/*
 * XREFs of TR_GetDequeuePointer @ 0x1C0028848
 * Callers:
 *     Endpoint_Enable @ 0x1C0021020 (Endpoint_Enable.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0021D74 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0024C70 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall TR_GetDequeuePointer(__int64 a1)
{
  unsigned __int64 result; // rax

  result = ((unsigned __int8)*(_DWORD *)(a1 + 192) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL)) & 1 ^ (*(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL * *(unsigned int *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 64) )
    return result & 0xFFFFFFFFFFFFFFF1uLL | 2;
  return result;
}

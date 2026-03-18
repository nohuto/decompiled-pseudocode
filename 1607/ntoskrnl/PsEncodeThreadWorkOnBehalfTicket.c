/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x1400A4F34
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14044C7D0 (AlpcpCaptureAttributes.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1404D23D8 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14065571C (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsEncodeThreadWorkOnBehalfTicket(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 1592);
  a2[1] = *(_DWORD *)(a1 + 1504);
  result = PspWorkOnBehalfEncodingKey;
  *(_QWORD *)a2 ^= PspWorkOnBehalfEncodingKey;
  return result;
}

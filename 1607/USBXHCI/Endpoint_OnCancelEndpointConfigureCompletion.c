/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0022650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C001CB34 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D968 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C0023ECC (Endpoint_SendClearStallTransfer.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned __int8 v5; // al
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 56);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v2 + 88LL), *(_QWORD *)(v2 + 240));
  *(_QWORD *)(v2 + 240) = 0LL;
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 80),
      4u,
      0xCu,
      0x47u,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144));
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 68);
    if ( v5 == 1 )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v2 + 80),
        4u,
        0xCu,
        0x48u,
        (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144));
      return Endpoint_SendClearStallTransfer((PVOID)v2);
    }
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v2 + 80),
      2u,
      0xCu,
      0x49u,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144),
      v5);
    Controller_ReportFatalError(*(_QWORD *)v2, 2, 4125, *(_QWORD *)(v2 + 16), v2, 0LL);
  }
  _m_prefetchw((const void *)(v2 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent((PVOID)(v2 + 272));
  return result;
}

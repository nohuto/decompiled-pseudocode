/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion @ 0x1C001F4A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0018E54 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019CD4 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rsi
  unsigned __int8 v6; // al
  int v7; // eax
  int v8; // r8d
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 56);
  v5 = *v2;
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)*v2 + 88LL), v2[1]);
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v5 + 80),
      4u,
      0xCu,
      0x34u,
      (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144));
LABEL_8:
    v7 = -1073741823;
    goto LABEL_9;
  }
  v6 = *(_BYTE *)(a1 + 68);
  if ( v6 != 1 )
  {
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      2u,
      0xCu,
      0x36u,
      (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144),
      v6);
    v8 = 4129;
    if ( !*(_BYTE *)(v5 + 37) )
      v8 = 4130;
    Controller_ReportFatalError(*(_QWORD *)v5, 2, v8, *(_QWORD *)(v5 + 16), v5, 0LL);
    goto LABEL_8;
  }
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v5 + 80),
    4u,
    0xCu,
    0x35u,
    (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
    *(_DWORD *)(v5 + 144));
  v7 = 0;
LABEL_9:
  *(_DWORD *)(v5 + 264) = 0;
  if ( v7 >= 0 )
    return ESM_AddEvent((PVOID)(v5 + 272));
  _m_prefetchw((const void *)(v5 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v5 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent((PVOID)(v5 + 272));
  return result;
}

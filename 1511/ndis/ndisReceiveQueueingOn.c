/*
 * XREFs of ndisReceiveQueueingOn @ 0x1C004ACEC
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00047FC (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004A588 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C004AF58 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisReceiveQueueingOn(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 2673) = 0;
  *(_QWORD *)(a1 + 2144) = ndisMIndicateReceiveNblsWithThrottling;
  *(_QWORD *)(a1 + 3200) = qword_1C0082D58;
  ++dword_1C0082D60;
  qword_1C0082D58 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  result = (unsigned int)(*(_BYTE *)(a1 + 3268) == 1) + 1;
  *(_DWORD *)(a1 + 3208) = result;
  if ( BYTE2(dword_1C0085018) )
  {
    LOBYTE(a2) = 1;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
             a1,
             a2,
             (unsigned int)dword_1C0082D44,
             (LARGE_INTEGER)DueTime.QuadPart);
  }
  return result;
}

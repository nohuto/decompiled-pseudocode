/*
 * XREFs of Endpoint_WdfEvtPurgeComplete @ 0x1C0021E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C00222DC (WPP_RECORDER_SF_ddq.c)
 */

__int64 __fastcall Endpoint_WdfEvtPurgeComplete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r9d

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a2,
             off_1C0045188);
  if ( *(_BYTE *)(result + 37) && (v4 = *(_QWORD *)(result + 136)) != 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 0xFFFFFFFF) != 1 )
      return result;
    v5 = 31;
  }
  else
  {
    v5 = 32;
  }
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_ddq(
    *(_QWORD *)(result + 80),
    v4,
    12,
    v5,
    (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
    *(_BYTE *)(*(_QWORD *)(result + 16) + 135LL),
    *(_DWORD *)(result + 144),
    a2);
  return ((__int64 (__fastcall *)(void *, __int64))qword_1C00467A0)(WPP_MAIN_CB.Dpc.SystemArgument2, a2);
}

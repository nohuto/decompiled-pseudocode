/*
 * XREFs of Endpoint_WdfEvtPurgeComplete @ 0x1C0025A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C0025ED8 (WPP_RECORDER_SF_DDX.c)
 */

__int64 __fastcall Endpoint_WdfEvtPurgeComplete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r9d

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a2,
             off_1C0043188);
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
  WPP_RECORDER_SF_DDX(
    *(_QWORD *)(result + 80),
    v4,
    12,
    v5,
    (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
    *(_BYTE *)(*(_QWORD *)(result + 16) + 135LL),
    *(_DWORD *)(result + 144),
    a2);
  return ((__int64 (__fastcall *)(void *, __int64))qword_1C00447A0)(WPP_MAIN_CB.Dpc.SystemArgument2, a2);
}

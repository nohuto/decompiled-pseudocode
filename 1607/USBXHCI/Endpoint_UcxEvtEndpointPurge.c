/*
 * XREFs of Endpoint_UcxEvtEndpointPurge @ 0x1C0024BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C0025ED8 (WPP_RECORDER_SF_DDX.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C0026168 (WPP_RECORDER_SF_ddqL.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointPurge(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int i; // ebp

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0043188);
  v6 = v3;
  if ( *(_BYTE *)(v3 + 37) && (v7 = *(_QWORD *)(v3 + 136)) != 0 )
  {
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(v7 + 8);
    result = WPP_RECORDER_SF_ddqL(*(_QWORD *)(v3 + 80), *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL), v5, 33);
    for ( i = 1; i <= *(_DWORD *)(v7 + 8); ++i )
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 1320))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(88LL * (i - 1) + *(_QWORD *)(v6 + 136) + 40) + 72LL),
                 Endpoint_WdfEvtPurgeComplete,
                 a2);
  }
  else
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_DDX(
      *(_QWORD *)(v3 + 80),
      v4,
      12,
      34,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
      *(_DWORD *)(v3 + 144),
      a2);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 1320))(
             WdfDriverGlobals,
             *(_QWORD *)(*(_QWORD *)(v6 + 88) + 72LL),
             Endpoint_WdfEvtPurgeComplete,
             a2);
  }
  return result;
}

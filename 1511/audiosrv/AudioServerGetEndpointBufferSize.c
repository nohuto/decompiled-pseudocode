/*
 * XREFs of AudioServerGetEndpointBufferSize @ 0x180089BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerGetEndpointBufferSize(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, a2, a3);
  if ( v3 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x5Cu, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v3);
  }
  return (unsigned int)v3;
}

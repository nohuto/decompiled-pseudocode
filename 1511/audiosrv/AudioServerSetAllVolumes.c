/*
 * XREFs of AudioServerSetAllVolumes @ 0x180038650
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x180021E70 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerSetAllVolumes(CVADServer *a1, unsigned int a2, float *a3)
{
  __int64 (__fastcall *v3)(CVADServer *, unsigned int, float *); // rdi
  int v4; // eax
  unsigned int v5; // ebx

  v3 = *(__int64 (__fastcall **)(CVADServer *, unsigned int, float *))(*(_QWORD *)a1 + 152LL);
  if ( v3 == CVADServer::SetAllVolumes )
    v4 = CVADServer::SetAllVolumes(a1, a2, a3);
  else
    v4 = v3(a1, a2, a3);
  v5 = v4;
  if ( v4 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      90LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v4);
  }
  return v5;
}

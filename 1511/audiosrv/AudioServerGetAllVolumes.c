/*
 * XREFs of AudioServerGetAllVolumes @ 0x180038430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180021D80 (-GetAllVolumes@CVADServer@@UEAAJIPEAM@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerGetAllVolumes(CVADServer *a1, unsigned int a2, float *a3)
{
  __int64 (__fastcall *v3)(CVADServer *, unsigned int, float *); // rdi
  int AllVolumes; // eax
  unsigned int v5; // ebx

  v3 = *(__int64 (__fastcall **)(CVADServer *, unsigned int, float *))(*(_QWORD *)a1 + 160LL);
  if ( v3 == CVADServer::GetAllVolumes )
    AllVolumes = CVADServer::GetAllVolumes(a1, a2, a3);
  else
    AllVolumes = v3(a1, a2, a3);
  v5 = AllVolumes;
  if ( AllVolumes < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      91LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)AllVolumes);
  }
  return v5;
}

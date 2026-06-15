/*
 * XREFs of AudioServerSetAllVolumes @ 0x180013590
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x180014350 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerSetAllVolumes(CVADServer *a1, unsigned int a2, const float *a3)
{
  __int64 (__fastcall *v3)(CVADServer *__hidden, unsigned int, const float *); // rdi
  int v4; // eax
  unsigned int v5; // ebx

  v3 = *(__int64 (__fastcall **)(CVADServer *__hidden, unsigned int, const float *))(*(_QWORD *)a1 + 120LL);
  if ( v3 == CVADServer::SetAllVolumes )
    v4 = CVADServer::SetAllVolumes(a1, a2, a3);
  else
    v4 = v3(a1, a2, a3);
  v5 = v4;
  if ( v4 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      96LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)v4);
  }
  return v5;
}

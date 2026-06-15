/*
 * XREFs of AudioServerGetAllVolumes @ 0x1800135F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180014260 (-GetAllVolumes@CVADServer@@UEAAJIPEAM@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerGetAllVolumes(CVADServer *a1, unsigned int a2, float *a3)
{
  __int64 (__fastcall *v3)(CVADServer *__hidden, unsigned int, float *); // rdi
  int AllVolumes; // eax
  unsigned int v5; // ebx

  v3 = *(__int64 (__fastcall **)(CVADServer *__hidden, unsigned int, float *))(*(_QWORD *)a1 + 128LL);
  if ( v3 == CVADServer::GetAllVolumes )
    AllVolumes = CVADServer::GetAllVolumes(a1, a2, a3);
  else
    AllVolumes = v3(a1, a2, a3);
  v5 = AllVolumes;
  if ( AllVolumes < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      97LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)AllVolumes);
  }
  return v5;
}

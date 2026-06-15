/*
 * XREFs of ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x18006A9DC
 * Callers:
 *     ??1CAtlComModule@ATL@@QEAA@XZ @ 0x180042ABC (--1CAtlComModule@ATL@@QEAA@XZ.c)
 *     ??_GCAudioServiceModule@@UEAAPEAXI@Z @ 0x180068FB0 (--_GCAudioServiceModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall ATL::CAtlComModule::Term(ATL::CAtlComModule *this)
{
  __int64 *v1; // rdi
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r14

  if ( ATL::_AtlComModule )
  {
    v1 = (__int64 *)qword_1800E8950;
    v2 = qword_1800E8958;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*(_QWORD *)(v3 + 32));
        *(_QWORD *)(v3 + 32) = 0LL;
        v2 = qword_1800E8958;
      }
      ++v1;
    }
    DeleteCriticalSection(&stru_1800E8960);
    ATL::_AtlComModule = 0;
  }
}

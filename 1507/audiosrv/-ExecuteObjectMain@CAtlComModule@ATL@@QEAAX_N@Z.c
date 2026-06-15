/*
 * XREFs of ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x180039954
 * Callers:
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x180039838 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ??_GCAudioServiceModule@@UEAAPEAXI@Z @ 0x180068FB0 (--_GCAudioServiceModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall ATL::CAtlComModule::ExecuteObjectMain(ATL::CAtlComModule *this, char a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  v2 = qword_1800E8950;
  v4 = qword_1800E8958;
  while ( v2 < v4 )
  {
    if ( *(_QWORD *)v2 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v2 + 64LL);
      LOBYTE(v5) = a2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v5);
      v4 = qword_1800E8958;
    }
    v2 += 8LL;
  }
}

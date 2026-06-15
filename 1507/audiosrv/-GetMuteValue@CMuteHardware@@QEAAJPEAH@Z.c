/*
 * XREFs of ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x180066BA8
 * Callers:
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18006D980 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMuteHardware::GetMuteValue(CMuteHardware *this, int *a2)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v2 + 32LL))(*((_QWORD *)this + 6), a2);
  else
    return 2147500035LL;
}

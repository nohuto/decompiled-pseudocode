/*
 * XREFs of ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x1800411F4
 * Callers:
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18003B050 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x1800416A0 (-GetLevelData@CMuteHardware@@MEAAJXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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

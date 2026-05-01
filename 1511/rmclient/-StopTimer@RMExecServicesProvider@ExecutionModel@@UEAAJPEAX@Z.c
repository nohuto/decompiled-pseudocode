/*
 * XREFs of ?StopTimer@RMExecServicesProvider@ExecutionModel@@UEAAJPEAX@Z @ 0x1800159B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z @ 0x180015508 (--_GPendingTimerItem@RMExecServicesProvider@ExecutionModel@@QEAAPEAXI@Z.c)
 *     ?erase@?$list@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@V?$allocator@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@@utl@@@2@@Z @ 0x180015BE0 (-erase@-$list@PEAVPendingTimerItem@RMExecServicesProvider@ExecutionModel@@V-$allocator@PEAVPendi.c)
 */

__int64 __fastcall ExecutionModel::RMExecServicesProvider::StopTimer(
        ExecutionModel::RMExecServicesProvider *this,
        ExecutionModel::RMExecServicesProvider::PendingTimerItem *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned int v5; // esi
  char *v6; // rcx
  char *i; // r8
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v5 = -2147024809;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  v6 = (char *)this + 96;
  for ( i = (char *)*((_QWORD *)this + 12); ; i = *(char **)i )
  {
    if ( i == v6 )
    {
      RtlLeaveCriticalSection(v2);
      return v5;
    }
    if ( *((ExecutionModel::RMExecServicesProvider::PendingTimerItem **)i + 2) == a2 )
      break;
  }
  utl::list<ExecutionModel::RMExecServicesProvider::PendingTimerItem *,utl::allocator<ExecutionModel::RMExecServicesProvider::PendingTimerItem *>>::erase(
    v6,
    &v9,
    i);
  RtlLeaveCriticalSection(v2);
  v5 = 0;
  if ( a2 )
    ExecutionModel::RMExecServicesProvider::PendingTimerItem::`scalar deleting destructor'(a2);
  return v5;
}

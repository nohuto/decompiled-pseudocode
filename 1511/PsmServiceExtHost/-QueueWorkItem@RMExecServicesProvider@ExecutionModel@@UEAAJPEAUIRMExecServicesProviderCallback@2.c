/*
 * XREFs of ?QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2@PEAX@Z @ 0x180009C00
 * Callers:
 *     ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@PEAX@Z @ 0x180003A68 (-QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800165C0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z @ 0x18001A2E4 (-NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::RMExecServicesProvider::QueueWorkItem(
        ExecutionModel::RMExecServicesProvider *this,
        struct ExecutionModel::IRMExecServicesProviderCallback *a2,
        void *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rcx

  v6 = malloc(0x10uLL);
  v7 = v6;
  if ( !v6 )
    return 2147942414LL;
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (struct ExecutionModel::IRMExecServicesProviderCallback *)*v6 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ExecutionModel::IRMExecServicesProviderCallback *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( *v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
    *v7 = a2;
  }
  v7[1] = a3;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v8[2] = v7;
    v9 = (_QWORD *)*((_QWORD *)this + 10);
    v8[1] = v9;
    *v8 = (char *)this + 72;
    *v9 = v8;
    *((_QWORD *)this + 10) = v8;
    ++*((_QWORD *)this + 11);
  }
  if ( !*((_BYTE *)this + 25) )
  {
    v10 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 25) = 1;
    TpPostWork(v10);
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 32));
  return 0LL;
}

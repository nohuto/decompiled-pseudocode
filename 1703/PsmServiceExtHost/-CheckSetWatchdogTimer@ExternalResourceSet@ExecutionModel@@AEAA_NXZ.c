/*
 * XREFs of ?CheckSetWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAA_NXZ @ 0x18001C268
 * Callers:
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18001C37C (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::CheckSetWatchdogTimer(ExecutionModel::ExternalResourceSet *this)
{
  int v1; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 356);
  if ( (v1 & 8) != 0 )
    return 0;
  *((_DWORD *)this + 356) = v1 | 8;
  v4 = -10000LL * *(unsigned int *)(*((_QWORD *)this + 3) + 160LL);
  (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)this + 8LL))(this);
  TpSetTimer(*((_QWORD *)this + 177), &v4, 0LL, *(unsigned int *)(*((_QWORD *)this + 3) + 164LL));
  return 1;
}

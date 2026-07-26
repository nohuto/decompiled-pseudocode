/*
 * XREFs of ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C00FD818
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C0097994 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ??0MINIPORT_HOOK_DRIVER@@QEAA@XZ @ 0x1C009A1EC (--0MINIPORT_HOOK_DRIVER@@QEAA@XZ.c)
 *     ?FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ @ 0x1C009A260 (-FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ.c)
 */

NTSTATUS ndisMpHookNmrInitializeClient(void)
{
  _DWORD *PoolWithTag; // rax
  struct MINIPORT_HOOK_DRIVER *v1; // rbx
  MINIPORT_HOOK_DRIVER *v2; // rdi
  int i; // esi
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x118uLL, 0x6448704Du);
  if ( PoolWithTag )
  {
    v1 = (struct MINIPORT_HOOK_DRIVER *)(PoolWithTag + 2);
    *PoolWithTag = 2;
    v2 = (MINIPORT_HOOK_DRIVER *)(PoolWithTag + 2);
    for ( i = 1; i >= 0; --i )
    {
      MINIPORT_HOOK_DRIVER::MINIPORT_HOOK_DRIVER(v2);
      v2 = (MINIPORT_HOOK_DRIVER *)((char *)v2 + 136);
    }
  }
  else
  {
    v1 = 0LL;
  }
  g_MiniportHookDrivers = v1;
  if ( !v1 )
    return -1073741670;
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_MiniportHookDriversLock);
  *((_BYTE *)v1 + 1) = 1;
  MINIPORT_HOOK_DRIVER::FillDefaultHandlers(v1);
  result = NmrRegisterClient(&ClientCharacteristics, 0LL, &ndisMpHookNmrClientHandle);
  v5 = result;
  if ( result < 0 )
  {
    if ( g_MiniportHookDrivers )
      ExFreePoolWithTag((char *)g_MiniportHookDrivers - 8, 0x6448704Du);
    g_MiniportHookDrivers = 0LL;
    return v5;
  }
  return result;
}

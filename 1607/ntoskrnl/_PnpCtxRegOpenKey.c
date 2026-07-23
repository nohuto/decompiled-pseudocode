/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1404DFCAC
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14023B224 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipProcessPendingOsExtensionResources @ 0x1407BB858 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1407BB8DC (PipProcessPendingServices.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x1407CEBD0 (PipHardwareConfigExists.c)
 *     PipMigrateServiceCallback @ 0x1407CEE24 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407CF148 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407CF348 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x1407CF6C0 (PipProcessPendingObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegOpenKey(_QWORD *a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  _QWORD *v6; // rax

  v6 = a1;
  LODWORD(a1) = 0;
  if ( v6 )
    a1 = (_QWORD *)*v6;
  return SysCtxRegOpenKey((_DWORD)a1, a2, a3, a4, a5, a6);
}

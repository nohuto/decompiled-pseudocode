/*
 * XREFs of _PnpCtxRegOpenKey @ 0x14043BD20
 * Callers:
 *     PipProcessPendingOsExtensionResources @ 0x1407555C4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140755648 (PipProcessPendingServices.c)
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x140783404 (PipHardwareConfigExists.c)
 *     PipCommitPendingOsExtensionResource @ 0x140783928 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140783B28 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140783EA0 (PipProcessPendingObjects.c)
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

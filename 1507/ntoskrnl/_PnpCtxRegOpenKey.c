/*
 * XREFs of _PnpCtxRegOpenKey @ 0x140435B7C
 * Callers:
 *     PipProcessPendingOsExtensionResources @ 0x1407E6EF4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1407E6F78 (PipProcessPendingServices.c)
 *     PipMigratePnpState @ 0x1407E75D0 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x1407F9B88 (PipHardwareConfigExists.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407FA0AC (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407FA2AC (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x1407FA624 (PipProcessPendingObjects.c)
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

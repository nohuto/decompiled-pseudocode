/*
 * XREFs of HUBDSM_ValidatingInterfaceStatusForRemoteWake @ 0x1C001E480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ValidatingInterfaceStatusForRemoteWake(__int64 a1)
{
  return HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability(*(_QWORD *)(a1 + 960));
}

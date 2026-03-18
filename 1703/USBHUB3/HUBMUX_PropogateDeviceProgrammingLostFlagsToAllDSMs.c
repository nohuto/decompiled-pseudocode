/*
 * XREFs of HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs @ 0x1C000DE60
 * Callers:
 *     HUBPARENT_QueryParentIfDeviceWasReset @ 0x1C0006894 (HUBPARENT_QueryParentIfDeviceWasReset.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C0006AD0 (HUBPARENT_ResetHubComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al
  KSPIN_LOCK i; // rdx
  KSPIN_LOCK v4; // rdx

  v1 = (KSPIN_LOCK *)(a1 + 2288);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2288));
  for ( i = v1[8]; ; i = *(_QWORD *)(v4 + 176) )
  {
    v4 = i - 176;
    if ( v1 + 8 == (KSPIN_LOCK *)(v4 + 176) )
      break;
    _InterlockedOr((volatile signed __int32 *)(v4 + 1620), 0x20u);
  }
  KeReleaseSpinLock(v1, v2);
}

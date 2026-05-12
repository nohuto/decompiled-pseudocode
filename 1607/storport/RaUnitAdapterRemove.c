/*
 * XREFs of RaUnitAdapterRemove @ 0x1C0034B50
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitWaitForRemoveLock @ 0x1C00100A0 (RaUnitWaitForRemoveLock.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0011128 (RaCallMiniportUnitControl.c)
 *     RaidDeleteUnit @ 0x1C0014FB0 (RaidDeleteUnit.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitAdapterRemove(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 40) != 5 )
  {
    *(_DWORD *)(a1 + 40) = 6;
    RaUnitWaitForRemoveLock(a1);
    if ( RaidIsUnitControlSupported(a1, 9) )
      RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 296LL);
    RaidDeleteUnit(a1);
  }
  return 0LL;
}

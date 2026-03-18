/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00394E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C790 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIIsNamedChildPresent @ 0x1C000DC00 (AMLIIsNamedChildPresent.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0034E10 (ACPIDockFindCorrespondingDock.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase2(__int64 a1)
{
  _QWORD *v1; // rsi
  int v3; // ebx
  _QWORD *CorrespondingDock; // rax
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  if ( !AMLIIsNamedChildPresent(v1[88], 1262699615)
    || (CorrespondingDock = ACPIDockFindCorrespondingDock((__int64)v1)) == 0LL
    || *((_DWORD *)CorrespondingDock + 48) != 2
    || (*((_DWORD *)CorrespondingDock + 48) = 1,
        KdDisableDebugger(),
        v3 = ACPIGet(v1, 1262699615, 546308096, 0LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL),
        KdEnableDebugger(),
        result = 259LL,
        v3 != 259) )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  return result;
}

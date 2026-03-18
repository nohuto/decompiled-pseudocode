/*
 * XREFs of DCEPtInRect @ 0x1C00FB9D8
 * Callers:
 *     NtUserLogicalToPhysicalPoint @ 0x1C00FB600 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C00FB810 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0150C20 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C0218490 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     QueryInertiaInfo @ 0x1C022A1F0 (QueryInertiaInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DCEPtInRect(_DWORD *a1, unsigned __int64 a2)
{
  _BOOL8 result; // rax
  unsigned __int64 v3; // rdx

  result = 0LL;
  if ( a1 && (int)a2 >= *a1 && (int)a2 <= a1[2] )
  {
    v3 = HIDWORD(a2);
    if ( (int)v3 >= a1[1] )
      return (int)v3 <= a1[3];
  }
  return result;
}

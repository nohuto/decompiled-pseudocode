/*
 * XREFs of DCEPtInRect @ 0x1C0075580
 * Callers:
 *     NtUserPhysicalToLogicalPoint @ 0x1C00752D0 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C00DE460 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C014BD90 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C021E840 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     QueryInertia @ 0x1C0239B40 (QueryInertia.c)
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

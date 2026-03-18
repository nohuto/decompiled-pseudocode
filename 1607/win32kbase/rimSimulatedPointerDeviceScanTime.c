/*
 * XREFs of rimSimulatedPointerDeviceScanTime @ 0x1C00DE578
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C00DE658 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimSimulatedPointerDeviceScanTime(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  __int64 result; // rax

  ++*(_DWORD *)(a2 + 1424);
  v5 = *a3;
  if ( *(_DWORD *)(a2 + 1424) == 1 )
  {
    *(_DWORD *)(a2 + 1400) = *a4;
    *(_QWORD *)(a2 + 1440) = v5;
  }
  else
  {
    *a4 = *(_DWORD *)(a2 + 1400) + (unsigned __int64)(1000 * (v5 - *(_QWORD *)(a2 + 1440))) / *(_QWORD *)(a1 + 648);
  }
  *(_DWORD *)(a2 + 1408) = *(_DWORD *)(a2 + 1404);
  result = (unsigned int)*a4;
  *(_DWORD *)(a2 + 1404) = result;
  *(_QWORD *)(a2 + 1432) = v5;
  return result;
}

/*
 * XREFs of SimulatedPointerDeviceScanTime @ 0x1C01CC93C
 * Callers:
 *     ?xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z @ 0x1C01C6E14 (-xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z.c)
 *     xxxProcessPointerDeviceInput @ 0x1C01CD7D8 (xxxProcessPointerDeviceInput.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01CFE54 (xxxProcessPTPDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SimulatedPointerDeviceScanTime(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  __int64 result; // rax

  if ( ++*(_DWORD *)(a1 + 1440) == 1 )
  {
    *(_DWORD *)(a1 + 1464) = *a3;
    *(_QWORD *)(a1 + 1456) = a2;
  }
  else
  {
    if ( gliQpcFreq.QuadPart )
      v3 = *(_DWORD *)(a1 + 1464) + 1000 * (a2 - *(_QWORD *)(a1 + 1456)) / gliQpcFreq.QuadPart;
    else
      v3 = *(_DWORD *)(a1 + 1420) + 10;
    *a3 = v3;
  }
  *(_DWORD *)(a1 + 1424) = *(_DWORD *)(a1 + 1420);
  result = (unsigned int)*a3;
  *(_DWORD *)(a1 + 1420) = result;
  return result;
}

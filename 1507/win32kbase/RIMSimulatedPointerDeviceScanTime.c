/*
 * XREFs of RIMSimulatedPointerDeviceScanTime @ 0x1C00CC0F4
 * Callers:
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C40FC (RIMMarkEndPointerMessageDelivery.c)
 *     rimProcessPTPDeviceInput @ 0x1C00CC708 (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMSimulatedPointerDeviceScanTime(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax

  if ( ++*(_DWORD *)(a2 + 1440) == 1 )
  {
    *(_DWORD *)(a2 + 1464) = *a4;
    *(_QWORD *)(a2 + 1456) = a3;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 656);
    if ( v4 )
      v5 = *(_DWORD *)(a2 + 1464) + 1000 * (a3 - *(_QWORD *)(a2 + 1456)) / v4;
    else
      v5 = *(_DWORD *)(a2 + 1420) + 10;
    *a4 = v5;
  }
  *(_DWORD *)(a2 + 1424) = *(_DWORD *)(a2 + 1420);
  result = (unsigned int)*a4;
  *(_DWORD *)(a2 + 1420) = result;
  return result;
}

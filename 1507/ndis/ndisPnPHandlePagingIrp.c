/*
 * XREFs of ndisPnPHandlePagingIrp @ 0x1C00D4910
 * Callers:
 *     ndisPnPIrpDeviceUsageNotification @ 0x1C00D4B64 (ndisPnPIrpDeviceUsageNotification.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 */

void __fastcall ndisPnPHandlePagingIrp(__int64 a1, __int64 a2, char a3)
{
  if ( a3 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 3504)) == 1 )
    {
      ndisReferencePackage((__int64)&ndisPkgs);
      *(_DWORD *)(a1 + 48) &= ~0x2000u;
      *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 560LL) |= 0x80u;
      *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1336LL) |= 0x80u;
    }
  }
  else if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 3504), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(a1 + 48) |= 0x2000u;
    *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 560LL) &= ~0x80u;
    *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1336LL) &= ~0x80u;
    ndisDereferencePackage((__int64)&ndisPkgs);
  }
  IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a2 + 3888));
}

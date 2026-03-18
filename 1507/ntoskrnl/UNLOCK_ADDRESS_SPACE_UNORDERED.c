/*
 * XREFs of UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140010380
 * Callers:
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 1732) &= ~1u;
  v2 = a2 + 872;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 872), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 872);
  KeAbPostRelease(v2);
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}

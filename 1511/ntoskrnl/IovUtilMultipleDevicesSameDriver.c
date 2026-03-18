/*
 * XREFs of IovUtilMultipleDevicesSameDriver @ 0x1406C21BC
 * Callers:
 *     IovpExamineIrpStackForwarding @ 0x1406BF6C8 (IovpExamineIrpStackForwarding.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall IovUtilMultipleDevicesSameDriver(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  KIRQL v4; // dl
  __int64 i; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  for ( i = *(_QWORD *)(a1 + 24); i; i = *(_QWORD *)(i + 24) )
  {
    if ( *(_QWORD *)(i + 8) == v1 )
    {
      v2 = 1;
      break;
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v2;
}

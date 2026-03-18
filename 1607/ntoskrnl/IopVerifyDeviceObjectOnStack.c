/*
 * XREFs of IopVerifyDeviceObjectOnStack @ 0x14009F710
 * Callers:
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     IopCheckTopDeviceHint @ 0x1404C92CC (IopCheckTopDeviceHint.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

char __fastcall IopVerifyDeviceObjectOnStack(__int64 a1, __int64 a2, char a3)
{
  KIRQL v3; // al

  v3 = 0;
  if ( a3 )
    v3 = KeAcquireQueuedSpinLock(0xAuLL);
  do
  {
    if ( a1 == a2 )
    {
      if ( a3 )
        KeReleaseQueuedSpinLock(0xAuLL, v3);
      return 1;
    }
    a1 = *(_QWORD *)(a1 + 24);
  }
  while ( a1 );
  if ( a3 )
    KeReleaseQueuedSpinLock(0xAuLL, v3);
  return 0;
}

/*
 * XREFs of IopCheckUnloadDriver @ 0x140130910
 * Callers:
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 *     IovpUnloadDriver @ 0x14070175C (IovpUnloadDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall IopCheckUnloadDriver(_QWORD *Object, _BYTE *a2)
{
  KIRQL v4; // al
  __int64 v5; // r9
  unsigned int v6; // ebx
  int v7; // edx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = Object[1];
  v6 = 0;
  if ( !v5 && (Object[2] & 1) != 0 )
    goto LABEL_15;
  v7 = *((_DWORD *)Object + 4);
  if ( (v7 & 0x80u) == 0 && v5 && (*(_DWORD *)(*(_QWORD *)(v5 + 312) + 32LL) & 1) != 0 )
    goto LABEL_15;
  if ( (v7 & 0x10) == 0 )
  {
    v6 = -1073741808;
LABEL_15:
    KeReleaseQueuedSpinLock(0xAuLL, v4);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return v6;
  }
  *a2 = 1;
  while ( v5 )
  {
    *(_DWORD *)(*(_QWORD *)(v5 + 312) + 32LL) |= 1u;
    if ( *(_DWORD *)(v5 + 4) || *(_QWORD *)(v5 + 24) )
      *a2 = 0;
    v5 = *(_QWORD *)(v5 + 16);
  }
  if ( (*((_DWORD *)Object + 4) & 0x80u) != 0 && Object[1] )
    *a2 = 0;
  if ( *a2 )
    *((_DWORD *)Object + 4) |= 1u;
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return 3221225473LL;
}

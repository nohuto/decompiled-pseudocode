/*
 * XREFs of PnpIsChainDereferenced @ 0x1400858E0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventRemovalCheckOpenHandles @ 0x14064D450 (PiEventRemovalCheckOpenHandles.c)
 * Callees:
 *     PnpUpdateExtensionFlags @ 0x1400859FC (PnpUpdateExtensionFlags.c)
 *     PnpIsAnyDeviceInUse @ 0x140085A24 (PnpIsAnyDeviceInUse.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     PnpChainDereferenceComplete @ 0x140483FD4 (PnpChainDereferenceComplete.c)
 */

__int64 __fastcall PnpIsChainDereferenced(_QWORD *a1, int a2, int a3, unsigned int a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  __int64 v9; // rbp
  unsigned int IsAnyDeviceInUse; // edi
  KIRQL v11; // al
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // r8
  _QWORD *v15; // r14
  KIRQL v16; // bp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r11
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = 0LL;
  IsAnyDeviceInUse = 0;
  v11 = KeAcquireQueuedSpinLock(0xAuLL);
  v13 = 0;
  LOBYTE(v14) = v11;
  if ( a2 > 0 )
  {
    v15 = a1;
    v16 = v11;
    while ( 1 )
    {
      v23[0] = 0LL;
      IsAnyDeviceInUse = PnpIsAnyDeviceInUse(&a1[v13], v12, v23);
      PnpUpdateExtensionFlags(v19, v17, v18, 1LL);
      if ( a3 )
      {
        if ( IsAnyDeviceInUse )
        {
LABEL_9:
          v5 = a5;
          LOBYTE(v14) = v16;
          v9 = v23[0];
          break;
        }
      }
      else if ( !IsAnyDeviceInUse )
      {
        KeReleaseQueuedSpinLock(0xAuLL, v16);
        PnpChainDereferenceComplete(*v15, a4);
        v16 = KeAcquireQueuedSpinLock(0xAuLL);
      }
      ++v13;
      ++v15;
      if ( v13 >= a2 )
        goto LABEL_9;
    }
  }
  if ( a3 && IsAnyDeviceInUse )
  {
    if ( v5 )
      *v5 = v9;
    if ( v13 >= 0 )
    {
      v21 = &a1[v13];
      do
      {
        PnpUpdateExtensionFlags(v21, v12, v14, 0LL);
        v21 = (_QWORD *)(v22 - 8);
        --v13;
      }
      while ( v13 >= 0 );
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v14);
  if ( !a3 )
    return 1;
  return IsAnyDeviceInUse;
}

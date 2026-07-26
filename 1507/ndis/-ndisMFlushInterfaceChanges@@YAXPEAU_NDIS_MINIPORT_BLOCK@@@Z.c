/*
 * XREFs of ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0057E00
 * Callers:
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C00D1BA0 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00D1884 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 */

void __fastcall ndisMFlushInterfaceChanges(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  KIRQL v3; // dl
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  struct _NDIS_STATUS_INDICATION v6; // [rsp+20h] [rbp-59h] BYREF
  _OWORD v7[2]; // [rsp+90h] [rbp+17h] BYREF
  __int16 v8; // [rsp+B0h] [rbp+37h]

  while ( 1 )
  {
    v2 = 0;
    memset(&v6, 0, sizeof(v6));
    v6.StatusCode = 0;
    v6.StatusBuffer = 0LL;
    v6.StatusBufferSize = 0;
    v6.SourceHandle = DriverEntry;
    v6.Header = (_NDIS_OBJECT_HEADER)7340440;
    v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 732556;
    if ( a1->MacAddressUpdateQueued )
    {
      v4 = *(_OWORD *)&a1->PendingMacAddress.Length;
      v8 = *(_WORD *)&a1->PendingMacAddress.Address[30];
      v5 = *(_OWORD *)&a1->PendingMacAddress.Address[14];
      a1->MacAddressUpdateQueued = 0;
      v2 = 32;
      v6.StatusBuffer = v7;
      v6.StatusCode = 1073873072;
      v7[0] = v4;
      v6.StatusBufferSize = 34;
      v7[1] = v5;
    }
    else if ( a1->MtuUpdateQueued )
    {
      a1->MtuUpdateQueued = 0;
      v2 = 64;
      LODWORD(v7[0]) = a1->PendingMtuSize;
      v6.StatusCode = 1073873073;
      v6.StatusBuffer = &a1->PendingMtuSize;
      v6.StatusBufferSize = 4;
    }
    else
    {
      a1->InterfaceUpdateInProgress = 0;
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v3);
    if ( !v6.StatusCode )
      break;
    ndisMApplyInterfaceChange(a1, v2, &v6);
  }
}

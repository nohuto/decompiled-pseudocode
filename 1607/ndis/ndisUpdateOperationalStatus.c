/*
 * XREFs of ndisUpdateOperationalStatus @ 0x1C00182A4
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00154DC (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E8738 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0015590 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0016334 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisIfSetInterfaceState @ 0x1C0017AB8 (ndisIfSetInterfaceState.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

void __fastcall ndisUpdateOperationalStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int64 *p_Lock; // rdi
  KIRQL v3; // al
  __int64 v4; // rdx
  KIRQL v5; // si
  char v6; // al
  _NDIS_IF_BLOCK *IfBlock; // rcx
  KIRQL NewIrql[16]; // [rsp+28h] [rbp-49h] BYREF
  int v9[28]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+37h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+B0h] [rbp+3Fh]

  p_Lock = &a1->Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  NewIrql[0] = v3;
  LOBYTE(v4) = 1;
  v5 = v3;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2103141;
  v6 = ndisIfSetInterfaceState(a1, v4, v3);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  if ( v6 )
  {
    KeReleaseSpinLock(p_Lock, v5);
    ndisMAcquireStInLockWithSpinLock(a1, NewIrql);
    IfBlock = a1->IfBlock;
    ifOperStatusFlags = 0;
    v10 = 786816LL;
    HIDWORD(v10) = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    memset(v9, 0, sizeof(v9));
    v9[0] = 7340440;
    *(_QWORD *)&v9[12] = &v10;
    *(_QWORD *)&v9[2] = a1;
    v9[5] = 1073807395;
    v9[14] = 12;
    ndisIndicateStatusInternal(a1, (__int128 *)v9);
    ndisMReleaseStInLockAndSpinLock(a1, NewIrql[0]);
  }
  else
  {
    KeReleaseSpinLock(p_Lock, v5);
  }
}

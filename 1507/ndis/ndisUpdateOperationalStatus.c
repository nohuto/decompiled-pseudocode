/*
 * XREFs of ndisUpdateOperationalStatus @ 0x1C00145CC
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00194B8 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E74C8 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisIfSetInterfaceState @ 0x1C00161F4 (ndisIfSetInterfaceState.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0017338 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001737C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

void __fastcall ndisUpdateOperationalStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int64 *p_Lock; // rdi
  KIRQL v3; // si
  char v4; // al
  _NDIS_IF_BLOCK *IfBlock; // rcx
  KIRQL NewIrql[128]; // [rsp+28h] [rbp-49h] BYREF
  int v7; // [rsp+A8h] [rbp+37h] BYREF
  _NET_IF_OPER_STATUS ifOperStatus; // [rsp+ACh] [rbp+3Bh]
  unsigned int ifOperStatusFlags; // [rsp+B0h] [rbp+3Fh]

  p_Lock = &a1->Lock;
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v3 = NewIrql[0];
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2103128;
  v4 = ndisIfSetInterfaceState(a1);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  if ( v4 )
  {
    KeReleaseSpinLock(p_Lock, v3);
    ndisMAcquireStInLockWithSpinLock(a1, NewIrql);
    IfBlock = a1->IfBlock;
    ifOperStatus = 0;
    ifOperStatusFlags = 0;
    v7 = 786816;
    ifOperStatus = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    memset(&NewIrql[16], 0, 0x70uLL);
    *(_DWORD *)&NewIrql[16] = 7340440;
    *(_QWORD *)&NewIrql[64] = &v7;
    *(_QWORD *)&NewIrql[24] = a1;
    *(_DWORD *)&NewIrql[36] = 1073807395;
    *(_DWORD *)&NewIrql[72] = 12;
    ndisIndicateStatusInternal(a1);
    ndisMReleaseStInLockAndSpinLock(a1, NewIrql[0]);
  }
  else
  {
    KeReleaseSpinLock(p_Lock, v3);
  }
}

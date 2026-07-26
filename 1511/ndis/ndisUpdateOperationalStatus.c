/*
 * XREFs of ndisUpdateOperationalStatus @ 0x1C001BF84
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001E448 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E3284 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001C7AC (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001D9A4 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisIfSetInterfaceState @ 0x1C001DA38 (ndisIfSetInterfaceState.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

void __fastcall ndisUpdateOperationalStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int64 *p_Lock; // rdi
  KIRQL v3; // si
  char v4; // al
  _NDIS_IF_BLOCK *IfBlock; // rcx
  KIRQL NewIrql[16]; // [rsp+28h] [rbp-49h] BYREF
  int v7[28]; // [rsp+38h] [rbp-39h] BYREF
  int v8; // [rsp+A8h] [rbp+37h] BYREF
  _NET_IF_OPER_STATUS ifOperStatus; // [rsp+ACh] [rbp+3Bh]
  unsigned int ifOperStatusFlags; // [rsp+B0h] [rbp+3Fh]

  p_Lock = &a1->Lock;
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v3 = NewIrql[0];
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2103138;
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
    v8 = 786816;
    ifOperStatus = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    memset(v7, 0, sizeof(v7));
    v7[0] = 7340440;
    *(_QWORD *)&v7[12] = &v8;
    *(_QWORD *)&v7[2] = a1;
    v7[5] = 1073807395;
    v7[14] = 12;
    ndisIndicateStatusInternal(a1, (int)v7);
    ndisMReleaseStInLockAndSpinLock(a1, NewIrql[0]);
  }
  else
  {
    KeReleaseSpinLock(p_Lock, v3);
  }
}

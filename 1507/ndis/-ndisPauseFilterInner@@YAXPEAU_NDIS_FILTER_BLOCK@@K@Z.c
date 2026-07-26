/*
 * XREFs of ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C00EB488
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A13F4 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jcqjzzz @ 0x1C006BBA0 (Template_jcqjzzz.c)
 *     WPP_SF_DqqZZ @ 0x1C006BDC0 (WPP_SF_DqqZZ.c)
 *     ndisFInvokePause @ 0x1C00B087C (ndisFInvokePause.c)
 */

void __fastcall ndisPauseFilterInner(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  KIRQL v6; // al
  char v7; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  _NDIS_FILTER_PAUSE_PARAMETERS v9; // [rsp+78h] [rbp-20h] BYREF

  Miniport = a1->Miniport;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xAu, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, (__int64)a1);
  if ( a1->State == NdisFilterRunning )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 2u;
    KeReleaseSpinLock(&a1->Lock, v3);
    if ( (unsigned __int8)byte_1C0085310 >= 4u )
      WPP_SF_DqqZZ(
        (__int64)&a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
        v4,
        v5,
        Miniport,
        a1,
        &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
        Miniport->pAdapterInstanceName);
    a1->State = NdisFilterPausing;
    if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
      Template_jcqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName._p,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        5,
        62,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName._p->Buffer,
        a1->FilterFriendlyName->Buffer);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v9.Header = (_NDIS_OBJECT_HEADER)786842;
    a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v7;
    v9.PauseReason = 1;
    if ( (unsigned int)ndisFInvokePause((__int64)a1, &v9) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    a1->AsyncOpContext = 0LL;
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 4u;
    KeReleaseSpinLock(&a1->Lock, v6);
    a1->State = NdisFilterPaused;
    if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
      Template_jcqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName._p,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        2,
        93,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName._p->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCu, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, (__int64)a1);
}

/*
 * XREFs of ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006AFD4
 * Callers:
 *     ndisSetBusySync @ 0x1C006C7E0 (ndisSetBusySync.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     Template_qq @ 0x1C004E748 (Template_qq.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006A75C (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ndisCancelIdleRequestSync @ 0x1C006B53C (ndisCancelIdleRequestSync.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C006B904 (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

void __fastcall ndisWdmSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  __int16 i; // r14
  KIRQL v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r9
  PKSPIN_LOCK v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h]

  SelectiveSuspend = a1->SelectiveSuspend;
  for ( i = 0; ; ++i )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    if ( (unsigned __int8)ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, 0LL) )
      break;
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
    if ( !i )
    {
      if ( (unsigned __int8)byte_1C00895D6 >= 4u )
        WPP_SF_qD(0x23u, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, (__int64)a1, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      {
        LODWORD(v12) = a2;
        Template_qq(v9, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, v12);
      }
    }
    LOBYTE(v10) = 1;
    ndisCancelIdleRequestSync(a1, a2, a3, v10);
  }
  ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, (enum _NDIS_SS_BUSY_REASON)a2, a3);
  SelectiveSuspend->LastBusyEvent.Value = a2;
  SelectiveSuspend->LastBusyContext = a3;
  KeReleaseSpinLock(v11, v8);
}

/*
 * XREFs of ndisCancelWaitWake @ 0x1C001BD44
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C0067120 (NdisMIdleNotificationConfirm.c)
 *     ndisSelectiveSuspendStop @ 0x1C00689F8 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00699BC (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ndisSetSystemPower @ 0x1C009B6DC (ndisSetSystemPower.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00DD5D8 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMPowerPolicy @ 0x1C00E6244 (ndisMPowerPolicy.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 */

void __fastcall ndisCancelWaitWake(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  bool v4; // zf
  int v5; // ecx
  KIRQL v6; // al
  char v7; // bl

  v1 = (KSPIN_LOCK *)(a1 + 96);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 1296) == 0LL;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1708643;
  if ( v4 || *(_BYTE *)(a1 + 1328) || *(_BYTE *)(a1 + 1330) )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock(v1, v3);
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    *(_WORD *)(a1 + 1329) = 257;
    KeReleaseSpinLock(v1, v3);
    if ( IoCancelIrp(*(PIRP *)(a1 + 1296)) )
    {
      if ( (unsigned __int8)byte_1C0085315 >= 4u )
        WPP_SF_q(142LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          v5,
          (unsigned int)&CancelledWakeIrp,
          a1 + 4064,
          a1 + 4064,
          *(_DWORD *)(a1 + 4112),
          *(_QWORD *)(a1 + 4080),
          126);
    }
    v6 = KeAcquireSpinLockRaiseToDpc(v1);
    v7 = *(_BYTE *)(a1 + 1328);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    *(_BYTE *)(a1 + 1329) = 0;
    KeReleaseSpinLock(v1, v6);
    if ( v7 )
      IofCompleteRequest(*(PIRP *)(a1 + 1296), 0);
  }
}

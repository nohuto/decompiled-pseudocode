/*
 * XREFs of ndisMResetMiniportInternal @ 0x1C0023880
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C000F020 (ndisQueuedCheckForHang.c)
 *     ndisQueuedResetMiniport @ 0x1C005ED90 (ndisQueuedResetMiniport.c)
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C0019ED0 (NdisMIndicateStatusEx.c)
 *     ndisMSwapOpenHandlers @ 0x1C001FB1C (ndisMSwapOpenHandlers.c)
 *     NdisMResetComplete @ 0x1C0023AC0 (NdisMResetComplete.c)
 *     ndisMInvokeReset @ 0x1C0023D2C (ndisMInvokeReset.c)
 *     Template_jqxzqq @ 0x1C0023D8C (Template_jqxzqq.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisSetBusySync @ 0x1C006C7E0 (ndisSetBusySync.c)
 *     NdisMSleep @ 0x1C00B1AA0 (NdisMSleep.c)
 */

void __fastcall ndisMResetMiniportInternal(KSPIN_LOCK *MiniportAdapterHandle, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  KIRQL v6; // r15
  bool v7; // zf
  KSPIN_LOCK *v8; // rcx
  int v9; // ecx
  __int64 v10; // r8
  NDIS_STATUS v11; // edi
  KIRQL v12; // r14
  BOOLEAN AddressingReset[16]; // [rsp+50h] [rbp-59h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+60h] [rbp-49h] BYREF

  if ( (unsigned __int8)byte_1C00895D8 >= 4u )
    WPP_SF_qD(219LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, MiniportAdapterHandle, a2);
  v6 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
  v7 = (MiniportAdapterHandle[15] & 0x81200000) == 0;
  MiniportAdapterHandle[65] = (KSPIN_LOCK)KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 734828;
  if ( !v7
    || (*((_DWORD *)MiniportAdapterHandle + 31) & 0x80000) != 0
    || (unsigned int)(*((_DWORD *)MiniportAdapterHandle + 984) - 2) <= 2 )
  {
    MiniportAdapterHandle[65] = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLock(MiniportAdapterHandle + 12, v6);
  }
  else
  {
    if ( a2 == 1 )
    {
      ++*((_WORD *)MiniportAdapterHandle + 892);
    }
    else if ( a2 - 2 <= 1 )
    {
      ++*((_WORD *)MiniportAdapterHandle + 893);
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x200000000000LL) != 0 )
      Template_jqxzqq(
        *((unsigned __int16 *)MiniportAdapterHandle + 892)
      + (unsigned int)*((unsigned __int16 *)MiniportAdapterHandle + 893),
        &MiniportReset,
        MiniportAdapterHandle + 508,
        MiniportAdapterHandle + 508,
        *((_DWORD *)MiniportAdapterHandle + 1028),
        MiniportAdapterHandle[510],
        *(_QWORD *)(MiniportAdapterHandle[489] + 8),
        a2,
        *((unsigned __int16 *)MiniportAdapterHandle + 892) + *((unsigned __int16 *)MiniportAdapterHandle + 893));
    *((_DWORD *)MiniportAdapterHandle + 30) |= 0x200000u;
    LOBYTE(v4) = 1;
    MiniportAdapterHandle[49] = 0LL;
    ndisMSwapOpenHandlers((__int64)MiniportAdapterHandle, v4, v5);
    *((_DWORD *)MiniportAdapterHandle + 30) |= 0x80000u;
    while ( 1 )
    {
      v7 = *((_DWORD *)MiniportAdapterHandle + 456) == 0;
      MiniportAdapterHandle[65] = 0LL;
      v8 = MiniportAdapterHandle + 12;
      *((_DWORD *)MiniportAdapterHandle + 464) = 0;
      if ( v7 )
        break;
      KeReleaseSpinLock(v8, v6);
      NdisMSleep(0x32u);
      v6 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
      MiniportAdapterHandle[65] = (KSPIN_LOCK)KeGetCurrentThread();
      *((_DWORD *)MiniportAdapterHandle + 464) = 734879;
    }
    KeReleaseSpinLock(v8, v6);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = MiniportAdapterHandle;
    StatusIndication.StatusCode = 1073807364;
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400) != 0 )
      Template_jqxq(
        v9,
        (unsigned int)&CallMiniportReset,
        (_DWORD)MiniportAdapterHandle + 4064,
        (_DWORD)MiniportAdapterHandle + 4064,
        *((_DWORD *)MiniportAdapterHandle + 1028),
        MiniportAdapterHandle[510],
        177);
    if ( MiniportAdapterHandle[564] )
      ndisSetBusySync(MiniportAdapterHandle, 36LL, 0LL);
    if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
    {
      if ( (unsigned __int8)byte_1C00895D8 >= 4u )
        WPP_SF_(220LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v10);
      v12 = KfRaiseIrql(2u);
      v11 = (*(__int64 (__fastcall **)(BOOLEAN *, KSPIN_LOCK))(MiniportAdapterHandle[477] + 192))(
              AddressingReset,
              MiniportAdapterHandle[3]);
      if ( v12 != 2 )
        KeLowerIrql(v12);
    }
    else
    {
      v11 = ndisMInvokeReset(MiniportAdapterHandle, AddressingReset);
    }
    if ( v11 != 259 )
      NdisMResetComplete(MiniportAdapterHandle, v11, AddressingReset[0]);
    if ( (unsigned __int8)byte_1C00895D8 >= 4u )
      WPP_SF_qD(221LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, MiniportAdapterHandle, a2);
  }
}

/*
 * XREFs of ndisMResetMiniportInternal @ 0x1C005AC38
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C000D360 (ndisQueuedCheckForHang.c)
 *     ndisQueuedResetMiniport @ 0x1C005AF50 (ndisQueuedResetMiniport.c)
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C0018460 (NdisMIndicateStatusEx.c)
 *     ndisMSwapOpenHandlers @ 0x1C001A640 (ndisMSwapOpenHandlers.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     NdisMResetComplete @ 0x1C00588A0 (NdisMResetComplete.c)
 *     Template_jqxzqq @ 0x1C0058D98 (Template_jqxzqq.c)
 *     ndisMInvokeReset @ 0x1C0059E3C (ndisMInvokeReset.c)
 *     ndisSetBusySync @ 0x1C0068B84 (ndisSetBusySync.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 */

void __fastcall ndisMResetMiniportInternal(unsigned __int16 *MiniportAdapterHandle, int a2)
{
  KIRQL v4; // r15
  bool v5; // zf
  KSPIN_LOCK *v6; // rcx
  __int64 v7; // rcx
  NDIS_STATUS v8; // edi
  KIRQL v9; // r14
  BOOLEAN AddressingReset[16]; // [rsp+50h] [rbp-59h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+60h] [rbp-49h] BYREF

  if ( (unsigned __int8)byte_1C0085318 >= 4u )
    WPP_SF_qD(0xD8u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64)MiniportAdapterHandle, a2);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v5 = (*((_DWORD *)MiniportAdapterHandle + 30) & 0x81200000) == 0;
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 734721;
  if ( !v5
    || (*((_DWORD *)MiniportAdapterHandle + 31) & 0x80000) != 0
    || (unsigned int)(*((_DWORD *)MiniportAdapterHandle + 984) - 2) <= 2 )
  {
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v4);
  }
  else
  {
    if ( a2 == 1 )
    {
      ++MiniportAdapterHandle[892];
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      ++MiniportAdapterHandle[893];
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000000000LL) != 0 )
      Template_jqxzqq(
        MiniportAdapterHandle[892] + (unsigned int)MiniportAdapterHandle[893],
        &MiniportReset,
        (const GUID *)MiniportAdapterHandle + 254,
        (unsigned __int64)(MiniportAdapterHandle + 2032),
        *((_DWORD *)MiniportAdapterHandle + 1028),
        *((_QWORD *)MiniportAdapterHandle + 510),
        *(const wchar_t **)(*((_QWORD *)MiniportAdapterHandle + 489) + 8LL),
        a2,
        MiniportAdapterHandle[892] + MiniportAdapterHandle[893]);
    *((_DWORD *)MiniportAdapterHandle + 30) |= 0x200000u;
    *((_QWORD *)MiniportAdapterHandle + 49) = 0LL;
    ndisMSwapOpenHandlers((__int64)MiniportAdapterHandle, 1u);
    *((_DWORD *)MiniportAdapterHandle + 30) |= 0x80000u;
    while ( 1 )
    {
      v5 = *((_DWORD *)MiniportAdapterHandle + 456) == 0;
      *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
      v6 = (KSPIN_LOCK *)(MiniportAdapterHandle + 48);
      *((_DWORD *)MiniportAdapterHandle + 464) = 0;
      if ( v5 )
        break;
      KeReleaseSpinLock(v6, v4);
      NdisMSleep(0x32u);
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
      *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
      *((_DWORD *)MiniportAdapterHandle + 464) = 734772;
    }
    KeReleaseSpinLock(v6, v4);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = MiniportAdapterHandle;
    StatusIndication.StatusCode = 1073807364;
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400) != 0 )
      Template_jqxq(
        v7,
        &CallMiniportReset,
        (const GUID *)MiniportAdapterHandle + 254,
        (unsigned __int64)(MiniportAdapterHandle + 2032),
        *((_DWORD *)MiniportAdapterHandle + 1028),
        *((_QWORD *)MiniportAdapterHandle + 510),
        70);
    if ( *((_QWORD *)MiniportAdapterHandle + 564) )
      ndisSetBusySync(MiniportAdapterHandle, 36LL, 0LL);
    if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
    {
      if ( (unsigned __int8)byte_1C0085318 >= 4u )
        WPP_SF_(0xD9u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids);
      v9 = KfRaiseIrql(2u);
      v8 = (*(__int64 (__fastcall **)(BOOLEAN *, _QWORD))(*((_QWORD *)MiniportAdapterHandle + 477) + 192LL))(
             AddressingReset,
             *((_QWORD *)MiniportAdapterHandle + 3));
      if ( v9 != 2 )
        KeLowerIrql(v9);
    }
    else
    {
      v8 = ndisMInvokeReset((__int64)MiniportAdapterHandle, (__int64)AddressingReset);
    }
    if ( v8 != 259 )
      NdisMResetComplete(MiniportAdapterHandle, v8, AddressingReset[0]);
    if ( (unsigned __int8)byte_1C0085318 >= 4u )
      WPP_SF_qD(0xDAu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64)MiniportAdapterHandle, a2);
  }
}

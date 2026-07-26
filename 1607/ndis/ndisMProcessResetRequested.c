/*
 * XREFs of ndisMProcessResetRequested @ 0x1C005E698
 * Callers:
 *     ndisMProcessDeferred @ 0x1C005E304 (ndisMProcessDeferred.c)
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C0019ED0 (NdisMIndicateStatusEx.c)
 *     ndisMSwapOpenHandlers @ 0x1C001FB1C (ndisMSwapOpenHandlers.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 */

__int64 __fastcall ndisMProcessResetRequested(__int64 MiniportAdapterHandle, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-98h] BYREF

  v4 = a2;
  v5 = *(_QWORD *)(MiniportAdapterHandle + 848);
  if ( v5 )
  {
    *(_QWORD *)(MiniportAdapterHandle + 848) = *(_QWORD *)v5;
    *(_DWORD *)(v5 + 8) = 4;
    *(_QWORD *)v5 = *(_QWORD *)(MiniportAdapterHandle + 856);
    *(_QWORD *)(MiniportAdapterHandle + 856) = v5;
  }
  if ( (*(_DWORD *)(MiniportAdapterHandle + 124) & 0x80000) != 0 )
  {
    *(_DWORD *)(MiniportAdapterHandle + 120) &= ~0x100000u;
    return (unsigned int)-2147418111;
  }
  else
  {
    LOBYTE(a2) = 1;
    *(_DWORD *)(MiniportAdapterHandle + 120) = *(_DWORD *)(MiniportAdapterHandle + 120) & 0xFFCFFFFF | 0x200000;
    ndisMSwapOpenHandlers(MiniportAdapterHandle, a2, a3);
    *(_QWORD *)(MiniportAdapterHandle + 520) = 0LL;
    *(_DWORD *)(MiniportAdapterHandle + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(MiniportAdapterHandle + 96));
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = (void *)MiniportAdapterHandle;
    StatusIndication.StatusCode = 1073807364;
    NdisMIndicateStatusEx((NDIS_HANDLE)MiniportAdapterHandle, &StatusIndication);
    if ( (unsigned __int8)byte_1C00895D8 >= 4u )
      WPP_SF_q(0x45u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, MiniportAdapterHandle);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400) != 0 )
      Template_jqxq(
        v7,
        &CallMiniportReset,
        (const GUID *)(MiniportAdapterHandle + 4064),
        MiniportAdapterHandle + 4064,
        *(_DWORD *)(MiniportAdapterHandle + 4112),
        *(_QWORD *)(MiniportAdapterHandle + 4080),
        161);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(MiniportAdapterHandle + 3816) + 192LL))(
           v4,
           *(_QWORD *)(MiniportAdapterHandle + 24));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(MiniportAdapterHandle + 96));
    *(_QWORD *)(MiniportAdapterHandle + 520) = KeGetCurrentThread();
    *(_DWORD *)(MiniportAdapterHandle + 1856) = 726184;
  }
  return v6;
}

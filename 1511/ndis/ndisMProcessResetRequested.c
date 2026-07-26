/*
 * XREFs of ndisMProcessResetRequested @ 0x1C005A27C
 * Callers:
 *     ndisMProcessDeferred @ 0x1C0059EE8 (ndisMProcessDeferred.c)
 * Callees:
 *     ndisMSwapOpenHandlers @ 0x1C0019720 (ndisMSwapOpenHandlers.c)
 *     NdisMIndicateStatusEx @ 0x1C0019810 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 */

__int64 __fastcall ndisMProcessResetRequested(__int64 MiniportAdapterHandle, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-98h] BYREF

  v4 = *(_QWORD *)(MiniportAdapterHandle + 848);
  if ( v4 )
  {
    *(_QWORD *)(MiniportAdapterHandle + 848) = *(_QWORD *)v4;
    *(_DWORD *)(v4 + 8) = 4;
    *(_QWORD *)v4 = *(_QWORD *)(MiniportAdapterHandle + 856);
    *(_QWORD *)(MiniportAdapterHandle + 856) = v4;
  }
  if ( (*(_DWORD *)(MiniportAdapterHandle + 124) & 0x80000) != 0 )
  {
    *(_DWORD *)(MiniportAdapterHandle + 120) &= ~0x100000u;
    return (unsigned int)-2147418111;
  }
  else
  {
    *(_DWORD *)(MiniportAdapterHandle + 120) = *(_DWORD *)(MiniportAdapterHandle + 120) & 0xFFCFFFFF | 0x200000;
    ndisMSwapOpenHandlers(MiniportAdapterHandle, 1u);
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
    if ( (unsigned __int8)byte_1C0083718 >= 4u )
      WPP_SF_q(0x45u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, MiniportAdapterHandle);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400) != 0 )
      Template_jqxq(
        v6,
        &CallMiniportReset,
        (const GUID *)(MiniportAdapterHandle + 4064),
        MiniportAdapterHandle + 4064,
        *(_DWORD *)(MiniportAdapterHandle + 4112),
        *(_QWORD *)(MiniportAdapterHandle + 4080),
        132);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(MiniportAdapterHandle + 3816) + 192LL))(
           a2,
           *(_QWORD *)(MiniportAdapterHandle + 24));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(MiniportAdapterHandle + 96));
    *(_QWORD *)(MiniportAdapterHandle + 520) = KeGetCurrentThread();
    *(_DWORD *)(MiniportAdapterHandle + 1856) = 726155;
  }
  return v5;
}

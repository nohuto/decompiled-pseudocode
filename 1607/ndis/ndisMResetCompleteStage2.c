/*
 * XREFs of ndisMResetCompleteStage2 @ 0x1C0023B9C
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     NdisMResetComplete @ 0x1C0023AC0 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C005E304 (ndisMProcessDeferred.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017670 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0019ED0 (NdisMIndicateStatusEx.c)
 *     ndisMRestoreOpenHandlers @ 0x1C001F608 (ndisMRestoreOpenHandlers.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

void __fastcall ndisMResetCompleteStage2(_QWORD *MiniportAdapterHandle, __int64 a2)
{
  __int64 v3; // rax
  struct _KEVENT *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-49h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-39h] BYREF

  v6 = 0LL;
  if ( (MiniportAdapterHandle[15] & 0x40000) != 0 )
  {
    v3 = MiniportAdapterHandle[49];
    MiniportAdapterHandle[49] = 0LL;
    v6 = v3;
  }
  else
  {
    v5 = (_QWORD *)MiniportAdapterHandle[107];
    if ( v5 )
    {
      MiniportAdapterHandle[107] = *v5;
      v6 = v5[2];
      *v5 = MiniportAdapterHandle[113];
      MiniportAdapterHandle[113] = v5;
    }
  }
  *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x200000u;
  LOBYTE(a2) = 1;
  ndisMRestoreOpenHandlers((__int64)MiniportAdapterHandle, a2);
  MiniportAdapterHandle[65] = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLockFromDpcLevel(MiniportAdapterHandle + 12);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.StatusBuffer = MiniportAdapterHandle + 48;
  StatusIndication.SourceHandle = MiniportAdapterHandle;
  StatusIndication.StatusCode = 1073807365;
  StatusIndication.StatusBufferSize = 4;
  NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
  KeAcquireSpinLockAtDpcLevel(MiniportAdapterHandle + 12);
  MiniportAdapterHandle[65] = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 726602;
  if ( v6 )
  {
    MiniportAdapterHandle[65] = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLockFromDpcLevel(MiniportAdapterHandle + 12);
    (*(void (__fastcall **)(_QWORD, _QWORD))(v6 + 200))(
      *(_QWORD *)(v6 + 32),
      *((unsigned int *)MiniportAdapterHandle + 96));
    KeAcquireSpinLockAtDpcLevel(MiniportAdapterHandle + 12);
    MiniportAdapterHandle[65] = KeGetCurrentThread();
    *((_DWORD *)MiniportAdapterHandle + 464) = 726613;
    ndisMDereferenceOpenLocked(v6, 8u);
  }
  v4 = (struct _KEVENT *)MiniportAdapterHandle[236];
  if ( v4 )
    KeSetEvent(v4, 0, 0);
}

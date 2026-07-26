/*
 * XREFs of ndisMResetCompleteStage2 @ 0x1C005AA8C
 * Callers:
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     NdisMResetComplete @ 0x1C00588A0 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C0059F48 (ndisMProcessDeferred.c)
 * Callees:
 *     ndisMRestoreOpenHandlers @ 0x1C000FAE0 (ndisMRestoreOpenHandlers.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000FB80 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0018460 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

void __fastcall ndisMResetCompleteStage2(_QWORD *MiniportAdapterHandle, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rcx
  struct _KEVENT *v5; // rcx
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
    v4 = (_QWORD *)MiniportAdapterHandle[107];
    if ( v4 )
    {
      MiniportAdapterHandle[107] = *v4;
      v6 = v4[2];
      *v4 = MiniportAdapterHandle[113];
      MiniportAdapterHandle[113] = v4;
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
  *((_DWORD *)MiniportAdapterHandle + 464) = 726521;
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
    *((_DWORD *)MiniportAdapterHandle + 464) = 726532;
    ndisMDereferenceOpenLocked(v6, 8u);
  }
  v5 = (struct _KEVENT *)MiniportAdapterHandle[236];
  if ( v5 )
    KeSetEvent(v5, 0, 0);
}

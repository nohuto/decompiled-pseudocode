/*
 * XREFs of NdisMIndicateStatus @ 0x1C0058130
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C0019810 (NdisMIndicateStatusEx.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001C7AC (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001D9A4 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

void __stdcall NdisMIndicateStatus(
        NDIS_HANDLE MiniportHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        UINT StatusBufferSize)
{
  char v8; // si
  KIRQL v9; // dl
  int *v10; // rax
  KIRQL v11; // dl
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-89h] BYREF
  int v13; // [rsp+24h] [rbp-85h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v15[5]; // [rsp+A0h] [rbp-9h] BYREF

  v8 = 0;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0xA4u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64)MiniportHandle, GeneralStatus);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = MiniportHandle;
  StatusIndication.StatusCode = GeneralStatus;
  StatusIndication.StatusBuffer = StatusBuffer;
  StatusIndication.StatusBufferSize = StatusBufferSize;
  memset(v15, 0, sizeof(v15));
  LODWORD(v15[1]) = *((_DWORD *)MiniportHandle + 87);
  v15[2] = *((_QWORD *)MiniportHandle + 350);
  v15[3] = *((_QWORD *)MiniportHandle + 351);
  v15[4] = *(_QWORD *)((char *)MiniportHandle + 812);
  LODWORD(v15[0]) = 2621824;
  if ( !*((_QWORD *)MiniportHandle + 3) )
  {
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
    *((_QWORD *)MiniportHandle + 65) = KeGetCurrentThread();
    *((_DWORD *)MiniportHandle + 464) = 732721;
    if ( GeneralStatus == 1073807372 )
    {
      *((_BYTE *)MiniportHandle + 88) |= 8u;
      v8 = 1;
      *((_DWORD *)MiniportHandle + 86) = 2;
      HIDWORD(v15[0]) = 2;
    }
    if ( GeneralStatus == 1073807371 )
    {
      *((_BYTE *)MiniportHandle + 88) |= 8u;
      v8 = 1;
      *((_DWORD *)MiniportHandle + 86) = 1;
      HIDWORD(v15[0]) = 1;
    }
    if ( v8 )
    {
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBuffer = v15;
      StatusIndication.StatusBufferSize = 40;
    }
    v9 = NewIrql[0];
    *((_QWORD *)MiniportHandle + 65) = 0LL;
    *((_DWORD *)MiniportHandle + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v9);
    goto LABEL_12;
  }
  if ( GeneralStatus == 1073807379 )
  {
LABEL_12:
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NewIrql);
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, (__int128 *)&StatusIndication);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NewIrql[0]);
    goto LABEL_25;
  }
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
  *((_QWORD *)MiniportHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportHandle + 464) = 732795;
  if ( GeneralStatus == 1073807371 )
  {
    if ( *((_DWORD *)MiniportHandle + 86) == 1
      && !*((_DWORD *)MiniportHandle + 459)
      && *((_DWORD *)MiniportHandle + 458) == 1 )
    {
      StatusIndication.Flags |= 4u;
      v10 = &v13;
      StatusIndication.StatusCode = 1073807384;
      v13 = 1;
      StatusIndication.StatusBufferSize = 4;
      goto LABEL_23;
    }
    HIDWORD(v15[0]) = 1;
    v8 = 1;
  }
  if ( GeneralStatus == 1073807372 )
  {
    HIDWORD(v15[0]) = 2;
    v8 = 1;
  }
  if ( !v8 )
    goto LABEL_24;
  StatusIndication.StatusCode = 1073807383;
  v10 = (int *)v15;
  StatusIndication.StatusBufferSize = 40;
LABEL_23:
  StatusIndication.StatusBuffer = v10;
LABEL_24:
  v11 = NewIrql[0];
  *((_QWORD *)MiniportHandle + 65) = 0LL;
  *((_DWORD *)MiniportHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v11);
  NdisMIndicateStatusEx(MiniportHandle, &StatusIndication);
LABEL_25:
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0xA5u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64)MiniportHandle, GeneralStatus);
}

/*
 * XREFs of UsbhQueryBusRelations @ 0x1C0012300
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0024E10 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     UsbhEtwGetHubInfo @ 0x1C000BDE0 (UsbhEtwGetHubInfo.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C000D0D4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028E40 (memmove.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhQueryBusRelations(__int64 a1, KSPIN_LOCK *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  IRP *v5; // rbx
  int ActivityIdIrp; // r15d
  __int64 v8; // r14
  __int128 *v9; // rdi
  __int64 v10; // rax
  const GUID *v11; // rdx
  unsigned int *Information; // rdi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  _DWORD *PoolWithTag; // r13
  __int64 v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // r12
  _QWORD *v20; // rdi
  __int64 **v21; // rdi
  __int64 v22; // rax
  unsigned int v23; // r14d
  __int128 *v24; // rbx
  __int64 v25; // rax
  const GUID *v26; // rdx
  NTSTATUS v28; // eax
  unsigned int v29; // r10d
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // r12
  __int64 *v33; // rax
  _QWORD *v34; // r12
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  PVOID *v37; // r13
  KIRQL v38; // [rsp+60h] [rbp-A0h]
  __int64 *v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+78h] [rbp-88h] BYREF
  int v42; // [rsp+80h] [rbp-80h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+90h] [rbp-70h] BYREF
  __int16 v45; // [rsp+94h] [rbp-6Ch]
  __int16 v46; // [rsp+96h] [rbp-6Ah]
  __int16 v47; // [rsp+98h] [rbp-68h]
  __int16 v48; // [rsp+9Ah] [rbp-66h]
  int v49; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v50; // [rsp+A4h] [rbp-5Ch]
  __int16 v51; // [rsp+A6h] [rbp-5Ah]
  __int16 v52; // [rsp+A8h] [rbp-58h]
  __int16 v53; // [rsp+AAh] [rbp-56h]
  _BYTE v54[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v55; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v56; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v57[40]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v58[40]; // [rsp+108h] [rbp+8h] BYREF

  SpinLock = a2;
  v4 = 0LL;
  v5 = (IRP *)a2;
  if ( a2 && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(a2, v54);
  else
    ActivityIdIrp = -1073741823;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  if ( ActivityIdIrp >= 0 )
    v9 = (__int128 *)v54;
  else
    v9 = 0LL;
  v41 = 0;
  v40 = 0;
  if ( dword_1C0067650 )
  {
    v10 = FdoExt(a1);
    v44 = *(_DWORD *)(v10 + 5192);
    v45 = *(_WORD *)(v10 + 5196);
    v46 = *(_DWORD *)(v10 + 5200);
    v47 = *(_WORD *)(v10 + 5228);
    v48 = *(_WORD *)(v10 + 5230);
    UsbhEtwGetHubInfo(v10, (__int64)v57);
    if ( v9 )
    {
      v11 = (const GUID *)&v55;
      v55 = *v9;
    }
    else
    {
      v11 = 0LL;
    }
    UsbhEtwWrite(
      &USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH,
      v11,
      (unsigned __int64)&v44,
      12LL,
      v57,
      36LL,
      &v40,
      4LL,
      &v41,
      4LL,
      0LL);
  }
  Log(a1, 2, 1363300913, (_DWORD)v5, *(int *)(v8 + 1360));
  Information = (unsigned int *)v5->IoStatus.Information;
  if ( Information )
    v4 = *Information;
  if ( *(_DWORD *)(v8 + 1360) == 5 )
  {
    v13 = FdoExt(a1);
    Usbh_SSH_Event(a1, 6u, v13 + 1384, v14);
    v15 = FdoExt(a1);
    PoolWithTag = ExAllocatePoolWithTag(
                    ExDefaultNonPagedPoolType,
                    8LL * ((unsigned int)v4 + *(unsigned __int8 *)(v15 + 2938) - 1) + 16,
                    0x42554855u);
    if ( PoolWithTag )
    {
      v17 = FdoExt(a1);
      memset(PoolWithTag, 0, 8LL * ((unsigned int)v4 + *(unsigned __int8 *)(v17 + 2938) - 1) + 16);
      if ( (_DWORD)v4 )
      {
        *PoolWithTag = v4;
        memmove(PoolWithTag + 4, Information + 2, 8LL * (unsigned int)v4);
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      Log(a1, 2, 1363300914, (_DWORD)v5, (__int64)PoolWithTag);
      v18 = FdoExt(a1) + 1384;
      *(_BYTE *)(v18 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      *(_DWORD *)(v18 + 136) = 1;
      *(_DWORD *)(v18 + 88) = 2018460752;
      *(_DWORD *)(v18 + 92) = 8;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v18;
      *(_QWORD *)(v18 + 24) = KeGetCurrentThread();
      v19 = *(_QWORD **)(v8 + 4808);
      *(_DWORD *)(v8 + 904) = 0;
      if ( v19 != (_QWORD *)(v8 + 4808) )
      {
        do
        {
          v20 = v19 - 164;
          Log(a1, 2, 1902277169, (_DWORD)v19 - 1312, 0LL);
          FdoExt(a1);
          if ( !v19[150] )
            v20[314] = MEMORY[0xFFFFF78000000014];
          ObfReferenceObject((PVOID)v20[105]);
          *(_QWORD *)&PoolWithTag[2 * (*PoolWithTag)++ + 2] = v20[105];
          SET_PDO_HWPNPSTATE(v20[105], 3, 8);
          v19 = (_QWORD *)*v19;
        }
        while ( v19 != (_QWORD *)(v8 + 4808) );
        v5 = (IRP *)SpinLock;
      }
      v21 = (__int64 **)(v8 + 4824);
      while ( *v21 != (__int64 *)v21 )
      {
        v30 = *v21;
        v31 = **v21;
        if ( (__int64 **)(*v21)[1] != v21 || *(__int64 **)(v31 + 8) != v30 )
          __fastfail(3u);
        *v21 = (__int64 *)v31;
        v32 = v30 - 164;
        *(_QWORD *)(v31 + 8) = v21;
        v39 = v30 - 164;
        Log(a1, 2, 1902277170, (_DWORD)v30 - 1312, 0LL);
        SET_PDO_HWPNPSTATE(v32[105], 5, 9);
        v33 = v39;
        v34 = v32 + 164;
        v39[165] = 0LL;
        *v34 = 0LL;
        SpinLock = (PKSPIN_LOCK)(v33 + 348);
        v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v33 + 348);
        if ( *((_DWORD *)v39 + 698) == 1 )
        {
          v35 = v39[105];
          *((_DWORD *)v39 + 698) = 0;
          USBD_RemoveDeviceFromGlobalList(v35);
        }
        KeReleaseSpinLock(SpinLock, v38);
        v36 = *(_QWORD **)(v8 + 4848);
        *v34 = v8 + 4840;
        v34[1] = v36;
        if ( *v36 != v8 + 4840 )
          __fastfail(3u);
        *v36 = v34;
        *(_QWORD *)(v8 + 4848) = v34;
      }
      v22 = FdoExt(a1);
      *(_DWORD *)(v22 + 1520) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(v22 + 1472) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v22 + 1516));
      ++v5->CurrentLocation;
      ++v5->Tail.Overlay.CurrentStackLocation;
      v5->IoStatus.Status = 0;
      v5->IoStatus.Information = (unsigned __int64)PoolWithTag;
      v23 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 1208), v5);
    }
    else
    {
      v23 = -1073741670;
      Log(a1, 2, 1363300915, (_DWORD)v5, 0LL);
      v5->IoStatus.Information = 0LL;
      if ( (_DWORD)v4 )
      {
        v37 = (PVOID *)(Information + 2);
        do
        {
          ObfDereferenceObject(*v37++);
          --v4;
        }
        while ( v4 );
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      v5->IoStatus.Status = -1073741670;
      IofCompleteRequest(v5, 0);
    }
    if ( ActivityIdIrp >= 0 )
      v24 = (__int128 *)v54;
    else
      v24 = 0LL;
    v42 = 0;
    LODWORD(v39) = 0;
    if ( dword_1C0067650 )
    {
      v25 = FdoExt(a1);
      v49 = *(_DWORD *)(v25 + 5192);
      v50 = *(_WORD *)(v25 + 5196);
      v51 = *(_DWORD *)(v25 + 5200);
      v52 = *(_WORD *)(v25 + 5228);
      v53 = *(_WORD *)(v25 + 5230);
      UsbhEtwGetHubInfo(v25, (__int64)v58);
      if ( v24 )
      {
        v26 = (const GUID *)&v56;
        v56 = *v24;
      }
      else
      {
        v26 = 0LL;
      }
      UsbhEtwWrite(
        &USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE,
        v26,
        (unsigned __int64)&v49,
        12LL,
        v58,
        36LL,
        &v39,
        4LL,
        &v42,
        4LL,
        0LL);
    }
    return v23;
  }
  else
  {
    ++v5->CurrentLocation;
    ++v5->Tail.Overlay.CurrentStackLocation;
    v5->IoStatus.Status = 0;
    v28 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 1208), v5);
    Log(a1, 2, 1363300897, 0, v28);
    return v29;
  }
}

/*
 * XREFs of UsbhQueryBusRelations @ 0x1C00158F0
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C00190C0 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 *     UsbhEtwGetHubInfo @ 0x1C0019020 (UsbhEtwGetHubInfo.c)
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C001E760 (SET_PDO_HWPNPSTATE.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0029E80 (memmove.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

__int64 __fastcall UsbhQueryBusRelations(PDEVICE_OBJECT DeviceObject, __int64 Irp, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  PIRP v5; // rbx
  int ActivityIdIrp; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r14
  __int128 *v12; // rdi
  _DWORD *v13; // rax
  const GUID *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned int *Information; // rdi
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *PoolWithTag; // r13
  _DWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _DWORD *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // r12
  _QWORD *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 **v40; // rdi
  _DWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // r14d
  __int128 *v46; // rbx
  _DWORD *v47; // rax
  const GUID *v48; // rdx
  NTSTATUS v50; // eax
  unsigned int v51; // r10d
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 *v54; // r12
  _QWORD *v55; // r12
  __int64 v56; // rcx
  _QWORD *v57; // rcx
  PVOID *v58; // r13
  KIRQL v59; // [rsp+60h] [rbp-A0h]
  __int64 *v60; // [rsp+68h] [rbp-98h]
  _BYTE v62[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v64; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v65[40]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v66[40]; // [rsp+108h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = (PIRP)Irp;
  if ( Irp && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(Irp, v62);
  else
    ActivityIdIrp = -1073741823;
  v11 = FdoExt((__int64)DeviceObject, Irp, a3, a4);
  if ( ActivityIdIrp >= 0 )
    v12 = (__int128 *)v62;
  else
    v12 = 0LL;
  if ( dword_1C0066650 )
  {
    v13 = FdoExt((__int64)DeviceObject, v8, v9, v10);
    UsbhEtwGetHubInfo(v13, v65);
    if ( v12 )
    {
      v14 = (const GUID *)&v63;
      v63 = *v12;
    }
    else
    {
      v14 = 0LL;
    }
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH, v14);
  }
  Log((__int64)DeviceObject, 2, 1363300913, (__int64)v5, (int)v11[340]);
  Information = (unsigned int *)v5->IoStatus.Information;
  v18 = (unsigned int)v11[340];
  if ( Information )
    v4 = *Information;
  if ( (_DWORD)v18 == 5 )
  {
    FdoExt((__int64)DeviceObject, v15, v18, v16);
    Usbh_SSH_Event(DeviceObject);
    v22 = FdoExt((__int64)DeviceObject, v19, v20, v21);
    PoolWithTag = ExAllocatePoolWithTag(
                    ExDefaultNonPagedPoolType,
                    8LL * ((unsigned int)v4 + *((unsigned __int8 *)v22 + 2938) - 1) + 16,
                    0x42554855u);
    if ( PoolWithTag )
    {
      v27 = FdoExt((__int64)DeviceObject, v23, v24, v25);
      memset(PoolWithTag, 0, 8LL * ((unsigned int)v4 + *((unsigned __int8 *)v27 + 2938) - 1) + 16);
      if ( (_DWORD)v4 )
      {
        *PoolWithTag = v4;
        memmove(PoolWithTag + 4, Information + 2, 8LL * (unsigned int)v4);
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      Log((__int64)DeviceObject, 2, 1363300914, (__int64)v5, (__int64)PoolWithTag);
      v31 = FdoExt((__int64)DeviceObject, v28, v29, v30) + 346;
      *((_BYTE *)v31 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v31[34] = 1;
      v31[22] = 2018460752;
      v31[23] = 8;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v31;
      *((_QWORD *)v31 + 3) = KeGetCurrentThread();
      v35 = (_QWORD *)*((_QWORD *)v11 + 601);
      v11[226] = 0;
      if ( v35 != (_QWORD *)(v11 + 1202) )
      {
        do
        {
          v36 = v35 - 164;
          Log((__int64)DeviceObject, 2, 1902277169, (__int64)(v35 - 164), 0LL);
          FdoExt((__int64)DeviceObject, v37, v38, v39);
          if ( !v35[149] )
            v36[313] = MEMORY[0xFFFFF78000000014];
          ObfReferenceObject((PVOID)v36[105]);
          *(_QWORD *)&PoolWithTag[2 * (*PoolWithTag)++ + 2] = v36[105];
          SET_PDO_HWPNPSTATE(v36[105], 3LL, 8LL);
          v35 = (_QWORD *)*v35;
        }
        while ( v35 != (_QWORD *)(v11 + 1202) );
        v5 = (PIRP)Irp;
      }
      v40 = (__int64 **)(v11 + 1206);
      while ( *v40 != (__int64 *)v40 )
      {
        v52 = *v40;
        v53 = **v40;
        if ( (__int64 **)(*v40)[1] != v40 || *(__int64 **)(v53 + 8) != v52 )
          __fastfail(3u);
        *v40 = (__int64 *)v53;
        v54 = v52 - 164;
        *(_QWORD *)(v53 + 8) = v40;
        v60 = v52 - 164;
        Log((__int64)DeviceObject, 2, 1902277170, (__int64)(v52 - 164), 0LL);
        SET_PDO_HWPNPSTATE(v54[105], 5LL, 9LL);
        v55 = v54 + 164;
        v60[165] = 0LL;
        *v55 = 0LL;
        v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v60 + 347);
        if ( *((_DWORD *)v60 + 696) == 1 )
        {
          v56 = v60[105];
          *((_DWORD *)v60 + 696) = 0;
          USBD_RemoveDeviceFromGlobalList(v56);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v60 + 347, v59);
        v57 = (_QWORD *)*((_QWORD *)v11 + 606);
        *v55 = v11 + 1210;
        v55[1] = v57;
        if ( (_DWORD *)*v57 != v11 + 1210 )
          __fastfail(3u);
        *v57 = v55;
        *((_QWORD *)v11 + 606) = v55;
      }
      v41 = FdoExt((__int64)DeviceObject, v32, v33, v34);
      v41[380] = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      v41[368] = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *((_BYTE *)v41 + 1516));
      ++v5->CurrentLocation;
      ++v5->Tail.Overlay.CurrentStackLocation;
      v5->IoStatus.Status = 0;
      v5->IoStatus.Information = (unsigned __int64)PoolWithTag;
      v45 = IofCallDriver(*((PDEVICE_OBJECT *)v11 + 151), v5);
    }
    else
    {
      v45 = -1073741670;
      Log((__int64)DeviceObject, 2, 1363300915, (__int64)v5, 0LL);
      v5->IoStatus.Information = 0LL;
      if ( (_DWORD)v4 )
      {
        v58 = (PVOID *)(Information + 2);
        do
        {
          ObfDereferenceObject(*v58++);
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
      v46 = (__int128 *)v62;
    else
      v46 = 0LL;
    if ( dword_1C0066650 )
    {
      v47 = FdoExt((__int64)DeviceObject, v42, v43, v44);
      UsbhEtwGetHubInfo(v47, v66);
      if ( v46 )
      {
        v48 = (const GUID *)&v64;
        v64 = *v46;
      }
      else
      {
        v48 = 0LL;
      }
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE, v48);
    }
    return v45;
  }
  else
  {
    ++v5->CurrentLocation;
    ++v5->Tail.Overlay.CurrentStackLocation;
    v5->IoStatus.Status = 0;
    v50 = IofCallDriver(*((PDEVICE_OBJECT *)v11 + 151), v5);
    Log((__int64)DeviceObject, 2, 1363300897, 0LL, v50);
    return v51;
  }
}

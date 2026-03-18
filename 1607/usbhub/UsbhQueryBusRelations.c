/*
 * XREFs of UsbhQueryBusRelations @ 0x1C0017A30
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C001A1A0 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C001A150 (SET_PDO_HWPNPSTATE.c)
 *     UsbhEtwWrite @ 0x1C001D860 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001DB80 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00295C0 (memmove.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

__int64 __fastcall UsbhQueryBusRelations(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  PIRP v5; // rsi
  int ActivityIdIrp; // r15d
  int *DeviceExtension; // rbx
  __int128 *v9; // rdx
  const GUID *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // r10d
  unsigned int *Information; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *PoolWithTag; // r12
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _DWORD *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int *v32; // r13
  int *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 **v37; // rdi
  _DWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // r12d
  __int128 *v43; // rbx
  _DWORD *v44; // rax
  const GUID *v45; // rdx
  NTSTATUS v47; // eax
  unsigned int v48; // r10d
  __int128 v49; // xmm0
  __int64 *v50; // rax
  __int64 v51; // rcx
  __int64 *v52; // r13
  _QWORD *v53; // r13
  __int64 v54; // rcx
  void **v55; // rcx
  PVOID *v56; // rbx
  KIRQL v57; // [rsp+60h] [rbp-A0h]
  __int64 *v58; // [rsp+68h] [rbp-98h]
  _BYTE v60[16]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v61; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v62; // [rsp+F8h] [rbp-8h] BYREF
  char v63[40]; // [rsp+108h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = Irp;
  if ( Irp && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(Irp, v60);
  else
    ActivityIdIrp = -1073741823;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = (int *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, a3, a4);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, a3, a4);
  if ( ActivityIdIrp >= 0 )
    v9 = (__int128 *)v60;
  else
    v9 = 0LL;
  if ( dword_1C0067650 )
  {
    if ( *DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension, 1LL, a4);
    if ( v9 )
    {
      v49 = *v9;
      v10 = (const GUID *)&v61;
      v61 = v49;
    }
    else
    {
      v10 = 0LL;
    }
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH, v10);
  }
  Log((__int64)DeviceObject, 2, 1363300913, (__int64)v5, DeviceExtension[340]);
  Information = (unsigned int *)v5->IoStatus.Information;
  v15 = (unsigned int)DeviceExtension[340];
  if ( Information )
    v4 = *Information;
  if ( (_DWORD)v15 == 5 )
  {
    FdoExt((__int64)DeviceObject, v11, v15, v12);
    Usbh_SSH_Event(DeviceObject);
    v19 = FdoExt((__int64)DeviceObject, v16, v17, v18);
    PoolWithTag = ExAllocatePoolWithTag(
                    ExDefaultNonPagedPoolType,
                    8LL * ((unsigned int)v4 + *((unsigned __int8 *)v19 + 2938) - 1) + 16,
                    0x42554855u);
    if ( PoolWithTag )
    {
      v24 = FdoExt((__int64)DeviceObject, v20, v21, v22);
      memset(PoolWithTag, 0, 8LL * ((unsigned int)v4 + *((unsigned __int8 *)v24 + 2938) - 1) + 16);
      if ( (_DWORD)v4 )
      {
        *PoolWithTag = v4;
        memmove(PoolWithTag + 4, Information + 2, 8LL * (unsigned int)v4);
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      Log((__int64)DeviceObject, 2, 1363300914, (__int64)v5, (__int64)PoolWithTag);
      v28 = FdoExt((__int64)DeviceObject, v25, v26, v27) + 346;
      *((_BYTE *)v28 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v28[34] = 1;
      v28[22] = 2018460752;
      v28[23] = 8;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v28;
      *((_QWORD *)v28 + 3) = KeGetCurrentThread();
      v32 = (int *)*((_QWORD *)DeviceExtension + 601);
      DeviceExtension[226] = 0;
      if ( v32 != DeviceExtension + 1202 )
      {
        do
        {
          v33 = v32 - 328;
          Log((__int64)DeviceObject, 2, 1902277169, (__int64)(v32 - 328), 0LL);
          FdoExt((__int64)DeviceObject, v34, v35, v36);
          if ( !*((_QWORD *)v32 + 150) )
            *((_QWORD *)v33 + 314) = MEMORY[0xFFFFF78000000014];
          ObfReferenceObject(*((PVOID *)v33 + 105));
          *(_QWORD *)&PoolWithTag[2 * (*PoolWithTag)++ + 2] = *((_QWORD *)v33 + 105);
          SET_PDO_HWPNPSTATE(*((_QWORD *)v33 + 105), 3LL, 8LL);
          v32 = *(int **)v32;
        }
        while ( v32 != DeviceExtension + 1202 );
        v5 = Irp;
      }
      v37 = (__int64 **)(DeviceExtension + 1206);
      while ( *v37 != (__int64 *)v37 )
      {
        v50 = *v37;
        v51 = **v37;
        if ( (__int64 **)(*v37)[1] != v37 || *(__int64 **)(v51 + 8) != v50 )
          __fastfail(3u);
        *v37 = (__int64 *)v51;
        v52 = v50 - 164;
        *(_QWORD *)(v51 + 8) = v37;
        v58 = v50 - 164;
        Log((__int64)DeviceObject, 2, 1902277170, (__int64)(v50 - 164), 0LL);
        SET_PDO_HWPNPSTATE(v52[105], 5LL, 9LL);
        v53 = v52 + 164;
        v58[165] = 0LL;
        *v53 = 0LL;
        v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v58 + 348);
        if ( *((_DWORD *)v58 + 698) == 1 )
        {
          v54 = v58[105];
          *((_DWORD *)v58 + 698) = 0;
          USBD_RemoveDeviceFromGlobalList(v54);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v58 + 348, v57);
        v55 = (void **)*((_QWORD *)DeviceExtension + 606);
        if ( *v55 != DeviceExtension + 1210 )
          __fastfail(3u);
        *v53 = DeviceExtension + 1210;
        v53[1] = v55;
        *v55 = v53;
        *((_QWORD *)DeviceExtension + 606) = v53;
      }
      v38 = FdoExt((__int64)DeviceObject, v29, v30, v31);
      v38[380] = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      v38[368] = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *((_BYTE *)v38 + 1516));
      ++v5->CurrentLocation;
      ++v5->Tail.Overlay.CurrentStackLocation;
      v5->IoStatus.Status = 0;
      v5->IoStatus.Information = (unsigned __int64)PoolWithTag;
      v42 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), v5);
    }
    else
    {
      v42 = -1073741670;
      Log((__int64)DeviceObject, 2, 1363300915, (__int64)v5, 0LL);
      v5->IoStatus.Information = 0LL;
      if ( (_DWORD)v4 )
      {
        v56 = (PVOID *)(Information + 2);
        do
        {
          ObfDereferenceObject(*v56++);
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
      v43 = (__int128 *)v60;
    else
      v43 = 0LL;
    if ( dword_1C0067650 )
    {
      v44 = FdoExt((__int64)DeviceObject, v39, v40, v41);
      UsbhEtwGetHubInfo(v44, v63);
      if ( v43 )
      {
        v45 = (const GUID *)&v62;
        v62 = *v43;
      }
      else
      {
        v45 = 0LL;
      }
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE, v45);
    }
    return v42;
  }
  else
  {
    ++v5->CurrentLocation;
    ++v5->Tail.Overlay.CurrentStackLocation;
    v5->IoStatus.Status = v13;
    v47 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), v5);
    Log((__int64)DeviceObject, 2, 1363300897, 0LL, v47);
    return v48;
  }
}

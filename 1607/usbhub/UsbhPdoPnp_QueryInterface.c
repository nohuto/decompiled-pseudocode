/*
 * XREFs of UsbhPdoPnp_QueryInterface @ 0x1C0016910
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhBusIfLocationReference @ 0x1C001A2B0 (UsbhBusIfLocationReference.c)
 *     UsbhUnlatchPdo @ 0x1C001F8F0 (UsbhUnlatchPdo.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0020430 (UsbhRefPdoDeviceHandle.c)
 *     UsbhBusifGetSSHub @ 0x1C0027AD8 (UsbhBusifGetSSHub.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryInterface(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int Status; // esi
  unsigned __int16 v13; // si
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  KIRQL v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  KIRQL v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  _DWORD *v35; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  SIZE_T v41; // rax
  __int64 v42; // rcx
  _LARGE_INTEGER v43; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r13
  __int64 v49; // rax
  KSPIN_LOCK *v50; // r12
  KIRQL v51; // al
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // r10
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 (__fastcall *v63)(_QWORD, __int64, IRP *, __int64); // rax
  int v64; // ecx
  __int64 v65; // rsi
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // r9
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rbx
  __int64 v74; // rax
  KSPIN_LOCK *v75; // r12
  KIRQL v76; // al
  __int64 v77; // r8
  __int64 v78; // r9
  __int16 v79; // cx
  KIRQL v80; // r13
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx
  void (__fastcall *v86)(_QWORD, __int64, IRP *, __int64); // rax
  __int64 v87; // r8
  __int64 v88; // r8
  __int64 v89; // rdx
  unsigned int SSHub; // r12d
  __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  KIRQL v96; // r14
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rsi
  _QWORD *v100; // rdi
  _QWORD *v101; // rdx
  _QWORD *v102; // r8
  __int64 v103; // r9
  __int64 v104; // rcx
  _QWORD *v105; // rdx
  _QWORD *v106; // rcx
  _DWORD *v107; // rcx
  _IO_STACK_LOCATION *v108; // rax
  _LARGE_INTEGER ByteOffset; // rax
  __int64 v110; // rdi
  KIRQL v111; // r14
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rsi
  _QWORD *v115; // rbx
  _QWORD *v116; // rdx
  _QWORD *v117; // r8
  __int64 v118; // r9
  __int64 v119; // rcx
  _QWORD *v120; // rdx
  _QWORD *v121; // rcx
  __int64 v122; // rdx
  unsigned int v123; // ebx
  int v124; // eax
  __int64 v125; // rax
  int v126; // eax
  unsigned int v127; // r10d
  int v128; // r10d
  int v129; // eax
  int v130; // [rsp+48h] [rbp-50h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+50h] [rbp-48h]
  KIRQL v132; // [rsp+A0h] [rbp+8h]
  unsigned int v133; // [rsp+B8h] [rbp+20h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v6 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v7 = *(_QWORD *)(v6 + 1176);
  v8 = UsbhLogMask;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 812018033;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = a1;
        v8 = UsbhLogMask;
      }
    }
  }
  v11 = *(_QWORD *)(v6 + 1176);
  Status = a2->IoStatus.Status;
  v133 = Status;
  if ( !v11 )
    goto LABEL_206;
  v13 = *(_WORD *)(v6 + 1420);
  v14 = 0LL;
  if ( (v8 & 0x100) != 0 )
  {
    v15 = *(_QWORD *)(v11 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 1329877100;
      *(_QWORD *)(v16 + 16) = v13;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 24) = 1364543814LL;
    }
  }
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v19 = (unsigned int)UsbhLogMask;
  v20 = v17;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v21 = *(_QWORD *)(v11 + 64);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = 1413771367;
      *(_QWORD *)(v22 + 16) = v13;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 24) = 0LL;
      v19 = (unsigned int)UsbhLogMask;
    }
  }
  if ( v13 )
  {
    v23 = *(_QWORD *)(v11 + 64);
    if ( !v23 )
      UsbhTrapFatal_Dbg(v11, 0LL, v18, v19);
    if ( *(_DWORD *)v23 != 541218120 )
      UsbhTrapFatal_Dbg(v11, v23, v18, v19);
    if ( v13 <= *(unsigned __int8 *)(v23 + 2938) )
    {
      v24 = *(_QWORD *)(v23 + 3056);
      if ( v24 )
      {
        v25 = v24 + 2928LL * (v13 - 1);
        if ( (v19 & 8) != 0 )
        {
          v26 = *(_QWORD *)(v23 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
          *(_DWORD *)v26 = 1044672615;
          *(_QWORD *)(v26 + 16) = v13;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 24) = v25;
        }
        if ( v25 )
        {
          v14 = *(_QWORD *)(v25 + 392);
          if ( v14 )
          {
            v27 = *(_QWORD *)(v14 + 64);
            if ( !v27 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v25 + 392), 0LL, v25, v19);
            if ( *(_DWORD *)v27 != 1329877064 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v25 + 392), *(_QWORD *)(v14 + 64), v25, v19);
            PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
            if ( PoolWithTag )
            {
              *PoolWithTag = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[2] = 0LL;
              PoolWithTag[3] = 0LL;
              *(_DWORD *)PoolWithTag = 1668571500;
              PoolWithTag[4] = v14;
              *((_DWORD *)PoolWithTag + 6) = 1364543814;
              PoolWithTag[5] = a2;
              v29 = PoolWithTag + 1;
              v30 = *(_QWORD **)(v27 + 1272);
              if ( *v30 != v27 + 1264 )
                __fastfail(3u);
              *v29 = v27 + 1264;
              v29[1] = v30;
              *v30 = v29;
              *(_QWORD *)(v27 + 1272) = v29;
            }
            else
            {
              ++*(_DWORD *)(v27 + 1280);
            }
          }
        }
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
  if ( !v14 )
  {
    Status = v133;
LABEL_206:
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 0);
    return Status;
  }
  v33 = *(_QWORD *)(v6 + 1176);
  if ( !v33 )
    UsbhTrapFatal_Dbg(0LL, 0LL, v31, v32);
  v34 = *(_QWORD *)(v33 + 64);
  if ( !v34 )
    UsbhTrapFatal_Dbg(v33, 0LL, v31, v32);
  if ( *(_DWORD *)v34 != 541218120 )
    UsbhTrapFatal_Dbg(v33, *(_QWORD *)(v33 + 64), v31, v32);
  DeviceObject = *(struct _DEVICE_OBJECT **)(v34 + 1216);
  if ( !DeviceObject )
    goto LABEL_204;
  v35 = *(_DWORD **)(a1 + 64);
  if ( !v35 )
    UsbhTrapFatal_Dbg(a1, 0LL, v31, v32);
  if ( *v35 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v31, v32);
  if ( v35[281] != 3 )
  {
LABEL_204:
    Log(v33, 256, 1902522657, (__int64)a2, a1);
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1176), v14, a2, 1364543814LL);
    a2->IoStatus.Status = v133;
    IofCompleteRequest(a2, 0);
    return v133;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_SS_GUID,
         0x10uLL) == 16 )
  {
    Log(*(_QWORD *)(v6 + 1176), 256, 1902728019, (__int64)a2, a1);
    SSHub = UsbhBusifGetSSHub(*(_QWORD *)(v6 + 1176), v122, a2);
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1176), v14, a2, 1364543814LL);
    a2->IoStatus.Status = SSHub;
    IofCompleteRequest(a2, 0);
    return SSHub;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    v107 = *(_DWORD **)(a1 + 64);
    if ( !v107 )
      UsbhTrapFatal_Dbg(a1, 0LL, v37, v38);
    if ( *v107 != 1329877064 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v37, v38);
    v108 = a2->Tail.Overlay.CurrentStackLocation;
    if ( v108->Parameters.QueryInterface.Size < 0x28u )
    {
      SSHub = -1073741823;
    }
    else
    {
      ByteOffset = v108->Parameters.Read.ByteOffset;
      SSHub = 0;
      *(_QWORD *)(ByteOffset.QuadPart + 16) = UsbhBusIfLocationReference;
      *(_QWORD *)(ByteOffset.QuadPart + 24) = UsbhBusIfLocationDereference;
      *(_QWORD *)(ByteOffset.QuadPart + 32) = UsbhBusIfLocationGetLocationStrings;
      *(_DWORD *)ByteOffset.QuadPart = 65576;
      *(_QWORD *)(ByteOffset.QuadPart + 8) = v107;
      UsbhBusIfLocationReference();
    }
    a2->IoStatus.Status = SSHub;
    a2->IoStatus.Information = 0LL;
    v110 = *(_QWORD *)(v6 + 1176);
    Log(v110, 256, 1968194639, v14, 1364543814LL);
    v111 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    Log(v110, 256, 1685218896, v14, 1364543814LL);
    v114 = *(_QWORD *)(v14 + 64);
    if ( !v114 )
      UsbhTrapFatal_Dbg(v14, 0LL, v112, v113);
    if ( *(_DWORD *)v114 != 1329877064 )
      UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64), v112, v113);
    v115 = (_QWORD *)(v114 + 1264);
    v116 = *(_QWORD **)(v114 + 1264);
    if ( v116 == (_QWORD *)(v114 + 1264) )
    {
LABEL_169:
      v124 = *(_DWORD *)(v114 + 1280);
      if ( v124 )
        *(_DWORD *)(v114 + 1280) = v124 - 1;
    }
    else
    {
      while ( 1 )
      {
        v117 = v116 - 1;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v110 )
          {
            v118 = *(_QWORD *)(v110 + 64);
            if ( v118 )
            {
              v119 = *(_QWORD *)(v118 + 888)
                   + 32LL
                   * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v118 + 880)) & *(_DWORD *)(v118 + 884));
              *(_DWORD *)v119 = 1064591724;
              *(_QWORD *)(v119 + 8) = 0LL;
              *(_QWORD *)(v119 + 16) = v114;
              *(_QWORD *)(v119 + 24) = 1364543814LL;
            }
          }
        }
        if ( *((_DWORD *)v117 + 6) == 1364543814 && (IRP *)v117[5] == a2 )
          break;
        v116 = (_QWORD *)*v116;
        if ( v116 == v115 )
          goto LABEL_169;
      }
      v120 = (_QWORD *)*v116;
      v121 = (_QWORD *)v117[2];
      if ( (_QWORD *)v120[1] != v117 + 1 || (_QWORD *)*v121 != v117 + 1 )
        __fastfail(3u);
      *v121 = v120;
      v120[1] = v121;
      ExFreePoolWithTag(v117, 0);
    }
    if ( (_QWORD *)*v115 == v115 && !*(_DWORD *)(v114 + 1280) )
      KeSetEvent((PRKEVENT)(v114 + 1288), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v111);
    a2->IoStatus.Status = SSHub;
    IofCompleteRequest(a2, 0);
    return SSHub;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_USBDI_GUID, 0x10uLL) == 16
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_HUB_GUID, 0x10uLL) == 16
    || RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_MINIDUMP_GUID,
         0x10uLL) == 16
    || RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_FORWARD_PROGRESS_GUID,
         0x10uLL) == 16 )
  {
    v45 = *(_QWORD *)(v6 + 1176);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( v45 )
      {
        v46 = *(_QWORD *)(v45 + 64);
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
          *(_DWORD *)v47 = 845572465;
          *(_QWORD *)(v47 + 8) = 0LL;
          *(_QWORD *)(v47 + 16) = a2;
          *(_QWORD *)(v47 + 24) = a1;
        }
      }
    }
    v48 = *(_QWORD *)(v6 + 1176);
    if ( !v48 )
      UsbhTrapFatal_Dbg(0LL, 0LL, v39, v40);
    v49 = *(_QWORD *)(v48 + 64);
    if ( !v49 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v6 + 1176), 0LL, v39, v40);
    if ( *(_DWORD *)v49 != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v6 + 1176), *(_QWORD *)(v48 + 64), v39, v40);
    v50 = (KSPIN_LOCK *)(v49 + 3720);
    v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v49 + 3720));
    v54 = *(_QWORD *)(a1 + 64);
    v132 = v51;
    if ( !v54 )
      UsbhTrapFatal_Dbg(a1, 0LL, v52, v53);
    if ( *(_DWORD *)v54 != 1329877064 )
      UsbhTrapFatal_Dbg(a1, v54, v52, v53);
    v55 = *(int *)(v54 + 1144);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v56 = *(_QWORD *)(v48 + 64);
      if ( v56 )
      {
        v57 = *(_QWORD *)(v56 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v56 + 880)) & *(_DWORD *)(v56 + 884));
        *(_DWORD *)v57 = 824923716;
        *(_QWORD *)(v57 + 8) = 0LL;
        *(_QWORD *)(v57 + 16) = a1;
        *(_QWORD *)(v57 + 24) = v55;
      }
    }
    v58 = *(_DWORD *)(v54 + 1144);
    if ( v58 != 2 )
    {
      if ( v58 <= 1 )
        Log(v48, 256, 1146497825, a1, *(int *)(v54 + 1144));
      v65 = 0LL;
      goto LABEL_76;
    }
    v59 = *(_QWORD *)(v54 + 1152);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v60 = *(_QWORD *)(v48 + 64);
      if ( v60 )
      {
        v61 = *(_QWORD *)(v60 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v60 + 880)) & *(_DWORD *)(v60 + 884));
        *(_DWORD *)v61 = 724260420;
        *(_QWORD *)(v61 + 8) = 0LL;
        *(_QWORD *)(v61 + 16) = 1212442225LL;
        *(_QWORD *)(v61 + 24) = v59;
      }
    }
    v62 = *(_QWORD *)(v48 + 64);
    if ( !v62 )
      UsbhTrapFatal_Dbg(v48, 0LL, v55, v53);
    if ( *(_DWORD *)v62 != 541218120 )
      UsbhTrapFatal_Dbg(v48, *(_QWORD *)(v48 + 64), v55, v53);
    v63 = *(__int64 (__fastcall **)(_QWORD, __int64, IRP *, __int64))(v62 + 4464);
    if ( v63 )
    {
      v64 = v63(*(_QWORD *)(v62 + 4232), v59, a2, 1212442225LL);
      if ( v64 >= 0 )
      {
        v65 = *(_QWORD *)(v54 + 1152);
LABEL_73:
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v66 = *(_QWORD *)(v48 + 64);
          if ( v66 )
          {
            v67 = *(_QWORD *)(v66 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v66 + 880)) & *(_DWORD *)(v66 + 884));
            *(_DWORD *)v67 = 841700932;
            *(_QWORD *)(v67 + 16) = v64;
            *(_QWORD *)(v67 + 8) = 0LL;
            *(_QWORD *)(v67 + 24) = v65;
          }
        }
LABEL_76:
        KeReleaseSpinLock(v50, v132);
        if ( !v65 )
        {
          v125 = PdoExt(a1);
          v126 = UsbhSyncResetDeviceInternal(*(PDEVICE_OBJECT *)(v6 + 1176), v125 + 944, a1);
          Log(*(_QWORD *)(v6 + 1176), 256, 1902732882, (__int64)a2, v126);
          if ( (v127 & 0xC0000000) == 0xC0000000 )
          {
            if ( !(unsigned __int8)Usb_Disconnected(v127) )
            {
              LOBYTE(v130) = 0;
              UsbhException(
                *(_QWORD *)(v6 + 1176),
                *(unsigned __int16 *)(v6 + 1420),
                121,
                0,
                0,
                v128,
                -1,
                usbfile_pdo_c,
                535,
                v130);
            }
            a2->IoStatus.Status = v133;
            IofCompleteRequest(a2, 0);
            UsbhUnlatchPdo(*(_QWORD *)(v6 + 1176), v14, a2, 1364543814LL);
            return v133;
          }
          v65 = UsbhRefPdoDeviceHandle(*(_QWORD *)(v6 + 1176), a1, a2, 1212442225LL);
          Log(*(_QWORD *)(v6 + 1176), 256, 1902732872, *(_QWORD *)(v6 + 1152), a1);
          CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v65;
        }
        v69 = *(_QWORD *)(v6 + 1152);
        v70 = *(_QWORD *)(v6 + 1176);
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v70 )
          {
            v71 = *(_QWORD *)(v70 + 64);
            if ( v71 )
            {
              v72 = *(_QWORD *)(v71 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v71 + 880)) & *(_DWORD *)(v71 + 884));
              *(_DWORD *)v72 = 1214671217;
              *(_QWORD *)(v72 + 8) = 0LL;
              *(_QWORD *)(v72 + 16) = v69;
              *(_QWORD *)(v72 + 24) = a1;
            }
          }
        }
        CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v65;
        if ( v65 )
        {
          v73 = *(_QWORD *)(v6 + 1176);
          if ( !v73 )
            UsbhTrapFatal_Dbg(0LL, 0LL, v69, v68);
          v74 = *(_QWORD *)(v73 + 64);
          if ( !v74 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v6 + 1176), 0LL, v69, v68);
          if ( *(_DWORD *)v74 != 541218120 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v6 + 1176), *(_QWORD *)(v73 + 64), v69, v68);
          v75 = (KSPIN_LOCK *)(v74 + 3720);
          v76 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v74 + 3720));
          v79 = UsbhLogMask;
          v80 = v76;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            v81 = *(_QWORD *)(v73 + 64);
            if ( v81 )
            {
              v82 = *(_QWORD *)(v81 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v81 + 880)) & *(_DWORD *)(v81 + 884));
              *(_DWORD *)v82 = 825054788;
              *(_QWORD *)(v82 + 8) = 0LL;
              *(_QWORD *)(v82 + 16) = v65;
              *(_QWORD *)(v82 + 24) = a2;
              v79 = UsbhLogMask;
            }
            if ( (v79 & 0x100) != 0 )
            {
              v83 = *(_QWORD *)(v73 + 64);
              if ( v83 )
              {
                v84 = *(_QWORD *)(v83 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v83 + 880)) & *(_DWORD *)(v83 + 884));
                *(_DWORD *)v84 = 841832004;
                *(_QWORD *)(v84 + 8) = 0LL;
                *(_QWORD *)(v84 + 16) = v65;
                *(_QWORD *)(v84 + 24) = 1212442225LL;
              }
            }
          }
          v85 = *(_QWORD *)(v73 + 64);
          if ( !v85 )
            UsbhTrapFatal_Dbg(v73, 0LL, v77, v78);
          if ( *(_DWORD *)v85 != 541218120 )
            UsbhTrapFatal_Dbg(v73, *(_QWORD *)(v73 + 64), v77, v78);
          v86 = *(void (__fastcall **)(_QWORD, __int64, IRP *, __int64))(v85 + 4472);
          if ( v86 )
            v86(*(_QWORD *)(v85 + 4232), v65, a2, 1212442225LL);
          KeReleaseSpinLock(v75, v80);
        }
        v87 = *(_QWORD *)(v6 + 1176);
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v87 )
          {
            v88 = *(_QWORD *)(v87 + 64);
            if ( v88 )
            {
              v89 = *(_QWORD *)(v88 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v88 + 880)) & *(_DWORD *)(v88 + 884));
              *(_DWORD *)v89 = 862349681;
              *(_QWORD *)(v89 + 8) = 0LL;
              *(_QWORD *)(v89 + 16) = a2;
              *(_QWORD *)(v89 + 24) = a1;
            }
          }
        }
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        SSHub = IofCallDriver(DeviceObject, a2);
        v91 = *(_QWORD *)(v6 + 1176);
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v91 )
          {
            v92 = *(_QWORD *)(v91 + 64);
            if ( v92 )
            {
              v93 = *(_QWORD *)(v92 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v92 + 880)) & *(_DWORD *)(v92 + 884));
              *(_DWORD *)v93 = 1329877109;
              *(_QWORD *)(v93 + 8) = 0LL;
              *(_QWORD *)(v93 + 16) = v14;
              *(_QWORD *)(v93 + 24) = 1364543814LL;
            }
          }
        }
        v96 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v91 )
          {
            v97 = *(_QWORD *)(v91 + 64);
            if ( v97 )
            {
              v98 = *(_QWORD *)(v97 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v97 + 880)) & *(_DWORD *)(v97 + 884));
              *(_DWORD *)v98 = 1348891236;
              *(_QWORD *)(v98 + 8) = 0LL;
              *(_QWORD *)(v98 + 16) = v14;
              *(_QWORD *)(v98 + 24) = 1364543814LL;
            }
          }
        }
        v99 = *(_QWORD *)(v14 + 64);
        if ( !v99 )
          UsbhTrapFatal_Dbg(v14, 0LL, v94, v95);
        if ( *(_DWORD *)v99 != 1329877064 )
          UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64), v94, v95);
        v100 = (_QWORD *)(v99 + 1264);
        v101 = *(_QWORD **)(v99 + 1264);
        if ( v101 == (_QWORD *)(v99 + 1264) )
        {
LABEL_200:
          v129 = *(_DWORD *)(v99 + 1280);
          if ( v129 )
            *(_DWORD *)(v99 + 1280) = v129 - 1;
        }
        else
        {
          while ( 1 )
          {
            v102 = v101 - 1;
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              if ( v91 )
              {
                v103 = *(_QWORD *)(v91 + 64);
                if ( v103 )
                {
                  v104 = *(_QWORD *)(v103 + 888)
                       + 32LL
                       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v103 + 880)) & *(_DWORD *)(v103 + 884));
                  *(_DWORD *)v104 = 1064591724;
                  *(_QWORD *)(v104 + 8) = 0LL;
                  *(_QWORD *)(v104 + 16) = v99;
                  *(_QWORD *)(v104 + 24) = 1364543814LL;
                }
              }
            }
            if ( *((_DWORD *)v102 + 6) == 1364543814 && (IRP *)v102[5] == a2 )
              break;
            v101 = (_QWORD *)*v101;
            if ( v101 == v100 )
              goto LABEL_200;
          }
          v105 = (_QWORD *)*v101;
          v106 = (_QWORD *)v102[2];
          if ( (_QWORD *)v105[1] != v102 + 1 || (_QWORD *)*v106 != v102 + 1 )
            __fastfail(3u);
          *v106 = v105;
          v105[1] = v106;
          ExFreePoolWithTag(v102, 0);
        }
        if ( (_QWORD *)*v100 == v100 && !*(_DWORD *)(v99 + 1280) )
          KeSetEvent((PRKEVENT)(v99 + 1288), 0, 0);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v96);
        return SSHub;
      }
    }
    else
    {
      v64 = -1073741822;
    }
    v65 = 0LL;
    goto LABEL_73;
  }
  v41 = RtlCompareMemory(
          CurrentStackLocation->Parameters.Create.SecurityContext,
          &GUID_D3COLD_SUPPORT_INTERFACE,
          0x10uLL);
  v42 = *(_QWORD *)(v6 + 1176);
  if ( v41 != 16 )
  {
    Log(v42, 256, 1902732852, (__int64)a2, a1);
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1176), v14, a2, 1364543814LL);
    SSHub = v133;
    a2->IoStatus.Status = v133;
    IofCompleteRequest(a2, 0);
    return SSHub;
  }
  Log(v42, 256, 1902732853, (__int64)a2, a1);
  if ( CurrentStackLocation->Parameters.CreatePipe.Parameters != (_NAMED_PIPE_CREATE_PARAMETERS *)v6
    && CurrentStackLocation->Parameters.QueryInterface.Size == 72
    && CurrentStackLocation->Parameters.QueryInterface.Version == 1 )
  {
    v43 = CurrentStackLocation->Parameters.Read.ByteOffset;
    if ( a2->IoStatus.Status )
    {
      *(_DWORD *)v43.QuadPart = 65608;
      goto LABEL_51;
    }
    if ( *(_WORD *)v43.QuadPart == 72 && *(_WORD *)(v43.QuadPart + 2) == 1 )
    {
      *(_OWORD *)(v6 + 2944) = *(_OWORD *)v43.QuadPart;
      *(_OWORD *)(v6 + 2960) = *(_OWORD *)(v43.QuadPart + 16);
      *(_OWORD *)(v6 + 2976) = *(_OWORD *)(v43.QuadPart + 32);
      *(_OWORD *)(v6 + 2992) = *(_OWORD *)(v43.QuadPart + 48);
      *(_QWORD *)(v6 + 3008) = *(_QWORD *)(v43.QuadPart + 64);
LABEL_51:
      *(_QWORD *)(v43.QuadPart + 8) = v6;
      *(_QWORD *)(v43.QuadPart + 32) = UsbhD3ColdSupportInterfaceSetD3ColdSupport;
      *(_QWORD *)(v43.QuadPart + 40) = UsbhD3ColdSupportInterfaceGetIdleWakeInfo;
      *(_QWORD *)(v43.QuadPart + 24) = UsbhD3ColdSupportInterfaceDereference;
      *(_QWORD *)(v43.QuadPart + 16) = UsbhD3ColdSupportInterfaceReference;
      *(_QWORD *)(v43.QuadPart + 48) = UsbhD3ColdSupportInterfaceGetD3ColdCapability;
      *(_QWORD *)(v43.QuadPart + 56) = UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport;
      *(_QWORD *)(v43.QuadPart + 64) = UsbhD3ColdSupportInterfaceGetLastTransitionStatus;
      UsbhUnlatchPdo(*(_QWORD *)(v6 + 1176), v14, a2, 1364543814LL);
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      return 0LL;
    }
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1176), v14, a2, 1364543814LL);
    a2->IoStatus.Status = -1073741637;
    IofCompleteRequest(a2, 0);
    return 3221225659LL;
  }
  else
  {
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1176), v14, a2, 1364543814LL);
    v123 = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
    return v123;
  }
}

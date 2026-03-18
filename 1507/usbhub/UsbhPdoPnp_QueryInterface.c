/*
 * XREFs of UsbhPdoPnp_QueryInterface @ 0x1C0015FA0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001FC80 (UsbhRefPdoDeviceHandle.c)
 *     UsbhBusifGetSSHub @ 0x1C002837C (UsbhBusifGetSSHub.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhBusIfLocationReference @ 0x1C0028730 (UsbhBusIfLocationReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
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
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rax
  KSPIN_LOCK *v77; // r12
  KIRQL v78; // al
  __int64 v79; // r8
  __int64 v80; // r9
  __int16 v81; // cx
  KIRQL v82; // r13
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rcx
  void (__fastcall *v88)(_QWORD, __int64, IRP *, __int64); // rax
  __int64 v89; // r8
  __int64 v90; // r8
  __int64 v91; // rdx
  unsigned int SSHub; // r12d
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  KIRQL v98; // r14
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rsi
  _QWORD *v102; // rdi
  _QWORD *v103; // rdx
  _QWORD *v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  _QWORD *v107; // rdx
  _QWORD *v108; // rcx
  _DWORD *v109; // rcx
  _IO_STACK_LOCATION *v110; // rax
  _LARGE_INTEGER ByteOffset; // rax
  __int64 v112; // rdi
  KIRQL v113; // r14
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rsi
  _QWORD *v117; // rbx
  _QWORD *v118; // rdx
  _QWORD *v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  _QWORD *v122; // rdx
  _QWORD *v123; // rcx
  __int64 v124; // rdx
  unsigned int v125; // ebx
  int v126; // eax
  _DWORD *v127; // rax
  int v128; // eax
  unsigned int v129; // r10d
  int v130; // r10d
  int v131; // eax
  int v132; // [rsp+48h] [rbp-50h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+50h] [rbp-48h]
  KIRQL v134; // [rsp+A0h] [rbp+8h]
  unsigned int v135; // [rsp+B8h] [rbp+20h]

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
  v135 = Status;
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
              *v29 = v27 + 1264;
              v29[1] = v30;
              if ( *v30 != v27 + 1264 )
                __fastfail(3u);
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
    Status = v135;
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
    a2->IoStatus.Status = v135;
    IofCompleteRequest(a2, 0);
    return v135;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_SS_GUID,
         0x10uLL) == 16 )
  {
    Log(*(_QWORD *)(v6 + 1176), 256, 1902728019, (__int64)a2, a1);
    SSHub = UsbhBusifGetSSHub(*(_QWORD *)(v6 + 1176), v124, a2);
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1176), v14, a2, 1364543814LL);
    a2->IoStatus.Status = SSHub;
    IofCompleteRequest(a2, 0);
    return SSHub;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    v109 = *(_DWORD **)(a1 + 64);
    if ( !v109 )
      UsbhTrapFatal_Dbg(a1, 0LL, v37, v38);
    if ( *v109 != 1329877064 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v37, v38);
    v110 = a2->Tail.Overlay.CurrentStackLocation;
    if ( v110->Parameters.QueryInterface.Size < 0x28u )
    {
      SSHub = -1073741823;
    }
    else
    {
      ByteOffset = v110->Parameters.Read.ByteOffset;
      SSHub = 0;
      *(_QWORD *)(ByteOffset.QuadPart + 16) = UsbhBusIfLocationReference;
      *(_QWORD *)(ByteOffset.QuadPart + 24) = UsbhBusIfLocationDereference;
      *(_QWORD *)(ByteOffset.QuadPart + 32) = UsbhBusIfLocationGetLocationStrings;
      *(_DWORD *)ByteOffset.QuadPart = 65576;
      *(_QWORD *)(ByteOffset.QuadPart + 8) = v109;
      UsbhBusIfLocationReference();
    }
    a2->IoStatus.Status = SSHub;
    a2->IoStatus.Information = 0LL;
    v112 = *(_QWORD *)(v6 + 1176);
    Log(v112, 256, 1968194639, v14, 1364543814LL);
    v113 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    Log(v112, 256, 1685218896, v14, 1364543814LL);
    v116 = *(_QWORD *)(v14 + 64);
    if ( !v116 )
      UsbhTrapFatal_Dbg(v14, 0LL, v114, v115);
    if ( *(_DWORD *)v116 != 1329877064 )
      UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64), v114, v115);
    v117 = (_QWORD *)(v116 + 1264);
    v118 = *(_QWORD **)(v116 + 1264);
    if ( v118 == (_QWORD *)(v116 + 1264) )
    {
LABEL_169:
      v126 = *(_DWORD *)(v116 + 1280);
      if ( v126 )
        *(_DWORD *)(v116 + 1280) = v126 - 1;
    }
    else
    {
      while ( 1 )
      {
        v119 = v118 - 1;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v112 )
          {
            v120 = *(_QWORD *)(v112 + 64);
            if ( v120 )
            {
              v121 = *(_QWORD *)(v120 + 888)
                   + 32LL
                   * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v120 + 880)) & *(_DWORD *)(v120 + 884));
              *(_DWORD *)v121 = 1064591724;
              *(_QWORD *)(v121 + 8) = 0LL;
              *(_QWORD *)(v121 + 16) = v116;
              *(_QWORD *)(v121 + 24) = 1364543814LL;
            }
          }
        }
        if ( *((_DWORD *)v119 + 6) == 1364543814 && (IRP *)v119[5] == a2 )
          break;
        v118 = (_QWORD *)*v118;
        if ( v118 == v117 )
          goto LABEL_169;
      }
      v122 = (_QWORD *)*v118;
      v123 = (_QWORD *)v119[2];
      if ( (_QWORD *)v122[1] != v119 + 1 || (_QWORD *)*v123 != v119 + 1 )
        __fastfail(3u);
      *v123 = v122;
      v122[1] = v123;
      ExFreePoolWithTag(v119, 0);
    }
    if ( (_QWORD *)*v117 == v117 && !*(_DWORD *)(v116 + 1280) )
      KeSetEvent((PRKEVENT)(v116 + 1288), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v113);
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
    v134 = v51;
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
        KeReleaseSpinLock(v50, v134);
        if ( !v65 )
        {
          v127 = PdoExt(a1, v68, v69, v70);
          v128 = UsbhSyncResetDeviceInternal(*(PDEVICE_OBJECT *)(v6 + 1176), (__int64)(v127 + 236), a1);
          Log(*(_QWORD *)(v6 + 1176), 256, 1902732882, (__int64)a2, v128);
          if ( (v129 & 0xC0000000) == 0xC0000000 )
          {
            if ( !(unsigned __int8)Usb_Disconnected(v129) )
            {
              LOBYTE(v132) = 0;
              UsbhException(
                *(_QWORD *)(v6 + 1176),
                *(unsigned __int16 *)(v6 + 1420),
                121,
                0,
                0,
                v130,
                -1,
                usbfile_pdo_c,
                536,
                v132);
            }
            a2->IoStatus.Status = v135;
            IofCompleteRequest(a2, 0);
            UsbhUnlatchPdo(*(_QWORD *)(v6 + 1176), v14, a2, 1364543814LL);
            return v135;
          }
          v65 = UsbhRefPdoDeviceHandle(*(_QWORD *)(v6 + 1176), a1, a2, 1212442225LL);
          Log(*(_QWORD *)(v6 + 1176), 256, 1902732872, *(_QWORD *)(v6 + 1152), a1);
          CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v65;
        }
        v71 = *(_QWORD *)(v6 + 1152);
        v72 = *(_QWORD *)(v6 + 1176);
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v72 )
          {
            v73 = *(_QWORD *)(v72 + 64);
            if ( v73 )
            {
              v74 = *(_QWORD *)(v73 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v73 + 880)) & *(_DWORD *)(v73 + 884));
              *(_DWORD *)v74 = 1214671217;
              *(_QWORD *)(v74 + 8) = 0LL;
              *(_QWORD *)(v74 + 16) = v71;
              *(_QWORD *)(v74 + 24) = a1;
            }
          }
        }
        CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v65;
        if ( v65 )
        {
          v75 = *(_QWORD *)(v6 + 1176);
          if ( !v75 )
            UsbhTrapFatal_Dbg(0LL, 0LL, v71, v70);
          v76 = *(_QWORD *)(v75 + 64);
          if ( !v76 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v6 + 1176), 0LL, v71, v70);
          if ( *(_DWORD *)v76 != 541218120 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v6 + 1176), *(_QWORD *)(v75 + 64), v71, v70);
          v77 = (KSPIN_LOCK *)(v76 + 3720);
          v78 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v76 + 3720));
          v81 = UsbhLogMask;
          v82 = v78;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            v83 = *(_QWORD *)(v75 + 64);
            if ( v83 )
            {
              v84 = *(_QWORD *)(v83 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v83 + 880)) & *(_DWORD *)(v83 + 884));
              *(_DWORD *)v84 = 825054788;
              *(_QWORD *)(v84 + 8) = 0LL;
              *(_QWORD *)(v84 + 16) = v65;
              *(_QWORD *)(v84 + 24) = a2;
              v81 = UsbhLogMask;
            }
            if ( (v81 & 0x100) != 0 )
            {
              v85 = *(_QWORD *)(v75 + 64);
              if ( v85 )
              {
                v86 = *(_QWORD *)(v85 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v85 + 880)) & *(_DWORD *)(v85 + 884));
                *(_DWORD *)v86 = 841832004;
                *(_QWORD *)(v86 + 8) = 0LL;
                *(_QWORD *)(v86 + 16) = v65;
                *(_QWORD *)(v86 + 24) = 1212442225LL;
              }
            }
          }
          v87 = *(_QWORD *)(v75 + 64);
          if ( !v87 )
            UsbhTrapFatal_Dbg(v75, 0LL, v79, v80);
          if ( *(_DWORD *)v87 != 541218120 )
            UsbhTrapFatal_Dbg(v75, *(_QWORD *)(v75 + 64), v79, v80);
          v88 = *(void (__fastcall **)(_QWORD, __int64, IRP *, __int64))(v87 + 4472);
          if ( v88 )
            v88(*(_QWORD *)(v87 + 4232), v65, a2, 1212442225LL);
          KeReleaseSpinLock(v77, v82);
        }
        v89 = *(_QWORD *)(v6 + 1176);
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v89 )
          {
            v90 = *(_QWORD *)(v89 + 64);
            if ( v90 )
            {
              v91 = *(_QWORD *)(v90 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v90 + 880)) & *(_DWORD *)(v90 + 884));
              *(_DWORD *)v91 = 862349681;
              *(_QWORD *)(v91 + 8) = 0LL;
              *(_QWORD *)(v91 + 16) = a2;
              *(_QWORD *)(v91 + 24) = a1;
            }
          }
        }
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        SSHub = IofCallDriver(DeviceObject, a2);
        v93 = *(_QWORD *)(v6 + 1176);
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v93 )
          {
            v94 = *(_QWORD *)(v93 + 64);
            if ( v94 )
            {
              v95 = *(_QWORD *)(v94 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v94 + 880)) & *(_DWORD *)(v94 + 884));
              *(_DWORD *)v95 = 1329877109;
              *(_QWORD *)(v95 + 8) = 0LL;
              *(_QWORD *)(v95 + 16) = v14;
              *(_QWORD *)(v95 + 24) = 1364543814LL;
            }
          }
        }
        v98 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v93 )
          {
            v99 = *(_QWORD *)(v93 + 64);
            if ( v99 )
            {
              v100 = *(_QWORD *)(v99 + 888)
                   + 32LL
                   * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v99 + 880)) & *(_DWORD *)(v99 + 884));
              *(_DWORD *)v100 = 1348891236;
              *(_QWORD *)(v100 + 8) = 0LL;
              *(_QWORD *)(v100 + 16) = v14;
              *(_QWORD *)(v100 + 24) = 1364543814LL;
            }
          }
        }
        v101 = *(_QWORD *)(v14 + 64);
        if ( !v101 )
          UsbhTrapFatal_Dbg(v14, 0LL, v96, v97);
        if ( *(_DWORD *)v101 != 1329877064 )
          UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64), v96, v97);
        v102 = (_QWORD *)(v101 + 1264);
        v103 = *(_QWORD **)(v101 + 1264);
        if ( v103 == (_QWORD *)(v101 + 1264) )
        {
LABEL_200:
          v131 = *(_DWORD *)(v101 + 1280);
          if ( v131 )
            *(_DWORD *)(v101 + 1280) = v131 - 1;
        }
        else
        {
          while ( 1 )
          {
            v104 = v103 - 1;
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              if ( v93 )
              {
                v105 = *(_QWORD *)(v93 + 64);
                if ( v105 )
                {
                  v106 = *(_QWORD *)(v105 + 888)
                       + 32LL
                       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v105 + 880)) & *(_DWORD *)(v105 + 884));
                  *(_DWORD *)v106 = 1064591724;
                  *(_QWORD *)(v106 + 8) = 0LL;
                  *(_QWORD *)(v106 + 16) = v101;
                  *(_QWORD *)(v106 + 24) = 1364543814LL;
                }
              }
            }
            if ( *((_DWORD *)v104 + 6) == 1364543814 && (IRP *)v104[5] == a2 )
              break;
            v103 = (_QWORD *)*v103;
            if ( v103 == v102 )
              goto LABEL_200;
          }
          v107 = (_QWORD *)*v103;
          v108 = (_QWORD *)v104[2];
          if ( (_QWORD *)v107[1] != v104 + 1 || (_QWORD *)*v108 != v104 + 1 )
            __fastfail(3u);
          *v108 = v107;
          v107[1] = v108;
          ExFreePoolWithTag(v104, 0);
        }
        if ( (_QWORD *)*v102 == v102 && !*(_DWORD *)(v101 + 1280) )
          KeSetEvent((PRKEVENT)(v101 + 1288), 0, 0);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v98);
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
    SSHub = v135;
    a2->IoStatus.Status = v135;
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
      *(_OWORD *)(v6 + 2936) = *(_OWORD *)v43.QuadPart;
      *(_OWORD *)(v6 + 2952) = *(_OWORD *)(v43.QuadPart + 16);
      *(_OWORD *)(v6 + 2968) = *(_OWORD *)(v43.QuadPart + 32);
      *(_OWORD *)(v6 + 2984) = *(_OWORD *)(v43.QuadPart + 48);
      *(_QWORD *)(v6 + 3000) = *(_QWORD *)(v43.QuadPart + 64);
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
    v125 = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
    return v125;
  }
}

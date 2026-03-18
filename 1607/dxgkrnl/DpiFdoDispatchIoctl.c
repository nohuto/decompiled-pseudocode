/*
 * XREFs of DpiFdoDispatchIoctl @ 0x1C0193CE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C002A314 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiSriovAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002A3D0 (-DpiSriovAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?DpiSriovDetach@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002A488 (-DpiSriovDetach@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiSriovEventComplete@@YAJPEAU_DEVICE_OBJECT@@PEAXK@Z @ 0x1C002A5B0 (-DpiSriovEventComplete@@YAJPEAU_DEVICE_OBJECT@@PEAXK@Z.c)
 *     ?DpiSriovNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXKPEA_K@Z @ 0x1C002A674 (-DpiSriovNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXKPEA_K@Z.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C0157668 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C015832C (-DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z.c)
 *     ?DdiGetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C01588B4 (-DdiGetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@.c)
 *     ?DdiGetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z @ 0x1C0158AE8 (-DdiGetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z.c)
 *     ?DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x1C0158CA8 (-DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z.c)
 *     ?DdiQueryMitigatedRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1C0158E38 (-DdiQueryMitigatedRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z.c)
 *     ?DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C0159804 (-DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z.c)
 *     ?DdiVirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C0159E10 (-DdiVirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C015A340 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?SetMitigatedRangesUpdateIrp@ADAPTER_RENDER@@QEAAJIPEAU_IRP@@@Z @ 0x1C015A768 (-SetMitigatedRangesUpdateIrp@ADAPTER_RENDER@@QEAAJIPEAU_IRP@@@Z.c)
 */

__int64 __fastcall DpiFdoDispatchIoctl(struct _DEVICE_OBJECT *a1, struct _IRP *a2, __int64 a3, __int64 a4)
{
  char *DeviceExtension; // r15
  unsigned int v6; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 LowPart; // r12
  ULONG Length; // esi
  unsigned int Options; // r14d
  __int64 v11; // rax
  ULONG_PTR OutputBufferSize; // rsi
  struct _IRP *MasterIrp; // rbx
  int updated; // eax
  CInterfaceCallContext *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // xmm1_8
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG NumGpuPartitionOptions; // esi
  int GpuPartitionInfo; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG v30; // eax
  CInterfaceCallContext *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  unsigned int v37; // edx
  CSHORT PartitionId; // cx
  UINT64 CurrentValue; // rax
  UINT64 MinValue; // rcx
  UINT64 v41; // rax
  UINT64 MaxValue; // rcx
  UINT64 v43; // rax
  UINT64 v44; // rcx
  UINT64 v45; // rax
  UINT64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // ecx
  UINT64 v51; // rdi
  __int64 Type; // rdi
  __int64 v53; // rcx
  void *v54; // rdi
  __int64 v55; // rax
  PIRP v56; // rax
  __int64 v57; // rax
  ULONG PartitionCount; // ecx
  UINT64 AvailableValue; // rax
  UINT64 TotalValue; // rcx
  UINT64 MinPartitionValue; // rax
  UINT64 v62; // rcx
  UINT64 MaxPartitionValue; // rax
  UINT64 v64; // rcx
  UINT64 OptimalPartitionValue; // rax
  UINT64 v66; // rcx
  __int64 v67; // rax
  unsigned __int64 v69; // [rsp+30h] [rbp-D0h]
  struct _DXGKARG_DESTROYVIRTUALGPU v70; // [rsp+38h] [rbp-C8h] BYREF
  _DXGKARG_SETGPUPARTITIONCOUNT v71; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v72; // [rsp+40h] [rbp-C0h] BYREF
  _DXGKARG_GETGPUPARTITIONINFO v73; // [rsp+48h] [rbp-B8h] BYREF
  _DXGKARG_QUERYMITIGATEDRANGES v74; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v75[16]; // [rsp+78h] [rbp-88h] BYREF
  int v76; // [rsp+88h] [rbp-78h]
  struct _IRP *v77; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v78[16]; // [rsp+98h] [rbp-68h] BYREF
  int v79; // [rsp+A8h] [rbp-58h]
  _DXGK_VIRTUALGPUDRIVERESCAPE v80; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v81[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v82; // [rsp+E0h] [rbp-20h]
  _BYTE v83[16]; // [rsp+E8h] [rbp-18h] BYREF
  int v84; // [rsp+F8h] [rbp-8h]
  _BYTE v85[16]; // [rsp+100h] [rbp+0h] BYREF
  int v86; // [rsp+110h] [rbp+10h]
  _BYTE v87[16]; // [rsp+118h] [rbp+18h] BYREF
  int v88; // [rsp+128h] [rbp+28h]
  _BYTE v89[16]; // [rsp+130h] [rbp+30h] BYREF
  int VirtualGpuInfo; // [rsp+140h] [rbp+40h]
  _BYTE v91[16]; // [rsp+148h] [rbp+48h] BYREF
  int v92; // [rsp+158h] [rbp+58h]
  _BYTE v93[16]; // [rsp+160h] [rbp+60h] BYREF
  int VirtualGpuProfile; // [rsp+170h] [rbp+70h]
  struct _DXGKARG_QUERYMITIGATEDRANGECOUNT v95; // [rsp+178h] [rbp+78h] BYREF
  struct _DXGKARG_GETVIRTUALGPUINFO v96; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _DXGKARG_GETVIRTUALGPUPROFILE v97; // [rsp+210h] [rbp+110h] BYREF
  struct _DXGKARG_GETVIRTUALGPUINFO v98; // [rsp+2C0h] [rbp+1C0h] BYREF
  _DXGKARG_CREATEVIRTUALGPU v99; // [rsp+330h] [rbp+230h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  v69 = 0LL;
  v72 = 0LL;
  v6 = -1073741637;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (LowPart & 3) != 0 )
  {
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v11);
LABEL_3:
    OutputBufferSize = 0LL;
LABEL_117:
    a2->IoStatus.Status = v6;
    a2->IoStatus.Information = OutputBufferSize;
    IofCompleteRequest(a2, 1);
    return v6;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( (unsigned int)LowPart > 0x226444 )
  {
    if ( (_DWORD)LowPart == 2253896 )
    {
      if ( Options < 2 || !MasterIrp || Length < 0xA8 )
        goto LABEL_114;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v93, a1);
      v37 = VirtualGpuProfile;
      if ( VirtualGpuProfile < 0
        || (memset(&v97, 0, sizeof(v97)),
            v97.PartitionCount = (unsigned __int16)MasterIrp->Type,
            VirtualGpuProfile = ADAPTER_RENDER::DdiGetVirtualGpuProfile(
                                  *(ADAPTER_RENDER **)(*((_QWORD *)DeviceExtension + 461) + 2136LL),
                                  &v97),
            v37 = VirtualGpuProfile,
            VirtualGpuProfile < 0) )
      {
        OutputBufferSize = 0LL;
      }
      else
      {
        OutputBufferSize = 168LL;
        PartitionCount = v97.PartitionCount;
        MasterIrp->ThreadListEntry.Blink = (struct _LIST_ENTRY *)v97.ProfileCapability[0].OptimalPartitionValue;
        *(DXGK_VGPU_PROFILE_CAPABILITY *)&MasterIrp->IoStatus.Status = v97.ProfileCapability[1];
        *(DXGK_VGPU_PROFILE_CAPABILITY *)&MasterIrp->Overlay.AsynchronousParameters.UserApcRoutine = v97.ProfileCapability[2];
        MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v97.ProfileCapability[3].TotalValue;
        AvailableValue = v97.ProfileCapability[3].AvailableValue;
        *(_DWORD *)&MasterIrp->Type = PartitionCount;
        TotalValue = v97.ProfileCapability[0].TotalValue;
        MasterIrp->Tail.Overlay.DriverContext[2] = (PVOID)AvailableValue;
        MinPartitionValue = v97.ProfileCapability[3].MinPartitionValue;
        MasterIrp->MdlAddress = (PMDL)TotalValue;
        v62 = v97.ProfileCapability[0].AvailableValue;
        MasterIrp->Tail.Overlay.DriverContext[3] = (PVOID)MinPartitionValue;
        MaxPartitionValue = v97.ProfileCapability[3].MaxPartitionValue;
        *(_QWORD *)&MasterIrp->Flags = v62;
        v64 = v97.ProfileCapability[0].MinPartitionValue;
        MasterIrp->Tail.Overlay.Thread = (PETHREAD)MaxPartitionValue;
        OptimalPartitionValue = v97.ProfileCapability[3].OptimalPartitionValue;
        MasterIrp->AssociatedIrp.MasterIrp = (struct _IRP *)v64;
        v66 = v97.ProfileCapability[0].MaxPartitionValue;
        MasterIrp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)OptimalPartitionValue;
        MasterIrp->ThreadListEntry.Flink = (struct _LIST_ENTRY *)v66;
      }
      v31 = (CInterfaceCallContext *)v93;
      goto LABEL_113;
    }
    if ( (_DWORD)LowPart == 2253900 )
    {
      if ( Options >= 2 && MasterIrp )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v91, a1);
        updated = v92;
        if ( v92 >= 0 )
        {
          v71.PartitionCount = (unsigned __int16)MasterIrp->Type;
          updated = ADAPTER_RENDER::DdiSetGpuPartitionCount(
                      *(ADAPTER_RENDER **)(*((_QWORD *)DeviceExtension + 461) + 2136LL),
                      &v71);
          v92 = updated;
        }
        v15 = (CInterfaceCallContext *)v91;
        goto LABEL_20;
      }
      goto LABEL_114;
    }
    if ( (_DWORD)LowPart != 2253908 )
    {
      if ( (_DWORD)LowPart != 2253912 )
      {
        if ( (_DWORD)LowPart == 2253916 )
        {
          v19 = DpiSetPartitionVmbus(a1, a2, &a2->AssociatedIrp.MasterIrp->Type, Options);
          goto LABEL_34;
        }
        if ( (_DWORD)LowPart != 2253920 )
          goto LABEL_64;
        if ( Options < 8 || !MasterIrp )
          goto LABEL_114;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v87, a1);
        v36 = v88;
        if ( v88 < 0 )
          goto LABEL_69;
        memset(&v80, 0, sizeof(v80));
        v80.OutputBufferSize = Length;
        v80.InputBufferSize = Options - 8;
        v80.pOutputBuffer = MasterIrp;
        v80.pInputBuffer = &MasterIrp->MdlAddress;
        v36 = ADAPTER_RENDER::DdiVirtualGpuDriverEscape(
                *(ADAPTER_RENDER **)(*((_QWORD *)DeviceExtension + 461) + 2136LL),
                (struct _LUID *)MasterIrp,
                &v80);
        OutputBufferSize = v80.OutputBufferSize;
        v88 = v36;
        if ( v36 < 0 )
LABEL_69:
          OutputBufferSize = 0LL;
        v6 = v36;
        v31 = (CInterfaceCallContext *)v87;
LABEL_50:
        CInterfaceCallContext::~CInterfaceCallContext(v31);
        goto LABEL_116;
      }
      if ( Options < 2 || !MasterIrp || Length < 0x80 )
        goto LABEL_114;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v89, a1);
      v37 = VirtualGpuInfo;
      if ( VirtualGpuInfo < 0
        || (memset(&v96, 0, sizeof(v96)),
            v96.PartitionId = (unsigned __int16)MasterIrp->Type,
            VirtualGpuInfo = ADAPTER_RENDER::DdiGetVirtualGpuInfo(
                               *(ADAPTER_RENDER **)(*((_QWORD *)DeviceExtension + 461) + 2136LL),
                               &v96,
                               (struct _LUID *)(&MasterIrp->Size + 1),
                               (struct _GUID *)((char *)&MasterIrp->MdlAddress + 4)),
            v37 = VirtualGpuInfo,
            VirtualGpuInfo < 0) )
      {
        OutputBufferSize = 0LL;
      }
      else
      {
        OutputBufferSize = 128LL;
        PartitionId = v96.PartitionId;
        *(_QWORD *)&MasterIrp->RequestorMode = v96.Capability[1].MaxValue;
        MasterIrp->UserIosb = (PIO_STATUS_BLOCK)v96.Capability[1].CurrentValue;
        MasterIrp->UserEvent = (PKEVENT)v96.Capability[2].MinValue;
        MasterIrp->Overlay.AllocationSize.QuadPart = v96.Capability[2].MaxValue;
        CurrentValue = v96.Capability[2].CurrentValue;
        MasterIrp->Type = PartitionId;
        MinValue = v96.Capability[0].MinValue;
        MasterIrp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)CurrentValue;
        v41 = v96.Capability[3].MinValue;
        MasterIrp->ThreadListEntry.Flink = (struct _LIST_ENTRY *)MinValue;
        MaxValue = v96.Capability[0].MaxValue;
        MasterIrp->CancelRoutine = (PDRIVER_CANCEL)v41;
        v43 = v96.Capability[3].MaxValue;
        MasterIrp->ThreadListEntry.Blink = (struct _LIST_ENTRY *)MaxValue;
        v44 = v96.Capability[0].CurrentValue;
        MasterIrp->UserBuffer = (PVOID)v43;
        v45 = v96.Capability[3].CurrentValue;
        MasterIrp->IoStatus.Pointer = (PVOID)v44;
        v46 = v96.Capability[1].MinValue;
        MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v45;
        MasterIrp->IoStatus.Information = v46;
      }
      v31 = (CInterfaceCallContext *)v89;
LABEL_113:
      v6 = v37;
      goto LABEL_50;
    }
    if ( Options < 0x70 || !MasterIrp || Length < 0x88 )
      goto LABEL_114;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v78, a1);
    v50 = v79;
    if ( v79 < 0 )
      goto LABEL_98;
    v51 = *(_QWORD *)&MasterIrp->Flags;
    if ( !v51 && !MasterIrp->AssociatedIrp.MasterIrp && !MasterIrp->ThreadListEntry.Flink )
    {
      Type = (unsigned __int16)MasterIrp->Type;
      v53 = *(_QWORD *)(*((_QWORD *)DeviceExtension + 461) + 2136LL);
      if ( (unsigned int)Type <= *(_DWORD *)(v53 + 1068) && *(_QWORD *)(*(_QWORD *)(v53 + 1072) + 8 * Type) )
      {
        _mm_lfence();
        OutputBufferSize = v72;
        v54 = *(void **)(*(_QWORD *)(*(_QWORD *)(v53 + 1072) + 8 * Type) + 32LL);
      }
      else
      {
        v55 = WdLogNewEntry5_WdWarning(v53, v47, v48, v49);
        *(_QWORD *)(v55 + 24) = Type;
        WdLogEvent5_WdWarning(v55);
        OutputBufferSize = 0LL;
        v54 = 0LL;
      }
      if ( v54 )
      {
        ADAPTER_RENDER::SetMitigatedRangesUpdateIrp(
          *(ADAPTER_RENDER **)(*((_QWORD *)DeviceExtension + 461) + 2136LL),
          (unsigned __int16)MasterIrp->Type,
          0LL);
        v56 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 4840), v54);
        if ( v56 )
        {
          v56->IoStatus.Information = 0LL;
          v56->IoStatus.Status = -1073741536;
          IofCompleteRequest(v56, 0);
        }
      }
      v70.PartitionId = (unsigned __int16)MasterIrp->Type;
      v50 = ADAPTER_RENDER::DestroyVirtualGpu(
              *(struct DXGDEVICE ***)(*((_QWORD *)DeviceExtension + 461) + 2136LL),
              &v70);
      v79 = v50;
      goto LABEL_99;
    }
    memset(&v99, 0, sizeof(v99));
    v99.PartitionId = (unsigned __int16)MasterIrp->Type;
    v99.Profile.Capability[0].MaxValue = (UINT64)MasterIrp->AssociatedIrp.MasterIrp;
    v99.Profile.Capability[0].OptimalValue = (UINT64)MasterIrp->ThreadListEntry.Flink;
    v99.Profile.Capability[1] = *(DXGK_VIRTUALGPUCAPABILITY *)&MasterIrp->ThreadListEntry.Blink;
    v99.Profile.Capability[2] = *(DXGK_VIRTUALGPUCAPABILITY *)&MasterIrp->RequestorMode;
    v99.Profile.Capability[3] = *(DXGK_VIRTUALGPUCAPABILITY *)&MasterIrp->Overlay.AsynchronousParameters.IssuingProcess;
    v57 = *((_QWORD *)DeviceExtension + 461);
    v99.Profile.Capability[0].MinValue = v51;
    v79 = ADAPTER_RENDER::DdiCreateVirtualGpu(*(ADAPTER_RENDER **)(v57 + 2136), &v99);
    v50 = v79;
    if ( v79 < 0
      || (memset(&v98, 0, sizeof(v98)),
          v79 = ADAPTER_RENDER::DdiGetVirtualGpuInfo(
                  *(ADAPTER_RENDER **)(*((_QWORD *)DeviceExtension + 461) + 2136LL),
                  &v98,
                  (struct _LUID *)((char *)&MasterIrp->MdlAddress + 4),
                  (struct _GUID *)(&MasterIrp->Flags + 1)),
          v50 = v79,
          v79 < 0) )
    {
LABEL_98:
      OutputBufferSize = 0LL;
    }
    else
    {
      OutputBufferSize = 136LL;
      LOWORD(MasterIrp->MdlAddress) = v99.PartitionId;
      *(DXGK_VGPU_CAPABILITY *)&MasterIrp->ThreadListEntry.Blink = v98.Capability[0];
      *(DXGK_VGPU_CAPABILITY *)&MasterIrp->RequestorMode = v98.Capability[1];
      *(DXGK_VGPU_CAPABILITY *)&MasterIrp->Overlay.AsynchronousParameters.UserApcRoutine = v98.Capability[2];
      *(DXGK_VGPU_CAPABILITY *)&MasterIrp->UserBuffer = v98.Capability[3];
    }
LABEL_99:
    v6 = v50;
    v31 = (CInterfaceCallContext *)v78;
    goto LABEL_50;
  }
  switch ( (_DWORD)LowPart )
  {
    case 0x226444:
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v75, a1);
      if ( v76 >= 0 )
      {
        memset(&v73, 0, sizeof(v73));
        if ( !MasterIrp || Length < 4 )
        {
          v34 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
          *(_QWORD *)(v34 + 24) = 2253892LL;
          WdLogEvent5_WdWarning(v34);
          v6 = -1073741789;
          goto LABEL_52;
        }
        if ( Length < 0x10 )
        {
          NumGpuPartitionOptions = v73.NumGpuPartitionOptions;
        }
        else
        {
          NumGpuPartitionOptions = (Length - 14) >> 1;
          v73.NumGpuPartitionOptions = NumGpuPartitionOptions;
          v73.pGpuPartitionOptions = (USHORT *)&MasterIrp->MdlAddress + 3;
        }
        GpuPartitionInfo = ADAPTER_RENDER::DdiGetGpuPartitionInfo(
                             *(ADAPTER_RENDER **)(*((_QWORD *)DeviceExtension + 461) + 2136LL),
                             &v73);
        v76 = GpuPartitionInfo;
        v6 = GpuPartitionInfo;
        if ( GpuPartitionInfo >= 0 )
        {
          v30 = v73.NumGpuPartitionOptions;
          if ( v73.NumGpuPartitionOptions <= NumGpuPartitionOptions && v73.NumGpuPartitionOptions )
          {
            WORD2(MasterIrp->MdlAddress) = v73.CurrentGpuPartitionCount;
            *(_DWORD *)&MasterIrp->Type = v30;
            RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)DeviceExtension + 317);
            v69 = 2 * v73.NumGpuPartitionOptions - 2 + 16LL;
            goto LABEL_48;
          }
          v32 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
          *(_QWORD *)(v32 + 24) = 2253892LL;
          WdLogEvent5_WdWarning(v32);
          v6 = -1073741811;
LABEL_52:
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v75);
          goto LABEL_3;
        }
        if ( GpuPartitionInfo == -1073741789 )
        {
          if ( v73.NumGpuPartitionOptions )
          {
            v6 = -2147483643;
            *(_DWORD *)&MasterIrp->Type = v73.NumGpuPartitionOptions;
            v76 = -2147483643;
            OutputBufferSize = 4LL;
            goto LABEL_49;
          }
          v33 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
          *(_QWORD *)(v33 + 24) = 2253892LL;
          WdLogEvent5_WdWarning(v33);
          v6 = -1073741811;
          v76 = -1073741811;
        }
      }
LABEL_48:
      OutputBufferSize = v69;
LABEL_49:
      v31 = (CInterfaceCallContext *)v75;
      goto LABEL_50;
    case 0x226044:
      v6 = DpiSriovNotification(a1, a2, &a2->AssociatedIrp.MasterIrp->Type, Length, &v72);
      v69 = v72;
      goto LABEL_115;
    case 0x226048:
      v19 = DpiSriovEventComplete(a1, (NTSTATUS *)&a2->AssociatedIrp.MasterIrp->Type, Options);
      goto LABEL_34;
    case 0x22604C:
      v19 = DpiSriovAttach(a1, a2);
      goto LABEL_34;
    case 0x226050:
      v19 = DpiSriovDetach(a1);
LABEL_34:
      v6 = v19;
      goto LABEL_115;
    case 0x226058:
      if ( Options >= 2 && MasterIrp && Length >= 0x18 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v85, a1);
        updated = v86;
        if ( v86 >= 0 )
        {
          v17 = *((_QWORD *)DeviceExtension + 461);
          memset(&v95, 0, sizeof(v95));
          v95.VirtualFunctionIndex = (unsigned __int16)MasterIrp->Type;
          ADAPTER_RENDER::DdiQueryMitigatedRangeCount(*(ADAPTER_RENDER **)(v17 + 2136), &v95);
          updated = 0;
          v18 = *(_QWORD *)&v95.RangeCount[4];
          *(_OWORD *)&MasterIrp->Type = *(_OWORD *)v95.RangeCount;
          v86 = 0;
          *(_QWORD *)&MasterIrp->Flags = v18;
        }
        v15 = (CInterfaceCallContext *)v85;
        goto LABEL_20;
      }
      goto LABEL_114;
    case 0x22605C:
      if ( Options >= 4 && MasterIrp && Length >= 0x10 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v83, a1);
        updated = v84;
        if ( v84 >= 0 )
        {
          *(_QWORD *)&v74.VirtualFunctionIndex = 0LL;
          *(_QWORD *)&v74.NumRanges = 0LL;
          v74.VirtualFunctionIndex = (unsigned __int16)MasterIrp->Type;
          v74.BarIndex = LOBYTE(MasterIrp->Size);
          v74.pMitigatedRange = (PDXGK_MITIGATEDRANGEINFO)&v77;
          v16 = *((_QWORD *)DeviceExtension + 461);
          v77 = MasterIrp;
          *(_QWORD *)&v74.NumRanges = Length >> 4;
          updated = ADAPTER_RENDER::DdiQueryMitigatedRanges(*(ADAPTER_RENDER **)(v16 + 2136), &v74);
          v84 = updated;
        }
        v15 = (CInterfaceCallContext *)v83;
        goto LABEL_20;
      }
LABEL_114:
      v6 = -1073741789;
      v67 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v67 + 24) = -1073741789LL;
      WdLogEvent5_WdError(v67);
      goto LABEL_115;
  }
  if ( (_DWORD)LowPart != 2252896 )
  {
LABEL_64:
    v35 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v35 + 24) = LowPart;
    WdLogEvent5_WdWarning(v35);
    goto LABEL_3;
  }
  if ( Options < 2 || !MasterIrp || Length < 2 )
    goto LABEL_114;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v81, a1);
  updated = v82;
  if ( v82 >= 0 )
  {
    updated = ADAPTER_RENDER::SetMitigatedRangesUpdateIrp(
                *(ADAPTER_RENDER **)(*((_QWORD *)DeviceExtension + 461) + 2136LL),
                (unsigned __int16)MasterIrp->Type,
                a2);
    v82 = updated;
    if ( updated >= 0 )
    {
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IoCsqInsertIrp((PIO_CSQ)(DeviceExtension + 4840), a2, 0LL);
      updated = 259;
      v82 = 259;
    }
  }
  v15 = (CInterfaceCallContext *)v81;
LABEL_20:
  v6 = updated;
  CInterfaceCallContext::~CInterfaceCallContext(v15);
LABEL_115:
  OutputBufferSize = v69;
LABEL_116:
  if ( v6 != 259 )
    goto LABEL_117;
  return v6;
}

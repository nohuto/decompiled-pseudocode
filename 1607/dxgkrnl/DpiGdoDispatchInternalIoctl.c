/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C00C1860
 * Callers:
 *     <none>
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0079D88 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C0079E68 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00C1D80 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DmmIsPresentPathInClientVidPnTopology @ 0x1C00C20AC (DmmIsPresentPathInClientVidPnTopology.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00C219C (DmmGetVideoOutputTechnology.c)
 *     DmmCanAddPresentPathToClientVidPn @ 0x1C00C3274 (DmmCanAddPresentPathToClientVidPn.c)
 *     DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C00C42B0 (DmmGetCurrentIntegerVSyncFromClientVidPnSource.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00C4860 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkPowerOnOffMonitor @ 0x1C00E047C (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r14
  __int64 v5; // rbx
  _DWORD *UserBuffer; // r12
  __int64 v7; // rdi
  __int64 Length; // r9
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rsi
  __int64 v10; // r15
  char *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  int AllMonitorDevicesFromSessionView; // eax
  char v15; // r13
  int v16; // edi
  char *PoolWithTag; // rax
  __int64 v18; // rcx
  unsigned int v19; // r13d
  __int64 v20; // rax
  __int64 *v21; // r13
  char *v22; // rdi
  char v23; // r12
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  PIRP v29; // rcx
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  bool v37; // zf
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int CurrentProcessSessionId; // r12d
  int v43; // eax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // [rsp+30h] [rbp-38h]
  unsigned int v53; // [rsp+30h] [rbp-38h]
  int v54; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v56; // [rsp+40h] [rbp-28h]
  int v57[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v58; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  int v60; // [rsp+C0h] [rbp+58h] BYREF
  int v61; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v58 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  v7 = -1073741637LL;
  v56 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v46 = *(_QWORD *)(v10 + 24);
    LOBYTE(Length) = 1;
    *(_OWORD *)v57 = *(_OWORD *)&Parameters->NamedPipeType;
    v47 = DxgkPowerOnOffMonitor(v46, -1, (int)v57, Length, _mm_srli_si128(*(__m128i *)v57, 8).m128i_u32[0]);
    v7 = v47;
    if ( v47 >= 0 )
      goto LABEL_28;
LABEL_70:
    v51 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v51 + 24) = v7;
    WdLogEvent5_WdError(v51);
    goto LABEL_28;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301971 )
    goto LABEL_48;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 192) = *(_QWORD *)&Parameters->NamedPipeType;
      Parameters->InboundQuota = *(unsigned __int8 *)(v10 + 1141);
      Parameters->DefaultTimeout.QuadPart = *(_QWORD *)(v10 + 152);
      v44 = *(_DWORD *)(v4 + 160);
      *(_DWORD *)&Parameters->TimeoutSpecified = v44;
      if ( !*(_DWORD *)(v4 + 156) && *(_BYTE *)(v10 + 1136) == 1 )
        *(_DWORD *)&Parameters->TimeoutSpecified = v44 | 0x20000000;
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_28;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301995 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2302003 )
      {
        if ( (unsigned int)Length >= 0x18 && UserBuffer )
        {
          LODWORD(v7) = 0;
          v5 = 24LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v10 + 3688);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 3688) + 268LL);
          goto LABEL_28;
        }
        goto LABEL_61;
      }
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302007 )
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_28;
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          LOBYTE(a2) = 1;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( (int)v7 >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(_QWORD *)(v10 + 3688),
                                                         *(unsigned int *)(v4 + 156),
                                                         &v58,
                                                         &v60);
            LOBYTE(v32) = 1;
            LODWORD(v7) = CurrentIntegerVSyncFromClientVidPnSource;
            DpiReleaseCoreSyncAccessSafe(a1, v32);
            if ( (int)v7 < 0 )
            {
              v45 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
              *(_QWORD *)(v45 + 24) = *(unsigned int *)(v4 + 156);
              WdLogEvent5_WdWarning(v45);
            }
            else
            {
              v37 = v60 == 1;
              *UserBuffer = v58;
              *((_BYTE *)UserBuffer + 4) = v37;
            }
          }
          goto LABEL_28;
        }
LABEL_61:
        LODWORD(v7) = -1073741789;
        goto LABEL_28;
      }
LABEL_48:
      LODWORD(v7) = 0;
      goto LABEL_28;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_61;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(
                                CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995,
                                a2,
                                CurrentStackLocation,
                                Length);
    if ( Parameters->NamedPipeType == 1 )
    {
      v43 = *(_DWORD *)(v4 + 200);
      if ( v43 != -1 && v43 != CurrentProcessSessionId )
        goto LABEL_63;
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2536)) < 0 )
      {
LABEL_64:
        Parameters->ReadMode = 0;
        goto LABEL_48;
      }
      *(_DWORD *)(v4 + 200) = CurrentProcessSessionId;
    }
    else
    {
      v7 = (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2536));
      if ( *(_DWORD *)(v4 + 200) != CurrentProcessSessionId )
      {
LABEL_63:
        v48 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
        *(_QWORD *)(v48 + 24) = v7;
        WdLogEvent5_WdWarning(v48);
        goto LABEL_64;
      }
      *(_DWORD *)(v4 + 200) = -1;
    }
    Parameters->ReadMode = 1;
    goto LABEL_48;
  }
  v61 = 0;
  v11 = 0LL;
  LOBYTE(v60) = 0;
  v12 = DxgkAcquireSessionModeChangeLock(0);
  v7 = v12;
  if ( v12 < 0 )
    goto LABEL_70;
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2536),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  v7 = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v49 = WdLogNewEntry5_WdError(0x80000000LL);
    *(_QWORD *)(v49 + 24) = v7;
    WdLogEvent5_WdError(v49);
LABEL_67:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_28;
  }
  v15 = v60;
  v16 = *(_DWORD *)(v10 + 3456) + ((_BYTE)v60 != 0 ? v61 : 0);
  if ( !v16 )
    goto LABEL_27;
  Size = (unsigned int)(20 * (v16 + 1));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  *(_QWORD *)v57 = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v7) = -1073741801;
    v50 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v50 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v50);
    goto LABEL_67;
  }
  memset(PoolWithTag, 0, Size);
  if ( v15 )
  {
    v52 = v16;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView(
                    (struct _LUID *)(v10 + 2536),
                    *(_DWORD *)(v4 + 156),
                    (__int64)v11);
    if ( (int)v7 < 0 )
    {
LABEL_66:
      ExFreePoolWithTag(v11, 0);
      goto LABEL_67;
    }
    v19 = v52;
  }
  else
  {
    v19 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3120;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3120), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v58, 0LL);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_66;
  }
  v20 = v19;
  v21 = *(__int64 **)(v10 + 3440);
  v22 = &v11[20 * v20];
  if ( !*(_DWORD *)(v10 + 3456) )
    goto LABEL_26;
  v23 = v60;
  v24 = 0;
  while ( *v21 != *(_QWORD *)(v10 + 3440) )
  {
    if ( *((_DWORD *)v21 + 124) != 1 || *((_BYTE *)v21 + 510) != 1 )
      goto LABEL_24;
    v53 = *((_DWORD *)v21 + 126);
    DmmGetVideoOutputTechnology(*(_QWORD *)(v10 + 3688), v53, &v54, 0LL);
    v22[16] = IsInternalVideoOutput(v54);
    v25 = *(unsigned int *)(v4 + 156);
    v26 = *(_QWORD *)(v10 + 3688);
    LOBYTE(v61) = 0;
    DmmIsPresentPathInClientVidPnTopology(v26, v25, v53, &v61);
    if ( !(_BYTE)v61 )
    {
      if ( !*((_BYTE *)v21 + 944) )
        goto LABEL_24;
      v27 = *(unsigned int *)(v4 + 156);
      v28 = *(_QWORD *)(v10 + 3688);
      LOBYTE(v60) = 0;
      DmmCanAddPresentPathToClientVidPn(v28, v27, v53, &v60);
      if ( !(_BYTE)v60 )
        goto LABEL_24;
      *(_DWORD *)v22 = 0;
      goto LABEL_23;
    }
    if ( v23 )
    {
      *(_DWORD *)v22 = 1;
LABEL_23:
      *(_DWORD *)v22 |= 0x20000000u;
      *((_DWORD *)v22 + 1) = v53;
      *((_QWORD *)v22 + 1) = *(_QWORD *)(v10 + 2536);
      v22 += 20;
    }
LABEL_24:
    v21 = (__int64 *)*v21;
    if ( (unsigned int)++v24 >= *(_DWORD *)(v10 + 3456) )
      break;
  }
  UserBuffer = v56;
  v11 = *(char **)v57;
LABEL_26:
  DpiReleaseCoreSyncAccessSafe(v58, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_27:
  DxgkReleaseSessionModeChangeLock();
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v11;
  v5 = 8LL;
LABEL_28:
  v29 = Irp;
  Irp->IoStatus.Status = v7;
  v29->IoStatus.Information = v5;
  IofCompleteRequest(v29, 1);
  return (unsigned int)v7;
}

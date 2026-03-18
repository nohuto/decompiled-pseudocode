/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x1C00BA460
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00627F0 (DmmGetVideoOutputTechnology.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00B2C10 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00B2C84 (DxgkReleaseAdapterOpmI2CSync.c)
 *     MonitorHandleInternalIOCtrl @ 0x1C00BA6CC (MonitorHandleInternalIOCtrl.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00BBA54 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00BBBBC (DxgkReleaseAdapterDdiSync.c)
 *     DpiPdoSetDevicePower @ 0x1C00BC0D8 (DpiPdoSetDevicePower.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  __int64 v4; // rdi
  __int64 VideoOutputTechnology; // rbx
  _DWORD *UserBuffer; // r15
  __int64 v7; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 Length; // rcx
  unsigned int Options; // edx
  __int64 LowPart; // rbp
  unsigned int *p_NamedPipeType; // r14
  bool v13; // zf
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 Information; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  ULONG v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _DWORD *v38; // [rsp+28h] [rbp-60h]
  ULONG v39; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v40; // [rsp+98h] [rbp+10h]
  __int64 v41; // [rsp+A0h] [rbp+18h]
  __int64 v42; // [rsp+A8h] [rbp+20h] BYREF

  v41 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(VideoOutputTechnology) = -1073741637;
  v42 = 0LL;
  UserBuffer = a2->UserBuffer;
  v13 = *(_DWORD *)(v4 + 464) == 1;
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v39 = CurrentStackLocation->Parameters.Read.Length;
  v40 = Options;
  if ( !v13 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(Length);
    v24[4] = 0LL;
    v24[3] = &DpiPdoDispatchInternalIoctl;
    v24[5] = -1073741637LL;
    v24[6] = *(int *)(v4 + 464);
    v24[7] = LowPart;
LABEL_34:
    WdLogEvent5_WdError(v24);
    goto LABEL_35;
  }
  if ( (unsigned int)LowPart <= 0x23248B )
  {
    switch ( (_DWORD)LowPart )
    {
      case 0x23248B:
        goto LABEL_20;
      case 0x232407:
        if ( UserBuffer )
        {
          if ( (unsigned int)Length >= 0x18 )
          {
            LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology < 0 )
              goto LABEL_35;
            *(_QWORD *)UserBuffer = *(_QWORD *)(v7 + 2504);
            UserBuffer[2] = *(_DWORD *)(v4 + 472);
            UserBuffer[4] = *(_DWORD *)(*(_QWORD *)(v4 + 904) + 52LL);
            VideoOutputTechnology = (int)DmmGetVideoOutputTechnology(
                                           *(DXGADAPTER **)(v7 + 2504),
                                           *(_DWORD *)(v4 + 472),
                                           &v39,
                                           0LL);
            DpiReleaseCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              LODWORD(VideoOutputTechnology) = 0;
              UserBuffer[3] = v39;
              Information = 24LL;
              goto LABEL_16;
            }
            v25 = (_QWORD *)WdLogNewEntry5_WdError(v22);
            v25[3] = &DpiPdoDispatchInternalIoctl;
            v25[4] = DmmGetVideoOutputTechnology;
            v25[5] = VideoOutputTechnology;
            goto LABEL_33;
          }
          goto LABEL_45;
        }
        break;
      case 0x23242F:
        if ( p_NamedPipeType )
        {
          if ( Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v4 + 451) )
              DpiCheckForOutstandingD3Requests(v4);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
            LODWORD(VideoOutputTechnology) = DpiPdoSetDevicePower(a1, *p_NamedPipeType, 0LL);
            if ( *(_BYTE *)(v4 + 451) )
              DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_35;
          }
          goto LABEL_45;
        }
        break;
      case 0x232443:
        if ( byte_1C0046C52 == 1 || !*(_QWORD *)(v7 + 1632) )
          goto LABEL_35;
        if ( p_NamedPipeType )
        {
          if ( Options >= 0x10 )
          {
            if ( p_NamedPipeType[1] - 1 <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_35;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v7 + 2504), v34, v35, v36);
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 904) + 104LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 2504), 1LL);
              VideoOutputTechnology = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v7 + 1632))(
                                        *(_QWORD *)(v4 + 48),
                                        *(unsigned int *)(v4 + 472),
                                        *p_NamedPipeType,
                                        p_NamedPipeType[1],
                                        *((_QWORD *)p_NamedPipeType + 1));
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(v7 + 2504));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 904) + 104LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v7 + 2504));
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
                goto LABEL_35;
              goto LABEL_53;
            }
            break;
          }
          goto LABEL_45;
        }
        break;
      case 0x232447:
        if ( byte_1C0046C52 == 1 || !*(_QWORD *)(v7 + 1640) )
          goto LABEL_35;
        if ( p_NamedPipeType )
        {
          if ( Options >= 8 )
          {
            if ( UserBuffer && (unsigned int)(Length - 1) <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_35;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v7 + 2504), v26, v27, v28);
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 904) + 104LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 2504), 1LL);
              v38 = UserBuffer;
              v29 = v39;
              VideoOutputTechnology = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, ULONG, _DWORD *))(v7 + 1640))(
                                        *(_QWORD *)(v4 + 48),
                                        *(unsigned int *)(v4 + 472),
                                        *p_NamedPipeType,
                                        p_NamedPipeType[1],
                                        v39,
                                        v38);
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(v7 + 2504));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 904) + 104LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v7 + 2504));
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = v29;
                goto LABEL_16;
              }
LABEL_53:
              v37 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
              *(_QWORD *)(v37 + 24) = &DpiPdoDispatchInternalIoctl;
              *(_QWORD *)(v37 + 32) = VideoOutputTechnology;
              WdLogEvent5_WdWarning(v37);
              goto LABEL_35;
            }
            break;
          }
LABEL_45:
          LODWORD(VideoOutputTechnology) = -1073741789;
          v25 = (_QWORD *)WdLogNewEntry5_WdError(Length);
          v25[3] = &DpiPdoDispatchInternalIoctl;
          v25[4] = 0LL;
          v25[5] = -1073741789LL;
          goto LABEL_33;
        }
        break;
      default:
        v14 = LowPart - 2303107;
        v13 = (_DWORD)LowPart == 2303107;
        goto LABEL_9;
    }
    LODWORD(VideoOutputTechnology) = -1073741811;
    v25 = (_QWORD *)WdLogNewEntry5_WdError(Length);
    v25[3] = &DpiPdoDispatchInternalIoctl;
    v25[4] = 0LL;
    v25[5] = -1073741811LL;
LABEL_33:
    v24 = v25;
    goto LABEL_34;
  }
  if ( (_DWORD)LowPart == 2303119
    || (_DWORD)LowPart == 2303123
    || (_DWORD)LowPart == 2303127
    || (_DWORD)LowPart == 2303131 )
  {
LABEL_20:
    if ( byte_1C0046C52 != 1 )
    {
      LODWORD(VideoOutputTechnology) = DpiPdoHandleOpmIoctls(a1, (__int64)a2);
      Information = a2->IoStatus.Information;
      goto LABEL_16;
    }
LABEL_35:
    Information = v41;
    goto LABEL_16;
  }
  v14 = LowPart - 2303135;
  v13 = (_DWORD)LowPart == 2303135;
LABEL_9:
  if ( v13 || v14 == 4 )
    goto LABEL_20;
  LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
  if ( (int)VideoOutputTechnology < 0 )
    goto LABEL_35;
  v15 = MonitorHandleInternalIOCtrl(
          *(_QWORD *)(v7 + 2504),
          *(unsigned int *)(v4 + 472),
          (unsigned int)LowPart,
          v40,
          p_NamedPipeType,
          v39,
          UserBuffer,
          &v42);
  VideoOutputTechnology = v15;
  if ( v15 == -1073741637 )
  {
    v23 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v23 + 32) = -1073741637LL;
  }
  else
  {
    if ( v15 >= 0 || v15 == -2147483643 || v15 == -1073741789 )
      goto LABEL_15;
    v23 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v23 + 32) = VideoOutputTechnology;
  }
  *(_QWORD *)(v23 + 24) = &DpiPdoDispatchInternalIoctl;
  WdLogEvent5_WdWarning(v23);
LABEL_15:
  DpiReleaseCoreSyncAccessSafe(a1, 0);
  Information = v42;
LABEL_16:
  a2->IoStatus.Status = VideoOutputTechnology;
  a2->IoStatus.Information = Information;
  IofCompleteRequest(a2, 1);
  return (unsigned int)VideoOutputTechnology;
}

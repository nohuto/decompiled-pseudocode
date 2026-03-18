/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x1C00E047C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00C1860 (DpiGdoDispatchInternalIoctl.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C0180200 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     DpiPdoToggleDevicePowerEvents @ 0x1C000EF40 (DpiPdoToggleDevicePowerEvents.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoSetDevicePower @ 0x1C00E03AC (DpiPdoSetDevicePower.c)
 *     MonitorEnableDisableMonitor @ 0x1C00E07EC (MonitorEnableDisableMonitor.c)
 */

__int64 __fastcall DxgkPowerOnOffMonitor(__int64 a1, int a2, DWORD *a3, char a4, __int64 OutputBufferLength)
{
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdi
  int v10; // r14d
  __int64 v11; // rsi
  int v12; // edx
  __int64 i; // rsi
  struct _DEVICE_OBJECT *v14; // rcx
  int v15; // r14d
  unsigned int v16; // esi
  __int64 v17; // r15
  union _LARGE_INTEGER v18; // r13
  ULONG v19; // ebp
  __int64 v20; // rax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rcx
  __int64 v29; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  PIRP v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  union _LARGE_INTEGER InputBuffer; // [rsp+50h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-50h] BYREF
  int v45; // [rsp+D0h] [rbp+18h]

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  LODWORD(v7) = 0;
  v45 = 0;
  v10 = a2;
  v11 = a1;
  if ( (int)*a3 <= 1 )
  {
    a4 = 1;
  }
  else
  {
    LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, 1);
    if ( (int)v7 >= 0 )
    {
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v5 + 3688), 1LL, OutputBufferLength);
      DpiReleaseCoreSyncAccessSafe(v11, 1);
    }
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v5 + 483) )
    DpiCheckForOutstandingD3Requests(v5);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v5 + 3120), 1u);
  v12 = *(_DWORD *)(v5 + 236);
  if ( v12 == 2 || *(_DWORD *)(v5 + 240) == 2 && ((v12 - 3) & 0xFFFFFFFC) == 0 && v12 != 4 )
  {
    for ( i = *(_QWORD *)(v5 + 3112); i; i += 120LL )
    {
      if ( !*(_DWORD *)i )
        break;
      if ( *(_DWORD *)i == 1 && (v10 == -1 || *(_DWORD *)(i + 24) == v10) )
      {
        v14 = *(struct _DEVICE_OBJECT **)(i + 40);
        if ( v14 )
        {
          AttachedDeviceReference = IoGetAttachedDeviceReference(v14);
          if ( AttachedDeviceReference )
          {
            KeInitializeEvent(&Event, NotificationEvent, 0);
            InputBuffer.LowPart = *a3;
            v31 = IoBuildDeviceIoControlRequest(
                    0x23242Fu,
                    AttachedDeviceReference,
                    &InputBuffer,
                    4u,
                    0LL,
                    0,
                    1u,
                    &Event,
                    &IoStatusBlock);
            if ( v31 )
            {
              v31->IoStatus.Status = -1073741637;
              LODWORD(v7) = IofCallDriver(AttachedDeviceReference, v31);
              if ( (_DWORD)v7 == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                LODWORD(v7) = IoStatusBlock.Status;
              }
              if ( (int)v7 < 0 )
              {
                v33 = *(_QWORD *)(*(_QWORD *)(i + 40) + 64LL);
                KeEnterCriticalRegion();
                if ( *(_BYTE *)(v33 + 483) )
                  DpiCheckForOutstandingD3Requests(v33);
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v33 + 168), 1u);
                LODWORD(v7) = DpiPdoSetDevicePower(*(_QWORD *)(i + 40), *a3, 0);
                if ( *(_BYTE *)(v33 + 483) )
                  DpiEnableD3Requests(*(_QWORD *)(v33 + 24));
                ExReleaseResourceLite(*(PERESOURCE *)(v33 + 168));
                KeLeaveCriticalRegion();
                v6 = v45;
              }
            }
            else
            {
              LODWORD(v7) = -1073741670;
              v34 = WdLogNewEntry5_WdLowResource(v32);
              *(_QWORD *)(v34 + 24) = -1073741670LL;
              WdLogEvent5_WdLowResource(v34);
            }
            ObfDereferenceObject(AttachedDeviceReference);
          }
          else
          {
            LODWORD(v7) = -1073741823;
            v35 = WdLogNewEntry5_WdError(v29);
            *(_QWORD *)(v35 + 24) = -1073741823LL;
            WdLogEvent5_WdError(v35);
          }
          if ( (int)v7 < 0 )
            DpiPdoToggleDevicePowerEvents(i, *a3);
          else
            v45 = ++v6;
          v10 = a2;
        }
        else
        {
          DpiPdoToggleDevicePowerEvents(i, *a3);
        }
        *(_DWORD *)(i + 52) = *a3;
      }
    }
    ExReleaseResourceLite((PERESOURCE)(v5 + 3120));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v5 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
    if ( a4 && v6 )
    {
      v15 = 10;
      do
      {
        v16 = *(_DWORD *)(v5 + 3280);
        v17 = 0LL;
        --v15;
        if ( v16 )
        {
          v18.QuadPart = -1000000LL * v6;
          while ( 1 )
          {
            InputBuffer = v18;
            v19 = v16;
            if ( v16 > 0x40 )
              v19 = 64;
            if ( *a3 == 1 )
              v20 = *(_QWORD *)(v5 + 3296);
            else
              v20 = *(_QWORD *)(v5 + 3288);
            v21 = KeWaitForMultipleObjects(
                    v19,
                    (PVOID *)(v20 + 8 * v17),
                    WaitAll,
                    Executive,
                    0,
                    0,
                    &InputBuffer,
                    *(PKWAIT_BLOCK *)(v5 + 3304));
            v7 = v21;
            if ( v21 == 258 )
            {
              if ( v15 )
              {
                v36 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
                *(_QWORD *)(v36 + 24) = 258LL;
                WdLogEvent5_WdWarning(v36);
              }
              else
              {
                v37 = WdLogNewEntry5_WdError(v23);
                *(_QWORD *)(v37 + 24) = 258LL;
                WdLogEvent5_WdError(v37);
              }
            }
            else if ( v21 )
            {
              v38 = WdLogNewEntry5_WdError(v23);
              *(_QWORD *)(v38 + 24) = v7;
              WdLogEvent5_WdError(v38);
              return (unsigned int)v7;
            }
            v17 = v19 + (unsigned int)v17;
            v16 -= v19;
            if ( !v16 )
            {
              v6 = v45;
              break;
            }
          }
        }
      }
      while ( (_DWORD)v7 == 258 && v15 );
    }
    v11 = a1;
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v5 + 3120));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v5 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
  }
  if ( *a3 == 1 )
  {
    v26 = DpiAcquireCoreSyncAccessSafe(v11, 1);
    v7 = v26;
    if ( v26 < 0 )
    {
      v39 = WdLogNewEntry5_WdEvent(v27);
      *(_QWORD *)(v39 + 24) = v7;
      WdLogEvent5_WdEvent(v39);
    }
    else
    {
      MonitorEnableDisableMonitor(*(DXGADAPTER **)(v5 + 3688), 0LL, OutputBufferLength);
      DpiReleaseCoreSyncAccessSafe(v11, 1);
    }
  }
  return (unsigned int)v7;
}

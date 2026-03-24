/*
 * XREFs of MouseClassCreate @ 0x1C0001110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00021D0 (WPP_RECORDER_SF_qq.c)
 *     MouseClassLogError @ 0x1C00044D4 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004EF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqdq @ 0x1C0005B60 (WPP_RECORDER_SF_qqdq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0005C6C (WPP_RECORDER_SF_qqq.c)
 *     MouEnableDisablePort @ 0x1C000B000 (MouEnableDisablePort.c)
 */

__int64 __fastcall MouseClassCreate(__int64 a1, IRP *a2)
{
  IRP *v2; // rbx
  char v4; // r13
  __int64 v5; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _IO_REMOVE_LOCK *v7; // r12
  NTSTATUS v8; // ebp
  KIRQL v9; // al
  __int64 v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  unsigned int DeviceContext; // edx
  unsigned int v17; // r12d
  char *v18; // rax
  char v19; // di
  int v20; // edx
  __int64 v21; // rcx
  int v22; // r8d
  unsigned int v23; // edi
  ULONG RemlockSize; // [rsp+20h] [rbp-68h]
  LUID PrivilegeValue; // [rsp+90h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  v5 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  if ( v2->RequestorMode == 1 && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 1) != 0 )
  {
    v8 = -1073741790;
    goto LABEL_15;
  }
  v7 = (struct _IO_REMOVE_LOCK *)(v5 + 32);
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), v2, &File, 1u, 0x20u);
  if ( v8 >= 0 )
  {
    if ( *(_BYTE *)(v5 + 64) && !*(_BYTE *)(v5 + 65) )
    {
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 2, 2, 30, RemlockSize, a1, (char)v2);
      v8 = -1073741823;
    }
    else
    {
      if ( *(_QWORD *)v5 == *(_QWORD *)(v5 + 8) && SeSinglePrivilegeCheck((LUID)7LL, v2->RequestorMode) )
      {
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 144));
        CurrentStackLocation->FileObject->FsContext2 = DriverEntry;
        ++*(_DWORD *)(v5 + 80);
        KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 144), v9);
      }
      ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v5 )
      {
        if ( ++HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) != 1 )
        {
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          goto LABEL_14;
        }
        DeviceContext = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
        if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        {
          v17 = 0;
          do
          {
            v18 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v17;
            PrivilegeValue = (LUID)v18;
            if ( !v18[19] )
            {
              v19 = v18[16];
              v18[16] = 1;
              ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              if ( !v19 )
              {
                LOBYTE(v21) = 1;
                v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MouEnableDisablePort)(
                       v21,
                       v2,
                       *(_QWORD *)(*(_QWORD *)&PrivilegeValue + 8LL),
                       PrivilegeValue);
              }
              if ( v8 )
              {
                WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v20, v22, 31);
                MouseClassLogError(a1, -1073414135, 20120, v8, 0, 0LL, CurrentStackLocation->MajorFunction);
                *(_BYTE *)(*(_QWORD *)&PrivilegeValue + 16LL) = 0;
              }
              else
              {
                v4 = 1;
              }
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              DeviceContext = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
            }
            ++v17;
          }
          while ( v17 < DeviceContext );
          v7 = (struct _IO_REMOVE_LOCK *)(v5 + 32);
        }
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( !v4 )
          goto LABEL_14;
      }
      else
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( *(_QWORD *)(v5 + 8) != a1 )
        {
          ++v2->CurrentLocation;
          ++v2->Tail.Overlay.CurrentStackLocation;
          v23 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 16), v2);
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), v2, 0x20u);
          return v23;
        }
        LOBYTE(v10) = 1;
        v8 = MouEnableDisablePort(v10, v2, v5, &CurrentStackLocation->FileObject);
        if ( v8 )
        {
          WPP_RECORDER_SF_qqdq(
            WPP_GLOBAL_Control->DeviceExtension,
            v11,
            v12,
            v13,
            RemlockSize,
            a1,
            (char)v2,
            v8,
            *(_QWORD *)(v5 + 16));
          goto LABEL_14;
        }
      }
      v8 = 0;
    }
LABEL_14:
    IoReleaseRemoveLockEx(v7, v2, 0x20u);
  }
LABEL_15:
  v2->IoStatus.Status = v8;
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v14, 2LL);
  }
  return (unsigned int)v8;
}

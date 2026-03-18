/*
 * XREFs of RawDispatch @ 0x1404D5D20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RawQueryVolumeInformation @ 0x140484D40 (RawQueryVolumeInformation.c)
 *     RawFileSystemControl @ 0x140491518 (RawFileSystemControl.c)
 *     RawCreate @ 0x1404936D4 (RawCreate.c)
 *     RawCleanup @ 0x140493A2C (RawCleanup.c)
 *     RawClose @ 0x140494064 (RawClose.c)
 *     RawReadWriteDeviceControl @ 0x1404D5F20 (RawReadWriteDeviceControl.c)
 *     RawQueryInformation @ 0x140643F48 (RawQueryInformation.c)
 *     RawSetInformation @ 0x140643FE4 (RawSetInformation.c)
 */

__int64 __fastcall RawDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  unsigned int MajorFunction; // edx
  unsigned int VolumeInformation; // eax
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  UCHAR v13; // al
  unsigned int v14; // r14d
  unsigned int v15; // [rsp+30h] [rbp-18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_WORD *)(a1 + 2) != 336
    || (v13 = CurrentStackLocation->MajorFunction, CurrentStackLocation->MajorFunction == 13)
    && CurrentStackLocation->MinorFunction == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = a1 + 336;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( MajorFunction > 9 )
    {
      v8 = MajorFunction - 10;
      if ( !v8 )
      {
        VolumeInformation = RawQueryVolumeInformation(a1 + 336, a2, (__int64)CurrentStackLocation);
        goto LABEL_9;
      }
      v9 = v8 - 3;
      if ( !v9 )
      {
        VolumeInformation = RawFileSystemControl(a1 + 336, a2, (__int64)CurrentStackLocation);
        goto LABEL_9;
      }
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_8;
      v11 = v10 - 4;
      if ( !v11 )
      {
        VolumeInformation = RawCleanup((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2, (__int64)CurrentStackLocation);
        goto LABEL_9;
      }
      if ( v11 == 9 )
      {
        if ( CurrentStackLocation->MinorFunction == 1 )
        {
          v15 = -2147483631;
          a2->IoStatus.Status = -2147483631;
          IofCompleteRequest(a2, 1);
          goto LABEL_30;
        }
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
        if ( (*(_DWORD *)(v5 + 104) & 2) != 0 )
        {
          v15 = -1073741202;
          a2->IoStatus.Status = -1073741202;
          IofCompleteRequest(a2, 1);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 224));
          goto LABEL_30;
        }
        ++*(_DWORD *)(v5 + 112);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 224));
        goto LABEL_8;
      }
    }
    else
    {
      if ( MajorFunction == 9 )
      {
LABEL_8:
        VolumeInformation = RawReadWriteDeviceControl((PFSRTL_ADVANCED_FCB_HEADER)v5, a2);
LABEL_9:
        v15 = VolumeInformation;
LABEL_30:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return v15;
      }
      if ( !CurrentStackLocation->MajorFunction )
      {
        VolumeInformation = RawCreate((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2, (__int64)CurrentStackLocation);
        goto LABEL_9;
      }
      if ( MajorFunction == 2 )
      {
        VolumeInformation = RawClose((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2, (__int64)CurrentStackLocation);
        goto LABEL_9;
      }
      if ( CurrentStackLocation->MajorFunction > 2u )
      {
        if ( CurrentStackLocation->MajorFunction <= 4u )
          goto LABEL_8;
        if ( MajorFunction == 5 )
        {
          VolumeInformation = RawQueryInformation(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_9;
        }
        if ( MajorFunction == 6 )
        {
          VolumeInformation = RawSetInformation(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_9;
        }
      }
    }
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (v13 & 0xED) != 0 || v13 == 16 )
    v14 = -1073741808;
  else
    v14 = 0;
  a2->IoStatus.Status = v14;
  IofCompleteRequest(a2, 1);
  return v14;
}

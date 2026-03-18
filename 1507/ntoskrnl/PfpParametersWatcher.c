/*
 * XREFs of PfpParametersWatcher @ 0x1406B0294
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     ZwNotifyChangeKey @ 0x140181090 (ZwNotifyChangeKey.c)
 *     PfpParametersRead @ 0x1405B6A18 (PfpParametersRead.c)
 *     PfSnParametersRead @ 0x1405B6BFC (PfSnParametersRead.c)
 *     PfSnDetermineEnablePrefetcher @ 0x1405C2CF4 (PfSnDetermineEnablePrefetcher.c)
 *     PfpParametersPropagate @ 0x1406B0108 (PfpParametersPropagate.c)
 */

void __fastcall PfpParametersWatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbp
  void *v10; // rcx
  NTSTATUS v11; // eax
  void *v12; // rcx
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-58h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 504);
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire(a1 + 504, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v7, (ULONG_PTR)v5, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = *(void **)(a1 + 8);
  if ( v10 )
  {
    v11 = ZwNotifyChangeKey(
            v10,
            0LL,
            (PIO_APC_ROUTINE)(a1 + 32),
            (PVOID)1,
            (PIO_STATUS_BLOCK)(a1 + 16),
            0x1000000Fu,
            0,
            (PVOID)(a1 + 64),
            4u,
            1u);
    if ( v11 >= 0 )
      goto LABEL_12;
    if ( v11 == -1073741444 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      {
        v12 = *(void **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = KeyHandle;
        if ( v12 )
          ZwClose(v12);
        if ( ZwNotifyChangeKey(
               *(HANDLE *)(a1 + 8),
               0LL,
               (PIO_APC_ROUTINE)(a1 + 32),
               (PVOID)1,
               (PIO_STATUS_BLOCK)(a1 + 16),
               0x1000000Fu,
               0,
               (PVOID)(a1 + 64),
               4u,
               1u) >= 0 )
        {
LABEL_12:
          v13 = 0;
          if ( (int)PfpParametersRead(a1) >= 0 )
          {
            PfpParametersPropagate((_DWORD *)a1, v14, v15, v16);
            v13 = 1;
          }
          if ( (int)PfSnParametersRead(a1) >= 0 )
          {
            PfSnDetermineEnablePrefetcher();
            v13 = 1;
          }
          if ( v13 && *(_QWORD *)a1 )
            KeSetEvent(*(PRKEVENT *)a1, 0, 0);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}

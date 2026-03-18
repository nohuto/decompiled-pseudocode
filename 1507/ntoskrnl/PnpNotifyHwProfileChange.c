/*
 * XREFs of PnpNotifyHwProfileChange @ 0x14067C6F4
 * Callers:
 *     PnpDeviceEventWorker @ 0x14045FC1C (PnpDeviceEventWorker.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14067CC00 (PnpRequestHwProfileChangeNotification.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     PnpNotifyDriverCallback @ 0x14045E160 (PnpNotifyDriverCallback.c)
 *     PnpDereferenceNotify @ 0x14046120C (PnpDereferenceNotify.c)
 */

__int64 __fastcall PnpNotifyHwProfileChange(GUID *Source1, _DWORD *a2, UNICODE_STRING *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int8 v10; // cf
  __int64 v11; // rbx
  unsigned __int8 v12; // di
  signed __int32 v13; // eax
  struct _KTHREAD *CurrentThread; // rax
  GUID v15; // xmm0
  int v16; // edi
  __int64 v17; // r9
  struct _KTHREAD *v18; // rdx
  __int16 v19; // cx
  int v20; // eax
  _WORD *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int8 v24; // si
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned __int8 v29; // si
  _WORD *v30; // rcx
  _WORD *v31; // rsi
  unsigned __int8 v32; // di
  signed __int32 v33; // eax
  struct _KTHREAD *v34; // rax
  __int64 v35; // r9
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int8 v40; // r14
  _WORD *v41; // rcx
  unsigned __int8 v42; // bl
  signed __int32 v43; // eax
  unsigned int v45; // [rsp+20h] [rbp-30h] BYREF
  int v46; // [rsp+28h] [rbp-28h] BYREF
  GUID v47; // [rsp+2Ch] [rbp-24h]

  v45 = 0;
  v7 = KeAbPreAcquire((ULONG_PTR)&PnpHwProfileNotifyLock, 0LL, 0LL, a4);
  v8 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v10 = _interlockedbittestandreset((volatile signed __int32 *)&PnpHwProfileNotifyLock, 0);
  if ( !v10 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpHwProfileNotifyLock, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v11 = PnpProfileNotifyList;
  qword_14034B2E8 = (__int64)KeGetCurrentThread();
  dword_14034B310 = CurrentIrql;
  while ( (__int64 *)v11 != &PnpProfileNotifyList )
  {
    ++*(_WORD *)(v11 + 56);
    v12 = dword_14034B310;
    qword_14034B2E8 = 0LL;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpHwProfileNotifyLock, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpHwProfileNotifyLock, v13);
    __writecr8(v12);
    KeAbPostRelease((ULONG_PTR)&PnpHwProfileNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 72), 1u);
    if ( *(_BYTE *)(v11 + 58) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 72));
      v25 = KeGetCurrentThread();
      v26 = v25->KernelApcDisable + 1;
      v25->KernelApcDisable = v26;
      if ( !v26
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
        && !v25->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v15 = *Source1;
      v46 = 1310721;
      v47 = v15;
      v16 = PnpNotifyDriverCallback(v11, (__int64)&v46, &v45);
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 72));
      v18 = KeGetCurrentThread();
      v19 = v18->KernelApcDisable + 1;
      v18->KernelApcDisable = v19;
      if ( !v19
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
        && !v18->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v20 = v45;
      if ( v16 < 0 )
        v20 = 0;
      v45 = v20;
      if ( v20 < 0
        && (Source1 == &GUID_HWPROFILE_QUERY_CHANGE
         || RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) == 16) )
      {
        if ( a2 )
          *a2 = 7;
        if ( a3 )
        {
          a3->Length = 0;
          RtlCopyUnicodeString(a3, (PCUNICODE_STRING)(*(_QWORD *)(v11 + 48) + 56LL));
        }
        HIWORD(v46) = 16;
        v21 = (_WORD *)v11;
        v47 = GUID_HWPROFILE_CHANGE_CANCELLED;
        v22 = KeAbPreAcquire((ULONG_PTR)&PnpHwProfileNotifyLock, 0LL, 0LL, v17);
        v23 = v22;
        v24 = KeGetCurrentIrql();
        __writecr8(1uLL);
        v10 = _interlockedbittestandreset((volatile signed __int32 *)&PnpHwProfileNotifyLock, 0);
        if ( !v10 )
          ExpAcquireFastMutexContended((ULONG_PTR)&PnpHwProfileNotifyLock, v22);
        if ( v23 )
          *(_BYTE *)(v23 + 26) |= 1u;
        qword_14034B2E8 = (__int64)KeGetCurrentThread();
        dword_14034B310 = v24;
        do
        {
          ++*(_WORD *)(v11 + 56);
          v31 = (_WORD *)v11;
          v32 = dword_14034B310;
          qword_14034B2E8 = 0LL;
          v33 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpHwProfileNotifyLock, 1, 0);
          if ( v33 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpHwProfileNotifyLock, v33);
          __writecr8(v32);
          KeAbPostRelease((ULONG_PTR)&PnpHwProfileNotifyLock);
          v34 = KeGetCurrentThread();
          --v34->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 72), 1u);
          if ( !*(_BYTE *)(v11 + 58) )
            PnpNotifyDriverCallback(v11, (__int64)&v46, 0LL);
          ExReleaseResourceLite(*(PERESOURCE *)(v11 + 72));
          v36 = KeGetCurrentThread();
          v37 = v36->KernelApcDisable + 1;
          v36->KernelApcDisable = v37;
          if ( !v37
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
            && !v36->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v38 = KeAbPreAcquire((ULONG_PTR)&PnpHwProfileNotifyLock, 0LL, 0LL, v35);
          v39 = v38;
          v40 = KeGetCurrentIrql();
          __writecr8(1uLL);
          v10 = _interlockedbittestandreset((volatile signed __int32 *)&PnpHwProfileNotifyLock, 0);
          if ( !v10 )
            ExpAcquireFastMutexContended((ULONG_PTR)&PnpHwProfileNotifyLock, v38);
          if ( v39 )
            *(_BYTE *)(v39 + 26) |= 1u;
          v41 = (_WORD *)v11;
          qword_14034B2E8 = (__int64)KeGetCurrentThread();
          dword_14034B310 = v40;
          v11 = *(_QWORD *)(v11 + 8);
          PnpDereferenceNotify(v41);
          if ( v31 == v21 )
            PnpDereferenceNotify(v31);
        }
        while ( (__int64 *)v11 != &PnpProfileNotifyList );
        break;
      }
    }
    v27 = KeAbPreAcquire((ULONG_PTR)&PnpHwProfileNotifyLock, 0LL, 0LL, v17);
    v28 = v27;
    v29 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpHwProfileNotifyLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PnpHwProfileNotifyLock, v27);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    v30 = (_WORD *)v11;
    qword_14034B2E8 = (__int64)KeGetCurrentThread();
    dword_14034B310 = v29;
    v11 = *(_QWORD *)v11;
    PnpDereferenceNotify(v30);
  }
  v42 = dword_14034B310;
  qword_14034B2E8 = 0LL;
  v43 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpHwProfileNotifyLock, 1, 0);
  if ( v43 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpHwProfileNotifyLock, v43);
  __writecr8(v42);
  KeAbPostRelease((ULONG_PTR)&PnpHwProfileNotifyLock);
  return v45;
}

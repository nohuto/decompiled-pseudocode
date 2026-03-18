/*
 * XREFs of NtQueryMultipleValueKey @ 0x140542CE4
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpCaptureKeyValueArray @ 0x1401DF5AC (CmpCaptureKeyValueArray.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v6; // rsi
  PKEY_VALUE_ENTRY v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rtt
  BOOLEAN v11; // di
  struct _KTHREAD *v12; // rax
  __int16 v13; // cx
  int v14; // edi
  KPROCESSOR_MODE PreviousMode; // r14
  unsigned int *v16; // rcx
  __int64 v17; // rdi
  _DWORD *v18; // rcx
  volatile void *v19; // r12
  struct _KTHREAD *v20; // rax
  int v21; // eax
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  __int64 v24; // rcx
  unsigned int v25; // r8d
  __int64 v26; // rdx
  unsigned __int64 v27; // rtt
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  char v31; // [rsp+40h] [rbp-138h]
  char v32; // [rsp+41h] [rbp-137h]
  BOOLEAN v33; // [rsp+42h] [rbp-136h]
  unsigned int Length[5]; // [rsp+44h] [rbp-134h] BYREF
  PVOID v35; // [rsp+58h] [rbp-120h] BYREF
  PVOID P; // [rsp+60h] [rbp-118h] BYREF
  ULONG v37; // [rsp+68h] [rbp-110h] BYREF
  PVOID Object; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v39; // [rsp+78h] [rbp-100h]
  PVOID v40; // [rsp+80h] [rbp-F8h] BYREF
  PVOID v41[2]; // [rsp+88h] [rbp-F0h] BYREF
  volatile void *v42; // [rsp+98h] [rbp-E0h]
  PULONG v43; // [rsp+A0h] [rbp-D8h]
  _QWORD v44[2]; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-C0h]
  _QWORD v46[10]; // [rsp+D0h] [rbp-A8h] BYREF
  int v47; // [rsp+120h] [rbp-58h] BYREF
  __int64 v48; // [rsp+124h] [rbp-54h]
  int v49; // [rsp+12Ch] [rbp-4Ch]

  v42 = ValueBuffer;
  v6 = EntryCount;
  v7 = ValueEntries;
  *(_QWORD *)&Length[1] = ValueEntries;
  v41[1] = ValueEntries;
  Length[3] = EntryCount;
  v43 = BufferLength;
  Length[0] = 0;
  v37 = 0;
  Object = 0LL;
  memset(v46, 0, 72);
  v47 = 0;
  v48 = 0LL;
  v49 = 0;
  v45 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v47, (char *)0x20000);
  v31 = 0;
  v32 = 0;
  v35 = 0LL;
  v44[1] = v44;
  v44[0] = v44;
  P = 0LL;
  v40 = 0LL;
  v41[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v10 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v11 = 1;
  }
  else
  {
    v11 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v11 )
    {
      v12 = KeGetCurrentThread();
      v13 = v12->KernelApcDisable + 1;
      v12->KernelApcDisable = v13;
      if ( !v13
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
        && !v12->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  v33 = v11;
  if ( !v11 )
  {
    v14 = -1073741431;
    goto LABEL_39;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v14 = CmObReferenceObjectByHandle(KeyHandle, 1u, *(void **)&EntryCount, PreviousMode, &v35, 0LL);
  if ( v14 < 0 )
    goto LABEL_38;
  if ( CmpTraceRoutine && v35 )
    v45 = *((_QWORD *)v35 + 1);
  if ( PreviousMode == 1 )
  {
    v16 = BufferLength;
    if ( (unsigned __int64)BufferLength >= MmUserProbeAddress )
      v16 = (unsigned int *)MmUserProbeAddress;
    Length[0] = *v16;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(-1073741670);
    v17 = *(_QWORD *)&Length[1];
    ProbeForWrite(*(volatile void **)&Length[1], 24 * v6, 4u);
    if ( RequiredBufferLength )
    {
      v18 = RequiredBufferLength;
      if ( (unsigned __int64)RequiredBufferLength >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = *v18;
    }
    v19 = v42;
    ProbeForWrite(v42, Length[0], 4u);
  }
  else
  {
    Length[0] = *BufferLength;
    v17 = *(_QWORD *)&Length[1];
    v19 = v42;
  }
  v14 = CmpCaptureKeyValueArray(v17, v6, PreviousMode, &P, &v40, v41);
  if ( v14 < 0 )
    goto LABEL_38;
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v32 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v46[0] = v35;
    v46[1] = P;
    LODWORD(v46[2]) = v6;
    v46[3] = v19;
    v46[4] = Length;
    v46[5] = RequiredBufferLength;
    v21 = CmpCallCallBacks(9u, (__int64)v46, 1, 24LL, (__int64)v35, (__int64)v44);
    v14 = v21;
    if ( v21 < 0 )
    {
      v7 = *(PKEY_VALUE_ENTRY *)&Length[1];
      if ( v21 == -1073740541 )
        v14 = 0;
      goto LABEL_39;
    }
    v31 = 1;
  }
  v14 = CmKeyBodyRemapToVirtualForEnum((__int64)&v35, PreviousMode, 1, &Object);
  if ( v14 < 0 )
  {
LABEL_38:
    v7 = *(PKEY_VALUE_ENTRY *)&Length[1];
    goto LABEL_39;
  }
  v14 = CmQueryMultipleValueKey((__int64)v35, (__int64)Object, (__int64)P, v6, (__int64)v19, Length, &v37);
  if ( RequiredBufferLength )
    *RequiredBufferLength = v37;
  v7 = *(PKEY_VALUE_ENTRY *)&Length[1];
LABEL_39:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v31 )
    v14 = CmPostCallbackNotification(24, (__int64)v35, v14, (__int64)v46, v44);
  if ( v32 )
  {
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v24 = (__int64)v35;
  if ( v35 )
    ObfDereferenceObject(v35);
  if ( P )
  {
    *BufferLength = Length[0];
    v24 = 0x80000000LL;
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
    {
      v25 = 0;
      v39 = 0;
      while ( v25 < (unsigned int)v6 )
      {
        v26 = v25;
        v24 = (__int64)P;
        v7[v26].DataLength = *((_DWORD *)P + 6 * v25 + 2);
        v7[v26].DataOffset = *(_DWORD *)(v24 + 24LL * v25 + 12);
        v7[v26].Type = *(_DWORD *)(v24 + 24LL * v25++ + 16);
        v39 = v25;
      }
    }
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v24) = 19;
    CmpTraceRoutine(v24, &v47, (unsigned int)v14, (unsigned int)v6, v45, 0LL);
  }
  if ( v33 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v27 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v27 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v28 = KeGetCurrentThread();
    v29 = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = v29;
    if ( !v29
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
      && !v28->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v40 )
    ExFreePoolWithTag(v40, 0);
  if ( v41[0] )
    ExFreePoolWithTag(v41[0], 0);
  return v14;
}

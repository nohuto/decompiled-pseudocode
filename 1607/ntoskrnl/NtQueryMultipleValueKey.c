/*
 * XREFs of NtQueryMultipleValueKey @ 0x1404C0BFC
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpCaptureKeyValueArray @ 0x1401B2B70 (CmpCaptureKeyValueArray.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 */

NTSTATUS __stdcall NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  BOOLEAN v10; // di
  __int64 i; // r8
  __int64 v12; // r9
  int MultipleValueKey; // edi
  KPROCESSOR_MODE PreviousMode; // r12
  PULONG v15; // rax
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rax
  int v18; // eax
  _DWORD *v19; // rcx
  PVOID v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v25; // [rsp+40h] [rbp-128h]
  char v26; // [rsp+41h] [rbp-127h]
  BOOLEAN v27; // [rsp+42h] [rbp-126h]
  unsigned int Length[3]; // [rsp+44h] [rbp-124h] BYREF
  PVOID v29; // [rsp+50h] [rbp-118h] BYREF
  PVOID P; // [rsp+58h] [rbp-110h] BYREF
  unsigned int v31[2]; // [rsp+60h] [rbp-108h] BYREF
  volatile void *Address; // [rsp+68h] [rbp-100h]
  PVOID Object[3]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+88h] [rbp-E0h]
  PVOID v35; // [rsp+90h] [rbp-D8h] BYREF
  PVOID v36; // [rsp+98h] [rbp-D0h] BYREF
  _SLIST_ENTRY v37; // [rsp+A0h] [rbp-C8h] BYREF
  HANDLE v38; // [rsp+B0h] [rbp-B8h]
  _QWORD v39[10]; // [rsp+C0h] [rbp-A8h] BYREF
  int v40; // [rsp+110h] [rbp-58h] BYREF
  __int64 v41; // [rsp+114h] [rbp-54h]
  int v42; // [rsp+11Ch] [rbp-4Ch]

  Address = ValueBuffer;
  v6 = EntryCount;
  v38 = KeyHandle;
  Object[1] = ValueEntries;
  Length[1] = EntryCount;
  Object[2] = BufferLength;
  Length[0] = 0;
  v31[0] = 0;
  Object[0] = 0LL;
  memset(v39, 0, 0x48uLL);
  v40 = 0;
  v41 = 0LL;
  v42 = 0;
  v34 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v40, 0x20000uLL);
  v25 = 0;
  v26 = 0;
  v29 = 0LL;
  *((_QWORD *)&v37.Next + 1) = &v37;
  v37.Next = &v37;
  P = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v10 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9 * 3, i, v12);
  v27 = v10;
  if ( !v10 )
  {
    MultipleValueKey = -1073741431;
    goto LABEL_32;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(v38, 1u, (void *)i, PreviousMode, &v29, 0LL);
  if ( MultipleValueKey >= 0 )
  {
    if ( CmpTraceRoutine && v29 )
      v34 = *((_QWORD *)v29 + 1);
    if ( PreviousMode == 1 )
    {
      v15 = BufferLength;
      if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
        v15 = (PULONG)0x7FFFFFFF0000LL;
      Length[0] = *v15;
      if ( (unsigned int)v6 > 0x10000 )
        RtlRaiseStatus(-1073741670);
      ProbeForWrite(ValueEntries, 24 * v6, 4u);
      if ( RequiredBufferLength )
      {
        v16 = (__int64)RequiredBufferLength;
        if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
          v16 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v16 = *(_DWORD *)v16;
      }
      ProbeForWrite(Address, Length[0], 4u);
    }
    else
    {
      Length[0] = *BufferLength;
    }
    MultipleValueKey = CmpCaptureKeyValueArray((__int64)ValueEntries, v6, PreviousMode, &P, &v35, &v36);
    if ( MultipleValueKey >= 0 )
    {
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      v26 = 1;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v39[0] = v29;
        v39[1] = P;
        LODWORD(v39[2]) = v6;
        v39[3] = Address;
        v39[4] = Length;
        v39[5] = RequiredBufferLength;
        v18 = CmpCallCallBacks(9u, (__int64)v39, 1, 0x18u, (__int64)v29, &v37);
        MultipleValueKey = v18;
        if ( v18 < 0 )
        {
          if ( v18 == -1073740541 )
            MultipleValueKey = 0;
          goto LABEL_32;
        }
        v25 = 1;
      }
      MultipleValueKey = CmKeyBodyRemapToVirtualForEnum(&v29, PreviousMode, 1, Object);
      if ( MultipleValueKey >= 0 )
      {
        MultipleValueKey = CmQueryMultipleValueKey(
                             (__int64)v29,
                             (__int64)Object[0],
                             (__int64)P,
                             v6,
                             (__int64)Address,
                             Length,
                             v31);
        if ( RequiredBufferLength )
          *RequiredBufferLength = v31[0];
      }
    }
  }
LABEL_32:
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v25 )
    MultipleValueKey = CmPostCallbackNotification(24, (__int64)v29, MultipleValueKey, (__int64)v39, &v37);
  if ( P )
  {
    *BufferLength = Length[0];
    if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v31[1] = i;
        if ( (unsigned int)i >= (unsigned int)v6 )
          break;
        v9 = i;
        v19 = P;
        ValueEntries[v9].DataLength = *((_DWORD *)P + 6 * i + 2);
        ValueEntries[v9].DataOffset = v19[6 * i + 3];
        ValueEntries[v9].Type = v19[6 * i + 4];
      }
    }
  }
  if ( v26 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9 * 3, i, v12);
  v20 = v29;
  if ( v29 )
    ObfDereferenceObject(v29);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v20) = 19;
    CmpTraceRoutine(v20, &v40, (unsigned int)MultipleValueKey, (unsigned int)v6, v34, 0LL);
  }
  if ( v27 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  return MultipleValueKey;
}

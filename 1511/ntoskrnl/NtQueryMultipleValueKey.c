/*
 * XREFs of NtQueryMultipleValueKey @ 0x1404A8360
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 */

NTSTATUS __stdcall NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  void *v9; // r8
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v11; // rcx
  NTSTATUS v12; // edi
  ULONG *v13; // rcx
  SIZE_T v14; // r12
  _DWORD *v15; // rcx
  volatile void *v16; // r12
  struct _KTHREAD *v17; // rax
  signed int MultipleValueKey; // r8d
  __int64 v20; // rcx
  ULONG v21; // [rsp+40h] [rbp-118h] BYREF
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  _DWORD v23[4]; // [rsp+50h] [rbp-108h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-F8h]
  PVOID v25; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-E8h]
  _QWORD v27[2]; // [rsp+78h] [rbp-E0h] BYREF
  HANDLE v28; // [rsp+88h] [rbp-D0h]
  PULONG v29; // [rsp+90h] [rbp-C8h]
  PKEY_VALUE_ENTRY v30; // [rsp+98h] [rbp-C0h]
  PULONG v31; // [rsp+A0h] [rbp-B8h]
  PVOID v32; // [rsp+A8h] [rbp-B0h]
  _QWORD v33[10]; // [rsp+B0h] [rbp-A8h] BYREF
  int v34; // [rsp+100h] [rbp-58h] BYREF
  __int64 v35; // [rsp+104h] [rbp-54h]
  int v36; // [rsp+10Ch] [rbp-4Ch]

  v7 = EntryCount;
  Address = ValueEntries;
  v28 = KeyHandle;
  v30 = ValueEntries;
  v23[2] = EntryCount;
  v32 = ValueBuffer;
  v31 = BufferLength;
  v29 = RequiredBufferLength;
  v21 = 0;
  v23[0] = 0;
  v25 = 0LL;
  memset(v33, 0, 72);
  v34 = 0;
  v35 = 0LL;
  v36 = 0;
  v26 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v34, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v12 = CmObReferenceObjectByHandle(v28, 1u, v9, PreviousMode, &Object, 0LL);
    if ( v12 >= 0 )
    {
      if ( CmpTraceRoutine && Object )
        v26 = *((_QWORD *)Object + 1);
      if ( PreviousMode == 1 )
      {
        v13 = BufferLength;
        if ( (unsigned __int64)BufferLength >= MmUserProbeAddress )
          v13 = (ULONG *)MmUserProbeAddress;
        v14 = *v13;
        v21 = *v13;
        if ( (unsigned int)v7 > 0x10000 )
          RtlRaiseStatus(-1073741670);
        ProbeForWrite(Address, 24 * v7, 4u);
        if ( RequiredBufferLength )
        {
          v15 = RequiredBufferLength;
          if ( (unsigned __int64)RequiredBufferLength >= MmUserProbeAddress )
            v15 = (_DWORD *)MmUserProbeAddress;
          *v15 = *v15;
        }
        ProbeForWrite(ValueBuffer, v14, 4u);
      }
      else
      {
        v21 = *BufferLength;
      }
      v16 = Address;
      v27[1] = v27;
      v27[0] = v27;
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v33[0] = Object;
        v33[1] = v16;
        LODWORD(v33[2]) = v7;
        v33[3] = ValueBuffer;
        v33[4] = BufferLength;
        v33[5] = RequiredBufferLength;
        v12 = CmpCallCallBacks(9u, (__int64)v33, 1, 0x18u, (__int64)Object, (__int64)v27);
      }
      if ( v12 < 0 )
      {
        if ( v12 == -1073740541 )
          v12 = 0;
      }
      else
      {
        MultipleValueKey = CmKeyBodyRemapToVirtualForEnum((__int64)&Object, &v25);
        if ( MultipleValueKey >= 0 )
        {
          MultipleValueKey = CmQueryMultipleValueKey(
                               (_DWORD)Object,
                               (_DWORD)v25,
                               (_DWORD)v16,
                               v7,
                               (__int64)ValueBuffer,
                               (__int64)&v21,
                               (__int64)v23);
          LODWORD(Address) = MultipleValueKey;
          *BufferLength = v21;
          if ( RequiredBufferLength )
            *RequiredBufferLength = v23[0];
        }
        v12 = CmPostCallbackNotification(0x18u, (__int64)Object, MultipleValueKey, (__int64)v33, v27);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v25 )
        ObfDereferenceObject(v25);
      ObfDereferenceObject(Object);
    }
    if ( CmpTraceRoutine )
    {
      LOBYTE(v11) = 19;
      CmpTraceRoutine(v11, &v34, (unsigned int)v12, (unsigned int)v7, v26, 0LL);
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v12;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v20) = 19;
      CmpTraceRoutine(v20, &v34, 3221225865LL, (unsigned int)v7, 0LL, 0LL);
    }
    return -1073741431;
  }
}

/*
 * XREFs of EtwpCrimsonProvEnableCallback @ 0x14054B3D8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpPsProvCaptureState @ 0x1406A7E54 (EtwpPsProvCaptureState.c)
 */

void __fastcall EtwpCrimsonProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  REGHANDLE v9; // rdi
  int v10; // ebx
  BOOLEAN v11; // al
  int v12; // ecx
  BOOLEAN v13; // al
  int v14; // ecx
  unsigned int v15; // ebx
  __int64 v16; // r10
  int *v17; // r9
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  REGHANDLE v21; // rdi
  int v22; // ebx
  int v23; // edi
  int v24; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-4Ch]
  int v26; // [rsp+38h] [rbp-48h]
  int v27; // [rsp+3Ch] [rbp-44h]
  int v28; // [rsp+40h] [rbp-40h]
  int v29; // [rsp+44h] [rbp-3Ch]

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( (_DWORD)CallbackContext == 1 )
  {
    v9 = EtwpPsProvRegHandle;
    v10 = 0;
    if ( EtwEventEnabled(EtwpPsProvRegHandle, &ProcessStart) || EtwEventEnabled(v9, &EnableProcessTracingCallbacks) )
      v10 = 1;
    if ( EtwEventEnabled(v9, &ThreadStart) )
      v10 |= 2u;
    if ( EtwEventEnabled(v9, &ImageLoad) )
      v10 |= 4u;
    if ( EtwEventEnabled(v9, &JobStart) )
      v10 |= 0x80000u;
    v24 = 524295;
    v25 = v10;
    v11 = EtwProviderEnabled(v9, 0, 0x180uLL);
    v12 = 0;
    v26 = 536879104;
    if ( v11 )
      v12 = 536879104;
    v27 = v12;
    v13 = EtwProviderEnabled(v9, 0, 0x200uLL);
    v14 = 0;
    v28 = 1073741826;
    v15 = 3;
    if ( v13 )
      v14 = 1073741826;
    v29 = v14;
    if ( ControlCode == 2 )
      EtwpPsProvCaptureState(&PsProvGuid, MatchAnyKeyword);
  }
  else
  {
    if ( (_DWORD)CallbackContext == 0x2000000 )
    {
      v21 = EtwpFileProvRegHandle;
      v22 = 0;
      if ( EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x10uLL) )
        v22 = 512;
      if ( EtwProviderEnabled(v21, 0, 0x60uLL) )
        v22 |= 0x2000000u;
      if ( EtwProviderEnabled(v21, 0, 0x1FA0uLL) )
        v22 |= 0x4000000u;
      v24 = 100663808;
      v25 = v22;
    }
    else if ( (_DWORD)CallbackContext == 536870913 )
    {
      v23 = 0;
      if ( EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x20uLL) )
        v23 = 537395200;
      if ( EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x40uLL) )
        v23 |= 0x20800000u;
      v24 = 545783808;
      v25 = v23;
    }
    else
    {
      v24 = (int)CallbackContext;
      v25 = ControlCode != 0 ? (unsigned int)CallbackContext : 0;
    }
    v15 = 1;
  }
  v16 = v15;
  v17 = &v24;
  do
  {
    v18 = v17[1];
    v19 = *v17 & ~v18;
    v17 += 2;
    *((_DWORD *)&EtwpGroupMasks + ((unsigned __int64)v18 >> 29) + 64) |= v18 & 0x1FFFFFFF;
    *((_DWORD *)&EtwpGroupMasks + ((unsigned __int64)v19 >> 29) + 64) &= ~(v19 & 0x1FFFFFFF);
    --v16;
  }
  while ( v16 );
  KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57777445u);
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))EtwpUpdateKernelGroupsWork;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
}

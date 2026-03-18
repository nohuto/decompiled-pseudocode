/*
 * XREFs of EtwpCrimsonProvEnableCallback @ 0x1404D00D4
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     EtwProviderEnabled @ 0x1400F5C68 (EtwProviderEnabled.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     EtwpPsProvCaptureState @ 0x1406662B0 (EtwpPsProvCaptureState.c)
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
  __int64 v14; // r8
  int v15; // ecx
  unsigned int v16; // ebx
  __int64 v17; // r10
  int *v18; // r9
  unsigned int v19; // ecx
  unsigned int v20; // r8d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  REGHANDLE v22; // rdi
  int v23; // ebx
  int v24; // edi
  int v25; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-4Ch]
  int v27; // [rsp+38h] [rbp-48h]
  int v28; // [rsp+3Ch] [rbp-44h]
  int v29; // [rsp+40h] [rbp-40h]
  int v30; // [rsp+44h] [rbp-3Ch]

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
    v25 = 524295;
    v26 = v10;
    v11 = EtwProviderEnabled(v9, 0, 0x180uLL);
    v12 = 0;
    v27 = 536879104;
    if ( v11 )
      v12 = 536879104;
    v28 = v12;
    v13 = EtwProviderEnabled(v9, 0, 0x200uLL);
    v15 = 0;
    v29 = 1073741826;
    v16 = 3;
    if ( v13 )
      v15 = 1073741826;
    v30 = v15;
    if ( ControlCode == 2 )
      EtwpPsProvCaptureState(&PsProvGuid, MatchAnyKeyword, v14);
  }
  else
  {
    if ( (_DWORD)CallbackContext == 0x2000000 )
    {
      v22 = EtwpFileProvRegHandle;
      v23 = 0;
      if ( EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x10uLL) )
        v23 = 512;
      if ( EtwProviderEnabled(v22, 0, 0x60uLL) )
        v23 |= 0x2000000u;
      if ( EtwProviderEnabled(v22, 0, 0x1FA0uLL) )
        v23 |= 0x4000000u;
      v25 = 100663808;
      v26 = v23;
    }
    else if ( (_DWORD)CallbackContext == 536870913 )
    {
      v24 = 0;
      if ( EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x20uLL) )
        v24 = 537395200;
      if ( EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x40uLL) )
        v24 |= 0x20800000u;
      v25 = 545783808;
      v26 = v24;
    }
    else
    {
      v25 = (int)CallbackContext;
      v26 = ControlCode != 0 ? (unsigned int)CallbackContext : 0;
    }
    v16 = 1;
  }
  v17 = v16;
  v18 = &v25;
  do
  {
    v19 = v18[1];
    v20 = *v18 & ~v19;
    v18 += 2;
    *((_DWORD *)&EtwpGroupMasks + ((unsigned __int64)v19 >> 29) + 64) |= v19 & 0x1FFFFFFF;
    *((_DWORD *)&EtwpGroupMasks + ((unsigned __int64)v20 >> 29) + 64) &= ~(v20 & 0x1FFFFFFF);
    --v17;
  }
  while ( v17 );
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

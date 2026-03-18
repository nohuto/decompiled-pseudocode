/*
 * XREFs of VidSchInitializeAdapter @ 0x1C006B220
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0069BF8 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiInitializeNode @ 0x1C006B900 (VidSchiInitializeNode.c)
 *     VidSchiCreateNode @ 0x1C006B9A8 (VidSchiCreateNode.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C006BBA0 (VidSchiReadGlobalConfiguration.c)
 *     VidSchTerminateAdapter @ 0x1C00A19F0 (VidSchTerminateAdapter.c)
 */

__int64 __fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  PVOID PoolWithTag; // rax
  __int64 v8; // rcx
  __int64 StartContext; // rbx
  int v10; // eax
  __int64 v11; // r10
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  int v16; // ecx
  size_t v17; // rsi
  PVOID v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID v21; // rax
  char v22; // cl
  int v23; // eax
  struct _KEVENT *v24; // rsi
  __int64 v25; // rbp
  struct _KEVENT *v26; // rsi
  __int64 v27; // rbp
  __int64 Timer; // rax
  __int64 v29; // rcx
  unsigned int v30; // ebp
  PVOID v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  _DWORD *v35; // rax
  __int64 v36; // r14
  _QWORD *v37; // rax
  __int64 v38; // r15
  __int64 v39; // r12
  union _SLIST_HEADER *v40; // rcx
  unsigned int v41; // esi
  unsigned int v42; // ebp
  unsigned int v43; // r14d
  unsigned int v44; // r15d
  __int64 Node; // rax
  __int64 v46; // rdx
  NTSTATUS v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-58h] BYREF
  void *ThreadHandle; // [rsp+A0h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x1620uLL, 0x68536956u);
    StartContext = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v54 = WdLogNewEntry5_WdWarning(v8);
      WdLogEvent5_WdWarning(v54);
      return 0LL;
    }
    memset(PoolWithTag, 0, 0x1620uLL);
    *(_DWORD *)StartContext = 1818380118;
    *(_DWORD *)(StartContext + 4) = *(_DWORD *)(v6 + 200);
    *(_QWORD *)(StartContext + 8) = a1;
    *(_QWORD *)(StartContext + 16) = v6;
    *(_QWORD *)(StartContext + 24) = a2;
    *(_DWORD *)(StartContext + 32) = *(_DWORD *)(v6 + 1492);
    *(_DWORD *)(StartContext + 36) = 7;
    *(_QWORD *)(StartContext + 5632) = a3;
    v10 = *(_DWORD *)(v6 + 1008);
    *(_DWORD *)(StartContext + 40) = v10;
    if ( !v10 )
    {
      *(_DWORD *)(StartContext + 40) = 1;
      *(_BYTE *)(StartContext + 50) = 1;
    }
    if ( *(_BYTE *)(v6 + 1999) )
      *(_BYTE *)(StartContext + 51) = 1;
    *(_BYTE *)(StartContext + 45) = (*(_DWORD *)(v6 + 1520) & 2) != 0;
    *(_BYTE *)(StartContext + 44) = *(_BYTE *)(v6 + 1994);
    *(_BYTE *)(StartContext + 46) = (*(_DWORD *)(v6 + 1520) & 0x10) != 0;
    *(_BYTE *)(StartContext + 47) = (*(_DWORD *)(v6 + 1516) & 0x10) != 0;
    *(_BYTE *)(StartContext + 48) = (*(_BYTE *)(v6 + 1520) & 0x20) == 0;
    *(_BYTE *)(StartContext + 49) = (*(_DWORD *)(v6 + 1520) & 0x40) != 0;
    *(_DWORD *)(StartContext + 128) = *(_DWORD *)(v6 + 2000);
    v11 = *(unsigned int *)(v6 + 248);
    *(_QWORD *)(StartContext + 56) = (unsigned int)v11;
    if ( (_DWORD)v11 )
    {
      v12 = 0;
      v13 = 0LL;
      v14 = (unsigned int)v11;
      do
      {
        v15 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 2040) + v13);
        v13 += 48LL;
        v12 += v15;
        *(_DWORD *)(StartContext + 60) = v12;
        --v14;
      }
      while ( v14 );
    }
    v16 = 31;
    if ( *(_DWORD *)(v6 + 1512) < 0x1Fu )
      v16 = *(_DWORD *)(v6 + 1512);
    *(_DWORD *)(StartContext + 2416) = v16;
    v17 = 8 * v11;
    *(_DWORD *)(StartContext + 2136) ^= (*(_DWORD *)(StartContext + 2136) ^ (8 * *(_DWORD *)(v6 + 1516))) & 0x10;
    *(_DWORD *)(StartContext + 2136) ^= ((unsigned __int8)*(_DWORD *)(StartContext + 2136) ^ (unsigned __int8)(4 * *(_DWORD *)(v6 + 1516))) & 0x20;
    v18 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v11, 0x68536956u);
    *(_QWORD *)(StartContext + 224) = v18;
    if ( v18
      && (memset(v18, 0, v17),
          v21 = ExAllocatePoolWithTag((POOL_TYPE)512, v17, 0x68536956u),
          (*(_QWORD *)(StartContext + 232) = v21) != 0LL) )
    {
      memset(v21, 0, v17);
      *(_DWORD *)(StartContext + 256) = 0;
      VidSchiReadGlobalConfiguration(StartContext);
      v22 = *(_BYTE *)(StartContext + 2136) & 0xA0;
      *(_DWORD *)(StartContext + 2144) = 5;
      *(_DWORD *)(StartContext + 2148) = 31;
      v23 = 1;
      if ( v22 == -96 )
        v23 = 3;
      *(_DWORD *)(StartContext + 2136) |= 8u;
      *(_DWORD *)(StartContext + 2140) = v23;
      if ( !*(_DWORD *)(StartContext + 2152) && (*(_DWORD *)(v6 + 1516) & 0x40) == 0 )
        *(_DWORD *)(StartContext + 2152) = 1;
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1024));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1128));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1232));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 264));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1856));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1880));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1864));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1872));
      v24 = (struct _KEVENT *)(StartContext + 1336);
      v25 = 4LL;
      do
      {
        memset(v24, 0, 0x38uLL);
        KeInitializeEvent(v24, SynchronizationEvent, 0);
        v24 = (struct _KEVENT *)((char *)v24 + 56);
        --v25;
      }
      while ( v25 );
      v26 = (struct _KEVENT *)(StartContext + 1560);
      v27 = 4LL;
      do
      {
        memset(v26, 0, 0x38uLL);
        KeInitializeEvent(v26, SynchronizationEvent, 0);
        v26 = (struct _KEVENT *)((char *)v26 + 56);
        --v27;
      }
      while ( v27 );
      Timer = ExAllocateTimer(VidSchiWorkerThreadTimerCallback, StartContext, 4LL);
      *(_QWORD *)(StartContext + 152) = Timer;
      if ( !Timer )
      {
LABEL_47:
        v55 = WdLogNewEntry5_WdWarning(v29);
        WdLogEvent5_WdWarning(v55);
        goto LABEL_43;
      }
      *(_QWORD *)(StartContext + 248) = StartContext + 240;
      *(_QWORD *)(StartContext + 240) = StartContext + 240;
      InitializeSListHead((PSLIST_HEADER)(StartContext + 1904));
      *(_QWORD *)(StartContext + 1928) = StartContext + 1920;
      *(_QWORD *)(StartContext + 1920) = StartContext + 1920;
      *(_QWORD *)(StartContext + 1792) = StartContext + 1784;
      *(_QWORD *)(StartContext + 1784) = StartContext + 1784;
      *(_QWORD *)(StartContext + 1808) = StartContext + 1800;
      *(_QWORD *)(StartContext + 1800) = StartContext + 1800;
      *(_QWORD *)(StartContext + 1824) = StartContext + 1816;
      *(_QWORD *)(StartContext + 1816) = StartContext + 1816;
      *(_QWORD *)(StartContext + 1840) = StartContext + 1832;
      *(_QWORD *)(StartContext + 1832) = StartContext + 1832;
      *(_QWORD *)(StartContext + 2944) = StartContext + 2936;
      *(_QWORD *)(StartContext + 2936) = StartContext + 2936;
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 2952));
      *(_QWORD *)(StartContext + 992) = StartContext + 984;
      *(_QWORD *)(StartContext + 984) = StartContext + 984;
      *(_QWORD *)(StartContext + 1008) = StartContext + 1000;
      *(_QWORD *)(StartContext + 1000) = StartContext + 1000;
      ExInitializeResourceLite((PERESOURCE)(StartContext + 2672));
      KeInitializeEvent((PRKEVENT)(StartContext + 2776), SynchronizationEvent, 0);
      *(_QWORD *)(StartContext + 1992) = StartContext;
      *(_QWORD *)(StartContext + 1984) = VidSchiControlVSyncThread;
      v30 = 0;
      *(_QWORD *)(StartContext + 1968) = 0LL;
      *(_QWORD *)(StartContext + 2048) = VidSchiDeferredVisibilityThread;
      *(_QWORD *)(StartContext + 2056) = v6;
      *(_QWORD *)(StartContext + 2032) = 0LL;
      if ( *(_DWORD *)(StartContext + 40) )
      {
        do
        {
          v31 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xB750uLL, 0x68536956u);
          *(_QWORD *)(StartContext + 8LL * v30 + 2968) = v31;
          if ( !v31 )
            goto LABEL_47;
          memset(v31, 0, 0xB750uLL);
          v32 = 0;
          **(_DWORD **)(StartContext + 8LL * v30 + 2968) = 1852985430;
          *(_DWORD *)(*(_QWORD *)(StartContext + 8LL * v30 + 2968) + 18872LL) = -1;
          for ( *(_BYTE *)(*(_QWORD *)(StartContext + 8LL * v30 + 2968) + 46916LL) = 1;
                v32 < *(_DWORD *)(StartContext + 128);
                *v34 = v34 )
          {
            v33 = 272LL * v32++;
            v34 = (_QWORD *)(v33 + *(_QWORD *)(StartContext + 8LL * v30 + 2968) + 176LL);
            v34[1] = v34;
          }
          v35 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x68536956u);
          *(_QWORD *)(StartContext + 8LL * v30 + 5504) = v35;
          if ( !v35 )
            goto LABEL_47;
          *(_QWORD *)v35 = 0LL;
          v35[2] = 0;
          InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(StartContext + 8LL * v30 + 2968) + 19232LL));
          v36 = 0LL;
          v37 = (_QWORD *)(*(_QWORD *)(StartContext + 8LL * v30 + 2968) + 46896LL);
          v38 = 0LL;
          v39 = 64LL;
          v37[1] = v37;
          *v37 = v37;
          do
          {
            *(_DWORD *)(v36 + *(_QWORD *)(StartContext + 8LL * v30 + 2968) + 19248) = 1701790550;
            v40 = *(union _SLIST_HEADER **)(StartContext + 8LL * v30 + 2968);
            ExpInterlockedPushEntrySList(v40 + 1202, (PSLIST_ENTRY)&v40[v38 + 1204]);
            v38 += 27LL;
            v36 += 432LL;
            --v39;
          }
          while ( v39 );
        }
        while ( ++v30 < *(_DWORD *)(StartContext + 40) );
      }
      v41 = 0;
      v42 = 0;
      if ( *(_DWORD *)(StartContext + 56) )
      {
        while ( 1 )
        {
          v43 = 0;
          v44 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 2040) + 48LL * v42);
          *(_BYTE *)(v42 + StartContext + 64) = v41;
          if ( v44 )
            break;
LABEL_37:
          if ( ++v42 >= *(_DWORD *)(StartContext + 56) )
            goto LABEL_38;
        }
        while ( 1 )
        {
          Node = VidSchiCreateNode(StartContext, v42, v43, v41);
          *(_QWORD *)(StartContext + 8LL * v41 + 408) = Node;
          if ( !Node )
            break;
          if ( (int)VidSchiInitializeNode(Node) < 0 )
            goto LABEL_43;
          ++v41;
          if ( ++v43 >= v44 )
            goto LABEL_37;
        }
        v53 = WdLogNewEntry5_WdAssertion(v41, v46);
        *(_QWORD *)(v53 + 32) = v41;
      }
      else
      {
LABEL_38:
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v47 = PsCreateSystemThread(
                &ThreadHandle,
                0x1FFFFFu,
                &ObjectAttributes,
                0LL,
                0LL,
                (PKSTART_ROUTINE)VidSchiWorkerThread,
                (PVOID)StartContext);
        v50 = v47;
        if ( v47 >= 0 )
        {
          VidSchiRequestSchedulerStatus(StartContext, 1, 1);
          ObfReferenceObject(*(PVOID *)(StartContext + 136));
          ZwClose(ThreadHandle);
          return StartContext;
        }
        v53 = WdLogNewEntry5_WdAssertion(v49, v48);
        *(_QWORD *)(v53 + 32) = v50;
      }
    }
    else
    {
      v53 = WdLogNewEntry5_WdAssertion(v20, v19);
    }
    *(_QWORD *)(v53 + 24) = v6;
    WdLogEvent5_WdAssertion(v53);
LABEL_43:
    VidSchTerminateAdapter((struct _VIDSCH_GLOBAL *)StartContext);
    return 0LL;
  }
  v52 = WdLogNewEntry5_WdAssertion(0LL, a2);
  WdLogEvent5_WdAssertion(v52);
  return 0LL;
}

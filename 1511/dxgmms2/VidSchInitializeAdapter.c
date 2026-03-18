/*
 * XREFs of VidSchInitializeAdapter @ 0x1C0063290
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0061F4C (VidSchiRequestSchedulerStatus.c)
 *     VidSchiCreateNode @ 0x1C006396C (VidSchiCreateNode.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C0063C78 (VidSchiReadGlobalConfiguration.c)
 *     VidSchTerminateAdapter @ 0x1C008C0D0 (VidSchTerminateAdapter.c)
 */

__int64 __fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  PVOID PoolWithTag; // rax
  __int64 v9; // rcx
  __int64 StartContext; // rbx
  int v11; // eax
  __int64 v12; // r10
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  int v17; // ecx
  size_t v18; // rsi
  int v19; // ecx
  PVOID v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  struct _KEVENT *v32; // rbp
  __int64 v33; // r14
  struct _KEVENT *v34; // rbp
  __int64 v35; // r14
  __int64 Timer; // rax
  __int64 v37; // rcx
  unsigned int v38; // ebp
  PVOID v39; // rax
  unsigned int v40; // r8d
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  _DWORD *v43; // rax
  __int64 v44; // r14
  _QWORD *v45; // rax
  __int64 v46; // r15
  __int64 v47; // r12
  union _SLIST_HEADER *v48; // rcx
  unsigned int v49; // esi
  unsigned int v50; // ebp
  unsigned int v51; // r14d
  unsigned int v52; // r15d
  __int64 Node; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  NTSTATUS v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-58h] BYREF
  void *ThreadHandle; // [rsp+A0h] [rbp+8h] BYREF

  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x14B0uLL, 0x68536956u);
    StartContext = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v66 = WdLogNewEntry5_WdWarning(v9);
      WdLogEvent5_WdWarning(v66);
      return 0LL;
    }
    memset(PoolWithTag, 0, 0x14B0uLL);
    *(_DWORD *)StartContext = 1818380118;
    *(_DWORD *)(StartContext + 4) = *(_DWORD *)(v7 + 184);
    *(_QWORD *)(StartContext + 8) = a1;
    *(_QWORD *)(StartContext + 16) = v7;
    *(_QWORD *)(StartContext + 24) = a2;
    *(_DWORD *)(StartContext + 32) = *(_DWORD *)(v7 + 1356);
    *(_DWORD *)(StartContext + 36) = 7;
    *(_QWORD *)(StartContext + 5256) = a3;
    v11 = *(_DWORD *)(v7 + 920);
    *(_DWORD *)(StartContext + 40) = v11;
    if ( !v11 )
    {
      *(_DWORD *)(StartContext + 40) = 1;
      *(_BYTE *)(StartContext + 50) = 1;
    }
    if ( *(_BYTE *)(v7 + 1863) )
      *(_BYTE *)(StartContext + 51) = 1;
    *(_BYTE *)(StartContext + 45) = (*(_DWORD *)(v7 + 1384) & 2) != 0;
    *(_BYTE *)(StartContext + 44) = *(_BYTE *)(v7 + 1858);
    *(_BYTE *)(StartContext + 46) = (*(_DWORD *)(v7 + 1384) & 0x10) != 0;
    *(_BYTE *)(StartContext + 47) = (*(_DWORD *)(v7 + 1380) & 0x10) != 0;
    *(_BYTE *)(StartContext + 48) = (*(_BYTE *)(v7 + 1384) & 0x20) == 0;
    *(_BYTE *)(StartContext + 49) = (*(_DWORD *)(v7 + 1384) & 0x40) != 0;
    *(_DWORD *)(StartContext + 124) = *(_DWORD *)(v7 + 1864);
    v12 = *(unsigned int *)(v7 + 232);
    *(_QWORD *)(StartContext + 52) = (unsigned int)v12;
    if ( (_DWORD)v12 )
    {
      v13 = 0;
      v14 = 0LL;
      v15 = (unsigned int)v12;
      do
      {
        v16 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 1904) + v14);
        v14 += 48LL;
        v13 += v16;
        *(_DWORD *)(StartContext + 56) = v13;
        --v15;
      }
      while ( v15 );
    }
    v17 = 31;
    if ( *(_DWORD *)(v7 + 1376) < 0x1Fu )
      v17 = *(_DWORD *)(v7 + 1376);
    v18 = 8 * v12;
    *(_DWORD *)(StartContext + 2124) = v17;
    *(_DWORD *)(StartContext + 2096) ^= (*(_DWORD *)(StartContext + 2096) ^ (16 * *(_DWORD *)(v7 + 1380))) & 0x10;
    v19 = *(_DWORD *)(StartContext + 2096) ^ ((unsigned __int8)*(_DWORD *)(StartContext + 2096) ^ (unsigned __int8)(16 * *(_DWORD *)(v7 + 1380))) & 0x20;
    *(_DWORD *)(StartContext + 2096) = v19;
    *(_DWORD *)(StartContext + 2096) = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(8 * *(_DWORD *)(v7 + 1380))) & 0x40;
    v20 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v12, 0x68536956u);
    *(_QWORD *)(StartContext + 200) = v20;
    if ( v20 )
    {
      memset(v20, 0, v18);
      if ( (*(_DWORD *)(StartContext + 2096) & 0x10) != 0 && !*(_DWORD *)(StartContext + 2124) )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27, v28);
        v67[3] = 281LL;
        v67[4] = 4LL;
        v67[5] = StartContext;
        v67[6] = *(unsigned int *)(v7 + 1376);
        v67[7] = *(unsigned int *)(v7 + 1380);
        WdLogEvent5_WdCriticalError(v67);
        JUMPOUT(0x1C0078B79LL);
      }
      *(_DWORD *)(StartContext + 224) = 0;
      VidSchiReadGlobalConfiguration(StartContext);
      v29 = 1;
      v30 = *(_DWORD *)(StartContext + 2096);
      if ( (v30 & 0x240) == 0x240 )
        v29 = 3;
      *(_DWORD *)(StartContext + 2100) = v29;
      if ( (v30 & 0x120) == 0x120 )
      {
        *(_DWORD *)(StartContext + 2096) |= 8u;
        *(_DWORD *)(StartContext + 2104) = 5;
      }
      else
      {
        if ( (v30 & 0x90) == 0x90 )
          *(_DWORD *)(StartContext + 2104) = 4;
        else
          *(_DWORD *)(StartContext + 2104) = 2;
        *(_DWORD *)(StartContext + 2096) ^= (*(_DWORD *)(StartContext + 2096) ^ (2 * *(_DWORD *)(v7 + 1380))) & 8;
      }
      v31 = *(_DWORD *)(StartContext + 2104);
      if ( v31 == 5 )
      {
        *(_DWORD *)(StartContext + 2108) = 31;
      }
      else if ( v31 == 4 )
      {
        *(_DWORD *)(StartContext + 2108) = *(_DWORD *)(StartContext + 2124);
      }
      else
      {
        *(_DWORD *)(StartContext + 2108) = -1;
      }
      if ( !*(_DWORD *)(StartContext + 2112) && (*(_DWORD *)(v7 + 1380) & 0x40) == 0 )
        *(_DWORD *)(StartContext + 2112) = 1;
      ExInitializeResourceLite((PERESOURCE)(StartContext + 992));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1096));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1200));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 232));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1824));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1848));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1832));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1840));
      v32 = (struct _KEVENT *)(StartContext + 1304);
      v33 = 4LL;
      do
      {
        memset(v32, 0, 0x38uLL);
        KeInitializeEvent(v32, SynchronizationEvent, 0);
        v32 = (struct _KEVENT *)((char *)v32 + 56);
        --v33;
      }
      while ( v33 );
      v34 = (struct _KEVENT *)(StartContext + 1528);
      v35 = 4LL;
      do
      {
        memset(v34, 0, 0x38uLL);
        KeInitializeEvent(v34, SynchronizationEvent, 0);
        v34 = (struct _KEVENT *)((char *)v34 + 56);
        --v35;
      }
      while ( v35 );
      Timer = ExAllocateTimer(VidSchiWorkerThreadTimerCallback, StartContext, 4LL);
      *(_QWORD *)(StartContext + 144) = Timer;
      if ( !Timer )
      {
LABEL_59:
        v68 = WdLogNewEntry5_WdWarning(v37);
        WdLogEvent5_WdWarning(v68);
        goto LABEL_47;
      }
      *(_QWORD *)(StartContext + 216) = StartContext + 208;
      *(_QWORD *)(StartContext + 208) = StartContext + 208;
      InitializeSListHead((PSLIST_HEADER)(StartContext + 1872));
      *(_QWORD *)(StartContext + 1896) = StartContext + 1888;
      *(_QWORD *)(StartContext + 1888) = StartContext + 1888;
      *(_QWORD *)(StartContext + 1760) = StartContext + 1752;
      *(_QWORD *)(StartContext + 1752) = StartContext + 1752;
      *(_QWORD *)(StartContext + 1776) = StartContext + 1768;
      *(_QWORD *)(StartContext + 1768) = StartContext + 1768;
      *(_QWORD *)(StartContext + 1792) = StartContext + 1784;
      *(_QWORD *)(StartContext + 1784) = StartContext + 1784;
      *(_QWORD *)(StartContext + 1808) = StartContext + 1800;
      *(_QWORD *)(StartContext + 1800) = StartContext + 1800;
      *(_QWORD *)(StartContext + 2568) = StartContext + 2560;
      *(_QWORD *)(StartContext + 2560) = StartContext + 2560;
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 2576));
      *(_QWORD *)(StartContext + 960) = StartContext + 952;
      *(_QWORD *)(StartContext + 952) = StartContext + 952;
      *(_QWORD *)(StartContext + 976) = StartContext + 968;
      *(_QWORD *)(StartContext + 968) = StartContext + 968;
      ExInitializeResourceLite((PERESOURCE)(StartContext + 2312));
      KeInitializeEvent((PRKEVENT)(StartContext + 2416), SynchronizationEvent, 0);
      *(_QWORD *)(StartContext + 1960) = StartContext;
      *(_QWORD *)(StartContext + 1952) = VidSchiControlVSyncThread;
      v38 = 0;
      *(_QWORD *)(StartContext + 1936) = 0LL;
      *(_QWORD *)(StartContext + 2008) = VidSchiDeferredVisibilityThread;
      *(_QWORD *)(StartContext + 2016) = v7;
      *(_QWORD *)(StartContext + 1992) = 0LL;
      if ( *(_DWORD *)(StartContext + 40) )
      {
        do
        {
          v39 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xA750uLL, 0x68536956u);
          *(_QWORD *)(StartContext + 8LL * v38 + 2592) = v39;
          if ( !v39 )
            goto LABEL_59;
          memset(v39, 0, 0xA750uLL);
          v40 = 0;
          **(_DWORD **)(StartContext + 8LL * v38 + 2592) = 1852985430;
          for ( *(_DWORD *)(*(_QWORD *)(StartContext + 8LL * v38 + 2592) + 14768LL) = -1;
                v40 < *(_DWORD *)(StartContext + 124);
                *v42 = v42 )
          {
            v41 = 280LL * v40++;
            v42 = (_QWORD *)(v41 + *(_QWORD *)(StartContext + 8LL * v38 + 2592) + 184LL);
            v42[1] = v42;
          }
          v43 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x68536956u);
          *(_QWORD *)(StartContext + 8LL * v38 + 5128) = v43;
          if ( !v43 )
            goto LABEL_59;
          *(_QWORD *)v43 = 0LL;
          v43[2] = 0;
          InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(StartContext + 8LL * v38 + 2592) + 15136LL));
          v44 = 0LL;
          v45 = (_QWORD *)(*(_QWORD *)(StartContext + 8LL * v38 + 2592) + 42800LL);
          v46 = 0LL;
          v47 = 64LL;
          v45[1] = v45;
          *v45 = v45;
          do
          {
            *(_DWORD *)(*(_QWORD *)(StartContext + 8LL * v38 + 2592) + v44 + 15152) = 1701790550;
            v48 = *(union _SLIST_HEADER **)(StartContext + 8LL * v38 + 2592);
            ExpInterlockedPushEntrySList(v48 + 946, (PSLIST_ENTRY)&v48[v46 + 948]);
            v46 += 27LL;
            v44 += 432LL;
            --v47;
          }
          while ( v47 );
        }
        while ( ++v38 < *(_DWORD *)(StartContext + 40) );
      }
      v49 = 0;
      v50 = 0;
      if ( *(_DWORD *)(StartContext + 52) )
      {
        while ( 1 )
        {
          v51 = 0;
          v52 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 1904) + 48LL * v50);
          *(_BYTE *)(v50 + StartContext + 60) = v49;
          if ( v52 )
            break;
LABEL_41:
          if ( ++v50 >= *(_DWORD *)(StartContext + 52) )
            goto LABEL_42;
        }
        while ( 1 )
        {
          Node = VidSchiCreateNode(StartContext, v50, v51, v49);
          *(_QWORD *)(StartContext + 8LL * v49 + 376) = Node;
          if ( !Node )
            break;
          ++v49;
          if ( ++v51 >= v52 )
            goto LABEL_41;
        }
        v65 = WdLogNewEntry5_WdAssertion(v49, v54, v55, v56);
        *(_QWORD *)(v65 + 32) = v49;
      }
      else
      {
LABEL_42:
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v57 = PsCreateSystemThread(
                &ThreadHandle,
                0x1FFFFFu,
                &ObjectAttributes,
                0LL,
                0LL,
                VidSchiWorkerThread,
                (PVOID)StartContext);
        v62 = v57;
        if ( v57 >= 0 )
        {
          VidSchiRequestSchedulerStatus(StartContext, 1, 1);
          ObfReferenceObject(*(PVOID *)(StartContext + 128));
          ZwClose(ThreadHandle);
          return StartContext;
        }
        v65 = WdLogNewEntry5_WdAssertion(v59, v58, v60, v61);
        *(_QWORD *)(v65 + 32) = v62;
      }
    }
    else
    {
      v65 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
    }
    *(_QWORD *)(v65 + 24) = v7;
    WdLogEvent5_WdAssertion(v65);
LABEL_47:
    VidSchTerminateAdapter((struct _VIDSCH_GLOBAL *)StartContext);
    return 0LL;
  }
  v64 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
  WdLogEvent5_WdAssertion(v64);
  return 0LL;
}

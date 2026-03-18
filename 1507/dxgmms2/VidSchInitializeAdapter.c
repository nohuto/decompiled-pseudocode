/*
 * XREFs of VidSchInitializeAdapter @ 0x1C0040EF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C003F5D8 (VidSchiReadGlobalConfiguration.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0040E18 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiCreateNode @ 0x1C00415A0 (VidSchiCreateNode.c)
 *     VidSchTerminateAdapter @ 0x1C0079880 (VidSchTerminateAdapter.c)
 */

__int64 __fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  PVOID PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 StartContext; // rbx
  int v13; // eax
  __int64 v14; // r10
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  int v19; // ecx
  size_t v20; // rsi
  int v21; // ecx
  PVOID v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // r14
  int v32; // eax
  struct _KEVENT *v33; // rbp
  struct _KEVENT *v34; // rbp
  __int64 v35; // r14
  __int64 Timer; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // ebp
  PVOID v41; // rax
  unsigned int v42; // r8d
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  _DWORD *v45; // rax
  __int64 v46; // r14
  _QWORD *v47; // rax
  __int64 v48; // r15
  __int64 v49; // r12
  union _SLIST_HEADER *v50; // rcx
  unsigned int v51; // esi
  unsigned int v52; // ebp
  unsigned int v53; // r14d
  unsigned int v54; // r15d
  __int64 Node; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  NTSTATUS v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rsi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-58h] BYREF
  void *ThreadHandle; // [rsp+A0h] [rbp+8h] BYREF

  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x14D0uLL, 0x68536956u);
    StartContext = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v68 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      WdLogEvent5_WdWarning(v68);
      return 0LL;
    }
    memset(PoolWithTag, 0, 0x14D0uLL);
    *(_DWORD *)StartContext = 1818380118;
    *(_DWORD *)(StartContext + 4) = *(_DWORD *)(v7 + 184);
    *(_QWORD *)(StartContext + 8) = a1;
    *(_QWORD *)(StartContext + 16) = v7;
    *(_QWORD *)(StartContext + 24) = a2;
    *(_DWORD *)(StartContext + 32) = *(_DWORD *)(v7 + 1348);
    *(_DWORD *)(StartContext + 36) = 7;
    *(_QWORD *)(StartContext + 5304) = a3;
    v13 = *(_DWORD *)(v7 + 912);
    *(_DWORD *)(StartContext + 40) = v13;
    if ( !v13 )
    {
      *(_DWORD *)(StartContext + 40) = 1;
      *(_BYTE *)(StartContext + 50) = 1;
    }
    if ( *(_BYTE *)(v7 + 1855) )
      *(_BYTE *)(StartContext + 51) = 1;
    *(_BYTE *)(StartContext + 45) = (*(_DWORD *)(v7 + 1376) & 2) != 0;
    *(_BYTE *)(StartContext + 44) = *(_BYTE *)(v7 + 1850);
    *(_BYTE *)(StartContext + 46) = (*(_DWORD *)(v7 + 1376) & 0x10) != 0;
    *(_BYTE *)(StartContext + 47) = (*(_DWORD *)(v7 + 1372) & 0x10) != 0;
    *(_BYTE *)(StartContext + 48) = (*(_BYTE *)(v7 + 1376) & 0x20) == 0;
    *(_BYTE *)(StartContext + 49) = (*(_DWORD *)(v7 + 1376) & 0x40) != 0;
    *(_DWORD *)(StartContext + 124) = *(_DWORD *)(v7 + 1856);
    v14 = *(unsigned int *)(v7 + 232);
    *(_QWORD *)(StartContext + 52) = (unsigned int)v14;
    if ( (_DWORD)v14 )
    {
      v15 = 0;
      v16 = 0LL;
      v17 = (unsigned int)v14;
      do
      {
        v18 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 1896) + v16);
        v16 += 48LL;
        v15 += v18;
        *(_DWORD *)(StartContext + 56) = v15;
        --v17;
      }
      while ( v17 );
    }
    v19 = 30;
    if ( *(_DWORD *)(v7 + 1368) < 0x1Eu )
      v19 = *(_DWORD *)(v7 + 1368);
    v20 = 8 * v14;
    *(_DWORD *)(StartContext + 2172) = v19;
    *(_DWORD *)(StartContext + 2144) ^= (*(_DWORD *)(StartContext + 2144) ^ (16 * *(_DWORD *)(v7 + 1372))) & 0x10;
    v21 = *(_DWORD *)(StartContext + 2144) ^ ((unsigned __int8)*(_DWORD *)(StartContext + 2144) ^ (unsigned __int8)(16 * *(_DWORD *)(v7 + 1372))) & 0x20;
    *(_DWORD *)(StartContext + 2144) = v21;
    *(_DWORD *)(StartContext + 2144) = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(8 * *(_DWORD *)(v7 + 1372))) & 0x40;
    v22 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v14, 0x68536956u);
    *(_QWORD *)(StartContext + 192) = v22;
    if ( v22 )
    {
      memset(v22, 0, v20);
      if ( (*(_DWORD *)(StartContext + 2144) & 0x10) != 0 && !*(_DWORD *)(StartContext + 2172) )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
        v69[3] = 281LL;
        v69[4] = 4LL;
        v69[5] = StartContext;
        v69[6] = *(unsigned int *)(v7 + 1368);
        v69[7] = *(unsigned int *)(v7 + 1372);
        WdLogEvent5_WdCriticalError(v69);
        JUMPOUT(0x1C0049A96LL);
      }
      *(_DWORD *)(StartContext + 216) = 0;
      VidSchiReadGlobalConfiguration(StartContext);
      v29 = 1;
      v30 = *(_DWORD *)(StartContext + 2144);
      if ( (v30 & 0x240) == 0x240 )
        v29 = 3;
      *(_DWORD *)(StartContext + 2148) = v29;
      v31 = 5LL;
      if ( (v30 & 0x120) == 0x120 )
      {
        *(_DWORD *)(StartContext + 2144) |= 8u;
        *(_DWORD *)(StartContext + 2152) = 5;
      }
      else
      {
        if ( (v30 & 0x90) == 0x90 )
          *(_DWORD *)(StartContext + 2152) = 4;
        else
          *(_DWORD *)(StartContext + 2152) = 2;
        *(_DWORD *)(StartContext + 2144) ^= (*(_DWORD *)(StartContext + 2144) ^ (2 * *(_DWORD *)(v7 + 1372))) & 8;
      }
      v32 = *(_DWORD *)(StartContext + 2152);
      if ( v32 == 5 )
      {
        *(_DWORD *)(StartContext + 2156) = 30;
      }
      else if ( v32 == 4 )
      {
        *(_DWORD *)(StartContext + 2156) = *(_DWORD *)(StartContext + 2172);
      }
      else
      {
        *(_DWORD *)(StartContext + 2156) = -1;
      }
      ExInitializeResourceLite((PERESOURCE)(StartContext + 984));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1088));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1192));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 224));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1872));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1896));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1880));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1888));
      v33 = (struct _KEVENT *)(StartContext + 1296);
      do
      {
        memset(v33, 0, 0x38uLL);
        KeInitializeEvent(v33, SynchronizationEvent, 0);
        v33 = (struct _KEVENT *)((char *)v33 + 56);
        --v31;
      }
      while ( v31 );
      v34 = (struct _KEVENT *)(StartContext + 1576);
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
LABEL_56:
        v70 = WdLogNewEntry5_WdWarning(v38, v37, v39);
        WdLogEvent5_WdWarning(v70);
        goto LABEL_43;
      }
      *(_QWORD *)(StartContext + 208) = StartContext + 200;
      *(_QWORD *)(StartContext + 200) = StartContext + 200;
      InitializeSListHead((PSLIST_HEADER)(StartContext + 1920));
      *(_QWORD *)(StartContext + 1944) = StartContext + 1936;
      *(_QWORD *)(StartContext + 1936) = StartContext + 1936;
      *(_QWORD *)(StartContext + 1808) = StartContext + 1800;
      *(_QWORD *)(StartContext + 1800) = StartContext + 1800;
      *(_QWORD *)(StartContext + 1824) = StartContext + 1816;
      *(_QWORD *)(StartContext + 1816) = StartContext + 1816;
      *(_QWORD *)(StartContext + 1840) = StartContext + 1832;
      *(_QWORD *)(StartContext + 1832) = StartContext + 1832;
      *(_QWORD *)(StartContext + 1856) = StartContext + 1848;
      *(_QWORD *)(StartContext + 1848) = StartContext + 1848;
      *(_QWORD *)(StartContext + 2616) = StartContext + 2608;
      *(_QWORD *)(StartContext + 2608) = StartContext + 2608;
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 2624));
      *(_QWORD *)(StartContext + 952) = StartContext + 944;
      *(_QWORD *)(StartContext + 944) = StartContext + 944;
      *(_QWORD *)(StartContext + 968) = StartContext + 960;
      *(_QWORD *)(StartContext + 960) = StartContext + 960;
      ExInitializeResourceLite((PERESOURCE)(StartContext + 2352));
      KeInitializeEvent((PRKEVENT)(StartContext + 2456), SynchronizationEvent, 0);
      *(_QWORD *)(StartContext + 2008) = StartContext;
      *(_QWORD *)(StartContext + 2000) = VidSchiControlVSyncThread;
      v40 = 0;
      *(_QWORD *)(StartContext + 1984) = 0LL;
      *(_QWORD *)(StartContext + 2056) = VidSchiDeferredVisibilityThread;
      *(_QWORD *)(StartContext + 2064) = v7;
      *(_QWORD *)(StartContext + 2040) = 0LL;
      if ( *(_DWORD *)(StartContext + 40) )
      {
        do
        {
          v41 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xA330uLL, 0x68536956u);
          *(_QWORD *)(StartContext + 8LL * v40 + 2640) = v41;
          if ( !v41 )
            goto LABEL_56;
          memset(v41, 0, 0xA330uLL);
          v42 = 0;
          **(_DWORD **)(StartContext + 8LL * v40 + 2640) = 1852985430;
          for ( *(_DWORD *)(*(_QWORD *)(StartContext + 8LL * v40 + 2640) + 14736LL) = -1;
                v42 < *(_DWORD *)(StartContext + 124);
                *v44 = v44 )
          {
            v43 = 280LL * v42++;
            v44 = (_QWORD *)(v43 + *(_QWORD *)(StartContext + 8LL * v40 + 2640) + 176LL);
            v44[1] = v44;
          }
          v45 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x68536956u);
          *(_QWORD *)(StartContext + 8LL * v40 + 5176) = v45;
          if ( !v45 )
            goto LABEL_56;
          *(_QWORD *)v45 = 0LL;
          v45[2] = 0;
          InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(StartContext + 8LL * v40 + 2640) + 15104LL));
          v46 = 0LL;
          v47 = (_QWORD *)(*(_QWORD *)(StartContext + 8LL * v40 + 2640) + 41744LL);
          v48 = 0LL;
          v49 = 64LL;
          v47[1] = v47;
          *v47 = v47;
          do
          {
            *(_DWORD *)(v46 + *(_QWORD *)(StartContext + 8LL * v40 + 2640) + 15120) = 1701790550;
            v50 = *(union _SLIST_HEADER **)(StartContext + 8LL * v40 + 2640);
            ExpInterlockedPushEntrySList(v50 + 944, (PSLIST_ENTRY)&v50[v48 + 946]);
            v48 += 26LL;
            v46 += 416LL;
            --v49;
          }
          while ( v49 );
        }
        while ( ++v40 < *(_DWORD *)(StartContext + 40) );
      }
      v51 = 0;
      v52 = 0;
      if ( *(_DWORD *)(StartContext + 52) )
      {
        while ( 1 )
        {
          v53 = 0;
          v54 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 1896) + 48LL * v52);
          *(_BYTE *)(v52 + StartContext + 60) = v51;
          if ( v54 )
            break;
LABEL_37:
          if ( ++v52 >= *(_DWORD *)(StartContext + 52) )
            goto LABEL_38;
        }
        while ( 1 )
        {
          Node = VidSchiCreateNode(StartContext, v52, v53, v51);
          *(_QWORD *)(StartContext + 8LL * v51 + 368) = Node;
          if ( !Node )
            break;
          ++v51;
          if ( ++v53 >= v54 )
            goto LABEL_37;
        }
        v67 = WdLogNewEntry5_WdAssertion(v51, v56, v57, v58);
        *(_QWORD *)(v67 + 32) = v51;
      }
      else
      {
LABEL_38:
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v59 = PsCreateSystemThread(
                &ThreadHandle,
                0x1FFFFFu,
                &ObjectAttributes,
                0LL,
                0LL,
                VidSchiWorkerThread,
                (PVOID)StartContext);
        v64 = v59;
        if ( v59 >= 0 )
        {
          VidSchiRequestSchedulerStatus(StartContext, 1, 1);
          ObfReferenceObject(*(PVOID *)(StartContext + 128));
          ZwClose(ThreadHandle);
          return StartContext;
        }
        v67 = WdLogNewEntry5_WdAssertion(v61, v60, v62, v63);
        *(_QWORD *)(v67 + 32) = v64;
      }
    }
    else
    {
      v67 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
    }
    *(_QWORD *)(v67 + 24) = v7;
    WdLogEvent5_WdAssertion(v67);
LABEL_43:
    VidSchTerminateAdapter((struct _VIDSCH_GLOBAL *)StartContext);
    return 0LL;
  }
  v66 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
  WdLogEvent5_WdAssertion(v66);
  return 0LL;
}

/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C00C84BC
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@H@Z @ 0x1C00C6868 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006EC8 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EF4 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A2C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A80 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C000BD84 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000BE10 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_pqPR1XR1pq @ 0x1C0026558 (Template_pqPR1XR1pq.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A4A70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00C8BF8 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  UINT v4; // r15d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct DXGGLOBAL *Global; // rax
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KEVENT *v17; // r13
  __int64 v18; // rax
  PVOID v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 ObjectCount; // rbx
  _BYTE *PoolWithTag; // rsi
  _QWORD *v28; // r12
  DXGPUSHLOCK *v29; // rcx
  D3DKMT_HANDLE v30; // ebx
  unsigned int v31; // ecx
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  int v41; // ebx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v43; // rcx
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  PRKEVENT v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v55; // rax
  int Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v59; // [rsp+40h] [rbp-C0h]
  _BYTE v60[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v61; // [rsp+58h] [rbp-A8h]
  _BYTE v62[16]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v63; // [rsp+70h] [rbp-90h]
  _BYTE v64[32]; // [rsp+78h] [rbp-88h] BYREF
  int v65; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v67[32]; // [rsp+A8h] [rbp-58h] BYREF
  int v68; // [rsp+C8h] [rbp-38h]
  PVOID v69; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v70[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  char v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  char v76; // [rsp+120h] [rbp+20h]
  struct DXGDEVICE *v77; // [rsp+128h] [rbp+28h]
  char v78; // [rsp+130h] [rbp+30h]
  _QWORD v79[4]; // [rsp+140h] [rbp+40h] BYREF
  char v80; // [rsp+160h] [rbp+60h]
  int v81; // [rsp+168h] [rbp+68h] BYREF
  __int64 v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  int v84; // [rsp+180h] [rbp+80h]
  __int128 v85; // [rsp+188h] [rbp+88h]
  PRKEVENT Event; // [rsp+1F0h] [rbp+F0h] BYREF
  DXGPUSHLOCK *v88; // [rsp+1F8h] [rbp+F8h]

  v4 = 0;
  Event = 0LL;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v62, a3);
  v6 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  v72 = v6;
  v73 = 0;
  if ( v6 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24));
    v71 = -1LL;
  }
  v7 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  v75 = v7;
  v76 = 0;
  if ( v7 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24));
    v74 = -1LL;
  }
  v77 = a3;
  v78 = 0;
  LODWORD(v9) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v70);
  if ( (int)v9 < 0 )
    goto LABEL_6;
  Global = DXGGLOBAL::GetGlobal(v8);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v60, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v60);
  hAsyncEvent = a1->hAsyncEvent;
  v63 = 0LL;
  v65 = 0;
  P = 0LL;
  v68 = 0;
  if ( hAsyncEvent )
  {
    v12 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v69, 0LL);
    v17 = (struct _KEVENT *)v69;
    v9 = v12;
    if ( v12 < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      *(_QWORD *)(v18 + 24) = a1->hAsyncEvent;
      *(_QWORD *)(v18 + 32) = v9;
      WdLogEvent5_WdWarning(v18);
      goto LABEL_10;
    }
  }
  else
  {
    v81 = 48;
    v82 = 0LL;
    v84 = 512;
    v83 = 0LL;
    v85 = 0LL;
    v20 = ObCreateObject(0LL, ExEventObjectType, &v81, 0LL, 0LL, 24, 0, 0, &Event);
    v9 = v20;
    if ( v20 < 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      *(_QWORD *)(v25 + 24) = v9;
      WdLogEvent5_WdWarning(v25);
      if ( P != v67 && P )
        ExFreePoolWithTag(P, 0);
      if ( v63 != v64 && v63 )
        ExFreePoolWithTag(v63, 0);
      if ( v61 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v60);
LABEL_6:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v62);
      return (unsigned int)v9;
    }
    KeInitializeEvent(Event, SynchronizationEvent, 0);
    v17 = Event;
  }
  ObjectCount = a1->ObjectCount;
  if ( (unsigned int)ObjectCount <= 4 )
  {
    PoolWithTag = v64;
    v63 = v64;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
    {
      PoolWithTag = v63;
LABEL_36:
      LODWORD(v9) = -1073741801;
      if ( P != v67 && P )
      {
        ExFreePoolWithTag(P, 0);
        PoolWithTag = v63;
      }
      if ( PoolWithTag == v64 || !PoolWithTag )
        goto LABEL_16;
      v19 = PoolWithTag;
LABEL_15:
      ExFreePoolWithTag(v19, 0);
LABEL_16:
      if ( v61 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v60);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v62);
LABEL_97:
      if ( v17 )
      {
        KeSetEvent(v17, 0, 0);
        ObfDereferenceObject(v17);
      }
      return (unsigned int)v9;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)ObjectCount, 0x4B677844u);
    v63 = PoolWithTag;
  }
  v65 = ObjectCount;
  if ( !PoolWithTag )
    goto LABEL_36;
  memset(PoolWithTag, 0, 8 * ObjectCount);
  PoolWithTag = v63;
  if ( !v63 )
    goto LABEL_36;
  v28 = (_QWORD *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&P, a1->ObjectCount);
  if ( !v28 )
  {
    LODWORD(v9) = -1073741801;
    goto LABEL_10;
  }
  if ( a1->ObjectCount )
  {
    v29 = (struct DXGPROCESS *)((char *)a2 + 184);
    v88 = (struct DXGPROCESS *)((char *)a2 + 184);
    while ( 1 )
    {
      v30 = a1->ObjectHandleArray[v4];
      DXGPUSHLOCK::AcquireShared(v29);
      v31 = (v30 >> 6) & 0xFFFFFF;
      if ( v31 < *((_DWORD *)a2 + 56)
        && (v32 = *((_QWORD *)a2 + 26),
            v33 = *(_DWORD *)(v32 + 16LL * v31 + 8),
            ((v30 >> 26) & 0x30) == (*(_BYTE *)(v32 + 16LL * v31 + 8) & 0x30))
        && (v33 & 0x1000) == 0
        && (v33 & 0xF) != 0
        && (*(_BYTE *)(v32 + 16LL * v31 + 8) & 0xF) == 0xB )
      {
        v9 = *(_QWORD *)(v32 + 16LL * v31);
      }
      else
      {
        v9 = 0LL;
      }
      ExReleasePushLockSharedEx(v88, 0LL);
      KeLeaveCriticalRegion();
      if ( !v9 )
        break;
      if ( (*(_DWORD *)(v9 + 64) & 0x20) != 0 )
      {
        v38 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v38 + 24) = a1->ObjectHandleArray[v4];
        WdLogEvent5_WdError(v38);
        LODWORD(v9) = -1073741790;
        goto LABEL_10;
      }
      if ( *(struct DXGDEVICE **)(v9 + 16) != a3 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v34);
        v37[3] = a1->ObjectHandleArray[v4];
        v37[4] = *(_QWORD *)(v9 + 16);
        v37[5] = a3;
        WdLogEvent5_WdError(v37);
        LODWORD(v9) = -1073741811;
        goto LABEL_10;
      }
      v35 = v4++;
      v28[v35] = *(_QWORD *)(v9 + 32);
      v29 = v88;
      if ( v4 >= a1->ObjectCount )
        goto LABEL_57;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    LODWORD(v9) = -1073741811;
    v39[3] = a2;
    v39[4] = a1->ObjectHandleArray[v4];
    v39[5] = v4;
    v39[6] = -1073741811LL;
    WdLogEvent5_WdError(v39);
LABEL_10:
    if ( P != v67 && P )
      ExFreePoolWithTag(P, 0);
    v19 = v63;
    if ( v63 == v64 || !v63 )
      goto LABEL_16;
    goto LABEL_15;
  }
LABEL_57:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v79,
    v28,
    a1->ObjectCount);
  if ( v80 )
  {
    if ( !v79[0] )
    {
      LODWORD(v9) = -1073741801;
LABEL_66:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v79);
      goto LABEL_10;
    }
    v40 = WdLogNewEntry5_WdError(v36);
    *(_QWORD *)(v40 + 24) = 3825LL;
LABEL_65:
    WdLogEvent5_WdError(v40);
    LODWORD(v9) = -1073741811;
    goto LABEL_66;
  }
  v41 = 0;
  if ( a1->ObjectCount )
  {
    while ( 1 )
    {
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           (DXGSYNCOBJECT *)v28[v41],
                           *((struct ADAPTER_RENDER **)a3 + 2));
      *(_QWORD *)&PoolWithTag[8 * v44] = VidSchSyncObject;
      if ( !VidSchSyncObject )
        break;
      if ( ++v41 >= a1->ObjectCount )
        goto LABEL_70;
    }
    v40 = WdLogNewEntry5_WdError(v43);
    *(_QWORD *)(v40 + 24) = a1->ObjectHandleArray[v41];
    goto LABEL_65;
  }
LABEL_70:
  if ( Event )
    ObfReferenceObject(Event);
  LOBYTE(HandleInformation) = 1;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, struct _KEVENT *, int, int, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 376LL) + 8LL) + 560LL))(
                  a1->ObjectCount,
                  PoolWithTag,
                  a1->FenceValueArray,
                  v17,
                  Object,
                  HandleInformation,
                  *((_QWORD *)a3 + 71));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v59) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    Template_pqPR1XR1pq(v46, v45, v47, a3, Objecta, v28, a1->FenceValueArray, a1->hAsyncEvent, v59);
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v79);
  if ( P != v67 && P )
    ExFreePoolWithTag(P, 0);
  if ( v63 != v64 && v63 )
    ExFreePoolWithTag(v63, 0);
  if ( v61 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v60);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v62);
  v48 = Event;
  if ( (int)v9 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
    goto LABEL_97;
  }
  if ( v17 == Event )
  {
    do
    {
      LODWORD(v9) = KeWaitForSingleObject(v17, Executive, 0, 1u, 0LL);
      if ( PsIsThreadTerminating(KeGetCurrentThread()) )
      {
        v55 = WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
        *(_QWORD *)(v55 + 24) = 3900LL;
        WdLogEvent5_WdWarning(v55);
        LODWORD(v9) = -1073741130;
        goto LABEL_97;
      }
    }
    while ( (_DWORD)v9 == 257 );
    if ( (int)v9 < 0 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v50);
      *(_QWORD *)(v53 + 24) = 3909LL;
      WdLogEvent5_WdAssertion(v53);
      goto LABEL_97;
    }
    v48 = Event;
  }
  if ( v48 )
    ObfDereferenceObject(v48);
  return 0LL;
}

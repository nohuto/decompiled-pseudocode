/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C00BA7CC
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@H@Z @ 0x1C00BA398 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000BD50 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C000BDA8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_pqPR1XR1pq @ 0x1C001FB34 (Template_pqPR1XR1pq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0094C04 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00BAEB4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  __int64 v3; // rdx
  UINT v5; // r14d
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct DXGGLOBAL *Global; // rax
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KEVENT *v16; // r13
  __int64 v17; // rax
  PVOID v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 ObjectCount; // rbx
  _BYTE *PoolWithTag; // rsi
  _QWORD *v27; // r12
  DXGPUSHLOCK *v28; // rcx
  D3DKMT_HANDLE v29; // ebx
  unsigned int v30; // ecx
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  int v40; // ebx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  PRKEVENT v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v54; // rax
  int Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v58; // [rsp+40h] [rbp-C0h]
  _BYTE v59[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v60; // [rsp+58h] [rbp-A8h]
  PVOID v61; // [rsp+60h] [rbp-A0h]
  _BYTE v62[32]; // [rsp+68h] [rbp-98h] BYREF
  int v63; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v65[32]; // [rsp+98h] [rbp-68h] BYREF
  int v66; // [rsp+B8h] [rbp-48h]
  PVOID v67; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v68[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v69[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v70[24]; // [rsp+F0h] [rbp-10h] BYREF
  struct DXGDEVICE *v71; // [rsp+108h] [rbp+8h]
  char v72; // [rsp+110h] [rbp+10h]
  _QWORD v73[4]; // [rsp+120h] [rbp+20h] BYREF
  char v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+148h] [rbp+48h] BYREF
  __int64 v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  int v78; // [rsp+160h] [rbp+60h]
  __int128 v79; // [rsp+168h] [rbp+68h]
  PRKEVENT Event; // [rsp+1D0h] [rbp+D0h] BYREF
  DXGPUSHLOCK *v82; // [rsp+1D8h] [rbp+D8h]

  v3 = *((_QWORD *)a3 + 2);
  v5 = 0;
  Event = 0LL;
  COREACCESS::COREACCESS((COREACCESS *)v69, *(struct DXGADAPTER *const *)(v3 + 16));
  COREACCESS::COREACCESS((COREACCESS *)v70, *(struct DXGADAPTER *const *)(*((_QWORD *)a3 + 2) + 16LL));
  v71 = a3;
  v72 = 0;
  LODWORD(v8) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68);
  if ( (int)v8 < 0 )
  {
LABEL_2:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    return (unsigned int)v8;
  }
  Global = DXGGLOBAL::GetGlobal(v7);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v59, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v59);
  hAsyncEvent = a1->hAsyncEvent;
  v61 = 0LL;
  v63 = 0;
  P = 0LL;
  v66 = 0;
  if ( hAsyncEvent )
  {
    v11 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v67, 0LL);
    v16 = (struct _KEVENT *)v67;
    v8 = v11;
    if ( v11 < 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = a1->hAsyncEvent;
      *(_QWORD *)(v17 + 32) = v8;
      WdLogEvent5_WdWarning(v17);
      goto LABEL_6;
    }
  }
  else
  {
    v75 = 48;
    v76 = 0LL;
    v78 = 512;
    v77 = 0LL;
    v79 = 0LL;
    v19 = ObCreateObject(0LL, ExEventObjectType, &v75, 0LL, 0LL, 24, 0, 0, &Event);
    v8 = v19;
    if ( v19 < 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      *(_QWORD *)(v24 + 24) = v8;
      WdLogEvent5_WdWarning(v24);
      if ( P != v65 && P )
        ExFreePoolWithTag(P, 0);
      if ( v61 != v62 && v61 )
        ExFreePoolWithTag(v61, 0);
      if ( v60 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v59);
      goto LABEL_2;
    }
    KeInitializeEvent(Event, SynchronizationEvent, 0);
    v16 = Event;
  }
  ObjectCount = a1->ObjectCount;
  if ( (unsigned int)ObjectCount <= 4 )
  {
    PoolWithTag = v62;
    v61 = v62;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
    {
      PoolWithTag = v61;
LABEL_32:
      LODWORD(v8) = -1073741801;
      if ( P != v65 && P )
      {
        ExFreePoolWithTag(P, 0);
        PoolWithTag = v61;
      }
      if ( PoolWithTag == v62 || !PoolWithTag )
        goto LABEL_12;
      v18 = PoolWithTag;
LABEL_11:
      ExFreePoolWithTag(v18, 0);
LABEL_12:
      if ( v60 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v59);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
LABEL_93:
      if ( v16 )
      {
        KeSetEvent(v16, 0, 0);
        ObfDereferenceObject(v16);
      }
      return (unsigned int)v8;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)ObjectCount, 0x4B677844u);
    v61 = PoolWithTag;
  }
  v63 = ObjectCount;
  if ( !PoolWithTag )
    goto LABEL_32;
  memset(PoolWithTag, 0, 8 * ObjectCount);
  PoolWithTag = v61;
  if ( !v61 )
    goto LABEL_32;
  v27 = (_QWORD *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&P, a1->ObjectCount);
  if ( !v27 )
  {
    LODWORD(v8) = -1073741801;
    goto LABEL_6;
  }
  if ( a1->ObjectCount )
  {
    v28 = (struct DXGPROCESS *)((char *)a2 + 192);
    v82 = (struct DXGPROCESS *)((char *)a2 + 192);
    while ( 1 )
    {
      v29 = a1->ObjectHandleArray[v5];
      DXGPUSHLOCK::AcquireShared(v28);
      v30 = (v29 >> 6) & 0xFFFFFF;
      if ( v30 < *((_DWORD *)a2 + 58)
        && (v31 = *((_QWORD *)a2 + 27),
            v32 = *(_DWORD *)(v31 + 16LL * v30 + 8),
            ((v29 >> 26) & 0x30) == (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0x30))
        && (v32 & 0x1000) == 0
        && (v32 & 0xF) != 0
        && (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0xF) == 0xB )
      {
        v8 = *(_QWORD *)(v31 + 16LL * v30);
      }
      else
      {
        v8 = 0LL;
      }
      ExReleasePushLockSharedEx(v82, 0LL);
      KeLeaveCriticalRegion();
      if ( !v8 )
        break;
      if ( (*(_DWORD *)(v8 + 64) & 0x20) != 0 )
      {
        v37 = WdLogNewEntry5_WdError(v33);
        *(_QWORD *)(v37 + 24) = a1->ObjectHandleArray[v5];
        WdLogEvent5_WdError(v37);
        LODWORD(v8) = -1073741790;
        goto LABEL_6;
      }
      if ( *(struct DXGDEVICE **)(v8 + 16) != a3 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v36[3] = a1->ObjectHandleArray[v5];
        v36[4] = *(_QWORD *)(v8 + 16);
        v36[5] = a3;
        WdLogEvent5_WdError(v36);
        LODWORD(v8) = -1073741811;
        goto LABEL_6;
      }
      v34 = v5++;
      v27[v34] = *(_QWORD *)(v8 + 32);
      v28 = v82;
      if ( v5 >= a1->ObjectCount )
        goto LABEL_53;
    }
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    LODWORD(v8) = -1073741811;
    v38[3] = a2;
    v38[4] = a1->ObjectHandleArray[v5];
    v38[5] = v5;
    v38[6] = -1073741811LL;
    WdLogEvent5_WdError(v38);
LABEL_6:
    if ( P != v65 && P )
      ExFreePoolWithTag(P, 0);
    v18 = v61;
    if ( v61 == v62 || !v61 )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_53:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v73,
    v27,
    a1->ObjectCount);
  if ( v74 )
  {
    if ( !v73[0] )
    {
      LODWORD(v8) = -1073741801;
LABEL_62:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v73);
      goto LABEL_6;
    }
    v39 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v39 + 24) = 3659LL;
LABEL_61:
    WdLogEvent5_WdError(v39);
    LODWORD(v8) = -1073741811;
    goto LABEL_62;
  }
  v40 = 0;
  if ( a1->ObjectCount )
  {
    while ( 1 )
    {
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           (DXGSYNCOBJECT *)v27[v40],
                           *((struct ADAPTER_RENDER **)a3 + 2));
      *(_QWORD *)&PoolWithTag[8 * v43] = VidSchSyncObject;
      if ( !VidSchSyncObject )
        break;
      if ( ++v40 >= a1->ObjectCount )
        goto LABEL_66;
    }
    v39 = WdLogNewEntry5_WdError(v42);
    *(_QWORD *)(v39 + 24) = a1->ObjectHandleArray[v40];
    goto LABEL_61;
  }
LABEL_66:
  if ( Event )
    ObfReferenceObject(Event);
  LOBYTE(HandleInformation) = 1;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, struct _KEVENT *, int, int, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 400LL) + 8LL) + 560LL))(
                  a1->ObjectCount,
                  PoolWithTag,
                  a1->FenceValueArray,
                  v16,
                  Object,
                  HandleInformation,
                  *((_QWORD *)a3 + 68));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v58) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    Template_pqPR1XR1pq(v45, v44, v46, a3, Objecta, v27, a1->FenceValueArray, a1->hAsyncEvent, v58);
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v73);
  if ( P != v65 && P )
    ExFreePoolWithTag(P, 0);
  if ( v61 != v62 && v61 )
    ExFreePoolWithTag(v61, 0);
  if ( v60 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v59);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
  v47 = Event;
  if ( (int)v8 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
    goto LABEL_93;
  }
  if ( v16 == Event )
  {
    do
    {
      LODWORD(v8) = KeWaitForSingleObject(v16, Executive, 0, 1u, 0LL);
      if ( PsIsThreadTerminating(KeGetCurrentThread()) )
      {
        v54 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
        *(_QWORD *)(v54 + 24) = 3734LL;
        WdLogEvent5_WdWarning(v54);
        LODWORD(v8) = -1073741130;
        goto LABEL_93;
      }
    }
    while ( (_DWORD)v8 == 257 );
    if ( (int)v8 < 0 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v49);
      *(_QWORD *)(v52 + 24) = 3743LL;
      WdLogEvent5_WdAssertion(v52);
      goto LABEL_93;
    }
    v47 = Event;
  }
  if ( v47 )
    ObfDereferenceObject(v47);
  return 0LL;
}

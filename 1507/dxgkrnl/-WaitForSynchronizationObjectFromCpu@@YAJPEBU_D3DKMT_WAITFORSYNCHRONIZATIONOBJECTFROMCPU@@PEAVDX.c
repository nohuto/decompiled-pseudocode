/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C014D848
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@H@Z @ 0x1C014C488 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C00096EC (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009718 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000F934 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C000F980 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C00176B0 (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C001FCD0 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03$0ELGHHIEE@@@QEAAPEAPEAU.c)
 *     Template_pqPR1XR1pq @ 0x1C001FE38 (Template_pqPR1XR1pq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00838D0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C011EF74 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  UINT v5; // esi
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGGLOBAL *Global; // rax
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KEVENT *v20; // r14
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
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
  __int64 v42; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  PRKEVENT v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v57; // rax
  PVOID *Object; // [rsp+28h] [rbp-E0h]
  PVOID *Objecta; // [rsp+28h] [rbp-E0h]
  int HandleInformation; // [rsp+30h] [rbp-D8h]
  int v61; // [rsp+40h] [rbp-C8h]
  PRKEVENT *p_Event; // [rsp+48h] [rbp-C0h]
  __int64 v63; // [rsp+48h] [rbp-C0h]
  _BYTE v64[8]; // [rsp+58h] [rbp-B0h] BYREF
  char v65; // [rsp+60h] [rbp-A8h]
  _BYTE v66[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Elements; // [rsp+78h] [rbp-90h]
  PVOID v68[5]; // [rsp+80h] [rbp-88h] BYREF
  int v69; // [rsp+A8h] [rbp-60h]
  PVOID v70[5]; // [rsp+B0h] [rbp-58h] BYREF
  int v71; // [rsp+D8h] [rbp-30h]
  PVOID v72; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v73[80]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v74[4]; // [rsp+138h] [rbp+30h] BYREF
  char v75; // [rsp+158h] [rbp+50h]
  int v76; // [rsp+160h] [rbp+58h] BYREF
  __int64 v77; // [rsp+168h] [rbp+60h]
  __int64 v78; // [rsp+170h] [rbp+68h]
  int v79; // [rsp+178h] [rbp+70h]
  __int128 v80; // [rsp+180h] [rbp+78h]
  PRKEVENT Event; // [rsp+1E0h] [rbp+D8h] BYREF

  v5 = 0;
  Event = 0LL;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v66, a3);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, (__int64)a3, 0, v7, 0);
  LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v73);
  if ( (int)v10 < 0 )
  {
LABEL_2:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v66);
    return (unsigned int)v10;
  }
  Global = DXGGLOBAL::GetGlobal(v9, v8, v11, v12);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v64);
  hAsyncEvent = a1->hAsyncEvent;
  v68[0] = 0LL;
  v69 = 0;
  v70[0] = 0LL;
  v71 = 0;
  if ( hAsyncEvent )
  {
    v15 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v72, 0LL);
    v20 = (struct _KEVENT *)v72;
    v10 = v15;
    if ( v15 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = a1->hAsyncEvent;
      *(_QWORD *)(v21 + 32) = v10;
      WdLogEvent5_WdWarning(v21);
      goto LABEL_6;
    }
  }
  else
  {
    p_Event = &Event;
    v61 = 0;
    HandleInformation = 24;
    Object = 0LL;
    v76 = 48;
    v77 = 0LL;
    v79 = 512;
    v78 = 0LL;
    v80 = 0LL;
    v22 = ObCreateObject(0LL, ExEventObjectType, &v76);
    v10 = v22;
    if ( v22 < 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      *(_QWORD *)(v27 + 24) = v10;
      WdLogEvent5_WdWarning(v27);
      PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v70);
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(v68);
      if ( v65 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v64);
      goto LABEL_2;
    }
    KeInitializeEvent(Event, SynchronizationEvent, 0);
    v20 = Event;
  }
  Elements = NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4,1265072196>::AllocateElements(v68, a1->ObjectCount);
  if ( !Elements )
  {
    LODWORD(v10) = -1073741801;
    goto LABEL_6;
  }
  v28 = (_QWORD *)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v70, a1->ObjectCount);
  if ( !v28 )
  {
    LODWORD(v10) = -1073741801;
    goto LABEL_6;
  }
  if ( a1->ObjectCount )
  {
    v29 = (struct DXGPROCESS *)((char *)a2 + 192);
    while ( 1 )
    {
      v30 = a1->ObjectHandleArray[v5];
      DXGPUSHLOCK::AcquireShared(v29);
      v31 = (v30 >> 6) & 0xFFFFFF;
      if ( v31 < *((_DWORD *)a2 + 58)
        && (v32 = *((_QWORD *)a2 + 27),
            v33 = *(_DWORD *)(v32 + 16LL * v31 + 8),
            ((v30 >> 26) & 0x30) == (*(_BYTE *)(v32 + 16LL * v31 + 8) & 0x30))
        && (v33 & 0x1000) == 0
        && (v33 & 0xF) != 0
        && (*(_BYTE *)(v32 + 16LL * v31 + 8) & 0xF) == 0xB )
      {
        v10 = *(_QWORD *)(v32 + 16LL * v31);
      }
      else
      {
        v10 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)a2 + 192, 0LL);
      KeLeaveCriticalRegion();
      if ( !v10 )
        break;
      if ( (*(_DWORD *)(v10 + 64) & 0x20) != 0 )
      {
        v38 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v38 + 24) = a1->ObjectHandleArray[v5];
        WdLogEvent5_WdError(v38);
        LODWORD(v10) = -1073741790;
        goto LABEL_6;
      }
      if ( *(struct DXGDEVICE **)(v10 + 16) != a3 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v34);
        v37[3] = a1->ObjectHandleArray[v5];
        v37[4] = *(_QWORD *)(v10 + 16);
        v37[5] = a3;
        WdLogEvent5_WdError(v37);
        LODWORD(v10) = -1073741811;
        goto LABEL_6;
      }
      v35 = v5++;
      v28[v35] = *(_QWORD *)(v10 + 32);
      v29 = (struct DXGPROCESS *)((char *)a2 + 192);
      if ( v5 >= a1->ObjectCount )
        goto LABEL_30;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    LODWORD(v10) = -1073741811;
    v39[3] = a2;
    v39[4] = a1->ObjectHandleArray[v5];
    v39[5] = v5;
    v39[6] = -1073741811LL;
    WdLogEvent5_WdError(v39);
    goto LABEL_6;
  }
LABEL_30:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v74,
    v28,
    a1->ObjectCount);
  if ( v75 )
  {
    if ( v74[0] )
    {
      v40 = WdLogNewEntry5_WdError(v36);
      *(_QWORD *)(v40 + 24) = 3717LL;
      WdLogEvent5_WdError(v40);
      LODWORD(v10) = -1073741811;
    }
    else
    {
      LODWORD(v10) = -1073741801;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v74);
LABEL_6:
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v70);
    NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(v68);
    if ( v65 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v64);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v66);
LABEL_62:
    if ( v20 )
    {
      KeSetEvent(v20, 0, 0);
      ObfDereferenceObject(v20);
    }
    return (unsigned int)v10;
  }
  v41 = 0;
  v42 = Elements;
  if ( a1->ObjectCount )
  {
    while ( 1 )
    {
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           (DXGSYNCOBJECT *)v28[v41],
                           *((struct ADAPTER_RENDER **)a3 + 2));
      *(_QWORD *)(v42 + 8 * v45) = VidSchSyncObject;
      if ( !VidSchSyncObject )
        break;
      if ( ++v41 >= a1->ObjectCount )
        goto LABEL_41;
    }
    v50 = WdLogNewEntry5_WdError(v44);
    *(_QWORD *)(v50 + 24) = a1->ObjectHandleArray[v41];
    WdLogEvent5_WdError(v50);
    LODWORD(v10) = -1073741811;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v74);
    goto LABEL_6;
  }
LABEL_41:
  if ( Event )
    ObfReferenceObject(Event);
  LOBYTE(HandleInformation) = 1;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, __int64, const UINT64 *, struct _KEVENT *, PVOID *, int, _QWORD, int, PRKEVENT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 376LL) + 8LL) + 560LL))(
                   a1->ObjectCount,
                   v42,
                   a1->FenceValueArray,
                   v20,
                   Object,
                   HandleInformation,
                   *((_QWORD *)a3 + 68),
                   v61,
                   p_Event);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v63) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    Template_pqPR1XR1pq(v47, v46, v48, a3, Objecta, v28, a1->FenceValueArray, a1->hAsyncEvent, v63);
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v74);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v70);
  NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(v68);
  if ( v65 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v64);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v66);
  v49 = Event;
  if ( (int)v10 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
    goto LABEL_62;
  }
  if ( v20 == Event )
  {
    do
    {
      LODWORD(v10) = KeWaitForSingleObject(v20, Executive, 0, 1u, 0LL);
      if ( PsIsThreadTerminating(KeGetCurrentThread()) )
      {
        v57 = WdLogNewEntry5_WdWarning(v52, v51, v53, v54);
        *(_QWORD *)(v57 + 24) = 3792LL;
        WdLogEvent5_WdWarning(v57);
        LODWORD(v10) = -1073741130;
        goto LABEL_62;
      }
    }
    while ( (_DWORD)v10 == 257 );
    if ( (int)v10 < 0 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
      *(_QWORD *)(v55 + 24) = 3801LL;
      WdLogEvent5_WdAssertion(v55);
      goto LABEL_62;
    }
    v49 = Event;
  }
  if ( v49 )
    ObfDereferenceObject(v49);
  return 0LL;
}

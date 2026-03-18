/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C014D470
 * Callers:
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C014EEC0 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000F934 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C000F980 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_pqPR1XR1 @ 0x1C001FDA0 (Template_pqPR1XR1.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00838D0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C011EF74 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  UINT ObjectCount; // edx
  const void *Elements; // r15
  __int64 v13; // r12
  UINT v14; // esi
  DXGPUSHLOCK *v15; // rcx
  D3DKMT_HANDLE v16; // edi
  unsigned int v17; // ecx
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // ebx
  _QWORD *v29; // rax
  __int64 v30; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v32; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v34; // rcx
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  UINT v44; // [rsp+28h] [rbp-79h]
  _QWORD v45[4]; // [rsp+48h] [rbp-59h] BYREF
  char v46; // [rsp+68h] [rbp-39h]
  PVOID v47[5]; // [rsp+70h] [rbp-31h] BYREF
  int v48; // [rsp+98h] [rbp-9h]
  PVOID v49[5]; // [rsp+A0h] [rbp-1h] BYREF
  int v50; // [rsp+C8h] [rbp+27h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  v7 = 0;
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 3973LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a1->ObjectCount )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 3974LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 3975LL;
    WdLogEvent5_WdAssertion(v10);
  }
  ObjectCount = a1->ObjectCount;
  v49[0] = 0LL;
  v50 = 0;
  v47[0] = 0LL;
  v48 = 0;
  Elements = (const void *)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v49, ObjectCount);
  if ( !Elements || (v13 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v47, a1->ObjectCount)) == 0 )
  {
    v28 = -1073741801;
    goto LABEL_49;
  }
  v14 = 0;
  if ( !a1->ObjectCount )
  {
LABEL_28:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v45,
      Elements,
      a1->ObjectCount);
    if ( v46 )
    {
      if ( !v45[0] )
      {
        v28 = -1073741801;
LABEL_47:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v45);
        goto LABEL_49;
      }
      v32 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v32 + 24) = 4062LL;
    }
    else
    {
      if ( !a1->ObjectCount )
      {
LABEL_39:
        v36 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 376LL)
                                                                                             + 8LL)
                                                                                 + 552LL))(
                a1->ObjectCount,
                v13,
                a1->Flags.Value,
                a1->FenceValueArray);
        v39 = v36;
        if ( v36 < 0 )
        {
          v40 = WdLogNewEntry5_WdError(v37);
          *(_QWORD *)(v40 + 24) = v39;
          WdLogEvent5_WdError(v40);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v44 = a1->ObjectCount;
          Template_pqPR1XR1(v44, &EventSignalSynchronizationObjectFromCpu, v38, a3, v44, Elements, a1->FenceValueArray);
        }
        v28 = v39;
        goto LABEL_47;
      }
      while ( 1 )
      {
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)Elements + v7),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        *(_QWORD *)(v13 + 8 * v35) = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        if ( ++v7 >= a1->ObjectCount )
          goto LABEL_39;
      }
      v32 = WdLogNewEntry5_WdError(v34);
      *(_QWORD *)(v32 + 24) = a1->ObjectHandleArray[v7];
    }
    WdLogEvent5_WdError(v32);
    v28 = -1073741811;
    goto LABEL_47;
  }
  v15 = (struct DXGPROCESS *)((char *)a2 + 192);
  while ( 1 )
  {
    v16 = a1->ObjectHandleArray[v14];
    DXGPUSHLOCK::AcquireShared(v15);
    v17 = (v16 >> 6) & 0xFFFFFF;
    if ( v17 < *((_DWORD *)a2 + 58)
      && (v18 = *((_QWORD *)a2 + 27),
          v19 = *(_DWORD *)(v18 + 16LL * v17 + 8),
          ((v16 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x30))
      && (v19 & 0x1000) == 0
      && (v19 & 0xF) != 0
      && (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0xF) == 0xB )
    {
      v20 = *(_QWORD *)(v18 + 16LL * v17);
    }
    else
    {
      v20 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)a2 + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( !v20 )
      break;
    if ( (*(_DWORD *)(v20 + 64) & 0x10) != 0 )
    {
      v30 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v30 + 24) = a1->ObjectHandleArray[v14];
      WdLogEvent5_WdError(v30);
      v28 = -1073741790;
      goto LABEL_49;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 16LL)) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = 4025LL;
      WdLogEvent5_WdAssertion(v26);
    }
    *((_QWORD *)Elements + v14) = *(_QWORD *)(v20 + 32);
    if ( *(struct DXGDEVICE **)(v20 + 16) != a3 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v28 = -1073741811;
      v29[3] = *(_QWORD *)(v20 + 16);
      v29[5] = v14;
      v29[4] = v20;
      v29[6] = a3;
      v29[7] = -1073741811LL;
      goto LABEL_34;
    }
    ++v14;
    v15 = (struct DXGPROCESS *)((char *)a2 + 192);
    if ( v14 >= a1->ObjectCount )
    {
      v7 = 0;
      goto LABEL_28;
    }
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  v29[3] = a2;
  ObjectHandleArray = a1->ObjectHandleArray;
  v28 = -1073741811;
  v29[4] = ObjectHandleArray[v14];
  v29[5] = v14;
  v29[6] = -1073741811LL;
LABEL_34:
  WdLogEvent5_WdError(v29);
LABEL_49:
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v47);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(v49);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v41, &EventProfilerExit, v42, 2044);
  return v28;
}

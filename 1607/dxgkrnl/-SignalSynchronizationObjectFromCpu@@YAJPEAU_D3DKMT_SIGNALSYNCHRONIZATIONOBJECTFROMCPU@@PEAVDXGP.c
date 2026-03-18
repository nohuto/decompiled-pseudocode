/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C017688C
 * Callers:
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0177610 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C000BD84 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000BE10 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_pqPR1XR1 @ 0x1C00264C0 (Template_pqPR1XR1.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A4A70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00C8BF8 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C0175E14 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  UINT ObjectCount; // edx
  const void *v11; // r15
  __int64 Elements; // r12
  UINT v13; // esi
  DXGPUSHLOCK *v14; // rcx
  D3DKMT_HANDLE v15; // edi
  unsigned int v16; // ecx
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ebx
  _QWORD *v25; // rax
  __int64 v26; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v28; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v30; // rcx
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r8
  PVOID v38; // rcx
  UINT v40; // [rsp+28h] [rbp-79h]
  PVOID P; // [rsp+48h] [rbp-59h] BYREF
  char v42; // [rsp+50h] [rbp-51h] BYREF
  int v43; // [rsp+70h] [rbp-31h]
  _QWORD v44[4]; // [rsp+78h] [rbp-29h] BYREF
  char v45; // [rsp+98h] [rbp-9h]
  PVOID v46[5]; // [rsp+A0h] [rbp-1h] BYREF
  int v47; // [rsp+C8h] [rbp+27h]

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  v6 = 0;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 4081LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a1->ObjectCount )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 4082LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v9 + 24) = 4083LL;
    WdLogEvent5_WdAssertion(v9);
  }
  ObjectCount = a1->ObjectCount;
  P = 0LL;
  v43 = 0;
  v46[0] = 0LL;
  v47 = 0;
  v11 = (const void *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&P, ObjectCount);
  if ( !v11 || (Elements = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v46, a1->ObjectCount)) == 0 )
  {
    v24 = -1073741801;
    goto LABEL_49;
  }
  v13 = 0;
  if ( !a1->ObjectCount )
  {
LABEL_28:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v44,
      v11,
      a1->ObjectCount);
    if ( v45 )
    {
      if ( !v44[0] )
      {
        v24 = -1073741801;
LABEL_47:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v44);
        goto LABEL_49;
      }
      v28 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v28 + 24) = 4170LL;
    }
    else
    {
      if ( !a1->ObjectCount )
      {
LABEL_39:
        v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 376LL)
                                                                                             + 8LL)
                                                                                 + 552LL))(
                a1->ObjectCount,
                Elements,
                a1->Flags.Value,
                a1->FenceValueArray);
        v35 = v32;
        if ( v32 < 0 )
        {
          v36 = WdLogNewEntry5_WdError(v33);
          *(_QWORD *)(v36 + 24) = v35;
          WdLogEvent5_WdError(v36);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v40 = a1->ObjectCount;
          Template_pqPR1XR1(v40, &EventSignalSynchronizationObjectFromCpu, v34, a3, v40, v11, a1->FenceValueArray);
        }
        v24 = v35;
        goto LABEL_47;
      }
      while ( 1 )
      {
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)v11 + v6),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        *(_QWORD *)(Elements + 8 * v31) = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        if ( ++v6 >= a1->ObjectCount )
          goto LABEL_39;
      }
      v28 = WdLogNewEntry5_WdError(v30);
      *(_QWORD *)(v28 + 24) = a1->ObjectHandleArray[v6];
    }
    WdLogEvent5_WdError(v28);
    v24 = -1073741811;
    goto LABEL_47;
  }
  v14 = (struct DXGPROCESS *)((char *)a2 + 184);
  while ( 1 )
  {
    v15 = a1->ObjectHandleArray[v13];
    DXGPUSHLOCK::AcquireShared(v14);
    v16 = (v15 >> 6) & 0xFFFFFF;
    if ( v16 < *((_DWORD *)a2 + 56)
      && (v17 = *((_QWORD *)a2 + 26),
          v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
          ((v15 >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30))
      && (v18 & 0x1000) == 0
      && (v18 & 0xF) != 0
      && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) == 0xB )
    {
      v19 = *(_QWORD *)(v17 + 16LL * v16);
    }
    else
    {
      v19 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)a2 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( !v19 )
      break;
    if ( (*(_DWORD *)(v19 + 64) & 0x10) != 0 )
    {
      v26 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v26 + 24) = a1->ObjectHandleArray[v13];
      WdLogEvent5_WdError(v26);
      v24 = -1073741790;
      goto LABEL_49;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL)) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v22 + 24) = 4133LL;
      WdLogEvent5_WdAssertion(v22);
    }
    *((_QWORD *)v11 + v13) = *(_QWORD *)(v19 + 32);
    if ( *(struct DXGDEVICE **)(v19 + 16) != a3 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v24 = -1073741811;
      v25[3] = *(_QWORD *)(v19 + 16);
      v25[5] = v13;
      v25[4] = v19;
      v25[6] = a3;
      v25[7] = -1073741811LL;
      goto LABEL_34;
    }
    ++v13;
    v14 = (struct DXGPROCESS *)((char *)a2 + 184);
    if ( v13 >= a1->ObjectCount )
    {
      v6 = 0;
      goto LABEL_28;
    }
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v20);
  v25[3] = a2;
  ObjectHandleArray = a1->ObjectHandleArray;
  v24 = -1073741811;
  v25[4] = ObjectHandleArray[v13];
  v25[5] = v13;
  v25[6] = -1073741811LL;
LABEL_34:
  WdLogEvent5_WdError(v25);
LABEL_49:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v46);
  v38 = P;
  if ( P != &v42 && P )
    ExFreePoolWithTag(P, 0);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v38, &EventProfilerExit, v37, 2044);
  return v24;
}

/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00105A0
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C0024478 (VidSchiFlushPendingTokenList.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00257C4 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000DF5C (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011348 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0011D0C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIIH@Z @ 0x1C0011D68 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011F24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0020B6C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0021E1C (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     Template_ppqqx @ 0x1C00229EC (Template_ppqqx.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rbx
  volatile signed __int32 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  CRefCountedBuffer *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  void (__fastcall *v27)(_QWORD); // rax
  _QWORD *v28; // rax
  struct _VIDSCH_GLOBAL *v29; // rcx
  int v30; // [rsp+20h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+40h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-40h] BYREF

  v5 = *((_QWORD *)a1 + 13);
  v8 = *(_QWORD *)(v5 + 32);
  if ( (*((_BYTE *)a2 + 3) & 1) != 0 )
  {
    v23 = !_BitScanForward((unsigned int *)&v24, (unsigned __int8)*((_DWORD *)a2 + 106));
    if ( v23 || (_BYTE)v24 == 0xFF )
      LOBYTE(v24) = 0;
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v8, *((_DWORD *)a2 + 29), (char)v24)
      && VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v8, a2) )
    {
      VidSchiSubmitIndependentFlip(a1, a2, a3);
    }
    else
    {
      v25 = *(_QWORD *)(v8 + 8LL * *((unsigned int *)a2 + 29) + 2968);
      v26 = *(unsigned int *)(v25 + 18872);
      if ( (_DWORD)v26 != -1 )
      {
        v27 = *(void (__fastcall **)(_QWORD))(v8 + 2848);
        if ( v27 )
          v27(*(_QWORD *)(v8 + 2896));
      }
      v28 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v25, v26);
      v28[3] = *((_QWORD *)a2 + 13);
      v28[4] = *((unsigned int *)a2 + 28);
      if ( a4 )
      {
        v28[5] = 0LL;
        v28[6] = *((_QWORD *)a2 + 19);
        v28[7] = *((_QWORD *)a2 + 20);
      }
      else
      {
        v28[5] = *((_QWORD *)a2 + 19);
        v28[6] = *((_QWORD *)a2 + 20);
      }
      WdLogEvent5_WdPresentTokenEvent(v28);
      LOBYTE(v30) = a4;
      VidSchiPropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)a2 + 12),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a2 + 13),
        0,
        0,
        v30,
        *((_QWORD *)a2 + 4),
        *((_QWORD *)a2 + 3),
        (__int64)a2);
      VidSchiUnreferencePrimaryAllocations(
        v29,
        (struct VIDSCH_SUBMIT_DATA2 *)((char *)a2 + 424),
        1u,
        *((_DWORD *)a2 + 34),
        *((_DWORD *)a2 + 34),
        0);
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 952));
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 1124));
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 4LL * *((unsigned int *)a2 + 29) + 1060));
      VidSchiCheckPendingDeviceCommand((_QWORD *)v5);
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    v9[3] = *((_QWORD *)a2 + 13);
    v9[4] = *((unsigned int *)a2 + 28);
    v9[5] = *((_QWORD *)a2 + 19);
    v9[6] = *((_QWORD *)a2 + 20);
    WdLogEvent5_WdPresentTokenEvent(v9);
    v12 = *((_QWORD *)a2 + 4);
    v13 = *((_QWORD *)a2 + 3);
    v14 = *((_QWORD *)a2 + 13);
    v15 = *((_QWORD *)a2 + 12);
    if ( v12 && v13 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 16), &v31);
      v20 = *(CRefCountedBuffer **)(v12 + 8);
      if ( v20 )
        CRefCountedBuffer::RefCountedBufferRelease(v20);
      *(_QWORD *)(v12 + 8) = v13;
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 4));
      KeReleaseInStackQueuedSpinLock(&v31);
    }
    v16 = (volatile signed __int32 *)*((_QWORD *)a2 + 3);
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v16, 0);
      *((_QWORD *)a2 + 3) = 0LL;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_ppqqx((_DWORD)v16, v10, v11, v15, v14);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v15, &LockHandle);
    if ( *(_DWORD *)(v15 + 8) >= 0x800u )
    {
      v21 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v21 + 24) = 2449LL;
      WdLogEvent5_WdAssertion(v21);
    }
    *(_QWORD *)(v15 + 8LL * *(unsigned int *)(v15 + 8) + 80) = v14;
    *(_BYTE *)(*(unsigned int *)(v15 + 8) + v15 + 16464) &= ~1u;
    *(_BYTE *)(*(unsigned int *)(v15 + 8) + v15 + 16464) &= ~2u;
    *(_BYTE *)(*(unsigned int *)(v15 + 8) + v15 + 16464) &= ~4u;
    v19 = ((unsigned __int16)*(_DWORD *)(v15 + 8) + 1) & 0x7FF;
    *(_DWORD *)(v15 + 8) = v19;
    if ( v19 == *(_DWORD *)(v15 + 12) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v22 + 24) = 2463LL;
      WdLogEvent5_WdAssertion(v22);
    }
    KeSetEvent(*(PRKEVENT *)(v15 + 72), 0, 0);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}

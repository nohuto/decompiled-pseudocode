/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C0001FB0
 * Callers:
 *     VidSchiFlushPendingTokenList @ 0x1C0001BD4 (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0021DD0 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0001000 (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C000163C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIIH@Z @ 0x1C00016E8 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0001F84 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C000222C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0002518 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E980 (VidSchiCheckPendingDeviceCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_ppqqx @ 0x1C001F9A0 (Template_ppqqx.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3,
        __int64 a4)
{
  char v4; // r14
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
  int v17; // eax
  bool v18; // zf
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  struct _VIDSCH_GLOBAL *v25; // rcx
  CRefCountedBuffer *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  void (__fastcall *v29)(_QWORD); // rax
  int v30; // [rsp+20h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+40h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-40h] BYREF

  v4 = a4;
  v5 = *((_QWORD *)a1 + 13);
  v8 = *(_QWORD *)(v5 + 32);
  if ( (*((_BYTE *)a2 + 3) & 1) != 0 )
  {
    v18 = !_BitScanForward((unsigned int *)&v19, (unsigned __int8)*((_DWORD *)a2 + 90));
    if ( v18 || (_BYTE)v19 == 0xFF )
      LOBYTE(v19) = 0;
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v8, *((_DWORD *)a2 + 29), (char)v19)
      && VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v8, a2, v20) )
    {
      VidSchiSubmitIndependentFlip(a1, a2, a3);
    }
    else
    {
      v22 = *(_QWORD *)(v8 + 8LL * *((unsigned int *)a2 + 29) + 2592);
      v23 = *(unsigned int *)(v22 + 14768);
      if ( (_DWORD)v23 != -1 )
      {
        v29 = *(void (__fastcall **)(_QWORD))(v8 + 2488);
        if ( v29 )
          v29(*(_QWORD *)(v8 + 2520));
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v22, v23, v20, v21);
      v24[3] = *((_QWORD *)a2 + 13);
      v24[4] = *((unsigned int *)a2 + 28);
      if ( v4 )
      {
        v24[5] = 0LL;
        v24[6] = *((_QWORD *)a2 + 19);
        v24[7] = *((_QWORD *)a2 + 20);
      }
      else
      {
        v24[5] = *((_QWORD *)a2 + 19);
        v24[6] = *((_QWORD *)a2 + 20);
      }
      WdLogEvent5_WdPresentTokenEvent(v24);
      LOBYTE(v30) = v4;
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
        v25,
        (struct VIDSCH_SUBMIT_DATA2 *)((char *)a2 + 360),
        1u,
        *((_DWORD *)a2 + 34),
        *((_DWORD *)a2 + 34),
        0);
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 916));
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 1128));
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 4LL * *((unsigned int *)a2 + 29) + 1064));
      VidSchiCheckPendingDeviceCommand(v5);
    }
  }
  else
  {
    v9 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdPresentTokenEvent)(
                     a1,
                     a2,
                     (union _ULARGE_INTEGER)a3.QuadPart,
                     a4);
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
      v26 = *(CRefCountedBuffer **)(v12 + 8);
      if ( v26 )
        CRefCountedBuffer::RefCountedBufferRelease(v26);
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
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_ppqqx((_DWORD)v16, v10, v11, v15, v14);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v15, &LockHandle);
    if ( *(_DWORD *)(v15 + 8) >= 0x800u )
    {
      v27 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v27 + 24) = 2305LL;
      WdLogEvent5_WdAssertion(v27);
    }
    *(_QWORD *)(v15 + 8LL * *(unsigned int *)(v15 + 8) + 80) = v14;
    *(_BYTE *)(*(unsigned int *)(v15 + 8) + v15 + 16464) &= ~1u;
    *(_BYTE *)(*(unsigned int *)(v15 + 8) + v15 + 16464) &= ~2u;
    *(_BYTE *)(*(unsigned int *)(v15 + 8) + v15 + 16464) &= ~4u;
    v17 = ((unsigned __int16)*(_DWORD *)(v15 + 8) + 1) & 0x7FF;
    *(_DWORD *)(v15 + 8) = v17;
    if ( v17 == *(_DWORD *)(v15 + 12) )
    {
      v28 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v28 + 24) = 2319LL;
      WdLogEvent5_WdAssertion(v28);
    }
    KeSetEvent(*(PRKEVENT *)(v15 + 72), 0, 0);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}

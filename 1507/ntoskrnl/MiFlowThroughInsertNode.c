/*
 * XREFs of MiFlowThroughInsertNode @ 0x14012F998
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x140036BC0 (MiFinishMdlForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     MiPagefileCompareOffset @ 0x140217404 (MiPagefileCompareOffset.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  bool v8; // di
  __int16 *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned int v12; // r8d
  unsigned __int64 *v13; // r15
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 result; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v20 = a2[2];
  v3 = v20;
  if ( (v20 & 0x400) != 0 )
  {
    *(_QWORD *)(a1 + 320) = 0LL;
  }
  else
  {
    v6 = 0x90482413000LL;
    v7 = (unsigned __int16)v20 >> 12;
    if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8 )
      v3 = MiReadPteShadow(&v20, v20);
    v8 = 0;
    if ( (v3 & 4) != 0 )
      MiReverseSwizzleInvalidPte(v3, v6, a3, v7);
    v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(a2[5]) >> 8) & 0x3FF);
    v11 = *(_QWORD *)&v9[4 * v10 + 2672];
    *(_QWORD *)(a1 + 320) = v11;
    *(_QWORD *)(a1 + 328) = v12;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 192), &LockHandle);
    v13 = (unsigned __int64 *)(v11 + 208);
    v14 = *(_QWORD **)(v11 + 208);
    if ( v14 )
    {
      while ( 1 )
      {
        if ( (int)MiPagefileCompareOffset(a1 + 336, v14) < 0 )
        {
          v15 = (_QWORD *)*v14;
          if ( !*v14 )
            break;
        }
        else
        {
          v15 = (_QWORD *)v14[1];
          if ( !v15 )
          {
            v8 = 1;
            break;
          }
        }
        v14 = v15;
      }
    }
    RtlAvlInsertNodeEx(v13, (unsigned __int64)v14, v8, a1 + 336);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  *(_BYTE *)(a1 + 189) |= 8u;
  result = a1 + 16;
  v17 = *a2 - 32LL;
  v18 = *(_QWORD **)(v17 + 24);
  *(_QWORD *)(a1 + 16) = v17 + 16;
  *(_QWORD *)(a1 + 24) = v18;
  if ( *v18 != v17 + 16 )
    __fastfail(3u);
  *v18 = result;
  *(_QWORD *)(v17 + 24) = result;
  *(_QWORD *)(a1 + 312) = v17;
  return result;
}

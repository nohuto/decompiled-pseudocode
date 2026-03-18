/*
 * XREFs of ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0001CC8
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0021DD0 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     memmove @ 0x1C00168C0 (memmove.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

void __fastcall VidSchiPostponePresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3)
{
  __int64 v4; // rbp
  bool v6; // zf
  int v7; // eax
  char v8; // r9
  char v9; // al
  unsigned int v10; // r14d
  union _ULARGE_INTEGER *PoolWithTag; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  union _ULARGE_INTEGER **v18; // rax

  v4 = *((unsigned int *)a2 + 29);
  v6 = !_BitScanForward((unsigned int *)&v7, (unsigned __int8)*((_DWORD *)a2 + 90));
  v8 = -1;
  if ( !v6 )
    v8 = v7;
  v9 = v8;
  if ( v8 == -1 )
    v9 = 0;
  v10 = v9;
  PoolWithTag = (union _ULARGE_INTEGER *)ExAllocatePoolWithTag(
                                           (POOL_TYPE)512,
                                           (unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 32LL) + 52LL)
                                                        * ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 32LL) + 124LL) << 6)
                                                         + 8)
                                                        + 408),
                                           0x68536956u);
  v16 = WdLogNewEntry5_WdPresentTokenEvent(v13, v12, v14, v15);
  *(_QWORD *)(v16 + 24) = *((_QWORD *)a2 + 13);
  WdLogEvent5_WdPresentTokenEvent(v16);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1D8uLL);
    memmove(&PoolWithTag[4], a2, *((unsigned int *)a2 + 89));
    PoolWithTag[2] = a3;
    PoolWithTag[3].QuadPart = (ULONGLONG)a1;
    v17 = 280LL * v10 + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 32LL) + 8 * v4 + 2592) + 184LL;
    v18 = *(union _ULARGE_INTEGER ***)(v17 + 8);
    PoolWithTag->QuadPart = v17;
    PoolWithTag[1].QuadPart = (ULONGLONG)v18;
    if ( *v18 != (union _ULARGE_INTEGER *)v17 )
      __fastfail(3u);
    *v18 = PoolWithTag;
    *(_QWORD *)(v17 + 8) = PoolWithTag;
  }
}

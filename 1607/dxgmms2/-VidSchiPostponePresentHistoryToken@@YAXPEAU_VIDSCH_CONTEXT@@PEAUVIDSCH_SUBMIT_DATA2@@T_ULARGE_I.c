/*
 * XREFs of ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0021654
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00257C4 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     memmove @ 0x1C0014B00 (memmove.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

void __fastcall VidSchiPostponePresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3)
{
  __int64 v4; // rbp
  bool v6; // zf
  int v7; // eax
  char v8; // r8
  char v9; // al
  unsigned int v10; // r14d
  __int64 v11; // rdx
  union _ULARGE_INTEGER *PoolWithTag; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  union _ULARGE_INTEGER **v17; // rax

  v4 = *((unsigned int *)a2 + 29);
  v6 = !_BitScanForward((unsigned int *)&v7, (unsigned __int8)*((_DWORD *)a2 + 106));
  v8 = -1;
  if ( !v6 )
    v8 = v7;
  v9 = v8;
  if ( v8 == -1 )
    v9 = 0;
  v10 = v9;
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 32LL);
  PoolWithTag = (union _ULARGE_INTEGER *)ExAllocatePoolWithTag(
                                           (POOL_TYPE)512,
                                           *(_DWORD *)(v11 + 128)
                                         * (48 * *(_DWORD *)(v11 + 56) + ((8 * *(_DWORD *)(v11 + 56) + 167) & 0xFFFFFFF8))
                                         + 8 * (*(_DWORD *)(v11 + 56) + 59),
                                           0x68536956u);
  v15 = WdLogNewEntry5_WdPresentTokenEvent(v14, v13);
  *(_QWORD *)(v15 + 24) = *((_QWORD *)a2 + 13);
  WdLogEvent5_WdPresentTokenEvent(v15);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x280uLL);
    memmove(&PoolWithTag[4], a2, *((unsigned int *)a2 + 105));
    PoolWithTag[2] = a3;
    PoolWithTag[3].QuadPart = (ULONGLONG)a1;
    v16 = 272LL * v10 + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 32LL) + 8 * v4 + 2968) + 176LL;
    v17 = *(union _ULARGE_INTEGER ***)(v16 + 8);
    if ( *v17 != (union _ULARGE_INTEGER *)v16 )
      __fastfail(3u);
    PoolWithTag->QuadPart = v16;
    PoolWithTag[1].QuadPart = (ULONGLONG)v17;
    *v17 = PoolWithTag;
    *(_QWORD *)(v16 + 8) = PoolWithTag;
  }
}

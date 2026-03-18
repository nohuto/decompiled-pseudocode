/*
 * XREFs of CcAsyncReadPrefetch @ 0x14011D7C4
 * Callers:
 *     CcAsyncReadWorker @ 0x14011D044 (CcAsyncReadWorker.c)
 * Callees:
 *     CcUpdateReadHistory @ 0x140033B8C (CcUpdateReadHistory.c)
 *     CcScheduleReadAheadEx @ 0x1400E4230 (CcScheduleReadAheadEx.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     MmPrefetchForCacheManager @ 0x140477744 (MmPrefetchForCacheManager.c)
 *     MmProbeAndLockProcessPages @ 0x1404778C8 (MmProbeAndLockProcessPages.c)
 */

char __fastcall CcAsyncReadPrefetch(__int64 a1)
{
  __int64 v1; // rbx
  _SLIST_ENTRY *v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // r14
  int v5; // r15d
  struct _MDL *v6; // r10
  _SLIST_ENTRY *Next; // rbx
  int v9; // [rsp+80h] [rbp+8h]
  int v10; // [rsp+88h] [rbp+10h]
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+98h] [rbp+20h]

  v10 = 0;
  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_SLIST_ENTRY **)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 40);
  v4 = *(_QWORD **)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(struct _MDL **)(a1 + 64);
  if ( (v6->MdlFlags & 0x817) == 0 )
    MmProbeAndLockProcessPages(v6, *(PEPROCESS *)(a1 + 88), *(_BYTE *)(a1 + 96), IoWriteAccess);
  LODWORD(KeGetCurrentThread()[1].Timer.TimerListEntry.Flink) = 0;
  *v4 = 0LL;
  v9 = v3;
  if ( v11 < *(_QWORD *)(v1 + 8) )
  {
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)7;
    if ( v11 + v3 > *(_QWORD *)(v1 + 8) )
      v9 = *(_DWORD *)(v1 + 8) - v11;
    v12 = v11 & 0xFFFFFFFFFFFFF000uLL;
    v10 = MmPrefetchForCacheManager(
            (_DWORD)v2,
            (unsigned int)v11 & 0xFFFFF000,
            -4096,
            ((v9 + v11 + 4095) & 0xFFFFF000) - (v11 & 0xFFFFF000),
            v5);
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
  }
  if ( v10 )
    ++CcNumberAsyncReadPrefetches;
  else
    ++CcNumberAsyncReadCacheHits;
  Next = v2[3].Next;
  if ( CcEnableReadAheadInAsyncRead && v10 )
  {
    if ( !Next )
      return 1;
    if ( ((__int64)Next->Next & 0x20000) == 0 )
      CcScheduleReadAheadEx(v2, &v11, v3, 0LL);
  }
  if ( Next )
    CcUpdateReadHistory((__int64)v2, &v11, v3);
  return 1;
}

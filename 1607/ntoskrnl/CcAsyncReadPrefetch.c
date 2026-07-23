/*
 * XREFs of CcAsyncReadPrefetch @ 0x14006DBE0
 * Callers:
 *     CcAsyncReadWorker @ 0x14013DE8C (CcAsyncReadWorker.c)
 * Callees:
 *     CcUpdateReadHistory @ 0x14006E24C (CcUpdateReadHistory.c)
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     MmPrefetchForCacheManager @ 0x14042B4AC (MmPrefetchForCacheManager.c)
 *     MmProbeAndLockProcessPages @ 0x1404EEB38 (MmProbeAndLockProcessPages.c)
 */

char __fastcall CcAsyncReadPrefetch(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // r14
  int v5; // r12d
  struct _MDL *v6; // r10
  _DWORD *v7; // rbx
  int v9; // [rsp+90h] [rbp+8h]
  int v10; // [rsp+98h] [rbp+10h]
  __int64 v11; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+A8h] [rbp+20h]

  v10 = 0;
  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD **)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 40);
  v4 = *(_QWORD **)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(struct _MDL **)(a1 + 64);
  if ( (v6->MdlFlags & 0x817) == 0 )
    MmProbeAndLockProcessPages(v6, *(PEPROCESS *)(a1 + 88), *(_BYTE *)(a1 + 112), IoWriteAccess);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
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
  v7 = (_DWORD *)v2[6];
  if ( CcEnableReadAheadInAsyncRead && v10 )
  {
    if ( !v7 )
      return 1;
    if ( (*v7 & 0x20000) == 0 )
      CcScheduleReadAheadEx(v2);
  }
  if ( v7 )
    CcUpdateReadHistory(v2, &v11, (unsigned int)v3);
  return 1;
}

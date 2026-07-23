/*
 * XREFs of ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140122E3C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14011A894 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker(__int64 a1)
{
  _QWORD *v1; // rsi
  unsigned __int64 v2; // r8
  unsigned int v3; // r15d
  KSPIN_LOCK *v4; // rbp
  unsigned __int64 v5; // rdi
  KIRQL v6; // al
  KIRQL v7; // dl
  LARGE_INTEGER v8; // rbx
  unsigned __int64 v9; // rax
  LARGE_INTEGER PerformanceCounter; // rbx
  int i; // r14d
  KIRQL v12; // al
  _QWORD *v13; // rcx
  int v14; // esi
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
  v3 = 100;
  v4 = (KSPIN_LOCK *)(v2 + 768);
  v5 = v2 + 24 * (*(_DWORD *)(a1 + 32) & 7 | (unsigned __int64)(8 * (*(_DWORD *)(a1 + 40) & 3u)));
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 768));
  --*(_DWORD *)(v5 + 16);
  v7 = v6;
  ++*(_DWORD *)(v5 + 20);
LABEL_2:
  KeReleaseSpinLock(v4, v7);
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v1[4] & 0xFFFFFFFFFFFFFFF8uLL, (__int64)(v1 - 5), 0);
  v9 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v8.QuadPart) / PerformanceFrequency.QuadPart;
  if ( v9 < v3 )
    v3 = v9;
  PerformanceCounter.QuadPart = 0LL;
  for ( i = 0; ; i = 1 )
  {
LABEL_5:
    v12 = KeAcquireSpinLockRaiseToDpc(v4);
    v13 = *(_QWORD **)(v5 + 8);
    v7 = v12;
    if ( *v13 )
    {
      if ( v13 == (_QWORD *)v5 )
      {
        v1 = 0LL;
      }
      else
      {
        v1 = *(_QWORD **)v5;
        *(_QWORD *)v5 = **(_QWORD **)v5;
        if ( v1 == v13 )
        {
          *(_QWORD *)v5 = 0LL;
          *(_QWORD *)(v5 + 8) = v5;
        }
        else
        {
          --*v13;
        }
      }
      goto LABEL_2;
    }
    if ( i )
      break;
    KeReleaseSpinLock(v4, v12);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = 0;
    while ( *(_DWORD *)(v5 + 16) <= *(_DWORD *)(v5 + 20) )
    {
      if ( **(_QWORD **)(v5 + 8) )
        goto LABEL_5;
      if ( (++v14 & 0x7F) == 0
        && 1000000
         * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart)
         / PerformanceFrequency.QuadPart >= (unsigned __int64)v3 )
      {
        break;
      }
      _mm_pause();
    }
  }
  --*(_DWORD *)(v5 + 20);
  KeReleaseSpinLock(v4, v12);
}

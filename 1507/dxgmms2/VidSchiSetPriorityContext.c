/*
 * XREFs of VidSchiSetPriorityContext @ 0x1C0006880
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 *     VidSchSubmitCommand @ 0x1C002E700 (VidSchSubmitCommand.c)
 *     VidSchSetPriorityContext @ 0x1C00388C0 (VidSchSetPriorityContext.c)
 *     VidSchSubmitPagingCommand @ 0x1C00794D0 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     Template_pqq @ 0x1C0010A8C (Template_pqq.c)
 */

void __fastcall VidSchiSetPriorityContext(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 *v8; // r9
  __int64 **v9; // rax
  __int64 v10; // r9
  __int64 **v11; // rax
  __int64 v12; // rax
  __int64 v14; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v4 = a2;
  v5 = *(_QWORD *)(v2 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1872), &LockHandle);
  if ( *(_DWORD *)(a1 + 392) != (_DWORD)v4 )
  {
    v6 = *(unsigned int *)(a1 + 396);
    v7 = (__int64 *)gulPriorityToPriorityClass[v4];
    *(_DWORD *)(a1 + 396) = gulPublicPriorityToSchedulingPriority[v4];
    *(_DWORD *)(a1 + 392) = v4;
    *(_QWORD *)(a1 + 480) = *(_QWORD *)(v5 + 8LL * (_QWORD)v7 + 2184);
    *(_QWORD *)(a1 + 488) = *(_QWORD *)(v5 + 8LL * (_QWORD)v7 + 2232);
    if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      *(_QWORD *)(a1 + 456) = *(_QWORD *)(a1 + 480);
    if ( (_DWORD)v6 != *(_DWORD *)(a1 + 396) )
    {
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v7 = (__int64 *)(a1 + 8);
        v8 = *(__int64 **)(a1 + 8);
        v9 = *(__int64 ***)(a1 + 16);
        if ( v8[1] != a1 + 8 || *v9 != v7 )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = (__int64)v9;
        v10 = 16LL * *(unsigned int *)(a1 + 396) + v2 + 2040;
        v11 = *(__int64 ***)(v10 + 8);
        *v7 = v10;
        *(_QWORD *)(a1 + 16) = v11;
        if ( *v11 != (__int64 *)v10 )
          __fastfail(3u);
        *v11 = v7;
        *(_QWORD *)(v10 + 8) = v7;
        LODWORD(v7) = *(_DWORD *)(a1 + 396);
        *(_DWORD *)(v2 + 1616) |= 1 << (char)v7;
        if ( *(_QWORD *)(v2 + 16 * v6 + 2040) == v2 + 16 * v6 + 2040 )
        {
          LODWORD(v7) = v6;
          *(_DWORD *)(v2 + 1616) &= ~(1 << v6);
        }
      }
      if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
      {
        ++*(_DWORD *)(v2 + 4LL * *(unsigned int *)(a1 + 396) + 1624);
        v12 = *(unsigned int *)(a1 + 396);
        if ( *(_DWORD *)(v2 + 4 * v12 + 1624) == 1 )
        {
          LODWORD(v7) = *(_DWORD *)(a1 + 396);
          *(_DWORD *)(v2 + 1620) |= 1 << v12;
        }
        if ( (*(_DWORD *)(v2 + 4 * v6 + 1624))-- == 1 )
        {
          LODWORD(v7) = v6;
          *(_DWORD *)(v2 + 1620) &= ~(1 << v6);
        }
      }
      if ( bTracingEnabled )
      {
        v14 = *(_QWORD *)(a1 + 56);
        if ( !v14 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
          LODWORD(v14) = a1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pqq(
            (_DWORD)v7,
            (unsigned int)&EventChangePriority,
            v6,
            v14,
            *(_DWORD *)(a1 + 392),
            *(_DWORD *)(a1 + 396));
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

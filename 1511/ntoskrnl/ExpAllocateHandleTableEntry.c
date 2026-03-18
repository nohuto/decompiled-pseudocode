/*
 * XREFs of ExpAllocateHandleTableEntry @ 0x140425030
 * Callers:
 *     ExCreateHandleEx @ 0x140424F50 (ExCreateHandleEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404B5E6C (ExpAllocateHandleTableEntrySlow.c)
 */

__int64 __fastcall ExpAllocateHandleTableEntry(unsigned __int64 *a1, _QWORD *a2)
{
  int v4; // r12d
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  int v7; // r14d
  int *v8; // rbx
  char HandleTableEntrySlow; // r14
  unsigned int v10; // edx
  int *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 result; // rax

  if ( (*((_BYTE *)a1 + 44) & 4) == 0 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)a1;
      v5 = dword_1406FB03C;
      v6 = (*((_BYTE *)a1 + 44) & 1) != 0 ? 0 : KeGetPcr()->Prcb.Number % dword_1406FB03C;
      v7 = 0;
      if ( dword_1406FB03C )
        break;
LABEL_9:
      HandleTableEntrySlow = 1;
      if ( (*((_BYTE *)a1 + 44) & 1) != 0 )
        v10 = 0;
      else
        v10 = KeGetPcr()->Prcb.Number % dword_1406FB03C;
      v11 = (int *)&a1[8 * v10 + 8];
      v12 = KeAbPreAcquire((ULONG_PTR)(a1 + 7), 0LL, 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 14, 0LL) )
        ExfAcquirePushLockExclusiveEx(a1 + 7, v12, (ULONG_PTR)(a1 + 7));
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      if ( v4 == *(_DWORD *)a1 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(a1, v11);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)a1 + 7);
      KeAbPostRelease((ULONG_PTR)(a1 + 7));
      if ( !HandleTableEntrySlow )
        return 0LL;
    }
    while ( 1 )
    {
      v8 = (int *)&a1[8 * v6 + 8];
      if ( *((_QWORD *)v8 + 1) )
      {
        v14 = KeAbPreAcquire((ULONG_PTR)&a1[8 * v6 + 8], 0LL, 0LL);
        v15 = v14;
        if ( _interlockedbittestandset64(v8, 0LL) )
          ExfAcquirePushLockExclusiveEx(&a1[8 * v6 + 8], v14, (ULONG_PTR)&a1[8 * v6 + 8]);
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        v16 = *((_QWORD *)v8 + 1);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8);
          *((_QWORD *)v8 + 1) = v17;
          if ( !v17 )
            *((_QWORD *)v8 + 2) = 0LL;
          v18 = ++v8[6];
          if ( v18 > v8[7] )
            v8[7] = v18;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&a1[8 * v6 + 8]);
        KeAbPostRelease((ULONG_PTR)&a1[8 * v6 + 8]);
        if ( v16 )
        {
          result = v16;
          *a2 = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFF000uLL) + 8)
              + 4 * ((__int64)(v16 - (v16 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
          return result;
        }
        v5 = dword_1406FB03C;
      }
      if ( ++v6 >= v5 )
        v6 = 0;
      if ( ++v7 >= v5 )
        goto LABEL_9;
    }
  }
  return 0LL;
}

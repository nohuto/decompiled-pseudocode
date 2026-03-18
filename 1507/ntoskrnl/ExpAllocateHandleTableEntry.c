/*
 * XREFs of ExpAllocateHandleTableEntry @ 0x140424DE0
 * Callers:
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140523718 (ExpAllocateHandleTableEntrySlow.c)
 */

__int64 __fastcall ExpAllocateHandleTableEntry(unsigned __int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // r12d
  unsigned int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // ebp
  int *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // eax
  __int64 result; // rax
  char HandleTableEntrySlow; // bp
  unsigned int v19; // edx
  int *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdi

  if ( (*((_BYTE *)a1 + 44) & 4) != 0 )
    return 0LL;
  do
  {
    v6 = *(_DWORD *)a1;
    v7 = dword_14077E03C;
    if ( (*((_BYTE *)a1 + 44) & 1) != 0 )
      v8 = 0;
    else
      v8 = KeGetPcr()->Prcb.Number % dword_14077E03C;
    v9 = 0;
    if ( dword_14077E03C )
    {
      do
      {
        v10 = (int *)&a1[8 * v8 + 8];
        if ( *((_QWORD *)v10 + 1) )
        {
          v11 = KeAbPreAcquire((ULONG_PTR)&a1[8 * v8 + 8], 0LL, 0LL, a4);
          v13 = v11;
          if ( _interlockedbittestandset64(v10, 0LL) )
            ExfAcquirePushLockExclusiveEx(&a1[8 * v8 + 8], v11, (ULONG_PTR)&a1[8 * v8 + 8], v12);
          if ( v13 )
            *(_BYTE *)(v13 + 26) |= 1u;
          v14 = *((_QWORD *)v10 + 1);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8);
            *((_QWORD *)v10 + 1) = v15;
            if ( !v15 )
              *((_QWORD *)v10 + 2) = 0LL;
            v16 = ++v10[6];
            if ( v16 > v10[7] )
              v10[7] = v16;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&a1[8 * v8 + 8]);
          KeAbPostRelease((ULONG_PTR)&a1[8 * v8 + 8]);
          if ( v14 )
          {
            result = v14;
            *a2 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFF000uLL) + 8)
                + 4 * ((__int64)(v14 - (v14 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
            return result;
          }
          v7 = dword_14077E03C;
        }
        if ( ++v8 >= v7 )
          v8 = 0;
        ++v9;
      }
      while ( v9 < v7 );
    }
    HandleTableEntrySlow = 1;
    if ( (*((_BYTE *)a1 + 44) & 1) != 0 )
      v19 = 0;
    else
      v19 = KeGetPcr()->Prcb.Number % dword_14077E03C;
    v20 = (int *)&a1[8 * v19 + 8];
    v21 = KeAbPreAcquire((ULONG_PTR)(a1 + 7), 0LL, 0LL, a4);
    v23 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 14, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 7, v21, (ULONG_PTR)(a1 + 7), v22);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    if ( v6 == *(_DWORD *)a1 )
      HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(a1, v20);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 7);
    KeAbPostRelease((ULONG_PTR)(a1 + 7));
  }
  while ( HandleTableEntrySlow );
  return 0LL;
}

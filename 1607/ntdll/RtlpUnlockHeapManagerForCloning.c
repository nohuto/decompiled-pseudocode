/*
 * XREFs of RtlpUnlockHeapManagerForCloning @ 0x1800EAC68
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800E9040 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800E97E8 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpHpHeapUnlock @ 0x18001C4A4 (RtlpHpHeapUnlock.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlpSparseBitmapCtxUnlockExclusive @ 0x18004FF30 (RtlpSparseBitmapCtxUnlockExclusive.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800FCC54 (RtlpHpLfhContextLockUnlock.c)
 */

__int64 __fastcall RtlpUnlockHeapManagerForCloning(int a1, unsigned int a2)
{
  struct _PEB *v2; // r14
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx
  int v7; // edx
  volatile signed __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax

  v2 = NtCurrentPeb();
  if ( a2 )
  {
    v4 = 0LL;
    v5 = a2;
    do
    {
      v6 = (__int64)v2->ProcessHeaps[v4];
      if ( *(_DWORD *)(v6 + 16) == -571548178 )
      {
        if ( (*(_BYTE *)(v6 + 20) & 1) == 0 )
        {
          if ( a1 )
          {
            *(_QWORD *)(v6 + 144) = 1LL;
            v7 = 2;
          }
          else
          {
            v7 = 0;
          }
          RtlpHpLfhContextLockUnlock(v6 + 288, v7 | 1u);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 144));
          RtlpHpHeapUnlock(v6, a1);
        }
      }
      else if ( (*(_BYTE *)(v6 + 112) & 1) == 0 )
      {
        if ( *(_BYTE *)(v6 + 386) == 2 )
          v8 = *(volatile signed __int64 **)(v6 + 376);
        else
          v8 = 0LL;
        if ( v8 )
        {
          if ( a1 )
            *v8 = 1LL;
          RtlReleaseSRWLockExclusive(v8);
        }
        if ( a1 )
        {
          v9 = *(_QWORD *)(v6 + 352);
          *(_WORD *)(v6 + 384) = 0;
          *(_QWORD *)(v9 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
          *(_DWORD *)(v9 + 8) = -2;
          *(_DWORD *)(v9 + 12) = 1;
          *(_QWORD *)(v9 + 24) = 0LL;
        }
        RtlLeaveCriticalSection(*(_QWORD *)(v6 + 352));
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( a1 )
  {
    qword_180150AF0 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
    dword_180150AE8 = -2;
    dword_180150AEC = 1;
    qword_180150AF8 = 0LL;
  }
  v10 = RtlpHpLargeAllocationBitmap[0];
  if ( (_BYTE)a1 )
    v10 = 1LL;
  RtlpHpLargeAllocationBitmap[0] = v10;
  RtlpSparseBitmapCtxUnlockExclusive((__int64)RtlpHpLargeAllocationBitmap, RtlpHpLargeAllocationBitmap);
  return RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
}

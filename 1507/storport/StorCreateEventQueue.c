/*
 * XREFs of StorCreateEventQueue @ 0x1C000F29C
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C000E10C (RaidUnitAllocateResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorCreateEventQueue(_QWORD *a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  char *PoolWithTag; // rax
  char *v7; // rdi
  char *v8; // rbx

  v4 = KeQueryHighestNodeNumber() + 1;
  v5 = v4;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 56LL * v4, 0x51506152u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( v4 )
  {
    v8 = PoolWithTag + 8;
    do
    {
      *(_QWORD *)v8 = v8 - 8;
      *((_QWORD *)v8 - 1) = v8 - 8;
      KeInitializeSpinLock((PKSPIN_LOCK)v8 + 4);
      *((_DWORD *)v8 + 10) = -1;
      if ( a2 )
      {
        *((_QWORD *)v8 + 2) = v8 + 8;
        *((_QWORD *)v8 + 1) = v8 + 8;
        *((_QWORD *)v8 + 3) = 0LL;
      }
      else
      {
        *((_QWORD *)v8 + 1) = 0LL;
      }
      v8 += 56;
      --v5;
    }
    while ( v5 );
  }
  *a1 = v7;
  return 0LL;
}

/*
 * XREFs of AlpcGetMessageFromCompletionList @ 0x180034F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall AlpcGetMessageFromCompletionList(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rbp
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r11
  signed __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rbx

  v4 = (volatile signed __int64 *)(a1 + 320);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 320), a2, a3, a4);
  v7 = *(_QWORD *)(a1 + 64);
  v8 = (unsigned __int64)*(unsigned int *)(a1 + 16) >> 2;
  v9 = a1 + *(unsigned int *)(a1 + 12);
  do
  {
    v10 = v7;
    v11 = v7 & 0xFFFFFF;
    if ( (v7 & 0xFFFFFF) == 0xFFFFFF || v11 >= v8 || (v12 = (v7 >> 24) & 0xFFFFFF, v12 >= v8) )
    {
      v16 = 0LL;
      goto LABEL_13;
    }
    v13 = *(unsigned int *)(v9 + 4 * (v7 & 0xFFFFFF));
    if ( v11 == v12 )
      v14 = v7 | 0xFFFFFFFFFFFFLL;
    else
      v14 = v7 ^ (v7 ^ ((v11 + 1) % v8)) & 0xFFFFFF;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v14, v7);
  }
  while ( v7 != v10 );
  v15 = 0;
  v16 = v13 + a1 + *(unsigned int *)(a1 + 28);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 36) )
    {
      if ( (((_BYTE)v16 + (unsigned __int8)*(_WORD *)(v16 + 2)) & 7) != 0 )
        v15 = 8 - (((_BYTE)v16 + (unsigned __int8)*(_WORD *)(v16 + 2)) & 7);
      *(_QWORD *)a2 = v16 + *(unsigned __int16 *)(v16 + 2) + v15;
    }
    else
    {
      *(_QWORD *)a2 = 0LL;
    }
  }
LABEL_13:
  RtlReleaseSRWLockExclusive(v4);
  return v16;
}

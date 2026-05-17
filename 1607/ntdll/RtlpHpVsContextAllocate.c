/*
 * XREFs of RtlpHpVsContextAllocate @ 0x18001D100
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800431C8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x18001C5A0 (RtlpHpVsChunkSplit.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x18006E608 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x180072104 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // ebp
  unsigned int v7; // esi
  int v8; // r12d
  unsigned int v9; // ebx
  __int64 v10; // r14
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  _QWORD *v18; // rdx
  int v19; // eax
  int v20; // ecx
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v24; // rdi
  _QWORD *v25; // rcx

  v5 = a3;
  if ( a2 != a3 )
    v5 = a3 + 2;
  v7 = (v5 + 15) >> 4;
  v8 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1);
  v9 = (v7 + 1) << 16;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(_QWORD **)(a1 + 8);
    v12 = 0LL;
    if ( v11 )
    {
      while ( 1 )
      {
        v13 = RtlpLFHKey ^ ((_DWORD)v11 - 8) ^ *((_DWORD *)v11 - 2);
        v14 = v9 < v13 ? -1 : v9 > v13;
        if ( !v14 )
          break;
        if ( v14 < 0 )
        {
          v12 = v11;
          v11 = (_QWORD *)*v11;
        }
        else
        {
          v11 = (_QWORD *)v11[1];
        }
        if ( !v11 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      v11 = v12;
    }
    if ( v11 )
      break;
    if ( !v8 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v24 = (_QWORD *)RtlpHpVsSubsegmentCreate(a1, v5, a4);
    if ( !v24 )
      return v10;
    if ( !v8 )
      RtlAcquireSRWLockExclusive(a1);
    v25 = *(_QWORD **)(a1 + 32);
    if ( *v25 != a1 + 24 )
      __fastfail(3u);
    v24[1] = v25;
    *v24 = a1 + 24;
    *v25 = v24;
    *(_QWORD *)(a1 + 32) = v24;
    RtlpHpVsFreeChunkInsert(a1, v24, v24 + 6);
  }
  v15 = (__int64)(v11 - 1);
  v16 = HIDWORD(*(v11 - 1));
  v17 = (unsigned __int64)(v11 - 1) >> 32;
  v18 = v11 - 1;
  v19 = v16 ^ v17 ^ HIDWORD(RtlpLFHKey);
  if ( (v19 & 0xFF0000) != 0 )
  {
    v20 = (unsigned __int8)(RtlpLFHKey ^ v15 ^ *(_BYTE *)(v15 + 8));
  }
  else if ( (_WORD)v19 )
  {
    v18 -= 2 * (unsigned __int16)(v16 ^ v17 ^ WORD2(RtlpLFHKey));
    v20 = (unsigned __int8)(RtlpLFHKey ^ (unsigned __int8)v18 ^ *((_BYTE *)v18 + 8));
  }
  else
  {
    v20 = 0;
  }
  v21 = ((unsigned __int64)v18 - (unsigned int)(v20 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v21 + 34) ^ 0xABED) == *(_WORD *)(v21 + 32) )
  {
    if ( (unsigned int)RtlpHpVsChunkSplit(a1, v21, v15, v7 + 1, a4) )
    {
      v10 = v15 + 16;
      v22 = 16 * ((WORD1(RtlpLFHKey) ^ WORD1(v15) ^ *(unsigned __int16 *)(v15 + 2)) - 1);
      if ( a2 >= (unsigned int)v22 )
      {
        *(_DWORD *)(v15 + 8) &= ~0x100u;
      }
      else
      {
        *(_DWORD *)(v15 + 8) |= 0x100u;
        *(_BYTE *)(v22 + v10 - 1) = 0;
        if ( (_DWORD)v22 - a2 == 1 )
        {
          *(_WORD *)((unsigned int)v22 + v10 - 2) |= 0x8000u;
        }
        else
        {
          *(_WORD *)((unsigned int)v22 + v10 - 2) &= 0xE000u;
          *(_WORD *)((unsigned int)v22 + v10 - 2) |= (v22 - a2) & 0x1FFF;
        }
      }
      if ( !v8 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      if ( (a4 & 2) != 0 )
        memset((void *)(v15 + 16), 0, a2);
      return v10;
    }
  }
  else
  {
    RtlpLogHeapFailure(17, *(_QWORD *)(a1 + 56), v21, v15, 0LL, 0LL);
  }
  if ( !v8 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v10;
}

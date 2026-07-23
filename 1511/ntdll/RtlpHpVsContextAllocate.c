/*
 * XREFs of RtlpHpVsContextAllocate @ 0x18002B090
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x18002A520 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x18002ACD0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsSubsegmentCreate @ 0x180057DFC (RtlpHpVsSubsegmentCreate.c)
 *     RtlpWakeSRWLock @ 0x1800755AC (RtlpWakeSRWLock.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(PRTL_SRWLOCK SRWLock, size_t Size, unsigned int a3, unsigned int a4)
{
  size_t v4; // r13
  unsigned int v6; // r14d
  unsigned int v8; // r15d
  int v9; // ebp
  unsigned int v10; // esi
  _QWORD *Value; // rax
  __int64 v12; // r9
  _QWORD *v13; // r8
  unsigned int v14; // edx
  _RTL_SRWLOCK *v15; // rbx
  PRTL_SRWLOCK *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // r10
  unsigned __int64 v20; // r8
  _QWORD *v21; // rdx
  int v22; // eax
  int v23; // ecx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  signed __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  signed __int64 v29; // rtt

  v4 = (unsigned int)Size;
  v6 = a3;
  if ( (_DWORD)Size != a3 )
    v6 = a3 + 2;
  v8 = (v6 + 15) >> 4;
  v9 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(SRWLock);
  v10 = (v8 + 1) << 16;
  while ( 1 )
  {
    Value = (_QWORD *)SRWLock[1].Value;
    v12 = RtlpLFHKey;
    v13 = 0LL;
    while ( Value )
    {
      v14 = RtlpLFHKey ^ ((_DWORD)Value - 8) ^ *((_DWORD *)Value - 2);
      if ( v10 < v14 )
      {
        v13 = Value;
        Value = (_QWORD *)*Value;
      }
      else
      {
        if ( v10 <= v14 )
          goto LABEL_13;
        Value = (_QWORD *)Value[1];
      }
    }
    Value = v13;
LABEL_13:
    if ( Value )
      break;
    if ( !v9 )
      RtlReleaseSRWLockExclusive(SRWLock);
    v15 = (_RTL_SRWLOCK *)RtlpHpVsSubsegmentCreate(SRWLock, v6, a4, v12);
    if ( !v15 )
      return 0LL;
    if ( !v9 )
      RtlAcquireSRWLockExclusive(SRWLock);
    v16 = (PRTL_SRWLOCK *)SRWLock[4].Value;
    v15->Value = (unsigned __int64)&SRWLock[3];
    v15[1].Value = (unsigned __int64)v16;
    if ( *v16 != &SRWLock[3] )
      __fastfail(3u);
    *v16 = v15;
    SRWLock[4].Value = (unsigned __int64)v15;
    RtlpHpVsFreeChunkInsert(SRWLock, (__int64)v15, (__int64)&v15[6]);
  }
  v18 = (__int64)(Value - 1);
  v19 = HIDWORD(*(Value - 1));
  v20 = (unsigned __int64)(Value - 1) >> 32;
  v21 = Value - 1;
  v22 = v19 ^ v20 ^ HIDWORD(RtlpLFHKey);
  if ( (v22 & 0xFF0000) != 0 )
  {
    v23 = (unsigned __int8)(RtlpLFHKey ^ v18 ^ *(_BYTE *)(v18 + 8));
  }
  else if ( (_WORD)v22 )
  {
    v21 -= 2 * (unsigned __int16)(v19 ^ v20 ^ WORD2(RtlpLFHKey));
    v23 = (unsigned __int8)(RtlpLFHKey ^ (unsigned __int8)v21 ^ *((_BYTE *)v21 + 8));
  }
  else
  {
    v23 = 0;
  }
  v24 = ((unsigned __int64)v21 - (unsigned int)(v23 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v24 + 34) ^ 0xABED) != *(_WORD *)(v24 + 32) )
  {
    RtlpLogHeapFailure(17, SRWLock[7].Value, v24, v18, 0LL, 0LL);
    goto LABEL_31;
  }
  if ( !(unsigned int)RtlpHpVsChunkSplit(SRWLock, v24, v18, v8 + 1, a4) )
  {
LABEL_31:
    v17 = 0LL;
    if ( !v9 )
      RtlReleaseSRWLockExclusive(SRWLock);
    return v17;
  }
  v17 = v18 + 16;
  v25 = 16 * ((WORD1(RtlpLFHKey) ^ WORD1(v18) ^ *(unsigned __int16 *)(v18 + 2)) - 1);
  if ( (unsigned int)v4 >= (unsigned int)v25 )
  {
    *(_DWORD *)(v18 + 8) &= ~0x100u;
  }
  else
  {
    *(_DWORD *)(v18 + 8) |= 0x100u;
    *(_BYTE *)(v25 + v17 - 1) = 0;
    if ( (_DWORD)v25 - (_DWORD)v4 == 1 )
    {
      *(_WORD *)((unsigned int)v25 + v17 - 2) |= 0x8000u;
    }
    else
    {
      *(_WORD *)((unsigned int)v25 + v17 - 2) &= 0xE000u;
      *(_WORD *)((unsigned int)v25 + v17 - 2) |= (v25 - v4) & 0x1FFF;
    }
  }
  if ( !v9 )
  {
    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 1LL);
    if ( v26 != 1 )
    {
      do
      {
        if ( (v26 & 4) != 0 || (v26 & 2) == 0 )
          v27 = -1LL;
        else
          v27 = 3LL;
        v28 = v27 + v26;
        v29 = v26;
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v27 + v26, v26);
      }
      while ( v29 != v26 );
      if ( v27 == 3 )
        RtlpWakeSRWLock(SRWLock, v28, 0LL);
    }
  }
  if ( (a4 & 2) != 0 )
    memset((void *)(v18 + 16), 0, v4);
  return v17;
}

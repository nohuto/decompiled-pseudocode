/*
 * XREFs of RtlpHpVsContextAllocate @ 0x180028D80
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpVsChunkSplit @ 0x180028560 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180028BE0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18006BA8C (RtlpHpVsSubsegmentCreate.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(PRTL_SRWLOCK SRWLock, size_t Size, unsigned int a3, unsigned int a4)
{
  size_t v4; // r13
  unsigned int v6; // r14d
  unsigned int v8; // edi
  int v9; // r15d
  unsigned int v10; // ebp
  _QWORD *Value; // rdx
  _QWORD *v12; // r9
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rdx
  int v20; // eax
  int v21; // ecx
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rcx
  signed __int64 v25; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  signed __int64 v29; // rtt
  _RTL_SRWLOCK *v30; // rbx
  PRTL_SRWLOCK *v31; // rcx

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
    v12 = 0LL;
    if ( Value )
    {
      while ( 1 )
      {
        v13 = RtlpLFHKey ^ ((_DWORD)Value - 8) ^ *((_DWORD *)Value - 2);
        v14 = v10 < v13 ? -1 : v10 > v13;
        if ( !v14 )
          break;
        if ( v14 < 0 )
        {
          v12 = Value;
          Value = (_QWORD *)*Value;
        }
        else
        {
          Value = (_QWORD *)Value[1];
        }
        if ( !Value )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      Value = v12;
    }
    if ( Value )
      break;
    if ( !v9 )
      RtlReleaseSRWLockExclusive(SRWLock);
    v30 = (_RTL_SRWLOCK *)RtlpHpVsSubsegmentCreate(SRWLock, v6, a4, v12);
    if ( !v30 )
      return 0LL;
    if ( !v9 )
      RtlAcquireSRWLockExclusive(SRWLock);
    v31 = (PRTL_SRWLOCK *)SRWLock[4].Value;
    v30->Value = (unsigned __int64)&SRWLock[3];
    v30[1].Value = (unsigned __int64)v31;
    if ( *v31 != &SRWLock[3] )
      __fastfail(3u);
    *v31 = v30;
    SRWLock[4].Value = (unsigned __int64)v30;
    RtlpHpVsFreeChunkInsert((__int64)SRWLock, (__int64)v30, (__int64)&v30[6]);
  }
  v15 = (__int64)(Value - 1);
  v16 = HIDWORD(*(Value - 1));
  v17 = (unsigned __int64)(Value - 1) >> 32;
  v18 = HIDWORD(RtlpLFHKey) ^ ((unsigned __int64)(Value - 1) >> 32);
  v19 = Value - 1;
  v20 = v16 ^ v18;
  if ( (v20 & 0xFF0000) != 0 )
  {
    v21 = (unsigned __int8)(RtlpLFHKey ^ v15 ^ *(_BYTE *)(v15 + 8));
  }
  else if ( (_WORD)v20 )
  {
    v19 -= 2 * (unsigned __int16)(v16 ^ WORD2(RtlpLFHKey) ^ v17);
    v21 = (unsigned __int8)(RtlpLFHKey ^ (unsigned __int8)v19 ^ *((_BYTE *)v19 + 8));
  }
  else
  {
    v21 = 0;
  }
  v22 = ((unsigned __int64)v19 - (unsigned int)(v21 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v22 + 34) ^ 0xABED) == *(_WORD *)(v22 + 32) )
  {
    if ( (unsigned int)RtlpHpVsChunkSplit(SRWLock, v22, v15, v8 + 1, a4) )
    {
      v23 = v15 + 16;
      v24 = 16 * ((WORD1(RtlpLFHKey) ^ WORD1(v15) ^ *(unsigned __int16 *)(v15 + 2)) - 1);
      if ( (unsigned int)v4 >= (unsigned int)v24 )
      {
        *(_DWORD *)(v15 + 8) &= ~0x100u;
      }
      else
      {
        *(_DWORD *)(v15 + 8) |= 0x100u;
        *(_BYTE *)(v24 + v23 - 1) = 0;
        if ( (_DWORD)v24 - (_DWORD)v4 == 1 )
        {
          *(_WORD *)((unsigned int)v24 + v23 - 2) |= 0x8000u;
        }
        else
        {
          *(_WORD *)((unsigned int)v24 + v23 - 2) &= 0xE000u;
          *(_WORD *)((unsigned int)v24 + v23 - 2) |= (v24 - v4) & 0x1FFF;
        }
      }
      if ( !v9 )
      {
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 1LL);
        if ( v25 != 1 )
        {
          do
          {
            if ( (v25 & 6) == 2 )
              v27 = 3LL;
            else
              v27 = -1LL;
            v28 = v27 + v25;
            v29 = v25;
            v25 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v27 + v25, v25);
          }
          while ( v29 != v25 );
          if ( v27 == 3 )
            RtlpWakeSRWLock(SRWLock, v28, 0LL);
        }
      }
      if ( (a4 & 2) != 0 )
        memset((void *)(v15 + 16), 0, v4);
      return v23;
    }
  }
  else
  {
    RtlpLogHeapFailure(17, SRWLock[7].Value, v22, v15, 0LL, 0LL);
  }
  v23 = 0LL;
  if ( !v9 )
    RtlReleaseSRWLockExclusive(SRWLock);
  return v23;
}

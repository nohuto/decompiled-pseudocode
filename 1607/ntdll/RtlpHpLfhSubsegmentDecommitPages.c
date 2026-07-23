/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x18004B96C
 * Callers:
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCA4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004D298 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x180051C2C (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089200 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180041790 (RtlpHpSegLfhVsDecommit.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C390 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(_RTL_SRWLOCK *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  __int64 v5; // rbx
  BOOL v7; // r12d
  int v9; // r14d
  BOOL v10; // edi
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  _WORD *v14; // rcx
  _WORD *i; // rdi
  __int64 v16; // rdi
  char v17; // cl
  unsigned int v18; // r15d
  __int64 (__fastcall *v19)(__int64, __int64, unsigned int); // rax
  unsigned int v20; // ebp
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 Value; // rcx
  BOOL v24; // [rsp+70h] [rbp+18h]
  unsigned int v25; // [rsp+78h] [rbp+20h]

  v25 = a4;
  LODWORD(v5) = a3;
  v7 = a3 < 0;
  v9 = 0;
  v10 = a3 == -2;
  v24 = v10;
  if ( a3 < 0 )
  {
    LODWORD(v5) = 1;
  }
  else if ( !a3 )
  {
    return;
  }
  v11 = *(unsigned __int8 *)(a2 + 45);
  if ( (unsigned int)v5 < v11 )
  {
    while ( 1 )
    {
      v12 = a2 + *(unsigned __int16 *)(a2 + 46);
      v13 = v12 + 2LL * (unsigned __int8)v11;
      v14 = (_WORD *)(v12 + 2LL * (unsigned int)v5);
      if ( *v14 )
      {
        if ( (unsigned __int64)v14 >= v13 )
          goto LABEL_13;
        do
        {
          if ( !*v14 )
            break;
          ++v14;
        }
        while ( (unsigned __int64)v14 < v13 );
        if ( (unsigned __int64)v14 >= v13 )
          goto LABEL_13;
        v5 = (__int64)((__int64)v14 - v12) >> 1;
      }
      else
      {
        do
          --v14;
        while ( !*v14 && (unsigned __int64)v14 > v12 );
        ++v14;
      }
      for ( i = (_WORD *)(v12 + 2 * ((unsigned int)v5 + 1LL)); !*i && (unsigned __int64)i < v13; ++i )
        ;
      v5 = (__int64)((__int64)v14 - v12) >> 1;
      v16 = i - v14;
      if ( (_DWORD)v5 == -1 )
      {
LABEL_12:
        v10 = v24;
LABEL_13:
        if ( v9 )
        {
          if ( !v10 )
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
          if ( (a5 & 1) == 0 )
            RtlReleaseSRWLockShared(a1 + 6);
        }
        return;
      }
      if ( (unsigned int)v16 >= a4 )
      {
        if ( !v9 )
        {
          if ( (a5 & 1) == 0 )
            RtlAcquireSRWLockShared(a1 + 6);
          v10 = v24;
          v9 = 2;
          if ( !v24 )
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
          goto LABEL_34;
        }
        v17 = *(_BYTE *)(a2 + 44);
        v18 = (_DWORD)v5 << v17;
        v19 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[4].Value);
        v20 = (_DWORD)v16 << v17;
        v21 = (_DWORD)v16 << v17;
        v22 = a2 + (unsigned int)((_DWORD)v5 << v17);
        Value = a1->Value;
        if ( v19 == RtlpHpSegLfhVsDecommit )
          RtlpHpSegLfhVsDecommit(Value, v22, v21);
        else
          v19(Value, v22, v20);
        RtlpHpLfhSubsegmentDecBlockCounts(a2, v18, v20);
      }
      if ( !v7 )
        goto LABEL_12;
      LODWORD(v5) = v16 + v5;
      v10 = v24;
LABEL_34:
      v11 = *(unsigned __int8 *)(a2 + 45);
      a4 = v25;
      if ( (unsigned int)v5 >= v11 )
        goto LABEL_13;
    }
  }
}

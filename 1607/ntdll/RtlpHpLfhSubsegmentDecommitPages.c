/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x18004B97C
 * Callers:
 *     RtlpHpFreeHeap @ 0x180047A70 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCB4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004D2A8 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x180051C3C (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089210 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1800417A0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C3A0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  BOOL v7; // r12d
  int v9; // r14d
  BOOL v10; // edi
  unsigned int v11; // eax
  char *v12; // rdx
  unsigned __int64 v13; // r8
  char *v14; // rcx
  char *i; // rdi
  __int64 v16; // rdi
  char v17; // cl
  unsigned int v18; // r15d
  __int64 (__fastcall *v19)(__int64, __int64, unsigned int); // rax
  unsigned int v20; // ebp
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
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
      v12 = (char *)(a2 + *(unsigned __int16 *)(a2 + 46));
      v13 = (unsigned __int64)&v12[2 * (unsigned __int8)v11];
      v14 = &v12[2 * (unsigned int)v5];
      if ( *(_WORD *)v14 )
      {
        if ( (unsigned __int64)v14 >= v13 )
          goto LABEL_13;
        do
        {
          if ( !*(_WORD *)v14 )
            break;
          v14 += 2;
        }
        while ( (unsigned __int64)v14 < v13 );
        if ( (unsigned __int64)v14 >= v13 )
          goto LABEL_13;
        v5 = (v14 - v12) >> 1;
      }
      else
      {
        do
          v14 -= 2;
        while ( !*(_WORD *)v14 && v14 > v12 );
        v14 += 2;
      }
      for ( i = &v12[2 * (unsigned int)v5 + 2]; !*(_WORD *)i && (unsigned __int64)i < v13; i += 2 )
        ;
      v5 = (v14 - v12) >> 1;
      v16 = (i - v14) >> 1;
      if ( (_DWORD)v5 == -1 )
      {
LABEL_12:
        v10 = v24;
LABEL_13:
        if ( v9 )
        {
          if ( !v10 )
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 24));
          if ( (a5 & 1) == 0 )
            RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 48));
        }
        return;
      }
      if ( (unsigned int)v16 >= (unsigned int)a4 )
      {
        if ( !v9 )
        {
          if ( (a5 & 1) == 0 )
            RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 48), v12, v13, a4);
          v10 = v24;
          v9 = 2;
          if ( !v24 )
            RtlAcquireSRWLockExclusive(a2 + 24, v12, v13, a4);
          goto LABEL_34;
        }
        v17 = *(_BYTE *)(a2 + 44);
        v18 = (_DWORD)v5 << v17;
        v19 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 32));
        v20 = (_DWORD)v16 << v17;
        v21 = (_DWORD)v16 << v17;
        v22 = a2 + (unsigned int)((_DWORD)v5 << v17);
        v23 = *(_QWORD *)a1;
        if ( v19 == RtlpHpSegLfhVsDecommit )
          RtlpHpSegLfhVsDecommit(v23, v22, v21);
        else
          v19(v23, v22, v20);
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

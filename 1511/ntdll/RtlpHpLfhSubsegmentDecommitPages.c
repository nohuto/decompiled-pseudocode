/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x18001DA70
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18001A548 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18001D85C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x18004EA78 (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlpHpLfhOwnerCompact @ 0x180050984 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18001B87C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(_RTL_SRWLOCK *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  unsigned int v5; // r11d
  __int64 v6; // r14
  BOOL v7; // r9d
  _RTL_SRWLOCK *v9; // r10
  int v10; // r12d
  BOOL v11; // ebx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  _WORD *v15; // rcx
  _WORD *i; // r15
  __int64 v17; // r15
  char v18; // cl
  unsigned int v19; // ebp
  int v20; // esi
  _RTL_SRWLOCK *v21; // rbx
  BOOL v22; // [rsp+20h] [rbp-48h]
  BOOL v24; // [rsp+80h] [rbp+18h]

  v5 = a4;
  LODWORD(v6) = a3;
  v7 = a3 < 0;
  v24 = v7;
  v9 = a1;
  v10 = 0;
  v11 = a3 == -2;
  v22 = v11;
  if ( a3 >= 0 )
  {
    if ( !a3 )
      return;
  }
  else
  {
    LODWORD(v6) = 1;
  }
  v12 = *(unsigned __int8 *)(a2 + 45);
  if ( (unsigned int)v6 < v12 )
  {
    while ( 1 )
    {
      v13 = a2 + *(unsigned __int16 *)(a2 + 46);
      v14 = v13 + 2LL * (unsigned __int8)v12;
      v15 = (_WORD *)(v13 + 2LL * (unsigned int)v6);
      if ( *v15 )
      {
        if ( (unsigned __int64)v15 >= v14 )
          goto LABEL_33;
        do
        {
          if ( !*v15 )
            break;
          ++v15;
        }
        while ( (unsigned __int64)v15 < v14 );
        if ( (unsigned __int64)v15 >= v14 )
        {
LABEL_33:
          v21 = a1;
LABEL_34:
          if ( v10 )
          {
            if ( !v22 )
              RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
            if ( (a5 & 1) == 0 )
              RtlReleaseSRWLockShared(v21 + 6);
          }
          return;
        }
        v6 = (__int64)((__int64)v15 - v13) >> 1;
      }
      else
      {
        do
          --v15;
        while ( !*v15 && (unsigned __int64)v15 > v13 );
        ++v15;
      }
      for ( i = (_WORD *)(v13 + 2 * ((unsigned int)v6 + 1LL)); !*i && (unsigned __int64)i < v14; ++i )
        ;
      v6 = (__int64)((__int64)v15 - v13) >> 1;
      v17 = i - v15;
      if ( (_DWORD)v6 == -1 )
        goto LABEL_33;
      if ( (unsigned int)v17 < v5 )
        break;
      if ( v10 )
      {
        v18 = *(_BYTE *)(a2 + 44);
        v19 = (_DWORD)v6 << v18;
        v20 = (_DWORD)v17 << v18;
        v21 = a1;
        ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))((unsigned __int64)v9 ^ RtlpHeapKey ^ v9[4].Value))(
          a1->Value,
          a2 + (unsigned int)((_DWORD)v6 << v18),
          (unsigned int)((_DWORD)v17 << v18));
        RtlpHpLfhSubsegmentDecBlockCounts(a2, v19, v20);
        v7 = v24;
        if ( !v24 )
          goto LABEL_34;
        v11 = v22;
LABEL_31:
        LODWORD(v6) = v17 + v6;
        goto LABEL_32;
      }
      if ( (a5 & 1) == 0 )
      {
        RtlAcquireSRWLockShared(v9 + 6);
        v7 = v24;
      }
      v10 = 2;
      if ( !v11 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
        v7 = v24;
      }
LABEL_32:
      v12 = *(unsigned __int8 *)(a2 + 45);
      v5 = a4;
      if ( (unsigned int)v6 >= v12 )
        goto LABEL_33;
      v9 = a1;
    }
    if ( !v7 )
      goto LABEL_33;
    goto LABEL_31;
  }
}

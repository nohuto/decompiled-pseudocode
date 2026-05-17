/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x180102374
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x180102114 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x1801022D8 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x18010233C (RtlpStackDbSegmentComparitor.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r15
  unsigned __int8 *v3; // r8
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rax
  _QWORD *v13; // r14
  char *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // esi
  __int64 v18; // r11
  __int64 v19; // r9
  __int64 v20; // r15
  void (__fastcall *v21)(__int64, __int64, __int64, _QWORD *); // r13
  char v22; // bl
  unsigned __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned __int64 v25; // r10
  _QWORD *v26; // r8
  _QWORD *v27; // r9
  unsigned __int64 v28; // rcx
  char v29; // dl
  __int64 v30; // r8
  __int64 v31; // r11
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v38; // [rsp+50h] [rbp+30h]
  __int64 v39; // [rsp+50h] [rbp+30h]
  __int64 v40; // [rsp+50h] [rbp+30h]
  __int64 v41; // [rsp+50h] [rbp+30h]

  v2 = (unsigned int *)a2;
  v3 = *(unsigned __int8 **)(a2 + 8);
  v4 = 314159LL;
  v5 = 8LL * *(unsigned int *)a2;
  if ( v5 >= 8 )
  {
    v6 = *(unsigned int *)a2;
    v5 = 0LL;
    do
    {
      a2 = v3[5] + 37 * (v3[4] + 37 * (v3[3] + 37 * (v3[2] + 37 * (v3[1] + 37 * (*v3 + 37 * v4)))));
      v7 = v3[6] + 37 * a2;
      v8 = v3[7];
      v3 += 8;
      v4 = v8 + 37 * v7;
      --v6;
    }
    while ( v6 );
  }
  if ( (unsigned __int64)(v5 - 1) <= 6 )
  {
    v5 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        v5 = (unsigned int)(v5 - 1);
        if ( (_DWORD)v5 )
        {
          v5 = (unsigned int)(v5 - 1);
          if ( (_DWORD)v5 )
          {
            v5 = (unsigned int)(v5 - 1);
            if ( (_DWORD)v5 )
            {
              v5 = (unsigned int)(v5 - 1);
              if ( (_DWORD)v5 )
              {
                if ( (_DWORD)v5 != 1 )
                  goto LABEL_19;
                v4 = *v3++ + 37 * v4;
              }
              v4 = *v3++ + 37 * v4;
            }
            v4 = *v3++ + 37 * v4;
          }
          v4 = *v3++ + 37 * v4;
        }
        v4 = *v3++ + 37 * v4;
      }
      v4 = *v3++ + 37 * v4;
    }
    v4 = *v3 + 37 * v4;
  }
LABEL_19:
  RtlAcquireSRWLockShared(&qword_1801506C8, (char *)a2, (__int64)v3, v5);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = -1LL << (dword_1801506A4 & 0x1F);
    v11 = v10 & v4;
    if ( v9 )
      goto LABEL_23;
    if ( !((unsigned int)dword_1801506A4 >> 5) )
      break;
    v38 = v10 & v4;
    v9 = qword_1801506A8
       + 8LL
       * ((37
         * (BYTE6(v38)
          + 37
          * (BYTE5(v38)
           + 37
           * (BYTE4(v38)
            + 37 * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v11 + 11623883)))))))
         + HIBYTE(v38)) & (((unsigned int)dword_1801506A4 >> 5) - 1));
LABEL_23:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v11 == (v10 & *(_QWORD *)(v9 + 8)) )
        goto LABEL_27;
    }
    v9 = 0LL;
LABEL_27:
    if ( !v9 )
      goto LABEL_35;
    if ( RtlpStackDbSegmentComparitor(v9, v2) )
      goto LABEL_31;
  }
  v9 = 0LL;
LABEL_31:
  if ( v9 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v9 + 16)) )
      v9 = 0LL;
    RtlReleaseSRWLockShared(&qword_1801506C8);
    return v9;
  }
LABEL_35:
  RtlReleaseSRWLockShared(&qword_1801506C8);
  v12 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1801506D0)(8 * *v2 + 24, qword_1801506E0);
  v13 = (_QWORD *)v12;
  if ( !v12 )
    return 0LL;
  *(_QWORD *)v12 = 0LL;
  *(_QWORD *)(v12 + 8) = 0LL;
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_DWORD *)(v12 + 16) &= 0xFF000001;
  *(_DWORD *)(v12 + 16) |= 1u;
  *(_BYTE *)(v12 + 19) = *(_BYTE *)v2;
  *(_QWORD *)(v12 + 8) = v4;
  memmove((void *)(v12 + 24), *((const void **)v2 + 1), 8LL * *v2);
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_1801506C8, v14, v15, v16);
  v9 = 0LL;
  while ( 1 )
  {
    v17 = dword_1801506A4;
    v18 = -1LL << (dword_1801506A4 & 0x1F);
    v19 = v4 & v18;
    if ( v9 )
      goto LABEL_41;
    if ( !((unsigned int)dword_1801506A4 >> 5) )
      break;
    v39 = v4 & v18;
    v9 = qword_1801506A8
       + 8LL
       * ((37
         * (BYTE6(v39)
          + 37
          * (BYTE5(v39)
           + 37
           * (BYTE4(v39)
            + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v19 + 11623883)))))))
         + HIBYTE(v39)) & (((unsigned int)dword_1801506A4 >> 5) - 1));
LABEL_41:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v19 == (v18 & *(_QWORD *)(v9 + 8)) )
        goto LABEL_45;
    }
    v9 = 0LL;
LABEL_45:
    if ( !v9 )
      goto LABEL_52;
    if ( RtlpStackDbSegmentComparitor(v9, v2) )
    {
      v17 = dword_1801506A4;
      goto LABEL_49;
    }
  }
  v9 = 0LL;
LABEL_49:
  if ( v9 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v9 + 16)) )
      v9 = 0LL;
    goto LABEL_75;
  }
LABEL_52:
  v20 = qword_1801506E0;
  v21 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD *))qword_1801506D8;
  if ( RtlpHpStackDbContext < 2 * (v17 >> 5) )
    goto LABEL_74;
  v22 = -1;
  v23 = 2 * ((unsigned __int64)v17 >> 5);
  if ( v23 > 0xFFFFFFFF )
    goto LABEL_74;
  v24 = (unsigned int)v23;
  if ( (unsigned int)v23 < 4 )
    v24 = 4LL;
  v9 = 0LL;
  v25 = ((__int64 (__fastcall *)(__int64, __int64))qword_1801506D0)(8LL * (unsigned int)v24, qword_1801506E0);
  if ( v25 )
  {
    if ( (((_DWORD)v24 - 1) & (unsigned int)v24) != 0 )
    {
      for ( ; (_DWORD)v24; LODWORD(v24) = (unsigned int)v24 >> 1 )
        ++v22;
      v24 = (unsigned int)(1 << v22);
    }
    v26 = (_QWORD *)v25;
    v27 = 0LL;
    if ( (unsigned int)v24 > 0x4000000 )
      v24 = 0x4000000LL;
    v28 = (unsigned __int64)(8 * v24 + 7) >> 3;
    if ( v25 > v25 + 8 * v24 )
      v28 = 0LL;
    if ( v28 )
    {
      do
      {
        v27 = (_QWORD *)((char *)v27 + 1);
        *v26++ = (char *)&RtlpHpStackDbContext + 1;
      }
      while ( (unsigned __int64)v27 < v28 );
    }
    v29 = dword_1801506A4;
    v30 = 0LL;
    v31 = -1LL << (dword_1801506A4 & 0x1F);
    if ( (dword_1801506A4 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v32 = qword_1801506A8;
        while ( 1 )
        {
          v27 = *(_QWORD **)(v32 + 8LL * (unsigned int)v30);
          if ( ((unsigned __int8)v27 & 1) != 0 )
            break;
          *(_QWORD *)(v32 + 8LL * (unsigned int)v30) = *v27;
          v40 = v31 & v27[1];
          v33 = (37
               * (BYTE6(v40)
                + 37
                * (BYTE5(v40)
                 + 37
                 * (BYTE4(v40)
                  + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
               + HIBYTE(v40)) & (unsigned int)(v24 - 1);
          *v27 = *(_QWORD *)(v25 + 8 * v33);
          *(_QWORD *)(v25 + 8 * v33) = v27;
        }
        v29 = dword_1801506A4;
        v30 = (unsigned int)(v30 + 1);
      }
      while ( (unsigned int)v30 < (unsigned int)dword_1801506A4 >> 5 );
    }
    v34 = qword_1801506A8;
    v17 = v29 & 0x1F | (32 * v24);
    qword_1801506A8 = v25;
    dword_1801506A4 = v17;
    if ( v34 )
    {
      v21(v34, v20, v30, v27);
      v17 = dword_1801506A4;
    }
    goto LABEL_74;
  }
  v17 = dword_1801506A4;
  if ( (dword_1801506A4 & 0xFFFFFFE0) != 0 )
  {
LABEL_74:
    v9 = (__int64)v13;
    v41 = v13[1] & (-1LL << (v17 & 0x1F));
    v35 = qword_1801506A8;
    v36 = (37
         * (BYTE6(v41)
          + 37
          * (BYTE5(v41)
           + 37
           * (BYTE4(v41)
            + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
         + HIBYTE(v41)) & ((v17 >> 5) - 1);
    *v13 = *(_QWORD *)(qword_1801506A8 + 8 * v36);
    *(_QWORD *)(v35 + 8 * v36) = v13;
    ++RtlpHpStackDbContext;
    v13 = 0LL;
  }
LABEL_75:
  RtlReleaseSRWLockExclusive(&qword_1801506C8);
  if ( v13 )
    ((void (__fastcall *)(_QWORD *, __int64))qword_1801506D8)(v13, qword_1801506E0);
  return v9;
}

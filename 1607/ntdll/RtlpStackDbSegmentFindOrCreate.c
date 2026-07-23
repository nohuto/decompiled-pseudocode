/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x1801022B4
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x180102054 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x180102218 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x18010227C (RtlpStackDbSegmentComparitor.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned int *a2)
{
  unsigned __int8 *v3; // r8
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // rax
  _QWORD *v19; // r14
  unsigned int v20; // esi
  __int64 v21; // r11
  __int64 v22; // r9
  __int64 v23; // r15
  void (__fastcall *v24)(__int64, __int64, __int64, _QWORD *); // r13
  char v25; // bl
  unsigned __int64 v26; // rcx
  __int64 v27; // rsi
  unsigned __int64 v28; // r10
  _QWORD *v29; // r8
  _QWORD *v30; // r9
  unsigned __int64 v31; // rcx
  char v32; // dl
  __int64 v33; // r8
  __int64 v34; // r11
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v41; // [rsp+50h] [rbp+30h]
  __int64 v42; // [rsp+50h] [rbp+30h]
  __int64 v43; // [rsp+50h] [rbp+30h]
  __int64 v44; // [rsp+50h] [rbp+30h]

  v3 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v4 = 314159LL;
  v5 = 8LL * *a2;
  if ( v5 >= 8 )
  {
    v6 = *a2;
    v5 = 0LL;
    do
    {
      v7 = v3[6] + 37 * (v3[5] + 37 * (v3[4] + 37 * (v3[3] + 37 * (v3[2] + 37 * (v3[1] + 37 * (*v3 + 37 * v4))))));
      v8 = v3[7];
      v3 += 8;
      v4 = v8 + 37 * v7;
      --v6;
    }
    while ( v6 );
  }
  if ( (unsigned __int64)(v5 - 1) <= 6 )
  {
    v9 = v5 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 != 1 )
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
  RtlAcquireSRWLockShared(&stru_1801506C8);
  v15 = 0LL;
  while ( 1 )
  {
    v16 = -1LL << (dword_1801506A4 & 0x1F);
    v17 = v16 & v4;
    if ( v15 )
      goto LABEL_23;
    if ( !((unsigned int)dword_1801506A4 >> 5) )
      break;
    v41 = v16 & v4;
    v15 = qword_1801506A8
        + 8LL
        * ((37
          * (BYTE6(v41)
           + 37
           * (BYTE5(v41)
            + 37
            * (BYTE4(v41)
             + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v17 + 11623883)))))))
          + HIBYTE(v41)) & (((unsigned int)dword_1801506A4 >> 5) - 1));
LABEL_23:
    while ( 1 )
    {
      v15 = *(_QWORD *)v15;
      if ( (v15 & 1) != 0 )
        break;
      if ( v17 == (v16 & *(_QWORD *)(v15 + 8)) )
        goto LABEL_27;
    }
    v15 = 0LL;
LABEL_27:
    if ( !v15 )
      goto LABEL_35;
    if ( RtlpStackDbSegmentComparitor(v15, a2) )
      goto LABEL_31;
  }
  v15 = 0LL;
LABEL_31:
  if ( v15 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v15 + 16)) )
      v15 = 0LL;
    RtlReleaseSRWLockShared(&stru_1801506C8);
    return v15;
  }
LABEL_35:
  RtlReleaseSRWLockShared(&stru_1801506C8);
  v18 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1801506D0)(8 * *a2 + 24, qword_1801506E0);
  v19 = (_QWORD *)v18;
  if ( !v18 )
    return 0LL;
  *(_QWORD *)v18 = 0LL;
  *(_QWORD *)(v18 + 8) = 0LL;
  *(_QWORD *)(v18 + 16) = 0LL;
  *(_DWORD *)(v18 + 16) &= 0xFF000001;
  *(_DWORD *)(v18 + 16) |= 1u;
  *(_BYTE *)(v18 + 19) = *(_BYTE *)a2;
  *(_QWORD *)(v18 + 8) = v4;
  memmove((void *)(v18 + 24), *((const void **)a2 + 1), 8LL * *a2);
  RtlAcquireSRWLockExclusive(&stru_1801506C8);
  v15 = 0LL;
  while ( 1 )
  {
    v20 = dword_1801506A4;
    v21 = -1LL << (dword_1801506A4 & 0x1F);
    v22 = v4 & v21;
    if ( v15 )
      goto LABEL_41;
    if ( !((unsigned int)dword_1801506A4 >> 5) )
      break;
    v42 = v4 & v21;
    v15 = qword_1801506A8
        + 8LL
        * ((37
          * (BYTE6(v42)
           + 37
           * (BYTE5(v42)
            + 37
            * (BYTE4(v42)
             + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v22 + 11623883)))))))
          + HIBYTE(v42)) & (((unsigned int)dword_1801506A4 >> 5) - 1));
LABEL_41:
    while ( 1 )
    {
      v15 = *(_QWORD *)v15;
      if ( (v15 & 1) != 0 )
        break;
      if ( v22 == (v21 & *(_QWORD *)(v15 + 8)) )
        goto LABEL_45;
    }
    v15 = 0LL;
LABEL_45:
    if ( !v15 )
      goto LABEL_52;
    if ( RtlpStackDbSegmentComparitor(v15, a2) )
    {
      v20 = dword_1801506A4;
      goto LABEL_49;
    }
  }
  v15 = 0LL;
LABEL_49:
  if ( v15 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v15 + 16)) )
      v15 = 0LL;
    goto LABEL_75;
  }
LABEL_52:
  v23 = qword_1801506E0;
  v24 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD *))qword_1801506D8;
  if ( RtlpHpStackDbContext < 2 * (v20 >> 5) )
    goto LABEL_74;
  v25 = -1;
  v26 = 2 * ((unsigned __int64)v20 >> 5);
  if ( v26 > 0xFFFFFFFF )
    goto LABEL_74;
  v27 = (unsigned int)v26;
  if ( (unsigned int)v26 < 4 )
    v27 = 4LL;
  v15 = 0LL;
  v28 = ((__int64 (__fastcall *)(__int64, __int64))qword_1801506D0)(8LL * (unsigned int)v27, qword_1801506E0);
  if ( v28 )
  {
    if ( (((_DWORD)v27 - 1) & (unsigned int)v27) != 0 )
    {
      for ( ; (_DWORD)v27; LODWORD(v27) = (unsigned int)v27 >> 1 )
        ++v25;
      v27 = (unsigned int)(1 << v25);
    }
    v29 = (_QWORD *)v28;
    v30 = 0LL;
    if ( (unsigned int)v27 > 0x4000000 )
      v27 = 0x4000000LL;
    v31 = (unsigned __int64)(8 * v27 + 7) >> 3;
    if ( v28 > v28 + 8 * v27 )
      v31 = 0LL;
    if ( v31 )
    {
      do
      {
        v30 = (_QWORD *)((char *)v30 + 1);
        *v29++ = (char *)&RtlpHpStackDbContext + 1;
      }
      while ( (unsigned __int64)v30 < v31 );
    }
    v32 = dword_1801506A4;
    v33 = 0LL;
    v34 = -1LL << (dword_1801506A4 & 0x1F);
    if ( (dword_1801506A4 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v35 = qword_1801506A8;
        while ( 1 )
        {
          v30 = *(_QWORD **)(v35 + 8LL * (unsigned int)v33);
          if ( ((unsigned __int8)v30 & 1) != 0 )
            break;
          *(_QWORD *)(v35 + 8LL * (unsigned int)v33) = *v30;
          v43 = v34 & v30[1];
          v36 = (37
               * (BYTE6(v43)
                + 37
                * (BYTE5(v43)
                 + 37
                 * (BYTE4(v43)
                  + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
               + HIBYTE(v43)) & (unsigned int)(v27 - 1);
          *v30 = *(_QWORD *)(v28 + 8 * v36);
          *(_QWORD *)(v28 + 8 * v36) = v30;
        }
        v32 = dword_1801506A4;
        v33 = (unsigned int)(v33 + 1);
      }
      while ( (unsigned int)v33 < (unsigned int)dword_1801506A4 >> 5 );
    }
    v37 = qword_1801506A8;
    v20 = v32 & 0x1F | (32 * v27);
    qword_1801506A8 = v28;
    dword_1801506A4 = v20;
    if ( v37 )
    {
      v24(v37, v23, v33, v30);
      v20 = dword_1801506A4;
    }
    goto LABEL_74;
  }
  v20 = dword_1801506A4;
  if ( (dword_1801506A4 & 0xFFFFFFE0) != 0 )
  {
LABEL_74:
    v15 = (__int64)v19;
    v44 = v19[1] & (-1LL << (v20 & 0x1F));
    v38 = qword_1801506A8;
    v39 = (37
         * (BYTE6(v44)
          + 37
          * (BYTE5(v44)
           + 37
           * (BYTE4(v44)
            + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v44 + 11623883)))))))
         + HIBYTE(v44)) & ((v20 >> 5) - 1);
    *v19 = *(_QWORD *)(qword_1801506A8 + 8 * v39);
    *(_QWORD *)(v38 + 8 * v39) = v19;
    ++RtlpHpStackDbContext;
    v19 = 0LL;
  }
LABEL_75:
  RtlReleaseSRWLockExclusive(&stru_1801506C8);
  if ( v19 )
    ((void (__fastcall *)(_QWORD *, __int64))qword_1801506D8)(v19, qword_1801506E0);
  return v15;
}

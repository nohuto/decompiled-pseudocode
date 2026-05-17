/*
 * XREFs of RtlStackDbStackAdd @ 0x1801018D4
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x1801020A0 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x180102114 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x1801022D8 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x180102B90 (RtlpStackDbStackComparitor.c)
 */

_QWORD *__fastcall RtlStackDbStackAdd(__int64 a1, char *a2, unsigned int a3)
{
  unsigned __int8 *v3; // r9
  __int64 v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rcx
  char *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r15
  unsigned int v17; // esi
  __int64 v18; // r11
  __int64 v19; // r9
  __int64 v20; // r12
  void (__fastcall *v21)(__int64, __int64, __int64, _QWORD *, unsigned int, char *); // r13
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
  __int64 v37; // rcx
  unsigned int v39; // [rsp+20h] [rbp-10h] BYREF
  char *v40; // [rsp+28h] [rbp-8h]
  __int64 v41; // [rsp+60h] [rbp+30h]
  __int64 v42; // [rsp+60h] [rbp+30h]
  __int64 v43; // [rsp+60h] [rbp+30h]
  __int64 v44; // [rsp+60h] [rbp+30h]

  v3 = (unsigned __int8 *)a2;
  if ( !a3 || !a2 )
    return 0LL;
  v39 = a3;
  v4 = 314159LL;
  v5 = 8LL * a3;
  v40 = a2;
  if ( v5 >= 8 )
  {
    v6 = (unsigned __int64)v5 >> 3;
    v5 -= 8 * ((unsigned __int64)v5 >> 3);
    do
    {
      a2 = (char *)(v3[5] + 37 * (v3[4] + 37 * (v3[3] + 37 * (v3[2] + 37 * (v3[1] + 37 * (*v3 + 37 * v4))))));
      v7 = v3[6] + 37LL * (_QWORD)a2;
      v8 = v3[7];
      v3 += 8;
      v4 = v8 + 37 * v7;
      --v6;
    }
    while ( v6 );
  }
  if ( (unsigned __int64)(v5 - 1) > 6 )
    goto LABEL_21;
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
    goto LABEL_20;
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
LABEL_19:
    v4 = *v3++ + 37 * v4;
LABEL_20:
    v4 = *v3 + 37 * v4;
    goto LABEL_21;
  }
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
LABEL_18:
    v4 = *v3++ + 37 * v4;
    goto LABEL_19;
  }
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
LABEL_17:
    v4 = *v3++ + 37 * v4;
    goto LABEL_18;
  }
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
LABEL_16:
    v4 = *v3++ + 37 * v4;
    goto LABEL_17;
  }
  v5 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5 )
  {
LABEL_15:
    v4 = *v3++ + 37 * v4;
    goto LABEL_16;
  }
  if ( (_DWORD)v5 == 1 )
  {
    v4 = *v3++ + 37 * v4;
    goto LABEL_15;
  }
LABEL_21:
  RtlAcquireSRWLockShared(&qword_1801506C0, a2, v5, (__int64)v3);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = -1LL << (dword_1801506B4 & 0x1F);
    v11 = v10 & v4;
    if ( v9 )
      goto LABEL_25;
    if ( !((unsigned int)dword_1801506B4 >> 5) )
      break;
    v41 = v10 & v4;
    v9 = qword_1801506B8
       + 8LL
       * ((37
         * (BYTE6(v41)
          + 37
          * (BYTE5(v41)
           + 37
           * (BYTE4(v41)
            + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v11 + 11623883)))))))
         + HIBYTE(v41)) & (((unsigned int)dword_1801506B4 >> 5) - 1));
LABEL_25:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v11 == (v10 & *(_QWORD *)(v9 + 8)) )
        goto LABEL_29;
    }
    v9 = 0LL;
LABEL_29:
    if ( !v9 )
      goto LABEL_37;
    if ( (unsigned int)RtlpStackDbStackComparitor(v9, &v39) )
      goto LABEL_33;
  }
  v9 = 0LL;
LABEL_33:
  if ( !v9 )
  {
LABEL_37:
    RtlReleaseSRWLockShared(&qword_1801506C0);
    v16 = (_QWORD *)RtlpStackDbEntryCreate(v12, &v39, v4);
    if ( v16 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_1801506C0, v13, v14, v15);
      v9 = 0LL;
      while ( 1 )
      {
        v17 = dword_1801506B4;
        v18 = -1LL << (dword_1801506B4 & 0x1F);
        v19 = v4 & v18;
        if ( v9 )
          goto LABEL_42;
        if ( !((unsigned int)dword_1801506B4 >> 5) )
          break;
        v42 = v4 & v18;
        v9 = qword_1801506B8
           + 8LL
           * ((37
             * (BYTE6(v42)
              + 37
              * (BYTE5(v42)
               + 37
               * (BYTE4(v42)
                + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v19 + 11623883)))))))
             + HIBYTE(v42)) & (((unsigned int)dword_1801506B4 >> 5) - 1));
LABEL_42:
        while ( 1 )
        {
          v9 = *(_QWORD *)v9;
          if ( (v9 & 1) != 0 )
            break;
          if ( v19 == (v18 & *(_QWORD *)(v9 + 8)) )
            goto LABEL_46;
        }
        v9 = 0LL;
LABEL_46:
        if ( !v9 )
          goto LABEL_53;
        if ( (unsigned int)RtlpStackDbStackComparitor(v9, &v39) )
        {
          v17 = dword_1801506B4;
          goto LABEL_50;
        }
      }
      v9 = 0LL;
LABEL_50:
      if ( v9 )
      {
        if ( !(unsigned int)RtlpStackDbRefCountIncrement(v9 + 16) )
          v9 = 0LL;
        goto LABEL_78;
      }
LABEL_53:
      v20 = qword_1801506E0;
      v21 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD *, unsigned int, char *))qword_1801506D8;
      if ( dword_1801506B0 >= 2 * (v17 >> 5) )
      {
        v22 = -1;
        v23 = 2 * ((unsigned __int64)v17 >> 5);
        if ( v23 <= 0xFFFFFFFF )
        {
          v24 = (unsigned int)v23;
          if ( (unsigned int)v23 < 4 )
            v24 = 4LL;
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
                *v26++ = (char *)&dword_1801506B0 + 1;
              }
              while ( (unsigned __int64)v27 < v28 );
            }
            v29 = dword_1801506B4;
            v30 = 0LL;
            v31 = -1LL << (dword_1801506B4 & 0x1F);
            if ( (dword_1801506B4 & 0xFFFFFFE0) != 0 )
            {
              do
              {
                v32 = qword_1801506B8;
                while ( 1 )
                {
                  v27 = *(_QWORD **)(v32 + 8LL * (unsigned int)v30);
                  if ( ((unsigned __int8)v27 & 1) != 0 )
                    break;
                  *(_QWORD *)(v32 + 8LL * (unsigned int)v30) = *v27;
                  v43 = v31 & v27[1];
                  v33 = (37
                       * (BYTE6(v43)
                        + 37
                        * (BYTE5(v43)
                         + 37
                         * (BYTE4(v43)
                          + 37
                          * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
                       + HIBYTE(v43)) & (unsigned int)(v24 - 1);
                  *v27 = *(_QWORD *)(v25 + 8 * v33);
                  *(_QWORD *)(v25 + 8 * v33) = v27;
                }
                v29 = dword_1801506B4;
                v30 = (unsigned int)(v30 + 1);
              }
              while ( (unsigned int)v30 < (unsigned int)dword_1801506B4 >> 5 );
            }
            v34 = qword_1801506B8;
            v17 = v29 & 0x1F | (32 * v24);
            qword_1801506B8 = v25;
            dword_1801506B4 = v17;
            if ( v34 )
            {
              v21(v34, v20, v30, v27, v39, v40);
              v17 = dword_1801506B4;
            }
          }
          else
          {
            v17 = dword_1801506B4;
            if ( (dword_1801506B4 & 0xFFFFFFE0) == 0 )
            {
              v9 = 0LL;
LABEL_78:
              RtlReleaseSRWLockExclusive(&qword_1801506C0);
              RtlpStackDbEntryCleanup(v37, v16);
              return (_QWORD *)v9;
            }
          }
        }
      }
      v44 = v16[1] & (-1LL << (v17 & 0x1F));
      v35 = qword_1801506B8;
      v36 = (37
           * (BYTE6(v44)
            + 37
            * (BYTE5(v44)
             + 37
             * (BYTE4(v44)
              + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v44 + 11623883)))))))
           + HIBYTE(v44)) & ((v17 >> 5) - 1);
      *v16 = *(_QWORD *)(qword_1801506B8 + 8 * v36);
      *(_QWORD *)(v35 + 8 * v36) = v16;
      ++dword_1801506B0;
      RtlReleaseSRWLockExclusive(&qword_1801506C0);
      return v16;
    }
    return 0LL;
  }
  if ( !(unsigned int)RtlpStackDbRefCountIncrement(v9 + 16) )
    v9 = 0LL;
  RtlReleaseSRWLockShared(&qword_1801506C0);
  return (_QWORD *)v9;
}

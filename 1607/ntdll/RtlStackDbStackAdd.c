/*
 * XREFs of RtlStackDbStackAdd @ 0x180101814
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x180101FE0 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x180102054 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x180102218 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x180102AD0 (RtlpStackDbStackComparitor.c)
 */

_QWORD *__fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v3; // r9
  __int64 v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // rbx
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // rcx
  _QWORD *v19; // r15
  unsigned int v20; // esi
  __int64 v21; // r11
  __int64 v22; // r9
  __int64 v23; // r12
  void (__fastcall *v24)(__int64, __int64, __int64, _QWORD *, unsigned int, unsigned __int8 *); // r13
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
  __int64 v40; // rcx
  unsigned int v42; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 *v43; // [rsp+28h] [rbp-8h]
  __int64 v44; // [rsp+60h] [rbp+30h]
  __int64 v45; // [rsp+60h] [rbp+30h]
  __int64 v46; // [rsp+60h] [rbp+30h]
  __int64 v47; // [rsp+60h] [rbp+30h]

  v3 = a2;
  if ( !a3 || !a2 )
    return 0LL;
  v42 = a3;
  v4 = 314159LL;
  v5 = 8LL * a3;
  v43 = a2;
  if ( v5 >= 8 )
  {
    v6 = (unsigned __int64)v5 >> 3;
    v5 -= 8 * ((unsigned __int64)v5 >> 3);
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
  if ( (unsigned __int64)(v5 - 1) > 6 )
    goto LABEL_21;
  v9 = v5 - 1;
  if ( !v9 )
    goto LABEL_20;
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_19:
    v4 = *v3++ + 37 * v4;
LABEL_20:
    v4 = *v3 + 37 * v4;
    goto LABEL_21;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_18:
    v4 = *v3++ + 37 * v4;
    goto LABEL_19;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_17:
    v4 = *v3++ + 37 * v4;
    goto LABEL_18;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_16:
    v4 = *v3++ + 37 * v4;
    goto LABEL_17;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_15:
    v4 = *v3++ + 37 * v4;
    goto LABEL_16;
  }
  if ( v14 == 1 )
  {
    v4 = *v3++ + 37 * v4;
    goto LABEL_15;
  }
LABEL_21:
  RtlAcquireSRWLockShared(&stru_1801506C0);
  v15 = 0LL;
  while ( 1 )
  {
    v16 = -1LL << (dword_1801506B4 & 0x1F);
    v17 = v16 & v4;
    if ( v15 )
      goto LABEL_25;
    if ( !((unsigned int)dword_1801506B4 >> 5) )
      break;
    v44 = v16 & v4;
    v15 = qword_1801506B8
        + 8LL
        * ((37
          * (BYTE6(v44)
           + 37
           * (BYTE5(v44)
            + 37
            * (BYTE4(v44)
             + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v17 + 11623883)))))))
          + HIBYTE(v44)) & (((unsigned int)dword_1801506B4 >> 5) - 1));
LABEL_25:
    while ( 1 )
    {
      v15 = *(_QWORD *)v15;
      if ( (v15 & 1) != 0 )
        break;
      if ( v17 == (v16 & *(_QWORD *)(v15 + 8)) )
        goto LABEL_29;
    }
    v15 = 0LL;
LABEL_29:
    if ( !v15 )
      goto LABEL_37;
    if ( (unsigned int)RtlpStackDbStackComparitor(v15, &v42) )
      goto LABEL_33;
  }
  v15 = 0LL;
LABEL_33:
  if ( !v15 )
  {
LABEL_37:
    RtlReleaseSRWLockShared(&stru_1801506C0);
    v19 = (_QWORD *)RtlpStackDbEntryCreate(v18, &v42, v4);
    if ( v19 )
    {
      RtlAcquireSRWLockExclusive(&stru_1801506C0);
      v15 = 0LL;
      while ( 1 )
      {
        v20 = dword_1801506B4;
        v21 = -1LL << (dword_1801506B4 & 0x1F);
        v22 = v4 & v21;
        if ( v15 )
          goto LABEL_42;
        if ( !((unsigned int)dword_1801506B4 >> 5) )
          break;
        v45 = v4 & v21;
        v15 = qword_1801506B8
            + 8LL
            * ((37
              * (BYTE6(v45)
               + 37
               * (BYTE5(v45)
                + 37
                * (BYTE4(v45)
                 + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v22 + 11623883)))))))
              + HIBYTE(v45)) & (((unsigned int)dword_1801506B4 >> 5) - 1));
LABEL_42:
        while ( 1 )
        {
          v15 = *(_QWORD *)v15;
          if ( (v15 & 1) != 0 )
            break;
          if ( v22 == (v21 & *(_QWORD *)(v15 + 8)) )
            goto LABEL_46;
        }
        v15 = 0LL;
LABEL_46:
        if ( !v15 )
          goto LABEL_53;
        if ( (unsigned int)RtlpStackDbStackComparitor(v15, &v42) )
        {
          v20 = dword_1801506B4;
          goto LABEL_50;
        }
      }
      v15 = 0LL;
LABEL_50:
      if ( v15 )
      {
        if ( !(unsigned int)RtlpStackDbRefCountIncrement(v15 + 16) )
          v15 = 0LL;
        goto LABEL_78;
      }
LABEL_53:
      v23 = qword_1801506E0;
      v24 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD *, unsigned int, unsigned __int8 *))qword_1801506D8;
      if ( dword_1801506B0 >= 2 * (v20 >> 5) )
      {
        v25 = -1;
        v26 = 2 * ((unsigned __int64)v20 >> 5);
        if ( v26 <= 0xFFFFFFFF )
        {
          v27 = (unsigned int)v26;
          if ( (unsigned int)v26 < 4 )
            v27 = 4LL;
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
                *v29++ = (char *)&dword_1801506B0 + 1;
              }
              while ( (unsigned __int64)v30 < v31 );
            }
            v32 = dword_1801506B4;
            v33 = 0LL;
            v34 = -1LL << (dword_1801506B4 & 0x1F);
            if ( (dword_1801506B4 & 0xFFFFFFE0) != 0 )
            {
              do
              {
                v35 = qword_1801506B8;
                while ( 1 )
                {
                  v30 = *(_QWORD **)(v35 + 8LL * (unsigned int)v33);
                  if ( ((unsigned __int8)v30 & 1) != 0 )
                    break;
                  *(_QWORD *)(v35 + 8LL * (unsigned int)v33) = *v30;
                  v46 = v34 & v30[1];
                  v36 = (37
                       * (BYTE6(v46)
                        + 37
                        * (BYTE5(v46)
                         + 37
                         * (BYTE4(v46)
                          + 37
                          * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
                       + HIBYTE(v46)) & (unsigned int)(v27 - 1);
                  *v30 = *(_QWORD *)(v28 + 8 * v36);
                  *(_QWORD *)(v28 + 8 * v36) = v30;
                }
                v32 = dword_1801506B4;
                v33 = (unsigned int)(v33 + 1);
              }
              while ( (unsigned int)v33 < (unsigned int)dword_1801506B4 >> 5 );
            }
            v37 = qword_1801506B8;
            v20 = v32 & 0x1F | (32 * v27);
            qword_1801506B8 = v28;
            dword_1801506B4 = v20;
            if ( v37 )
            {
              v24(v37, v23, v33, v30, v42, v43);
              v20 = dword_1801506B4;
            }
          }
          else
          {
            v20 = dword_1801506B4;
            if ( (dword_1801506B4 & 0xFFFFFFE0) == 0 )
            {
              v15 = 0LL;
LABEL_78:
              RtlReleaseSRWLockExclusive(&stru_1801506C0);
              RtlpStackDbEntryCleanup(v40, v19);
              return (_QWORD *)v15;
            }
          }
        }
      }
      v47 = v19[1] & (-1LL << (v20 & 0x1F));
      v38 = qword_1801506B8;
      v39 = (37
           * (BYTE6(v47)
            + 37
            * (BYTE5(v47)
             + 37
             * (BYTE4(v47)
              + 37 * (BYTE3(v47) + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v47 + 11623883)))))))
           + HIBYTE(v47)) & ((v20 >> 5) - 1);
      *v19 = *(_QWORD *)(qword_1801506B8 + 8 * v39);
      *(_QWORD *)(v38 + 8 * v39) = v19;
      ++dword_1801506B0;
      RtlReleaseSRWLockExclusive(&stru_1801506C0);
      return v19;
    }
    return 0LL;
  }
  if ( !(unsigned int)RtlpStackDbRefCountIncrement(v15 + 16) )
    v15 = 0LL;
  RtlReleaseSRWLockShared(&stru_1801506C0);
  return (_QWORD *)v15;
}

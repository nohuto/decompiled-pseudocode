/*
 * XREFs of RtlpHpSegFree @ 0x18002B710
 * Callers:
 *     RtlpHpSegLfhVsFree @ 0x180008A90 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpFreeHeap @ 0x180038098 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlpHpSegLfhVsFree @ 0x180008A90 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180008AA0 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18002752C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpVsChunkDecommit @ 0x1800277E4 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1800279BC (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpVsChunkCoalesce @ 0x180027E80 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180028BE0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeShrink @ 0x180036344 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180037080 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     RtlpLfhBucketUsageUpdate @ 0x180060744 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006199C (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800645A4 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x1800721DC (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800955A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpLogHeapFreeEvent @ 0x1800EF964 (RtlpLogHeapFreeEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F13D0 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, char *a2, __int64 a3)
{
  unsigned int v3; // r15d
  char *v4; // r14
  __int64 v5; // r12
  unsigned __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int64 *v8; // rsi
  _QWORD *v9; // r13
  char *v10; // rdx
  int v11; // eax
  signed __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // ebp
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned __int64 v18; // r10
  int v19; // edx
  __int16 v20; // cx
  char v21; // cl
  __int64 v22; // rdx
  char *v23; // r10
  int v24; // eax
  __int64 v25; // rbp
  __int64 v26; // rcx
  int v27; // r13d
  int v28; // ebp
  int v29; // ecx
  char v31; // cl
  signed __int64 v32; // rbx
  BOOL v33; // r13d
  int v34; // r12d
  unsigned __int64 v35; // rbx
  int EmptyUnits; // eax
  __int64 v37; // r8
  unsigned int v38; // ebp
  int v39; // eax
  unsigned __int64 v40; // rbx
  unsigned int v41; // r13d
  unsigned __int64 v42; // rax
  int v43; // ebp
  __int64 v44; // rdx
  __int64 v45; // rdx
  signed __int64 v46; // r10
  _QWORD *v47; // r11
  unsigned __int64 v48; // rcx
  unsigned __int64 **v49; // rax
  signed __int64 v50; // rax
  __int64 *v51; // r10
  volatile signed __int64 *v52; // r13
  char v53; // dl
  unsigned int v54; // r13d
  __int64 *v55; // r13
  unsigned __int64 **v56; // rax
  char v57; // cl
  __int64 v58; // r9
  __int64 v59; // rdx
  unsigned int v60; // eax
  unsigned __int64 v61; // rcx
  char *v62; // rdx
  __int64 (__fastcall *v63)(__int64, __int64, char); // r13
  __int64 v64; // rax
  signed __int64 v65; // rtt
  __int64 DescriptorValidateSafe; // rax
  bool v67; // zf
  signed __int64 v68; // rax
  unsigned __int16 v69; // [rsp+30h] [rbp-98h]
  int v70; // [rsp+30h] [rbp-98h]
  signed __int64 v71; // [rsp+38h] [rbp-90h]
  unsigned int v72; // [rsp+40h] [rbp-88h] BYREF
  BOOL v73; // [rsp+44h] [rbp-84h]
  __int64 v74; // [rsp+48h] [rbp-80h]
  _QWORD *v75; // [rsp+50h] [rbp-78h]
  unsigned int v76; // [rsp+58h] [rbp-70h]
  unsigned int v77; // [rsp+5Ch] [rbp-6Ch] BYREF
  char *v78; // [rsp+60h] [rbp-68h]
  __int64 v79; // [rsp+68h] [rbp-60h]
  void (__fastcall *v80)(__int64, char *, _QWORD); // [rsp+70h] [rbp-58h]
  unsigned int v83; // [rsp+E0h] [rbp+18h]
  signed __int64 v84; // [rsp+E8h] [rbp+20h]
  unsigned int i; // [rsp+E8h] [rbp+20h]
  unsigned int v86; // [rsp+E8h] [rbp+20h]

  v83 = a3;
  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
    a3 = v83;
    v7 = DescriptorValidateSafe;
    v74 = DescriptorValidateSafe;
  }
  else
  {
    v6 = (unsigned __int64)a2 & 0xFFFFFFFFFFF00000uLL;
    if ( a1
      && (a1 ^ RtlpHeapKey ^ *(_QWORD *)(((unsigned __int64)a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ (((unsigned __int64)a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) != 0xA2E64EADA2E64EADuLL )
    {
      v7 = 0LL;
      v74 = 0LL;
    }
    else
    {
      v7 = v6 + 32LL * (unsigned int)((unsigned __int64)&a2[-v6] >> 12);
      v74 = v7;
    }
  }
  if ( !v7 || (*(_BYTE *)(v7 + 24) & 4) == 0 && v5 )
    goto LABEL_153;
  if ( (*(_BYTE *)(v7 + 24) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v7 + 24) & 0x21) == 0
      && v4 != (char *)((v7 & 0xFFFFFFFFFFF00000uLL)
                      + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)) )
    {
      goto LABEL_153;
    }
  }
  else
  {
    v7 += -32LL * *(unsigned __int8 *)(v7 + 27);
    v74 = v7;
    if ( (*(_BYTE *)(v7 + 24) & 4) == 0 || (*(_BYTE *)(v7 + 24) & 8) == 0 || (*(_BYTE *)(v7 + 24) & 0x21) == 0 )
      goto LABEL_153;
  }
  if ( !v7 )
  {
LABEL_153:
    RtlpLogHeapFailure(9, v5, (_DWORD)v4, 0, 0LL, 0LL);
    return v3;
  }
  v8 = (unsigned __int64 *)((v7 & 0xFFFFFFFFFFF00000uLL)
                          + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
  if ( v4 > (char *)v8 )
  {
    if ( (*(_BYTE *)(v7 + 24) & 1) == 0 )
    {
      v40 = (unsigned __int64)(v4 - 16);
      if ( (*(_WORD *)((v7 & 0xFFFFFFFFFFF00000uLL)
                     + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                     + 0x22) ^ 0xABED) == *(_WORD *)((v7 & 0xFFFFFFFFFFF00000uLL)
                                                   + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                   + 0x20) )
      {
        v41 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v40) ^ *(unsigned __int16 *)(v40 + 2)) - 16;
        v70 = a3 & 1;
        if ( (a3 & 1) == 0 )
          RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v5 + 176), a2, a3, v6);
        if ( ((RtlpLFHKey ^ *(_QWORD *)v40 ^ v40) & 0xFF000000000000LL) != 0 )
        {
          for ( i = 0; ; i = v72 )
          {
            v42 = RtlpHpVsChunkCoalesce(
                    v5 + 176,
                    (v7 & 0xFFFFFFFFFFF00000uLL)
                  + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                    v40,
                    &v72);
            v40 = v42;
            if ( v72 == *(unsigned __int16 *)((v7 & 0xFFFFFFFFFFF00000uLL)
                                            + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                            + 0x20) )
              break;
            if ( v72 <= i
              || !(unsigned int)RtlpHpVsChunkDecommit(
                                  v5 + 176,
                                  (v7 & 0xFFFFFFFFFFF00000uLL)
                                + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                                  v42,
                                  v83) )
            {
              RtlpHpVsFreeChunkInsert(
                v5 + 176,
                (v7 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                (_WORD *)v40);
              v8 = 0LL;
              goto LABEL_74;
            }
          }
          RtlpHpVsSubsegmentCleanup(
            v5 + 176,
            (_QWORD *)((v7 & 0xFFFFFFFFFFF00000uLL)
                     + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)));
LABEL_74:
          if ( !v70 )
            RtlReleaseSRWLockExclusive(v5 + 176);
          if ( v8 )
            ((void (__fastcall *)(_QWORD, unsigned __int64 *, _QWORD))(RtlpHeapKey ^ (v5 + 176) ^ *(_QWORD *)(v5 + 248)))(
              *(_QWORD *)(v5 + 232),
              v8,
              v83);
          v43 = 1;
        }
        else
        {
          RtlpLogHeapFailure(8, *(_QWORD *)(v5 + 232), (_DWORD)v4, (_DWORD)v4 - 16, 0LL, 0LL);
          v43 = 0;
          if ( !v70 )
            RtlReleaseSRWLockExclusive(v5 + 176);
        }
        v3 = v43;
        if ( v43 )
        {
          if ( v41 <= 0x3FF0 )
          {
            v44 = RtlpLfhBucketIndexMap[(unsigned __int64)(v41 + 15) >> 4];
            if ( (*(_QWORD *)(v5 + 288 + 8 * v44 + 192) & 1) != 0 )
              RtlpLfhBucketUsageUpdate(v5 + 288, v44, 0LL);
          }
        }
      }
      else
      {
        RtlpLogHeapFailure(
          17,
          *(_QWORD *)(v5 + 232),
          (v7 & 0xFFF00000) + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
          0,
          0LL,
          0LL);
      }
      goto LABEL_36;
    }
    v9 = (_QWORD *)(v5 + 288);
    v10 = (char *)RtlpLfhBucketIndexMap;
    v11 = RtlpLFHKey ^ *((_DWORD *)v8 + 10) ^ ((unsigned int)v8 >> 12);
    v12 = 0LL;
    v75 = (_QWORD *)(v5 + 288);
    v69 = v11;
    v13 = 3LL;
    if ( !v4 )
      goto LABEL_26;
    v14 = (unsigned __int16)v11;
    v15 = v9[RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v11 + 15) >> 4] + 24];
    v16 = (_DWORD)v4 - HIWORD(v11) - (_DWORD)v8;
    v17 = *(_DWORD *)(v15 + 72);
    if ( v17 )
    {
      v18 = (v16 * (unsigned __int64)v17) >> *(_BYTE *)(v15 + 76);
      v19 = v16 - v18 * v14;
    }
    else
    {
      v31 = *(_BYTE *)(v15 + 76);
      LODWORD(v18) = v16 >> v31;
      v19 = v16 & ((1 << v31) - 1);
    }
    if ( !v19 )
    {
      if ( *(_WORD *)((v7 & 0xFFFFFFFFFFF00000uLL)
                    + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                    + 0x24) < (unsigned __int16)v18 )
        v20 = *(_WORD *)((v7 & 0xFFFFFFFFFFF00000uLL)
                       + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                       + 0x24);
      else
        v20 = v18;
      *(_WORD *)((v7 & 0xFFFFFFFFFFF00000uLL)
               + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
               + 0x24) = v20;
      v6 = (unsigned __int64)&v8[(unsigned __int64)(unsigned int)(2 * v18) >> 6];
      _m_prefetchw((const void *)(v6 + 48));
      if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(v6 + 48), ~(3LL << ((2 * v18) & 0x3F))) >> ((2 * v18) & 0x3F)) & 1) != 0 )
      {
        if ( *(_BYTE *)((v7 & 0xFFFFFFFFFFF00000uLL)
                      + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                      + 0x2D) <= 1u )
          goto LABEL_25;
        v21 = *(_BYTE *)((v7 & 0xFFFFFFFFFFF00000uLL)
                       + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                       + 0x2C);
        v22 = (unsigned int)((_DWORD)v4 - (_DWORD)v8) >> v21;
        v23 = (char *)v8 + *((unsigned __int16 *)v8 + 23);
        v6 = (unsigned __int64)&v23[2 * v22];
        _m_prefetchw((const void *)v6);
        v24 = v14 - 1;
        LODWORD(v25) = -1;
        v10 = (char *)(v6 + 2LL * (((unsigned int)((_DWORD)v4 - (_DWORD)v8 + v24) >> v21) - (unsigned int)v22 + 1));
        if ( v6 >= (unsigned __int64)v10 )
          goto LABEL_25;
        v26 = v6 - (_QWORD)v23;
        do
        {
          if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v6, 0xFFFFu) == 1 && (_DWORD)v25 == -1 )
            v25 = v26 >> 1;
          v6 += 2LL;
          v26 += 2LL;
        }
        while ( v6 < (unsigned __int64)v10 );
        if ( (_DWORD)v25 == -1 )
          goto LABEL_25;
        v33 = (int)v25 < 0;
        v73 = v25 == -2;
        if ( (int)v25 < 0 )
        {
          LODWORD(v25) = 1;
        }
        else if ( !(_DWORD)v25 )
        {
LABEL_25:
          v13 = 3LL;
LABEL_26:
          v27 = *((unsigned __int16 *)v8 + 17);
          LOWORD(v28) = *((_WORD *)v8 + 16);
          while ( v12 || (_WORD)v28 && (unsigned __int16)v28 != v27 - 1 )
          {
LABEL_30:
            v29 = (unsigned __int16)(v28 + 1) - 1;
            v28 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v8 + 16, v28 + 1, v28);
            if ( v28 == v29 )
            {
              if ( (_WORD)v28 )
              {
                if ( (unsigned __int16)v28 != v27 - 1 )
                {
LABEL_33:
                  v3 = 1;
                  goto LABEL_34;
                }
                v45 = 2LL;
              }
              else
              {
                v45 = 0LL;
              }
              switch ( *((_BYTE *)v8 + 38) )
              {
                case 0:
                  v46 = v12 + 24;
                  v13 = v12 + 8;
                  goto LABEL_87;
                case 1:
                  v46 = v12 + 40;
                  v13 = 0LL;
                  goto LABEL_87;
                case 2:
                  v46 = 0LL;
                  v13 = 0LL;
LABEL_87:
                  if ( (_DWORD)v45 )
                  {
                    v6 = 0LL;
                    v47 = 0LL;
                  }
                  else
                  {
                    v6 = v12 + 24;
                    v47 = (_QWORD *)(v12 + 8);
                  }
                  if ( v46 )
                  {
                    v48 = *v8;
                    v49 = (unsigned __int64 **)v8[1];
                    if ( *(unsigned __int64 **)(*v8 + 8) != v8 || *v49 != v8 )
                      __fastfail(3u);
                    *v49 = (unsigned __int64 *)v48;
                    *(_QWORD *)(v48 + 8) = v49;
                    if ( v13 )
                      --*(_QWORD *)v13;
                  }
                  *((_BYTE *)v8 + 38) = v45;
                  if ( v6 )
                  {
                    v56 = *(unsigned __int64 ***)(v6 + 8);
                    *v8 = v6;
                    v8[1] = (unsigned __int64)v56;
                    if ( *v56 != (unsigned __int64 *)v6 )
                      __fastfail(3u);
                    *v56 = v8;
                    *(_QWORD *)(v6 + 8) = v8;
                    if ( v47 )
                      ++*v47;
                    v8 = 0LL;
                  }
                  if ( (*(_BYTE *)v12 & 1) == 0 && *(_QWORD *)(v12 + 8) > 8uLL )
                  {
                    v8 = *(unsigned __int64 **)v6;
                    v64 = **(_QWORD **)v6;
                    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || *(unsigned __int64 **)(v64 + 8) != v8 )
                      __fastfail(3u);
                    *(_QWORD *)v6 = v64;
                    *(_QWORD *)(v64 + 8) = v6;
                    --*v47;
                    *((_BYTE *)v8 + 38) = 2;
                  }
                  if ( v8 && *((_BYTE *)v8 + 38) == 2 )
                    v8[2] = 0LL;
                  break;
              }
              v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 16), 0LL, 1LL);
              if ( v50 != 1 )
              {
                v6 = 3LL;
                do
                {
                  v13 = -1LL;
                  if ( (v50 & 6) == 2 )
                    v13 = 3LL;
                  v45 = v13 + v50;
                  v65 = v50;
                  v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 16), v13 + v50, v50);
                }
                while ( v65 != v50 );
                if ( v13 == 3 )
                  RtlpWakeSRWLock(v12 + 16, v45, 0LL);
              }
              v12 = 0LL;
              if ( v8 )
              {
                v51 = (__int64 *)(v5 + 288);
                v52 = *(volatile signed __int64 **)(v5
                                                  + 288
                                                  + 8LL
                                                  * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)v69 + 15) >> 4]
                                                  + 192);
                if ( *((_WORD *)v8 + 16) != *((_WORD *)v8 + 17) )
                {
                  RtlAcquireSRWLockExclusive(v52 + 2, (char *)v45, v13, v6);
                  RtlpHpLfhSubsegmentSetOwner(v8, v52);
                  if ( *((_WORD *)v8 + 16) == *((_WORD *)v8 + 17) )
                    v8[2] = 0LL;
                  else
                    v8 = (unsigned __int64 *)RtlpHpLfhOwnerMoveSubsegment(v52, v8, 0LL);
                  RtlReleaseSRWLockExclusive(v52 + 2);
                  v51 = (__int64 *)(v5 + 288);
                }
                if ( v8 )
                {
                  v53 = 0;
                  if ( (v83 & 1) != 0 )
                    v53 = 2;
                  _InterlockedDecrement64(v52 + 8);
                  _InterlockedExchangeAdd64(v52 + 7, -*((__int16 *)v8 + 17));
                  if ( (v53 & 2) != 0 )
                    v3 = 1;
                  _BitScanForward(&v54, *((unsigned __int8 *)v8 + 45) << *((_BYTE *)v8 + 44));
                  v55 = &v51[2 * v54 - 14];
                  if ( *(_WORD *)v55 )
                  {
                    v63 = (__int64 (__fastcall *)(__int64, __int64, char))(RtlpHeapKey ^ (unsigned __int64)v51 ^ v51[2]);
                    if ( v63 == RtlpHpSegLfhVsFree )
                      RtlpHpSegLfhVsFree(*v51, (__int64)v8, v3);
                    else
                      v63(*v51, (__int64)v8, v3);
                  }
                  else
                  {
                    RtlpHpLfhSubsegmentDecommitPages((unsigned __int64)v51, (__int64)v8, -2, 1u, v3);
                    RtlpInterlockedPushEntrySList(v55, v8);
                  }
                }
              }
              goto LABEL_33;
            }
            v13 = 3LL;
          }
          v32 = v8[2];
          do
          {
            while ( 1 )
            {
              while ( !v32 )
              {
                v32 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 2, 3LL, 0LL);
                if ( !v32 )
                {
                  v12 = 0LL;
                  goto LABEL_160;
                }
              }
              if ( (v32 & 1) != 0 )
                break;
              v71 = v32;
              v84 = v32 + 16;
              RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v32 + 16), v10, 3LL, v6);
              v32 = v8[2];
              if ( v71 == v32 )
              {
                v12 = v71;
                goto LABEL_51;
              }
              RtlReleaseSRWLockExclusive(v84);
              v13 = 3LL;
            }
            v68 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v8 + 2,
                    v32 & 1 | ((v32 & 0xFFFFFFFFFFFFFFFEuLL) + 2) & 0xFFFFFFFFFFFFFFFEuLL,
                    v32);
            v67 = v32 == v68;
            v32 = v68;
          }
          while ( !v67 );
          v12 = 0LL;
LABEL_51:
          if ( v12 )
            goto LABEL_30;
LABEL_160:
          v3 = 1;
LABEL_34:
          if ( v12 )
            RtlReleaseSRWLockExclusive(v12 + 16);
          goto LABEL_36;
        }
        if ( (unsigned int)v25 < *(unsigned __int8 *)((v7 & 0xFFFFFFFFFFF00000uLL)
                                                    + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                    + 0x2D) )
        {
          v34 = 0;
          v35 = (unsigned __int64)v75;
          do
          {
            EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits((__int64)v8, v25, &v77);
            LODWORD(v75) = EmptyUnits;
            if ( EmptyUnits == -1 )
              break;
            v38 = v77;
            if ( v77 >= 2 )
            {
              if ( v34 )
              {
                v57 = *(_BYTE *)((v7 & 0xFFFFFFFFFFF00000uLL)
                               + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                               + 0x2C);
                v58 = *(_QWORD *)v35;
                v59 = (unsigned int)(EmptyUnits << v57);
                v60 = v77 << v57;
                v61 = v35 ^ *(_QWORD *)(v35 + 32);
                v76 = v59;
                v62 = (char *)v8 + v59;
                v86 = v60;
                v78 = v62;
                v79 = v58;
                v80 = (void (__fastcall *)(__int64, char *, _QWORD))(RtlpHeapKey ^ v61);
                if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(RtlpHeapKey ^ v61) == RtlpHpSegLfhVsDecommit )
                  RtlpHpSegLfhVsDecommit(v58, v62, v60);
                else
                  v80(v79, v78, v60);
                RtlpHpLfhSubsegmentDecBlockCounts(v8, v76, v86);
                if ( !v33 )
                  break;
                LODWORD(v25) = (_DWORD)v75 + v38;
              }
              else
              {
                LODWORD(v25) = EmptyUnits;
                if ( (v83 & 1) == 0 )
                  RtlAcquireSRWLockShared(v35 + 48);
                v34 = 2;
                if ( !v73 )
                  RtlAcquireSRWLockExclusive((volatile signed __int64 *)v8 + 3, v10, v37, v6);
              }
            }
            else
            {
              if ( !v33 )
                break;
              LODWORD(v25) = EmptyUnits + v77;
            }
          }
          while ( (unsigned int)v25 < *(unsigned __int8 *)((v7 & 0xFFFFFFFFFFF00000uLL)
                                                         + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                         + 0x2D) );
          v7 = v74;
          v39 = v34;
          v4 = a2;
          v3 = 0;
          v5 = a1;
          v12 = 0LL;
          if ( v39 )
          {
            if ( !v73 )
              RtlReleaseSRWLockExclusive(v8 + 3);
            if ( (v83 & 1) == 0 )
              RtlReleaseSRWLockShared(a1 + 336);
          }
        }
        goto LABEL_25;
      }
      RtlpLogHeapFailure(
        16,
        *v9,
        (_DWORD)v4,
        (v7 & 0xFFF00000) + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
        (unsigned int)v18,
        0LL);
    }
LABEL_36:
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && v3 )
      RtlpLogHeapFreeEvent(v5, v4, ((*(_BYTE *)(v7 + 24) & 1) == 0) | 2u);
    return v3;
  }
  RtlpHpSegPageRangeShrink(v5, v7, 0LL, (unsigned int)a3);
  v3 = 1;
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(v5, v4, 3LL);
  return v3;
}

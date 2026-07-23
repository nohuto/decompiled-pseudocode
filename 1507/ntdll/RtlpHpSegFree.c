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

__int64 __fastcall RtlpHpSegFree(_RTL_SRWLOCK *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r14
  _RTL_SRWLOCK *v5; // r12
  unsigned __int64 v6; // rdi
  __int64 *v7; // rsi
  unsigned __int64 *v8; // r13
  int v9; // eax
  signed __int64 v10; // rbx
  int v11; // ebp
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned __int64 v15; // r10
  int v16; // edx
  __int16 v17; // cx
  __int64 *v18; // r9
  char v19; // cl
  __int64 v20; // rdx
  char *v21; // r10
  char *v22; // r9
  int v23; // eax
  __int64 v24; // rbp
  char *v25; // rdx
  __int64 v26; // rcx
  int v27; // r13d
  int v28; // ebp
  int v29; // ecx
  char v31; // cl
  signed __int64 v32; // rbx
  BOOL v33; // r13d
  int v34; // r12d
  _RTL_SRWLOCK *v35; // rbx
  int EmptyUnits; // eax
  unsigned int v37; // ebp
  int v38; // eax
  unsigned __int64 v39; // rbx
  unsigned int v40; // r13d
  unsigned __int64 v41; // rax
  int v42; // ebp
  __int64 v43; // rdx
  int v44; // edx
  signed __int64 v45; // r10
  _QWORD *v46; // r8
  __int64 **v47; // r9
  _QWORD *v48; // r11
  __int64 *v49; // rcx
  __int64 **v50; // rax
  signed __int64 v51; // rax
  _RTL_SRWLOCK *v52; // r10
  _RTL_SRWLOCK *Value; // r13
  char v54; // dl
  unsigned int v55; // r13d
  _RTL_SRWLOCK *v56; // r13
  __int64 ***v57; // rax
  char v58; // cl
  unsigned __int64 v59; // r9
  __int64 v60; // rdx
  unsigned int v61; // eax
  unsigned __int64 v62; // rcx
  char *v63; // rdx
  __int64 (__fastcall *v64)(__int64, __int64, char); // r13
  __int64 *v65; // rax
  __int64 v66; // r8
  __int64 v67; // rdx
  signed __int64 v68; // rtt
  __int64 DescriptorValidateSafe; // rax
  bool v70; // zf
  signed __int64 v71; // rax
  unsigned __int16 v72; // [rsp+30h] [rbp-98h]
  int v73; // [rsp+30h] [rbp-98h]
  signed __int64 v74; // [rsp+38h] [rbp-90h]
  unsigned int v75; // [rsp+40h] [rbp-88h] BYREF
  BOOL v76; // [rsp+44h] [rbp-84h]
  unsigned __int64 v77; // [rsp+48h] [rbp-80h]
  _RTL_SRWLOCK *v78; // [rsp+50h] [rbp-78h]
  unsigned int v79; // [rsp+58h] [rbp-70h]
  unsigned int v80; // [rsp+5Ch] [rbp-6Ch] BYREF
  char *v81; // [rsp+60h] [rbp-68h]
  unsigned __int64 v82; // [rsp+68h] [rbp-60h]
  void (__fastcall *v83)(unsigned __int64, char *, _QWORD); // [rsp+70h] [rbp-58h]
  unsigned int v86; // [rsp+E0h] [rbp+18h]
  _RTL_SRWLOCK *SRWLock; // [rsp+E8h] [rbp+20h]
  unsigned int SRWLocka; // [rsp+E8h] [rbp+20h]
  unsigned int SRWLockb; // [rsp+E8h] [rbp+20h]

  v86 = a3;
  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
    a3 = v86;
    v6 = DescriptorValidateSafe;
    v77 = DescriptorValidateSafe;
  }
  else if ( a1
         && ((unsigned __int64)a1 ^ RtlpHeapKey ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) != 0xA2E64EADA2E64EADuLL )
  {
    v6 = 0LL;
    v77 = 0LL;
  }
  else
  {
    v6 = (a2 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
    v77 = v6;
  }
  if ( !v6 || (*(_BYTE *)(v6 + 24) & 4) == 0 && v5 )
    goto LABEL_151;
  if ( (*(_BYTE *)(v6 + 24) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v6 + 24) & 0x21) == 0
      && v4 != (v6 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
    {
      goto LABEL_151;
    }
  }
  else
  {
    v6 += -32LL * *(unsigned __int8 *)(v6 + 27);
    v77 = v6;
    if ( (*(_BYTE *)(v6 + 24) & 4) == 0 || (*(_BYTE *)(v6 + 24) & 8) == 0 || (*(_BYTE *)(v6 + 24) & 0x21) == 0 )
      goto LABEL_151;
  }
  if ( !v6 )
  {
LABEL_151:
    RtlpLogHeapFailure(9, (_DWORD)v5, v4, 0, 0LL, 0LL);
    return v3;
  }
  v7 = (__int64 *)((v6 & 0xFFFFFFFFFFF00000uLL)
                 + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
  if ( v4 > (unsigned __int64)v7 )
  {
    if ( (*(_BYTE *)(v6 + 24) & 1) == 0 )
    {
      v39 = v4 - 16;
      if ( (*(_WORD *)((v6 & 0xFFFFFFFFFFF00000uLL)
                     + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                     + 0x22) ^ 0xABED) == *(_WORD *)((v6 & 0xFFFFFFFFFFF00000uLL)
                                                   + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                   + 0x20) )
      {
        v40 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v39) ^ *(unsigned __int16 *)(v39 + 2)) - 16;
        v73 = a3 & 1;
        if ( (a3 & 1) == 0 )
          RtlAcquireSRWLockExclusive(v5 + 22);
        if ( ((RtlpLFHKey ^ *(_QWORD *)v39 ^ v39) & 0xFF000000000000LL) != 0 )
        {
          for ( SRWLocka = 0; ; SRWLocka = v75 )
          {
            v41 = RtlpHpVsChunkCoalesce(
                    (__int64)&v5[22],
                    (v6 & 0xFFFFFFFFFFF00000uLL)
                  + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                    v39,
                    &v75);
            v39 = v41;
            if ( v75 == *(unsigned __int16 *)((v6 & 0xFFFFFFFFFFF00000uLL)
                                            + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                            + 0x20) )
              break;
            if ( v75 <= SRWLocka
              || !(unsigned int)RtlpHpVsChunkDecommit(
                                  v5 + 22,
                                  (v6 & 0xFFFFFFFFFFF00000uLL)
                                + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                                  v41,
                                  v86) )
            {
              RtlpHpVsFreeChunkInsert(
                (__int64)&v5[22],
                (v6 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                v39);
              v7 = 0LL;
              goto LABEL_73;
            }
          }
          RtlpHpVsSubsegmentCleanup(
            (__int64)&v5[22],
            (_QWORD *)((v6 & 0xFFFFFFFFFFF00000uLL)
                     + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)));
LABEL_73:
          if ( !v73 )
            RtlReleaseSRWLockExclusive(v5 + 22);
          if ( v7 )
            ((void (__fastcall *)(unsigned __int64, __int64 *, _QWORD))(RtlpHeapKey ^ (unsigned __int64)&v5[22] ^ v5[31].Value))(
              v5[29].Value,
              v7,
              v86);
          v42 = 1;
        }
        else
        {
          RtlpLogHeapFailure(8, v5[29].Value, v4, v4 - 16, 0LL, 0LL);
          v42 = 0;
          if ( !v73 )
            RtlReleaseSRWLockExclusive(v5 + 22);
        }
        v3 = v42;
        if ( v42 )
        {
          if ( v40 <= 0x3FF0 )
          {
            v43 = RtlpLfhBucketIndexMap[(unsigned __int64)(v40 + 15) >> 4];
            if ( (v5[v43 + 60].Value & 1) != 0 )
              RtlpLfhBucketUsageUpdate(&v5[36], v43, 0LL);
          }
        }
      }
      else
      {
        RtlpLogHeapFailure(
          17,
          v5[29].Value,
          (v6 & 0xFFF00000) + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
          0,
          0LL,
          0LL);
      }
      goto LABEL_35;
    }
    v8 = (unsigned __int64 *)&v5[36];
    v9 = RtlpLFHKey ^ *((_DWORD *)v7 + 10) ^ ((unsigned int)v7 >> 12);
    v10 = 0LL;
    v78 = v5 + 36;
    v72 = v9;
    if ( !v4 )
      goto LABEL_25;
    v11 = (unsigned __int16)v9;
    v12 = v8[RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v9 + 15) >> 4] + 24];
    v13 = v4 - HIWORD(v9) - (_DWORD)v7;
    v14 = *(_DWORD *)(v12 + 72);
    if ( v14 )
    {
      v15 = (v13 * (unsigned __int64)v14) >> *(_BYTE *)(v12 + 76);
      v16 = v13 - v15 * v11;
    }
    else
    {
      v31 = *(_BYTE *)(v12 + 76);
      LODWORD(v15) = v13 >> v31;
      v16 = v13 & ((1 << v31) - 1);
    }
    if ( !v16 )
    {
      if ( *(_WORD *)((v6 & 0xFFFFFFFFFFF00000uLL)
                    + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                    + 0x24) < (unsigned __int16)v15 )
        v17 = *(_WORD *)((v6 & 0xFFFFFFFFFFF00000uLL)
                       + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                       + 0x24);
      else
        v17 = v15;
      *(_WORD *)((v6 & 0xFFFFFFFFFFF00000uLL)
               + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
               + 0x24) = v17;
      v18 = &v7[(unsigned __int64)(unsigned int)(2 * v15) >> 6];
      _m_prefetchw(v18 + 6);
      if ( (((unsigned __int64)_InterlockedAnd64(v18 + 6, ~(3LL << ((2 * v15) & 0x3F))) >> ((2 * v15) & 0x3F)) & 1) != 0 )
      {
        if ( *(_BYTE *)((v6 & 0xFFFFFFFFFFF00000uLL)
                      + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                      + 0x2D) <= 1u )
          goto LABEL_25;
        v19 = *(_BYTE *)((v6 & 0xFFFFFFFFFFF00000uLL)
                       + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                       + 0x2C);
        v20 = (unsigned int)(v4 - (_DWORD)v7) >> v19;
        v21 = (char *)v7 + *((unsigned __int16 *)v7 + 23);
        v22 = &v21[2 * v20];
        _m_prefetchw(v22);
        v23 = v11 - 1;
        LODWORD(v24) = -1;
        v25 = &v22[2 * (((unsigned int)(v4 - (_DWORD)v7 + v23) >> v19) - (unsigned int)v20) + 2];
        if ( v22 >= v25 )
          goto LABEL_25;
        v26 = v22 - v21;
        do
        {
          if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v22, 0xFFFFu) == 1 && (_DWORD)v24 == -1 )
            v24 = v26 >> 1;
          v22 += 2;
          v26 += 2LL;
        }
        while ( v22 < v25 );
        if ( (_DWORD)v24 == -1 )
        {
LABEL_25:
          v27 = *((unsigned __int16 *)v7 + 17);
          LOWORD(v28) = *((_WORD *)v7 + 16);
          while ( v10 || (_WORD)v28 && (unsigned __int16)v28 != v27 - 1 )
          {
LABEL_29:
            v29 = (unsigned __int16)(v28 + 1) - 1;
            v28 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v7 + 16, v28 + 1, v28);
            if ( v28 == v29 )
            {
              if ( (_WORD)v28 )
              {
                if ( (unsigned __int16)v28 != v27 - 1 )
                {
LABEL_32:
                  v3 = 1;
                  goto LABEL_33;
                }
                v44 = 2;
              }
              else
              {
                v44 = 0;
              }
              switch ( *((_BYTE *)v7 + 38) )
              {
                case 0:
                  v45 = v10 + 24;
                  v46 = (_QWORD *)(v10 + 8);
                  goto LABEL_86;
                case 1:
                  v45 = v10 + 40;
                  v46 = 0LL;
                  goto LABEL_86;
                case 2:
                  v45 = 0LL;
                  v46 = 0LL;
LABEL_86:
                  if ( v44 )
                  {
                    v47 = 0LL;
                    v48 = 0LL;
                  }
                  else
                  {
                    v47 = (__int64 **)(v10 + 24);
                    v48 = (_QWORD *)(v10 + 8);
                  }
                  if ( v45 )
                  {
                    v49 = (__int64 *)*v7;
                    v50 = (__int64 **)v7[1];
                    if ( *(__int64 **)(*v7 + 8) != v7 || *v50 != v7 )
                      __fastfail(3u);
                    *v50 = v49;
                    v49[1] = (__int64)v50;
                    if ( v46 )
                      --*v46;
                  }
                  *((_BYTE *)v7 + 38) = v44;
                  if ( v47 )
                  {
                    v57 = (__int64 ***)v47[1];
                    *v7 = (__int64)v47;
                    v7[1] = (__int64)v57;
                    if ( *v57 != v47 )
                      __fastfail(3u);
                    *v57 = (__int64 **)v7;
                    v47[1] = v7;
                    if ( v48 )
                      ++*v48;
                    v7 = 0LL;
                  }
                  if ( (*(_BYTE *)v10 & 1) == 0 && *(_QWORD *)(v10 + 8) > 8uLL )
                  {
                    v7 = *v47;
                    v65 = (__int64 *)**v47;
                    if ( (__int64 **)(*v47)[1] != v47 || (__int64 *)v65[1] != v7 )
                      __fastfail(3u);
                    *v47 = v65;
                    v65[1] = (__int64)v47;
                    --*v48;
                    *((_BYTE *)v7 + 38) = 2;
                  }
                  if ( v7 && *((_BYTE *)v7 + 38) == 2 )
                    v7[2] = 0LL;
                  break;
              }
              v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 16), 0LL, 1LL);
              if ( v51 != 1 )
              {
                do
                {
                  v66 = -1LL;
                  if ( (v51 & 6) == 2 )
                    v66 = 3LL;
                  v67 = v66 + v51;
                  v68 = v51;
                  v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 16), v66 + v51, v51);
                }
                while ( v68 != v51 );
                if ( v66 == 3 )
                  RtlpWakeSRWLock(v10 + 16, v67, 0LL);
              }
              v10 = 0LL;
              if ( v7 )
              {
                v52 = v5 + 36;
                Value = (_RTL_SRWLOCK *)v5[RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)v72 + 15) >> 4] + 60].Value;
                if ( *((_WORD *)v7 + 16) != *((_WORD *)v7 + 17) )
                {
                  RtlAcquireSRWLockExclusive(Value + 2);
                  RtlpHpLfhSubsegmentSetOwner(v7, Value);
                  if ( *((_WORD *)v7 + 16) == *((_WORD *)v7 + 17) )
                    v7[2] = 0LL;
                  else
                    v7 = (__int64 *)RtlpHpLfhOwnerMoveSubsegment(Value, v7, 0LL);
                  RtlReleaseSRWLockExclusive(Value + 2);
                  v52 = v5 + 36;
                }
                if ( v7 )
                {
                  v54 = 0;
                  if ( (v86 & 1) != 0 )
                    v54 = 2;
                  _InterlockedDecrement64((volatile signed __int64 *)&Value[8]);
                  _InterlockedExchangeAdd64((volatile signed __int64 *)&Value[7], -*((__int16 *)v7 + 17));
                  if ( (v54 & 2) != 0 )
                    v3 = 1;
                  _BitScanForward(&v55, *((unsigned __int8 *)v7 + 45) << *((_BYTE *)v7 + 44));
                  v56 = &v52[2 * v55 - 14];
                  if ( v56->0 )
                  {
                    v64 = (__int64 (__fastcall *)(__int64, __int64, char))(RtlpHeapKey ^ (unsigned __int64)v52 ^ v52[2].Value);
                    if ( v64 == RtlpHpSegLfhVsFree )
                      RtlpHpSegLfhVsFree(v52->Value, (__int64)v7, v3);
                    else
                      v64(v52->Value, (__int64)v7, v3);
                  }
                  else
                  {
                    RtlpHpLfhSubsegmentDecommitPages(v52, (__int64)v7, -2, 1u, v3);
                    RtlpInterlockedPushEntrySList(v56, v7);
                  }
                }
              }
              goto LABEL_32;
            }
          }
          v32 = v7[2];
          do
          {
            while ( 1 )
            {
              while ( !v32 )
              {
                v32 = _InterlockedCompareExchange64(v7 + 2, 3LL, 0LL);
                if ( !v32 )
                {
                  v10 = 0LL;
                  goto LABEL_158;
                }
              }
              if ( (v32 & 1) != 0 )
                break;
              v74 = v32;
              SRWLock = (_RTL_SRWLOCK *)(v32 + 16);
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v32 + 16));
              v32 = v7[2];
              if ( v74 == v32 )
              {
                v10 = v74;
                goto LABEL_50;
              }
              RtlReleaseSRWLockExclusive(SRWLock);
            }
            v71 = _InterlockedCompareExchange64(
                    v7 + 2,
                    v32 & 1 | ((v32 & 0xFFFFFFFFFFFFFFFEuLL) + 2) & 0xFFFFFFFFFFFFFFFEuLL,
                    v32);
            v70 = v32 == v71;
            v32 = v71;
          }
          while ( !v70 );
          v10 = 0LL;
LABEL_50:
          if ( v10 )
            goto LABEL_29;
LABEL_158:
          v3 = 1;
LABEL_33:
          if ( v10 )
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v10 + 16));
          goto LABEL_35;
        }
        v33 = (int)v24 < 0;
        v76 = v24 == -2;
        if ( (int)v24 < 0 )
        {
          LODWORD(v24) = 1;
        }
        else if ( !(_DWORD)v24 )
        {
          goto LABEL_25;
        }
        if ( (unsigned int)v24 < *(unsigned __int8 *)((v6 & 0xFFFFFFFFFFF00000uLL)
                                                    + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                    + 0x2D) )
        {
          v34 = 0;
          v35 = v78;
          do
          {
            EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits((__int64)v7, v24, &v80);
            LODWORD(v78) = EmptyUnits;
            if ( EmptyUnits == -1 )
              break;
            v37 = v80;
            if ( v80 >= 2 )
            {
              if ( v34 )
              {
                v58 = *(_BYTE *)((v6 & 0xFFFFFFFFFFF00000uLL)
                               + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                               + 0x2C);
                v59 = v35->Value;
                v60 = (unsigned int)(EmptyUnits << v58);
                v61 = v80 << v58;
                v62 = (unsigned __int64)v35 ^ v35[4].Value;
                v79 = v60;
                v63 = (char *)v7 + v60;
                SRWLockb = v61;
                v81 = v63;
                v82 = v59;
                v83 = (void (__fastcall *)(unsigned __int64, char *, _QWORD))(RtlpHeapKey ^ v62);
                if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(RtlpHeapKey ^ v62) == RtlpHpSegLfhVsDecommit )
                  RtlpHpSegLfhVsDecommit(v59, v63, v61);
                else
                  v83(v82, v81, v61);
                RtlpHpLfhSubsegmentDecBlockCounts(v7, v79, SRWLockb);
                if ( !v33 )
                  break;
                LODWORD(v24) = (_DWORD)v78 + v37;
              }
              else
              {
                LODWORD(v24) = EmptyUnits;
                if ( (v86 & 1) == 0 )
                  RtlAcquireSRWLockShared(v35 + 6);
                v34 = 2;
                if ( !v76 )
                  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 3);
              }
            }
            else
            {
              if ( !v33 )
                break;
              LODWORD(v24) = EmptyUnits + v80;
            }
          }
          while ( (unsigned int)v24 < *(unsigned __int8 *)((v6 & 0xFFFFFFFFFFF00000uLL)
                                                         + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                         + 0x2D) );
          v6 = v77;
          v38 = v34;
          v4 = a2;
          v3 = 0;
          v5 = a1;
          v10 = 0LL;
          if ( v38 )
          {
            if ( !v76 )
              RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 3);
            if ( (v86 & 1) == 0 )
              RtlReleaseSRWLockShared(a1 + 42);
          }
        }
        goto LABEL_25;
      }
      RtlpLogHeapFailure(
        16,
        *v8,
        v4,
        (v6 & 0xFFF00000) + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
        (unsigned int)v15,
        0LL);
    }
LABEL_35:
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && v3 )
      RtlpLogHeapFreeEvent(v5, v4, ((*(_BYTE *)(v6 + 24) & 1) == 0) | 2u);
    return v3;
  }
  RtlpHpSegPageRangeShrink(v5, v6, 0LL, a3);
  v3 = 1;
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(v5, v4, 3LL);
  return v3;
}

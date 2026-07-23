/*
 * XREFs of RtlpHpFreeHeap @ 0x180047A60
 * Callers:
 *     RtlpHpReallocMove @ 0x1800430A0 (RtlpHpReallocMove.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpMetadataFree @ 0x18004F70C (RtlpHpMetadataFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextFree @ 0x18001CC30 (RtlpHpVsContextFree.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x18001D3B8 (RtlpHpLfhSubsegmentLockOwner.c)
 *     RtlpHpExtrasGet @ 0x18002925C (RtlpHpExtrasGet.c)
 *     RtlpHpSegPageRangeShrink @ 0x18003E91C (RtlpHpSegPageRangeShrink.c)
 *     RtlpLfhBucketUsageUpdate @ 0x1800444DC (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpSizeHeap @ 0x180046360 (RtlpHpSizeHeap.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B96C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004BB80 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCA4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLargeFree @ 0x18004F620 (RtlpHpLargeFree.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpSizeHeapInternal @ 0x1800519DC (RtlpHpSizeHeapInternal.c)
 *     RtlpCallInterceptRoutine @ 0x180090F44 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F93BC (RtlpLogHeapFreeEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F9FB4 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4, _WORD *a5)
{
  int v5; // eax
  int v7; // ecx
  unsigned int v8; // r12d
  unsigned int v11; // r15d
  unsigned __int64 v12; // r13
  unsigned int v13; // ebx
  __int64 DescriptorValidateSafe; // rbx
  unsigned __int64 v15; // rdi
  _RTL_SRWLOCK *v16; // rcx
  int v17; // eax
  int v18; // r11d
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  int v23; // edx
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // r8
  char v26; // cl
  __int64 v27; // r8
  unsigned __int64 v28; // r10
  char *v29; // r9
  __int64 v30; // rdx
  char *v31; // r8
  __int64 v32; // rcx
  int v33; // r13d
  int v34; // esi
  int v35; // ecx
  _RTL_SRWLOCK *v36; // rdi
  char v38; // cl
  __int64 v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rsi
  int v42; // r8d
  _WORD *v43; // rax
  int v44; // eax
  __int64 v45[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v46; // [rsp+80h] [rbp+8h]
  _RTL_SRWLOCK *v47; // [rsp+A0h] [rbp+28h]

  v5 = *(_DWORD *)(a1 + 20) & 0x11000001;
  v7 = *(_DWORD *)(a1 + 40);
  v8 = v5 | a3;
  if ( v7 && v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v8 |= 1u;
  v11 = 0;
  v12 = 0LL;
  if ( a5 )
  {
    v43 = (_WORD *)RtlpHpExtrasGet(a1, a2, v8, a4);
    v12 = (unsigned __int64)v43;
    if ( v43 )
      *a5 = *v43;
    else
      *a5 = 0;
  }
  else if ( a4 )
  {
    *a4 = RtlpHpSizeHeapInternal(a1, a2, v8, 0LL);
  }
  v13 = 1;
  if ( (v8 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      if ( (v12 || (v12 = RtlpHpExtrasGet(a1, a2, v8, a4)) != 0) && (*(_BYTE *)(v12 + 2) & 0xF) != 0 )
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          if ( (_WORD)a2
            || (v44 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, a2 >> 16, 1LL), v42 = a2, !v44) )
          {
            v42 = a2 + 16;
          }
        }
        else
        {
          v42 = a2;
        }
        if ( (int)RtlpCallInterceptRoutine(*(_BYTE *)(v12 + 2) & 0xF, a1, v42, 3, v12 + 16) < 0 )
          return v11;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v8) == -1 )
    goto LABEL_89;
  if ( (_WORD)a2 || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, a2 >> 16, 1LL) )
  {
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
    }
    else if ( (a1 ^ RtlpHeapKey ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
    {
      DescriptorValidateSafe = (a2 & 0xFFFFFFFFFFF00000uLL)
                             + 32LL * (unsigned int)((a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
    }
    else
    {
      DescriptorValidateSafe = 0LL;
    }
    if ( !DescriptorValidateSafe || (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) == 0 )
      goto LABEL_89;
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) != 0 )
    {
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) == 0
        && a2 != (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
               + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
      {
        goto LABEL_89;
      }
    }
    else
    {
      DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 27);
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) == 0
        || (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) == 0
        || (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) == 0 )
      {
        goto LABEL_89;
      }
    }
    if ( DescriptorValidateSafe )
    {
      v15 = (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
          + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
      if ( a2 <= v15 )
      {
        RtlpHpSegPageRangeShrink(a1, DescriptorValidateSafe, 0, v8);
        v11 = 1;
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapFreeEvent(a1, a2, 3LL);
        return v11;
      }
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0 )
      {
        v11 = RtlpHpVsContextFree(
                a1 + 176,
                (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
              + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                a2,
                v8,
                v45);
        if ( v11 )
        {
          if ( LODWORD(v45[0]) <= 0x3FF0 )
          {
            v39 = (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(LODWORD(v45[0]) + 15) >> 4];
            if ( (*(_QWORD *)(a1 + 288 + 8 * v39 + 192) & 1) != 0 )
              RtlpLfhBucketUsageUpdate(a1 + 288, v39, 0);
          }
        }
        goto LABEL_46;
      }
      v16 = 0LL;
      v17 = RtlpLFHKey ^ *(_DWORD *)(v15 + 40) ^ ((unsigned int)v15 >> 12);
      v47 = 0LL;
      v46 = v17;
      if ( a2 )
      {
        v18 = (unsigned __int16)v17;
        v19 = *(_QWORD *)(a1
                        + 8LL
                        * (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v17
                                                                                  + 15) >> 4]
                        + 480);
        v20 = a2 - HIWORD(v17) - v15;
        v21 = *(unsigned int *)(v19 + 72);
        if ( (_DWORD)v21 )
        {
          v22 = (v21 * (unsigned __int64)v20) >> *(_BYTE *)(v19 + 76);
          v23 = v20 - v18 * v22;
        }
        else
        {
          v38 = *(_BYTE *)(v19 + 76);
          LODWORD(v22) = v20 >> v38;
          v23 = v20 & ((1 << v38) - 1);
        }
        if ( !v23 )
        {
          v24 = *(_WORD *)((DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                         + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                   - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                         + 0x24);
          if ( v24 >= (unsigned __int16)v22 )
            v24 = v22;
          *(_WORD *)((DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                   + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                   + 0x24) = v24;
          v25 = v15 + 8 * ((unsigned __int64)(unsigned int)(2 * v22) >> 6);
          _m_prefetchw((const void *)(v25 + 48));
          if ( (((unsigned __int64)_InterlockedAnd64(
                                     (volatile signed __int64 *)(v25 + 48),
                                     ~(3LL << ((2 * v22) & 0x3F))) >> ((2 * v22) & 0x3F)) & 1) != 0 )
          {
            if ( *(_BYTE *)((DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                          + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                    - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                          + 0x2D) > 1u )
            {
              v26 = *(_BYTE *)((DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                             + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                       - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                             + 0x2C);
              v27 = (unsigned int)(a2 - v15) >> v26;
              v28 = v15 + *(unsigned __int16 *)(v15 + 46);
              v29 = (char *)(v28 + 2 * v27);
              _m_prefetchw(v29);
              LODWORD(v30) = -1;
              v31 = &v29[2 * (((unsigned int)(a2 - v15 + v18 - 1) >> v26) - (unsigned int)v27) + 2];
              if ( v29 < v31 )
              {
                v32 = (__int64)&v29[-v28];
                do
                {
                  if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v29, 0xFFFFu) == 1 && (_DWORD)v30 == -1 )
                    v30 = v32 >> 1;
                  v29 += 2;
                  v32 += 2LL;
                }
                while ( v29 < v31 );
                if ( (_DWORD)v30 != -1 )
                  RtlpHpLfhSubsegmentDecommitPages(
                    a1 + 288,
                    (DescriptorValidateSafe & 0xFFF00000)
                  + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                    v30,
                    2,
                    v8);
              }
            }
            v16 = 0LL;
            goto LABEL_36;
          }
          RtlpLogHeapFailure(
            16,
            *(_QWORD *)(a1 + 288),
            a2,
            (DescriptorValidateSafe & 0xFFF00000)
          + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
            (unsigned int)v22,
            0LL);
        }
LABEL_46:
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( v11 )
            RtlpLogHeapFreeEvent(a1, a2, ((*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0) | 2u);
        }
        return v11;
      }
LABEL_36:
      v33 = *(unsigned __int16 *)((DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                                + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                          - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                + 0x22);
      LOWORD(v34) = *(_WORD *)((DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                             + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                       - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                             + 0x20);
      while ( 1 )
      {
        if ( !v16 && (!(_WORD)v34 || (unsigned __int16)v34 == v33 - 1) )
        {
          v47 = RtlpHpLfhSubsegmentLockOwner(
                  (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
          if ( !v47 )
          {
            v11 = 1;
            goto LABEL_46;
          }
        }
        v35 = (unsigned __int16)(v34 + 1) - 1;
        v34 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v15 + 32), v34 + 1, v34);
        if ( v34 == v35 )
          break;
        v16 = v47;
      }
      if ( (_WORD)v34 )
      {
        if ( (unsigned __int16)v34 != v33 - 1 )
        {
          v36 = v47;
LABEL_44:
          v11 = 1;
          if ( v36 )
            RtlReleaseSRWLockExclusive(v36 + 2);
          goto LABEL_46;
        }
        v40 = 2;
      }
      else
      {
        v40 = 0;
      }
      v41 = RtlpHpLfhOwnerMoveSubsegment(
              v47,
              (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
            + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
              v40);
      RtlReleaseSRWLockExclusive(v47 + 2);
      v36 = 0LL;
      if ( v41 )
        RtlpHpLfhBucketAddSubsegment(
          a1 + 288,
          *(_QWORD *)(a1
                    + 288
                    + 8LL * (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)v46 + 15) >> 4]
                    + 192),
          v41,
          v8);
      goto LABEL_44;
    }
LABEL_89:
    RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
    return v11;
  }
  if ( !RtlpHpLargeFree(a1, a2, v8) )
    v13 = 0;
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && v13 )
    RtlpLogHeapFreeEvent(a1, a2, 3LL);
  return v13;
}

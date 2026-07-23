/*
 * XREFs of RtlpFreeHeapInternal @ 0x1800480F0
 * Callers:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpGetReservedBlockSize @ 0x180001058 (RtlpGetReservedBlockSize.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextFree @ 0x18001CC30 (RtlpHpVsContextFree.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x18001D3B8 (RtlpHpLfhSubsegmentLockOwner.c)
 *     RtlpHpExtrasGet @ 0x18002925C (RtlpHpExtrasGet.c)
 *     RtlpHpSegPageRangeShrink @ 0x18003E91C (RtlpHpSegPageRangeShrink.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlpLfhBucketUsageUpdate @ 0x1800444DC (RtlpLfhBucketUsageUpdate.c)
 *     RtlpFreeUserBlock @ 0x180045F38 (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x1800460D4 (RtlpIsSubSegmentReuseable.c)
 *     RtlpHpSizeHeap @ 0x180046360 (RtlpHpSizeHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B96C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004BB80 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCA4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpVsChunkSize @ 0x18004BDE8 (RtlpHpVsChunkSize.c)
 *     RtlpHpLargeAllocSize @ 0x18004F564 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeFree @ 0x18004F620 (RtlpHpLargeFree.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpSizeHeapInternal @ 0x1800519DC (RtlpHpSizeHeapInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007ADFC (RtlpProbeUserBufferSafe.c)
 *     RtlpCallInterceptRoutine @ 0x180090F44 (RtlpCallInterceptRoutine.c)
 *     RtlpValidateLFHBlock @ 0x18009116C (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A9DB0 (RtlpInterlockedFlushSList.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800F87F4 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F93BC (RtlpLogHeapFreeEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F9FB4 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(__int64 BaseAddress, unsigned __int64 a2, int a3, __int64 *a4, _WORD *a5)
{
  unsigned __int64 v5; // rbx
  int v6; // edi
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // rsi
  unsigned int v10; // r12d
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // edi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 *v17; // rsi
  unsigned __int64 v18; // r9
  unsigned int v19; // ebx
  int v20; // r10d
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned __int64 v24; // r8
  int v25; // edx
  char v26; // cl
  unsigned int v27; // r10d
  unsigned int v28; // r8d
  unsigned int v29; // edx
  unsigned int v30; // r8d
  unsigned __int64 v31; // rbx
  int v32; // r8d
  int v33; // eax
  __int64 DescriptorValidateSafe; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  _RTL_SRWLOCK *v38; // r13
  int v39; // eax
  int v40; // r11d
  __int64 v41; // rcx
  unsigned int v42; // edx
  __int64 v43; // rax
  unsigned __int64 v44; // r9
  int v45; // edx
  char v46; // cl
  unsigned __int16 v47; // cx
  unsigned __int64 v48; // r8
  char v49; // cl
  __int64 v50; // r8
  unsigned __int64 v51; // r10
  char *v52; // r9
  unsigned int v53; // eax
  __int64 v54; // rcx
  char *v55; // r8
  __int64 v56; // rdx
  int v57; // edx
  int v58; // ebx
  int v59; // ecx
  unsigned int v60; // eax
  __int64 v61; // rbx
  __int64 v62; // rdx
  unsigned int v63; // edx
  int v64; // eax
  unsigned __int16 v65; // ax
  int v66; // eax
  unsigned __int16 v67; // ax
  __int64 v68; // rcx
  struct _TEB *v69; // rbx
  __int64 v70; // rcx
  struct _TEB *v71; // rbx
  __int64 v72; // rdi
  __int64 v73; // r11
  __int64 v74; // r9
  _DWORD *v75; // rax
  __int64 v76; // r10
  unsigned int v77; // ecx
  __int64 v78; // r8
  __int64 v79; // rdx
  signed __int32 v80; // ebx
  _QWORD *v81; // rax
  int v82; // r9d
  unsigned int v83; // edx
  _DWORD *v84; // r8
  int v85; // r9d
  int v86; // eax
  unsigned int v87; // r9d
  unsigned int v88; // edx
  __int64 v89; // rsi
  _DWORD *v90; // rbx
  __int64 v91; // rcx
  signed __int32 v92; // eax
  _QWORD *v93; // r9
  int v94; // r8d
  __int64 v95; // rax
  __int64 **v96; // rdx
  _QWORD *v97; // rcx
  _DWORD *v98; // rdx
  __int64 v99; // rbx
  __int64 v100; // rsi
  unsigned __int16 ReservedBlockSize; // ax
  _DWORD *v102; // rcx
  ULONG HeapProtection; // eax
  int v104; // edx
  signed __int64 v105; // rax
  int v106; // ecx
  __int64 v107; // rcx
  signed __int32 v108; // eax
  _QWORD *v109; // r9
  int v110; // r8d
  __int64 v111; // rax
  __int64 **v112; // rdx
  _QWORD *v113; // rcx
  signed __int32 v114; // eax
  signed __int32 v115; // ett
  __int64 v116; // rcx
  unsigned __int8 v117; // al
  unsigned int v119; // [rsp+30h] [rbp-41h]
  int v120; // [rsp+30h] [rbp-41h]
  int v121; // [rsp+34h] [rbp-3Dh] BYREF
  int v122; // [rsp+38h] [rbp-39h]
  __int64 v123; // [rsp+40h] [rbp-31h]
  int v124; // [rsp+48h] [rbp-29h]
  int v125; // [rsp+50h] [rbp-21h]
  __int64 v126; // [rsp+54h] [rbp-1Dh] BYREF
  int v127; // [rsp+60h] [rbp-11h]
  ULONG OldProtect; // [rsp+68h] [rbp-9h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-1h] BYREF
  PVOID BaseAddressa; // [rsp+78h] [rbp+7h] BYREF
  int v131; // [rsp+D0h] [rbp+5Fh]
  unsigned int v132; // [rsp+D0h] [rbp+5Fh]
  signed __int64 v133; // [rsp+D0h] [rbp+5Fh]

  v5 = 0LL;
  v6 = a3;
  v7 = a2;
  v9 = 0LL;
  if ( *(_DWORD *)(BaseAddress + 16) == -571548178 )
  {
    v10 = 1;
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && a2
      && ((_WORD)a2 || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, a2 >> 16, 1LL)) )
    {
      v7 -= 16LL;
    }
    v11 = (v6 & 1) != 0;
    if ( (v6 & 8) != 0 )
      v11 |= 2u;
    if ( (v6 & 4) != 0 )
      v11 |= 0x80000000;
    if ( (v6 & 0x100) != 0 )
      v11 |= 0x100u;
    if ( (v6 & 0xE00) != 0 )
      v11 |= v6 & 0xE00;
    if ( (v6 & 0x10) != 0 )
      v11 |= 0x2000000u;
    if ( (v6 & 2) != 0 )
      v11 |= 0x1000000u;
    v12 = *(_DWORD *)(BaseAddress + 40);
    v13 = (v11 | *(_DWORD *)(BaseAddress + 20)) & 0x11000001;
    v119 = v13;
    if ( v12 && v12 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      v13 = (v11 | *(_DWORD *)(BaseAddress + 20)) & 0x11000000 | 1;
      v119 = v13;
    }
    if ( !a5 )
    {
      v17 = a4;
      if ( a4 )
        *a4 = RtlpHpSizeHeapInternal(BaseAddress, v7, v13, 0LL);
LABEL_70:
      if ( (v13 & 0x1000000) == 0 )
      {
        if ( *(_DWORD *)(BaseAddress + 32) )
        {
          if ( (v5 || (v5 = RtlpHpExtrasGet(BaseAddress, v7, v13, v17)) != 0) && (*(_BYTE *)(v5 + 2) & 0xF) != 0 )
          {
            if ( (RtlpHpAppCompatFlags & 2) != 0 )
            {
              if ( (_WORD)v7
                || (v33 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v7 >> 16, 1LL),
                    v32 = v7,
                    !v33) )
              {
                v32 = v7 + 16;
              }
            }
            else
            {
              v32 = v7;
            }
            if ( (int)RtlpCallInterceptRoutine(*(_BYTE *)(v5 + 2) & 0xF, BaseAddress, v32, 3, v5 + 16) < 0 )
            {
              v10 = 0;
              goto LABEL_198;
            }
          }
        }
      }
      if ( (*(_DWORD *)(BaseAddress + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(BaseAddress, v7, v13) == -1 )
      {
        RtlpLogHeapFailure(9, BaseAddress, v7, 0, 0LL, 0LL);
        v10 = 0;
        goto LABEL_198;
      }
      if ( !(_WORD)v7 && (unsigned int)RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v7 >> 16, 1LL) )
      {
        v10 = RtlpHpLargeFree(BaseAddress, v7, v13) != 0;
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_198;
          goto LABEL_90;
        }
        goto LABEL_103;
      }
      if ( (RtlpHpAppCompatFlags & 1) != 0 )
      {
        DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(BaseAddress, v7);
      }
      else
      {
        if ( (BaseAddress ^ RtlpHeapKey ^ *(_QWORD *)((v7 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((v7 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
        {
          v35 = (v7 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 12);
LABEL_97:
          if ( !v35 || (*(_BYTE *)(v35 + 24) & 4) == 0 )
            goto LABEL_102;
          if ( (*(_BYTE *)(v35 + 24) & 8) != 0 )
          {
            if ( (*(_BYTE *)(v35 + 24) & 0x21) == 0
              && v7 != (v35 & 0xFFFFFFFFFFF00000uLL)
                     + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
            {
              goto LABEL_102;
            }
          }
          else
          {
            v35 += -32LL * *(unsigned __int8 *)(v35 + 27);
            if ( (*(_BYTE *)(v35 + 24) & 4) == 0
              || (*(_BYTE *)(v35 + 24) & 8) == 0
              || (*(_BYTE *)(v35 + 24) & 0x21) == 0 )
            {
              goto LABEL_102;
            }
          }
          if ( !v35 )
          {
LABEL_102:
            RtlpLogHeapFailure(9, BaseAddress, v7, 0, 0LL, 0LL);
            v10 = 0;
            goto LABEL_103;
          }
          v37 = (v35 & 0xFFFFFFFFFFF00000uLL)
              + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
          if ( v7 <= v37 )
          {
            RtlpHpSegPageRangeShrink(BaseAddress, v35, 0, v119);
            if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
LABEL_90:
              RtlpLogHeapFreeEvent(BaseAddress, v7, 3LL);
LABEL_103:
            if ( v10 )
            {
              if ( a4 )
              {
                v36 = *a4;
                if ( (RtlpHpAppCompatFlags & 2) != 0 )
                  v36 -= 16LL;
                *a4 = v36;
              }
              if ( (RtlpHpHeapFeatures & 4) != 0 && (PVOID)BaseAddress != RtlpHpMetadataHeap )
                goto LABEL_285;
              return v10;
            }
LABEL_198:
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v69 = NtCurrentTeb();
            v69->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            return v10;
          }
          if ( (*(_BYTE *)(v35 + 24) & 1) == 0 )
          {
            v10 = RtlpHpVsContextFree(
                    BaseAddress + 176,
                    (v35 & 0xFFFFFFFFFFF00000uLL)
                  + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                    v7,
                    v119,
                    &v126);
            if ( v10 )
            {
              if ( (unsigned int)v126 <= 0x3FF0 )
              {
                v62 = (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v126 + 15) >> 4];
                if ( (*(_QWORD *)(BaseAddress + 288 + 8 * v62 + 192) & 1) != 0 )
                  RtlpLfhBucketUsageUpdate(BaseAddress + 288, v62, 0);
              }
            }
LABEL_155:
            if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_198;
              RtlpLogHeapFreeEvent(BaseAddress, v7, ((*(_BYTE *)(v35 + 24) & 1) == 0) | 2u);
            }
            goto LABEL_103;
          }
          v38 = 0LL;
          v39 = RtlpLFHKey ^ ((unsigned int)v37 >> 12) ^ *(_DWORD *)((v35 & 0xFFFFFFFFFFF00000uLL)
                                                                   + ((unsigned int)((__int64)(v35
                                                                                             - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                                   + 0x28);
          v122 = v39;
          if ( v7 )
          {
            v40 = (unsigned __int16)v39;
            v41 = *(_QWORD *)(BaseAddress
                            + 8LL
                            * (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v39
                                                                                      + 15) >> 4]
                            + 480);
            v42 = v7 - HIWORD(v122) - v37;
            v43 = *(unsigned int *)(v41 + 72);
            if ( (_DWORD)v43 )
            {
              v44 = (v43 * (unsigned __int64)v42) >> *(_BYTE *)(v41 + 76);
              v45 = v42 - v40 * v44;
            }
            else
            {
              v46 = *(_BYTE *)(v41 + 76);
              LODWORD(v44) = v42 >> v46;
              v45 = v42 & ((1 << v46) - 1);
            }
            if ( v45 )
            {
              v10 = 0;
              goto LABEL_155;
            }
            v47 = *(_WORD *)((v35 & 0xFFFFFFFFFFF00000uLL)
                           + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                           + 0x24);
            if ( v47 >= (unsigned __int16)v44 )
              v47 = v44;
            *(_WORD *)((v35 & 0xFFFFFFFFFFF00000uLL)
                     + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                     + 0x24) = v47;
            v48 = v37 + 8 * ((unsigned __int64)(unsigned int)(2 * v44) >> 6);
            _m_prefetchw((const void *)(v48 + 48));
            if ( (((unsigned __int64)_InterlockedAnd64(
                                       (volatile signed __int64 *)(v48 + 48),
                                       ~(3LL << ((2 * v44) & 0x3F))) >> ((2 * v44) & 0x3F)) & 1) == 0 )
            {
              RtlpLogHeapFailure(
                16,
                *(_QWORD *)(BaseAddress + 288),
                v7,
                (v35 & 0xFFF00000) + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                (unsigned int)v44,
                0LL);
              v10 = 0;
              goto LABEL_155;
            }
            if ( *(_BYTE *)((v35 & 0xFFFFFFFFFFF00000uLL)
                          + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                          + 0x2D) > 1u )
            {
              v49 = *(_BYTE *)((v35 & 0xFFFFFFFFFFF00000uLL)
                             + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                             + 0x2C);
              v50 = (unsigned int)(v7 - v37) >> v49;
              v51 = v37 + *(unsigned __int16 *)(v37 + 46);
              v52 = (char *)(v51 + 2 * v50);
              _m_prefetchw(v52);
              v53 = (unsigned int)(v7 - v37 + v40 - 1) >> v49;
              LODWORD(v54) = -1;
              v55 = &v52[2 * (v53 - (unsigned int)v50) + 2];
              if ( v52 < v55 )
              {
                v56 = (__int64)&v52[-v51];
                do
                {
                  if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v52, 0xFFFFu) == 1 && (_DWORD)v54 == -1 )
                    v54 = v56 >> 1;
                  v52 += 2;
                  v56 += 2LL;
                }
                while ( v52 < v55 );
                if ( (_DWORD)v54 != -1 )
                  RtlpHpLfhSubsegmentDecommitPages(
                    BaseAddress + 288,
                    (v35 & 0xFFF00000) + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                    v54,
                    2,
                    v119);
              }
            }
          }
          v57 = *(unsigned __int16 *)((v35 & 0xFFFFFFFFFFF00000uLL)
                                    + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                    + 0x22);
          v131 = v57;
          LOWORD(v58) = *(_WORD *)((v35 & 0xFFFFFFFFFFF00000uLL)
                                 + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                 + 0x20);
          do
          {
            if ( !v38 && (!(_WORD)v58 || (unsigned __int16)v58 == v57 - 1) )
            {
              v38 = RtlpHpLfhSubsegmentLockOwner(
                      (v35 & 0xFFFFFFFFFFF00000uLL)
                    + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
              if ( !v38 )
                goto LABEL_155;
              v57 = v131;
            }
            v59 = (unsigned __int16)(v58 + 1) - 1;
            v58 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v37 + 32), v58 + 1, v58);
          }
          while ( v58 != v59 );
          if ( (_WORD)v58 )
          {
            if ( (unsigned __int16)v58 != v57 - 1 )
            {
LABEL_149:
              if ( v38 )
                RtlReleaseSRWLockExclusive(v38 + 2);
              goto LABEL_155;
            }
            v60 = 2;
          }
          else
          {
            v60 = 0;
          }
          v61 = RtlpHpLfhOwnerMoveSubsegment(
                  v38,
                  (v35 & 0xFFFFFFFFFFF00000uLL)
                + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                  v60);
          RtlReleaseSRWLockExclusive(v38 + 2);
          v38 = 0LL;
          if ( v61 )
            RtlpHpLfhBucketAddSubsegment(
              BaseAddress + 288,
              *(_QWORD *)(BaseAddress
                        + 8LL
                        * (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v122
                                                                                  + 15) >> 4]
                        + 480),
              v61,
              v119);
          goto LABEL_149;
        }
        DescriptorValidateSafe = 0LL;
      }
      v35 = DescriptorValidateSafe;
      goto LABEL_97;
    }
    if ( !(_WORD)v7 && (unsigned int)RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v7 >> 16, 1LL) )
    {
      v14 = RtlpHpLargeAllocSize(BaseAddress, v7, v13, &v121);
LABEL_38:
      v17 = a4;
      if ( a4 )
        *a4 = v14;
      if ( v121 )
      {
        v31 = v14 + v7;
        if ( (v13 & 0x10000000) != 0 )
          v31 += 16LL;
        v5 = (v31 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v5 )
          *a5 = *(_WORD *)v5;
        else
          *a5 = 0;
      }
      else
      {
        v5 = 0LL;
        *a5 = 0;
      }
      goto LABEL_70;
    }
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      v15 = RtlpHpSegGetDescriptorValidateSafe(BaseAddress, v7);
    }
    else
    {
      if ( (BaseAddress ^ RtlpHeapKey ^ *(_QWORD *)((v7 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((v7 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
      {
        v16 = (v7 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 12);
LABEL_32:
        if ( !v16 || (*(_BYTE *)(v16 + 24) & 4) == 0 )
          goto LABEL_37;
        if ( (*(_BYTE *)(v16 + 24) & 8) != 0 )
        {
          if ( (*(_BYTE *)(v16 + 24) & 0x21) == 0
            && v7 != (v16 & 0xFFFFFFFFFFF00000uLL)
                   + ((unsigned int)((__int64)(v16 - (v16 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
          {
LABEL_37:
            v14 = -1LL;
            goto LABEL_38;
          }
        }
        else
        {
          v16 += -32LL * *(unsigned __int8 *)(v16 + 27);
          if ( (*(_BYTE *)(v16 + 24) & 4) == 0 || (*(_BYTE *)(v16 + 24) & 8) == 0 || (*(_BYTE *)(v16 + 24) & 0x21) == 0 )
            goto LABEL_37;
        }
        if ( v16 )
        {
          v18 = (v16 & 0xFFFFFFFFFFF00000uLL)
              + ((unsigned int)((__int64)(v16 - (v16 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
          if ( v7 <= v18 )
          {
            v14 = (*(unsigned __int8 *)(v16 + 27) << 12) - (unsigned __int64)*(unsigned __int16 *)(v16 + 6);
            v121 = *(_BYTE *)(v16 + 4) & 1;
          }
          else if ( (*(_BYTE *)(v16 + 24) & 1) != 0 )
          {
            v19 = (unsigned int)v18 >> 12;
            v20 = (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v18 + 40) ^ ((unsigned int)v18 >> 12));
            v125 = RtlpLFHKey ^ *(_DWORD *)(v18 + 40) ^ ((unsigned int)v18 >> 12);
            v21 = *(_QWORD *)(BaseAddress
                            + 8LL
                            * (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v20 + 15) >> 4]
                            + 480);
            v22 = v7 - HIWORD(v125) - v18;
            v23 = *(_DWORD *)(v21 + 72);
            if ( v23 )
            {
              v24 = (v22 * (unsigned __int64)v23) >> *(_BYTE *)(v21 + 76);
              v25 = v22 - v20 * v24;
            }
            else
            {
              v26 = *(_BYTE *)(v21 + 76);
              LODWORD(v24) = v22 >> v26;
              v25 = ((1 << v26) - 1) & v22;
            }
            if ( v25 )
            {
              v14 = 0xFFFFFFFFLL;
            }
            else
            {
              v27 = 2 * v24;
              if ( ((*(_QWORD *)(v18 + 8 * ((unsigned __int64)(unsigned int)(2 * v24) >> 6) + 48) >> ((2 * v24) & 0x3F)) & 1) != 0 )
              {
                v28 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v19 ^ *(unsigned __int16 *)(v18 + 40);
                if ( ((*(_QWORD *)(v18 + 8 * ((unsigned __int64)v27 >> 6) + 48) >> (v27 & 0x3F)) & 2) != 0 )
                {
                  v29 = *(unsigned __int16 *)(((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v19 ^ (unsigned __int64)*(unsigned __int16 *)(v18 + 40))
                                            + v7
                                            - 2);
                  if ( (v29 & 0x8000u) == 0 )
                    v30 = v28 - (v29 & 0x3FFF);
                  else
                    v30 = v28 - 1;
                  v14 = v30;
                  v121 = (v29 >> 14) & 1;
                }
                else
                {
                  v121 = 0;
                  v14 = v28;
                }
              }
              else
              {
                v14 = 0xFFFFFFFFLL;
              }
            }
          }
          else
          {
            v14 = (unsigned int)RtlpHpVsChunkSize(v7, v16, &v121);
          }
          goto LABEL_38;
        }
        goto LABEL_37;
      }
      v15 = 0LL;
    }
    v16 = v15;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(BaseAddress + 116) & 0x1000000) != 0 )
  {
LABEL_277:
    v117 = RtlpFreeHeap((PVOID)BaseAddress);
    v10 = v117;
    if ( v117 )
      goto LABEL_278;
    return v10;
  }
  if ( (*(_BYTE *)(BaseAddress + 120) & 1) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe(BaseAddress, a2);
  }
  else if ( (a2 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, BaseAddress, a2, 0, 0LL, 0LL);
  }
  else
  {
    v9 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    if ( (*(_BYTE *)(v9 + 15) & 0x3F) == 0 )
    {
      RtlpLogHeapFailure(8, BaseAddress, v9, 0, 0LL, 0LL);
      v9 = 0LL;
    }
  }
  if ( !v9 )
    goto LABEL_204;
  if ( *(_BYTE *)(v7 - 1) == 5 )
  {
    if ( *(char *)(v9 + 15) >= 0 )
    {
      if ( !*(_DWORD *)(BaseAddress + 124)
        || (v127 = *(_DWORD *)(BaseAddress + 136) ^ *(_DWORD *)(v9 + 8),
            HIBYTE(v127) == (BYTE2(v127) ^ (unsigned __int8)(BYTE1(v127) ^ v127))) )
      {
LABEL_178:
        if ( *(char *)(v9 + 15) >= 0 )
        {
          if ( *(_DWORD *)(BaseAddress + 124) )
          {
            v64 = *(_DWORD *)(v9 + 8);
            v124 = v64;
            if ( (v64 & *(_DWORD *)(BaseAddress + 124)) != 0 )
              v124 = *(_DWORD *)(BaseAddress + 136) ^ v64;
            v65 = v124;
          }
          else
          {
            v65 = *(_WORD *)(v9 + 8);
          }
          v63 = v65;
        }
        else if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(BaseAddress ^ *(_WORD *)(v9 + 8) ^ (v9 >> 4)) )
        {
          v63 = MEMORY[0x24];
        }
        else
        {
          v63 = *(unsigned __int16 *)(*(_QWORD *)(v9
                                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v9 + 8) ^ (unsigned int)(v9 >> 4)) >> 12))
                                    + 36LL);
        }
        if ( *(_BYTE *)(v9 + 15) == 4 )
        {
          if ( *(_DWORD *)(BaseAddress + 124) )
          {
            v66 = *(_DWORD *)(v9 + 8);
            v124 = v66;
            if ( (v66 & *(_DWORD *)(BaseAddress + 124)) != 0 )
              v124 = *(_DWORD *)(BaseAddress + 136) ^ v66;
            v67 = v124;
          }
          else
          {
            v67 = *(_WORD *)(v9 + 8);
          }
          v68 = v63 + *(_QWORD *)(v9 - 16) - v67;
        }
        else
        {
          v68 = 16LL * v63;
        }
        if ( v68 + v9 < v7 )
          goto LABEL_197;
        if ( (v6 & 0x3C000102) == 0 )
        {
          v70 = *(_BYTE *)(v7 - 1) == 5 ? v7 - 16LL * *(unsigned __int8 *)(v7 - 16 + 14) : 0LL;
          if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v7 - 8), BaseAddress, v7, 3, v70) < 0 )
          {
LABEL_204:
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v71 = NtCurrentTeb();
            v71->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            return 0;
          }
        }
        goto LABEL_205;
      }
    }
    else if ( (unsigned __int8)RtlpValidateLFHBlock(BaseAddress, v9) )
    {
      goto LABEL_178;
    }
LABEL_197:
    v10 = 0;
    RtlpLogHeapFailure(3, BaseAddress, v9, v7, 0LL, 0LL);
    goto LABEL_198;
  }
LABEL_205:
  if ( *(char *)(v9 + 15) >= 0 )
    goto LABEL_277;
  v10 = 1;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(BaseAddress ^ *(_WORD *)(v9 + 8) ^ (v9 >> 4))
    || (v72 = *(_QWORD *)(v9
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v9 + 8) ^ (unsigned int)(v9 >> 4)) >> 12))) == 0 )
  {
    RtlpLogHeapFailure(3, BaseAddress, v9, 0, 0LL, 0LL);
    v6 = a3;
    goto LABEL_278;
  }
  _m_prefetchw((const void *)v72);
  v73 = *(_QWORD *)(v72 + 8);
  v74 = (unsigned __int16)(*(_DWORD *)(v9 + 12) >> 8);
  v75 = *(_DWORD **)v72;
  v123 = v73;
  v120 = 0;
  v132 = v74;
  v76 = *(_QWORD *)(*(_QWORD *)v75 + 24LL);
  v77 = RtlpLFHKey ^ v76 ^ v73 ^ *(_DWORD *)(v73 + 24);
  if ( v73 + (unsigned int)v74 * HIWORD(v77) + (unsigned __int16)v77 != v9 )
  {
    RtlpLogHeapFailure(3, *(_QWORD *)(v76 + 24), v9, 0, 0LL, 0LL);
    v6 = a3;
    goto LABEL_278;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapFreeEvent(*(_QWORD *)(v76 + 24), v9 + 16, 2LL);
    v74 = v132;
    v73 = v123;
  }
  v78 = 100LL;
  v79 = 0LL;
  if ( MEMORY[0x7FFE036A] <= 1u )
    v78 = 0LL;
  while ( 1 )
  {
    v80 = *(_DWORD *)(v72 + 32);
    if ( (v80 & 0x80000000) == 0
      && v80 == _InterlockedCompareExchange((volatile signed __int32 *)(v72 + 32), v80 | 0x80000000, v80) )
    {
      break;
    }
    v79 = (unsigned int)(v79 + 1);
    if ( (unsigned int)v79 > (unsigned int)v78 )
      goto LABEL_218;
  }
  if ( v80 == -1 )
  {
LABEL_218:
    *(_BYTE *)(v9 + 15) = 0x80;
    RtlpInterlockedPushEntrySList(v72 + 16, v9 + 16);
    goto LABEL_219;
  }
  *(_BYTE *)(v9 + 15) = 0x80;
  _bittestandreset64(*(signed __int64 **)(v73 + 40), (unsigned int)v74);
  if ( *(_WORD *)(v72 + 16) )
  {
    v81 = (_QWORD *)RtlpInterlockedFlushSList(v72 + 16, v79, v78, v74);
    if ( v81 )
    {
      v82 = 0;
      do
      {
        v83 = *((_DWORD *)v81 - 1);
        v81 = (_QWORD *)*v81;
        ++v82;
        v83 >>= 8;
        v132 = (unsigned __int16)v83;
        _bittestandreset64(*(signed __int64 **)(v123 + 40), (unsigned __int16)v83);
      }
      while ( v81 );
      v7 = a2;
      v120 = v82;
    }
    LODWORD(v74) = v132;
  }
  v84 = *(_DWORD **)v72;
  v85 = (_DWORD)v74 << 16;
  v86 = v85 | (v120 + 1 + (unsigned __int16)v80);
  if ( ((unsigned __int16)v85 | (unsigned __int16)(v120 + 1 + v80)) == *(_WORD *)(v72 + 40) )
  {
    v87 = v84[42];
    v88 = *(_DWORD *)(*(_QWORD *)v84 + 32LL);
    if ( v84[41] != 1 || v88 < v87 || v88 - v87 >= *(_DWORD *)(*(_QWORD *)v84 + 36LL) )
    {
      v89 = *(_QWORD *)v72;
      v90 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v72 + 8LL), 0LL);
      if ( !v90 )
        goto LABEL_248;
      _m_prefetchw(v90 + 11);
      if ( _InterlockedAnd(v90 + 11, 0xFFFFFFF9) == 6 )
      {
        v91 = **(_QWORD **)v90;
        *(_QWORD *)v90 = 0LL;
LABEL_246:
        v98 = v90 + 12;
LABEL_247:
        RtlpInterlockedPushEntrySList(v91, v98);
        goto LABEL_248;
      }
      if ( !RtlpIsSubSegmentReuseable(v89, (__int64)v90) )
        goto LABEL_248;
      do
      {
        v92 = v90[11];
        if ( !v92 || (v92 & 2) != 0 )
          goto LABEL_248;
      }
      while ( v92 != _InterlockedCompareExchange(v90 + 11, v92 | 2, v92) );
      v93 = *(_QWORD **)v90;
      v94 = 0;
      while ( 1 )
      {
        v95 = ((_BYTE)v94 + (unsigned __int8)*((_WORD *)v93 + 87)) & 0xF;
        v96 = (__int64 **)v93[v95 + 2];
        v97 = &v93[v95];
        if ( v96 )
        {
          if ( (*((_DWORD *)v96 + 11) & 1) == 0
            && v96 == (__int64 **)_InterlockedCompareExchange64(v97 + 2, (signed __int64)v90, (signed __int64)v96) )
          {
            _m_prefetchw((char *)v96 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v96 + 11, 0xFFFFFFFD) == 2 )
            {
              v91 = **v96;
              *v96 = 0LL;
              v98 = v96 + 6;
              goto LABEL_247;
            }
LABEL_248:
            v99 = *(_QWORD *)v72;
            v100 = *(_QWORD *)(*(_QWORD *)v89 + 24LL);
            if ( (*(_BYTE *)(v72 + 38) & 3) != 0 )
            {
              BaseAddressa = (PVOID)((*(_QWORD *)(v72 + 8) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
              ReservedBlockSize = RtlpGetReservedBlockSize(v72);
              v102 = *(_DWORD **)(v100 + 24);
              RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*(unsigned __int16 *)(v72 + 40);
              HeapProtection = RtlpGetHeapProtection(v102, 1);
              ZwProtectVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddressa,
                &RegionSize,
                HeapProtection,
                &OldProtect);
            }
            *(_DWORD *)(*(_QWORD *)(v72 + 8) + 20LL) = 0;
            RtlpFreeUserBlock(v100, *(__int64 **)(v72 + 8));
            v104 = -*(unsigned __int16 *)(v72 + 40);
            do
            {
              v105 = *(_QWORD *)(v99 + 160);
              if ( v104 <= 0 )
                v106 = HIDWORD(v105) - 1;
              else
                v106 = HIDWORD(v105) + 1;
              HIDWORD(v133) = v106;
              LODWORD(v133) = v105 + v104;
            }
            while ( v105 != _InterlockedCompareExchange64((volatile signed __int64 *)(v99 + 160), v133, v105) );
            *(_QWORD *)(v72 + 8) = 0LL;
            _InterlockedIncrement((volatile signed __int32 *)(v100 + 60));
            *(_DWORD *)(v72 + 32) = 0;
            _m_prefetchw((const void *)(v72 + 44));
            if ( _InterlockedAnd((volatile signed __int32 *)(v72 + 44), 0xFFFFFFFE) == 1 )
            {
              v107 = **(_QWORD **)v72;
              *(_QWORD *)v72 = 0LL;
              RtlpInterlockedPushEntrySList(v107, v72 + 48);
              v6 = a3;
              goto LABEL_278;
            }
LABEL_219:
            v6 = a3;
            goto LABEL_278;
          }
        }
        else if ( !_InterlockedCompareExchange64(v97 + 2, (signed __int64)v90, 0LL) )
        {
          goto LABEL_248;
        }
        if ( (unsigned int)++v94 >= 0x10 )
        {
          v91 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v90 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v90 + 172LL)
                          + 1192)
              + 144LL;
          goto LABEL_246;
        }
      }
    }
  }
  *(_DWORD *)(v72 + 32) = v86;
  if ( (*(_DWORD *)(v72 + 44) & 2) != 0 || !RtlpIsSubSegmentReuseable((__int64)v84, v72) )
    goto LABEL_219;
  do
  {
    v108 = *(_DWORD *)(v72 + 44);
    if ( !v108 || (v108 & 2) != 0 )
      goto LABEL_219;
  }
  while ( v108 != _InterlockedCompareExchange((volatile signed __int32 *)(v72 + 44), v108 | 2, v108) );
  v109 = *(_QWORD **)v72;
  v110 = 0;
  while ( 1 )
  {
    v111 = ((_BYTE)v110 + (unsigned __int8)*((_WORD *)v109 + 87)) & 0xF;
    v112 = (__int64 **)v109[v111 + 2];
    v113 = &v109[v111];
    if ( !v112 )
    {
      if ( !_InterlockedCompareExchange64(v113 + 2, v72, 0LL) )
        goto LABEL_219;
      goto LABEL_270;
    }
    if ( (*((_DWORD *)v112 + 11) & 1) == 0
      && v112 == (__int64 **)_InterlockedCompareExchange64(v113 + 2, v72, (signed __int64)v112) )
    {
      break;
    }
LABEL_270:
    if ( (unsigned int)++v110 >= 0x10 )
    {
      RtlpInterlockedPushEntrySList(
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v72 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v72 + 172LL) + 1192)
      + 144LL,
        v72 + 48);
      v6 = a3;
      goto LABEL_278;
    }
  }
  _m_prefetchw((char *)v112 + 44);
  v114 = *((_DWORD *)v112 + 11);
  do
  {
    v115 = v114;
    v114 = _InterlockedCompareExchange((volatile signed __int32 *)v112 + 11, v114 & 0xFFFFFFFD, v114);
  }
  while ( v115 != v114 );
  if ( v114 != 2 )
    goto LABEL_219;
  v116 = **v112;
  *v112 = 0LL;
  RtlpInterlockedPushEntrySList(v116, v112 + 6);
  v6 = a3;
LABEL_278:
  if ( a5 )
    *a5 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( (RtlpHpHeapFeatures & 4) != 0 && (PVOID)BaseAddress != RtlpHpMetadataHeap && (v6 & 0x10000000) == 0 )
LABEL_285:
    RtlpHpStackTraceRemoveStack(BaseAddress, v7);
  return v10;
}

/*
 * XREFs of RtlpFreeHeapInternal @ 0x1800214A0
 * Callers:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180021080 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x180019CBC (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x18001BDD0 (RtlpHpSizeHeap.c)
 *     RtlpHpVsChunkSize @ 0x18001D564 (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18001D85C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpLfhBucketUsageUpdate @ 0x18001D9E4 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001DA70 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpVsChunkComputeCost @ 0x18001DC8C (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsChunkCoalesce @ 0x18001EE20 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18001F024 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x18002ACD0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x18002E064 (RtlpHpLfhSubsegmentLockOwner.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18002FC60 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180050E64 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpSegPageRangeShrink @ 0x180058A98 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLargeAllocSize @ 0x18005A418 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeFree @ 0x18005A4D4 (RtlpHpLargeFree.c)
 *     RtlpHpSizeHeapInternal @ 0x18005CAC8 (RtlpHpSizeHeapInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180074788 (RtlpProbeUserBufferSafe.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpValidateLFHBlock @ 0x1800951F4 (RtlpValidateLFHBlock.c)
 *     RtlpCallInterceptRoutine @ 0x18009524C (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F18BC (RtlpLogHeapFreeEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F29F4 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(PVOID BaseAddress, unsigned __int64 a2, ULONG a3, __int64 *a4, _WORD *a5)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbx
  unsigned int v10; // r15d
  int v11; // ecx
  int v12; // r13d
  unsigned __int64 v13; // rcx
  unsigned int v14; // r13d
  __int64 DescriptorValidateSafe; // rax
  __int64 v16; // rdx
  __int64 *v17; // rsi
  unsigned __int64 v18; // r9
  unsigned int v19; // r11d
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  int v24; // edx
  char v25; // cl
  unsigned int v26; // r10d
  __int64 v27; // rsi
  unsigned int v28; // r8d
  unsigned int v29; // edx
  unsigned int v30; // r8d
  unsigned __int64 v31; // rbx
  int v32; // r8d
  int v33; // eax
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // rsi
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
  __int64 v57; // rdx
  int v58; // ebx
  int v59; // ecx
  int v60; // eax
  __int64 *v61; // rbx
  unsigned __int64 v62; // rbx
  unsigned int v63; // eax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  char v67; // cl
  unsigned int v68; // eax
  __int64 v69; // rdx
  struct _TEB *v70; // rbx
  unsigned int v71; // edx
  int v72; // eax
  unsigned __int16 v73; // ax
  int v74; // eax
  unsigned __int16 v75; // ax
  __int64 v76; // rcx
  __int64 v77; // rcx
  struct _TEB *v78; // rbx
  unsigned int v80; // [rsp+30h] [rbp-40h]
  unsigned int v81; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v82; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v83; // [rsp+40h] [rbp-30h]
  unsigned int v84; // [rsp+48h] [rbp-28h]
  int v85; // [rsp+58h] [rbp-18h]
  unsigned int v86; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v87; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v88; // [rsp+B0h] [rbp+40h]

  v7 = a2;
  v9 = 0LL;
  if ( *((_DWORD *)BaseAddress + 4) != -571548178 )
  {
    if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    {
LABEL_229:
      v10 = (unsigned __int8)RtlpFreeHeap(BaseAddress);
      if ( a5 )
        *a5 = 0;
      if ( a4 )
        *a4 = 0LL;
      return v10;
    }
    if ( (*((_BYTE *)BaseAddress + 120) & 1) != 0 )
    {
      v9 = RtlpProbeUserBufferSafe(BaseAddress, a2);
    }
    else if ( (a2 & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, (_DWORD)BaseAddress, a2, 0, 0LL, 0LL);
    }
    else
    {
      v9 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
      if ( (*(_BYTE *)(v9 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, (_DWORD)BaseAddress, v9, 0, 0LL, 0LL);
        v9 = 0LL;
      }
    }
    if ( !v9 )
      goto LABEL_194;
    if ( *(_BYTE *)(v7 - 1) != 5 )
    {
LABEL_227:
      if ( *(char *)(v9 + 15) < 0 )
      {
        RtlpLowFragHeapFree((int)BaseAddress, v9, a3);
        return 1;
      }
      goto LABEL_229;
    }
    if ( *(char *)(v9 + 15) >= 0 )
    {
      if ( !*((_DWORD *)BaseAddress + 31) )
        goto LABEL_201;
      v85 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v9 + 8);
      if ( HIBYTE(v85) == (BYTE2(v85) ^ (unsigned __int8)(BYTE1(v85) ^ v85)) )
        goto LABEL_201;
    }
    else if ( (unsigned __int8)RtlpValidateLFHBlock(BaseAddress, v9) )
    {
LABEL_201:
      if ( *(char *)(v9 + 15) >= 0 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v72 = *(_DWORD *)(v9 + 8);
          v85 = v72;
          if ( (v72 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v85 = *((_DWORD *)BaseAddress + 34) ^ v72;
          v73 = v85;
        }
        else
        {
          v73 = *(_WORD *)(v9 + 8);
        }
        v71 = v73;
      }
      else if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v9 + 8) ^ (unsigned __int16)BaseAddress ^ (v9 >> 4)) )
      {
        v71 = MEMORY[0x24];
      }
      else
      {
        v71 = *(unsigned __int16 *)(*(_QWORD *)(v9
                                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v9 + 8) ^ (unsigned int)BaseAddress ^ (unsigned int)(v9 >> 4)) >> 12))
                                  + 36LL);
      }
      if ( *(_BYTE *)(v9 + 15) == 4 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v74 = *(_DWORD *)(v9 + 8);
          v85 = v74;
          if ( (v74 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v85 = *((_DWORD *)BaseAddress + 34) ^ v74;
          v75 = v85;
        }
        else
        {
          v75 = *(_WORD *)(v9 + 8);
        }
        v76 = v71 + *(_QWORD *)(v9 - 16) - v75;
      }
      else
      {
        v76 = 16LL * v71;
      }
      if ( v76 + v9 < v7 )
        goto LABEL_220;
      if ( (a3 & 0x3C000102) == 0 )
      {
        if ( *(_BYTE *)(v7 - 1) == 5 )
        {
          v77 = v7 - 16LL * *(unsigned __int8 *)(v7 - 16 + 14);
          v10 = 0;
        }
        else
        {
          v10 = 0;
          v77 = 0LL;
        }
        if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v7 - 8), (_DWORD)BaseAddress, v7, 3, v77) < 0 )
          goto LABEL_226;
      }
      goto LABEL_227;
    }
LABEL_220:
    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v9, v7, 0LL, 0LL);
LABEL_194:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v70 = NtCurrentTeb();
    v70->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0
    && a2
    && ((_WORD)a2 || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(BaseAddress, a2 >> 16)) )
  {
    v7 -= 16LL;
  }
  v10 = 1;
  v11 = (a3 & 1) != 0;
  if ( (a3 & 8) != 0 )
    v11 |= 2u;
  if ( (a3 & 4) != 0 )
    v11 |= 0x80000000;
  if ( (a3 & 0x100) != 0 )
    v11 |= 0x100u;
  if ( (a3 & 0xE00) != 0 )
    v11 |= a3 & 0xE00;
  if ( (a3 & 0x10) != 0 )
    v11 |= 0x2000000u;
  if ( (a3 & 2) != 0 )
    v11 |= 0x1000000u;
  v12 = v11 | *((_DWORD *)BaseAddress + 5);
  v13 = *((unsigned int *)BaseAddress + 10);
  v14 = v12 & 0x11000001;
  v80 = v14;
  if ( (_DWORD)v13 && (_DWORD)v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
  {
    v14 |= 1u;
    v80 = v14;
  }
  if ( a5 )
  {
    if ( !(_WORD)v7 && (unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v13, v7 >> 16) )
    {
      v13 = RtlpHpLargeAllocSize(BaseAddress, v7, v14, &v82);
LABEL_38:
      v17 = a4;
      if ( a4 )
        *a4 = v13;
      if ( (_DWORD)v82 )
      {
        v31 = v13 + v7;
        if ( (v14 & 0x10000000) != 0 )
          v31 += 16LL;
        v9 = (v31 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v9 )
          *a5 = *(_WORD *)v9;
        else
          *a5 = 0;
      }
      else
      {
        v9 = 0LL;
        *a5 = 0;
      }
      goto LABEL_70;
    }
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(BaseAddress, v7);
    }
    else
    {
      if ( ((unsigned __int64)BaseAddress ^ RtlpHeapKey ^ *(_QWORD *)((v7 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((v7 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
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
            v13 = -1LL;
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
            v13 = (*(unsigned __int8 *)(v16 + 27) << 12) - (unsigned __int64)*(unsigned __int16 *)(v16 + 6);
            LODWORD(v82) = *(_BYTE *)(v16 + 4) & 1;
          }
          else if ( (*(_BYTE *)(v16 + 24) & 1) != 0 )
          {
            v19 = (unsigned int)v18 >> 12;
            v84 = RtlpLFHKey ^ ((unsigned int)v18 >> 12) ^ *(_DWORD *)((v16 & 0xFFFFFFFFFFF00000uLL)
                                                                     + ((unsigned int)((__int64)(v16
                                                                                               - (v16 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                                     + 0x28);
            v20 = *((_QWORD *)BaseAddress
                  + RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v84 + 15) >> 4]
                  + 58);
            v21 = v7 - HIWORD(v84) - v18;
            v22 = *(unsigned int *)(v20 + 72);
            if ( (_DWORD)v22 )
            {
              v23 = (v22 * (unsigned __int64)v21) >> *(_BYTE *)(v20 + 76);
              v24 = v21 - v23 * (unsigned __int16)v84;
            }
            else
            {
              v25 = *(_BYTE *)(v20 + 76);
              LODWORD(v23) = v21 >> v25;
              v24 = ((1 << v25) - 1) & v21;
            }
            if ( v24 )
            {
              v13 = 0xFFFFFFFFLL;
            }
            else
            {
              v26 = 2 * v23;
              if ( ((*(_QWORD *)(v18 + 8 * ((unsigned __int64)(unsigned int)(2 * v23) >> 6) + 48) >> ((2 * v23) & 0x3F)) & 1) != 0 )
              {
                v27 = *(unsigned __int16 *)(v18 + 40);
                v28 = (unsigned __int16)RtlpLFHKey ^ v27 ^ (unsigned __int16)v19;
                if ( ((*(_QWORD *)(v18 + 8 * ((unsigned __int64)v26 >> 6) + 48) >> (v26 & 0x3F)) & 2) != 0 )
                {
                  v29 = *(unsigned __int16 *)(((unsigned __int16)RtlpLFHKey ^ v27 ^ (unsigned __int16)v19) + v7 - 2);
                  if ( (v29 & 0x8000u) == 0 )
                    v30 = v28 - (v29 & 0x3FFF);
                  else
                    v30 = v28 - 1;
                  v13 = v30;
                  LODWORD(v82) = (v29 >> 14) & 1;
                }
                else
                {
                  LODWORD(v82) = 0;
                  v13 = v28;
                }
              }
              else
              {
                v13 = 0xFFFFFFFFLL;
              }
            }
          }
          else
          {
            v13 = (unsigned int)RtlpHpVsChunkSize(v7, v16, (int *)&v82);
          }
          goto LABEL_38;
        }
        goto LABEL_37;
      }
      DescriptorValidateSafe = 0LL;
    }
    v16 = DescriptorValidateSafe;
    goto LABEL_32;
  }
  v17 = a4;
  if ( a4 )
    *a4 = RtlpHpSizeHeapInternal(BaseAddress, v7, v14, 0LL);
LABEL_70:
  if ( (v14 & 0x1000000) == 0 )
  {
    if ( *((_DWORD *)BaseAddress + 8) )
    {
      if ( (v9 || (v9 = RtlpHpExtrasGet((__int64)BaseAddress, v7, v14, v17)) != 0) && (*(_BYTE *)(v9 + 2) & 0xF) != 0 )
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          if ( (_WORD)v7 || (v33 = RtlSparseBitmapCtxCheckBitsInternal(v13, v7 >> 16), v32 = v7, !v33) )
            v32 = v7 + 16;
        }
        else
        {
          v32 = v7;
        }
        if ( (int)RtlpCallInterceptRoutine(*(_BYTE *)(v9 + 2) & 0xF, (_DWORD)BaseAddress, v32, 3, v9 + 16) < 0 )
        {
          v10 = 0;
LABEL_226:
          NtCurrentTeb()->LastStatusValue = -1073741811;
          v78 = NtCurrentTeb();
          v78->LastErrorValue = RtlNtStatusToDosError(-1073741811);
          return v10;
        }
      }
    }
  }
  if ( (*((_DWORD *)BaseAddress + 5) & 0x10000000) != 0 && RtlpHpSizeHeap((__int64)BaseAddress, v7, v14) == -1 )
  {
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, v7, 0, 0LL, 0LL);
    v10 = 0;
    goto LABEL_226;
  }
  if ( !(_WORD)v7 && (unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v13, v7 >> 16) )
  {
    v10 = RtlpHpLargeFree(BaseAddress, v7, v14) != 0;
    if ( !MEMORY[0x7FFE0380] || (NtCurrentPeb()->TracingFlags & 1) == 0 )
      goto LABEL_103;
    if ( !v10 )
      goto LABEL_226;
    goto LABEL_90;
  }
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    v34 = RtlpHpSegGetDescriptorValidateSafe(BaseAddress, v7);
    goto LABEL_96;
  }
  if ( ((unsigned __int64)BaseAddress ^ RtlpHeapKey ^ *(_QWORD *)((v7 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((v7 & 0xFFFFFFFFFFF00000uLL) >> 20)) != 0xA2E64EADA2E64EADuLL )
  {
    v34 = 0LL;
LABEL_96:
    v35 = v34;
    goto LABEL_97;
  }
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
    if ( (*(_BYTE *)(v35 + 24) & 4) == 0 || (*(_BYTE *)(v35 + 24) & 8) == 0 || (*(_BYTE *)(v35 + 24) & 0x21) == 0 )
      goto LABEL_102;
  }
  if ( !v35 )
  {
LABEL_102:
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, v7, 0, 0LL, 0LL);
    v10 = 0;
    goto LABEL_103;
  }
  v37 = (v35 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  if ( v7 > v37 )
  {
    if ( (*(_BYTE *)(v35 + 24) & 1) == 0 )
    {
      if ( (*(_WORD *)((v35 & 0xFFFFFFFFFFF00000uLL)
                     + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                     + 0x22) ^ 0xABED) == *(_WORD *)((v35 & 0xFFFFFFFFFFF00000uLL)
                                                   + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                   + 0x20) )
      {
        v84 = 16 * (WORD1(RtlpLFHKey) ^ ((unsigned int)(v7 - 16) >> 16) ^ *(unsigned __int16 *)(v7 - 14)) - 16;
        if ( (v80 & 1) == 0 )
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 21);
        if ( ((RtlpLFHKey ^ *(_QWORD *)(v7 - 16) ^ (v7 - 16)) & 0xFF000000000000LL) != 0 )
        {
          LODWORD(v83) = 0;
          v62 = RtlpHpVsChunkCoalesce(
                  (__int64)BaseAddress + 168,
                  (v35 & 0xFFFFFFFFFFF00000uLL)
                + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                  v7 - 16,
                  &v81);
          v63 = v81;
          if ( v81 == *(unsigned __int16 *)((v35 & 0xFFFFFFFFFFF00000uLL)
                                          + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                          + 0x20) )
          {
LABEL_167:
            RtlpHpVsSubsegmentCleanup(
              (char *)BaseAddress + 168,
              (v35 & 0xFFFFFFFFFFF00000uLL)
            + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
          }
          else
          {
            while ( v63 > (unsigned int)v83 )
            {
              RtlpHpVsChunkComputeCost(
                v62,
                (v35 & 0xFFFFFFFFFFF00000uLL)
              + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                &v86,
                &v87);
              if ( !v86 || !v87 )
                break;
              v64 = ((v87 - ((v87 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                  + (((v87 - ((v87 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
              v65 = *((_QWORD *)BaseAddress + 26) >> 7;
              v66 = (0x101010101010101LL * ((v64 + (v64 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
              v83 = v66;
              if ( v65 <= 8 )
                v65 = 8LL;
              if ( *((_QWORD *)BaseAddress + 27) + (unsigned __int64)(unsigned int)v66 <= v65 )
                break;
              v67 = RtlpLFHKey;
              HIDWORD(v82) = HIDWORD(v82) & 0xFF00FFFF | 0x10000;
              v82 ^= RtlpLFHKey ^ v62;
              *(_BYTE *)(v62 + 6) = BYTE6(v82);
              *(_DWORD *)(v62 + 8) = (unsigned __int8)(v67 ^ v62 ^ ((unsigned int)(v62 - v37) >> 12)) | 0x200;
              if ( (v80 & 1) == 0 )
              {
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 21);
                LODWORD(v66) = v83;
              }
              RtlpHpVsSubsegmentCommitPages(
                (_DWORD)BaseAddress + 168,
                (v35 & 0xFFF00000) + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                v87,
                v66,
                0);
              if ( (v80 & 1) == 0 )
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 21);
              v68 = v81;
              *(_DWORD *)(v62 + 8) &= ~0x200u;
              LODWORD(v83) = v68;
              v62 = RtlpHpVsChunkCoalesce(
                      (__int64)BaseAddress + 168,
                      (v35 & 0xFFFFFFFFFFF00000uLL)
                    + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                      v62,
                      &v81);
              v63 = v81;
              if ( v81 == *(unsigned __int16 *)((v35 & 0xFFFFFFFFFFF00000uLL)
                                              + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                              + 0x20) )
                goto LABEL_167;
            }
            RtlpHpVsFreeChunkInsert(
              (char *)BaseAddress + 168,
              (v35 & 0xFFFFFFFFFFF00000uLL)
            + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
              v62);
            v37 = 0LL;
          }
          if ( (v80 & 1) == 0 )
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 21);
          if ( v37 )
            ((void (__fastcall *)(_QWORD, unsigned __int64, _QWORD))(RtlpHeapKey ^ ((unsigned __int64)BaseAddress + 168) ^ *((_QWORD *)BaseAddress + 30)))(
              *((_QWORD *)BaseAddress + 28),
              v37,
              v80);
        }
        else
        {
          RtlpLogHeapFailure(8, *((_QWORD *)BaseAddress + 28), v7, v7 - 16, 0LL, 0LL);
          v10 = 0;
          if ( (v80 & 1) == 0 )
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 21);
        }
        if ( v10 )
        {
          if ( v84 <= 0x3FF0 )
          {
            v69 = RtlpLfhBucketIndexMap[(unsigned __int64)(v84 + 15) >> 4];
            if ( (*((_QWORD *)BaseAddress + v69 + 58) & 1) != 0 )
              RtlpLfhBucketUsageUpdate((__int64)BaseAddress + 272, v69, 0);
          }
        }
      }
      else
      {
        RtlpLogHeapFailure(
          17,
          *((_QWORD *)BaseAddress + 28),
          (v35 & 0xFFF00000) + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
          0,
          0LL,
          0LL);
        v10 = 0;
      }
LABEL_176:
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_226;
        RtlpLogHeapFreeEvent(BaseAddress, v7, ((*(_BYTE *)(v35 + 24) & 1) == 0) | 2u);
      }
      goto LABEL_103;
    }
    v38 = 0LL;
    v39 = RtlpLFHKey ^ *(_DWORD *)(v37 + 40) ^ ((unsigned int)v37 >> 12);
    LODWORD(v83) = v39;
    if ( v7 )
    {
      v40 = (unsigned __int16)v39;
      v41 = *((_QWORD *)BaseAddress
            + RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v39 + 15) >> 4]
            + 58);
      v42 = v7 - WORD1(v83) - v37;
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
        goto LABEL_176;
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
      if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(v48 + 48), ~(3LL << ((2 * v44) & 0x3F))) >> ((2 * v44) & 0x3F)) & 1) == 0 )
      {
        RtlpLogHeapFailure(
          16,
          *((_QWORD *)BaseAddress + 34),
          v7,
          (v35 & 0xFFF00000) + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
          (unsigned int)v44,
          0LL);
        v10 = 0;
        goto LABEL_176;
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
              (_RTL_SRWLOCK *)BaseAddress + 34,
              (v35 & 0xFFFFFFFFFFF00000uLL)
            + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
              v54,
              2u,
              v80);
        }
      }
    }
    v57 = *(unsigned __int16 *)((v35 & 0xFFFFFFFFFFF00000uLL)
                              + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                              + 0x22);
    v88 = *(unsigned __int16 *)((v35 & 0xFFFFFFFFFFF00000uLL)
                              + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                              + 0x22);
    LOWORD(v58) = *(_WORD *)((v35 & 0xFFFFFFFFFFF00000uLL)
                           + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                           + 0x20);
    do
    {
      if ( !v38 && (!(_WORD)v58 || (unsigned __int16)v58 == (_DWORD)v57 - 1) )
      {
        v38 = (_RTL_SRWLOCK *)RtlpHpLfhSubsegmentLockOwner(
                                (v35 & 0xFFFFFFFFFFF00000uLL)
                              + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                                v57);
        if ( !v38 )
          goto LABEL_176;
        v57 = v88;
      }
      v59 = (unsigned __int16)(v58 + 1) - 1;
      v58 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v37 + 32), v58 + 1, v58);
    }
    while ( v58 != v59 );
    if ( (_WORD)v58 )
    {
      if ( (unsigned __int16)v58 != (_DWORD)v57 - 1 )
      {
LABEL_146:
        if ( v38 )
          RtlReleaseSRWLockExclusive(v38 + 2);
        goto LABEL_176;
      }
      v60 = 2;
    }
    else
    {
      v60 = 0;
    }
    v61 = RtlpHpLfhOwnerMoveSubsegment(
            (__int64)v38,
            (__int64 *)((v35 & 0xFFFFFFFFFFF00000uLL)
                      + ((unsigned int)((__int64)(v35 - (v35 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)),
            v60);
    RtlReleaseSRWLockExclusive(v38 + 2);
    v38 = 0LL;
    if ( v61 )
      RtlpHpLfhBucketAddSubsegment(
        (unsigned __int64)BaseAddress + 272,
        *((_RTL_SRWLOCK **)BaseAddress
        + RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v83 + 15) >> 4]
        + 58),
        (__int64)v61,
        v80);
    goto LABEL_146;
  }
  RtlpHpSegPageRangeShrink(BaseAddress, v35, 0LL, v14);
  if ( !MEMORY[0x7FFE0380] || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    goto LABEL_103;
LABEL_90:
  RtlpLogHeapFreeEvent(BaseAddress, v7, 3LL);
LABEL_103:
  if ( !v10 )
    goto LABEL_226;
  if ( a4 )
  {
    v36 = *a4;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
      v36 -= 16LL;
    *a4 = v36;
  }
  return v10;
}

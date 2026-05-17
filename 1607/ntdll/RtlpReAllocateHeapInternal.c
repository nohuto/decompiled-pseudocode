/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x180020DD0
 * Callers:
 *     RtlReAllocateHeap @ 0x180020D80 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180073610 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x180073660 (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpReAllocateHeap @ 0x1800211D0 (RtlpReAllocateHeap.c)
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     RtlpHpReAllocateHeap @ 0x18004377C (RtlpHpReAllocateHeap.c)
 *     RtlSizeHeap @ 0x180046180 (RtlSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004668C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007AE0C (RtlpProbeUserBufferSafe.c)
 *     RtlpSetupExtendedBlock @ 0x18008F290 (RtlpSetupExtendedBlock.c)
 *     RtlpCallInterceptRoutine @ 0x180090F54 (RtlpCallInterceptRoutine.c)
 *     RtlpValidateLFHBlock @ 0x18009117C (RtlpValidateLFHBlock.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800F87F4 (RtlpHpStackTraceRemoveStack.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        _WORD *a6)
{
  __int64 v6; // rbp
  unsigned __int64 v8; // rdi
  int v10; // r12d
  int v11; // eax
  int v12; // r14d
  unsigned __int64 v13; // rbx
  unsigned __int16 v14; // r15
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rbx
  int v19; // eax
  unsigned __int64 v20; // r8
  int v21; // edx
  int v22; // r12d
  unsigned __int64 v23; // r9
  unsigned __int64 Heap; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  int v27; // r15d
  struct _TEB *v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rcx
  char v32; // al
  unsigned __int64 v33; // rcx
  unsigned __int16 v34; // ax
  __int64 v35; // r15
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  char v38; // cl
  unsigned __int64 v39; // rdx
  char v40; // al
  char v41; // r8
  __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned __int64 v44; // rdx
  struct _TEB *v45; // rbx
  int v46; // eax
  int v47; // r15d
  struct _TEB *v48; // rbx
  int v49; // ecx
  int v50; // eax
  unsigned __int16 v51; // ax
  int v52; // eax
  unsigned __int16 v53; // ax
  __int64 v54; // rax
  unsigned int v55; // ecx
  int v56; // eax
  unsigned __int16 v57; // ax
  int v58; // eax
  unsigned __int16 v59; // ax
  int v60; // r9d
  int v61; // eax
  unsigned __int16 v62; // [rsp+30h] [rbp-128h]
  int v63; // [rsp+40h] [rbp-118h]
  int v64; // [rsp+40h] [rbp-118h]
  int v65; // [rsp+40h] [rbp-118h]
  int v66; // [rsp+40h] [rbp-118h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v6 = 0LL;
  v8 = a3;
  v10 = 0;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v45 = NtCurrentTeb();
    v45->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v19 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v21 = *(_DWORD *)(a1 + 40);
    v22 = v19;
    if ( v21 && v21 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v22 = v19 | 1;
    if ( (RtlpHpAppCompatFlags & 2) == 0 )
      goto LABEL_24;
    if ( (_WORD)v20
      || (v46 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v20 >> 16, 1LL), v20 = v8, !v46) )
    {
      v20 = v8 - 16;
    }
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      v23 = a4 + 16;
      if ( a4 + 16 < a4 )
        v23 = a4;
    }
    else
    {
LABEL_24:
      v23 = a4;
    }
    Heap = RtlpHpReAllocateHeap(a1, (unsigned int)v22, v20, v23, a5, a6);
    v25 = Heap;
    if ( Heap )
    {
      if ( Heap != -1LL )
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0
          && ((_WORD)Heap
           || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, Heap >> 16, 1LL)) )
        {
          v25 += 16LL;
        }
        if ( a5 )
        {
          v26 = *a5;
          if ( (RtlpHpAppCompatFlags & 2) != 0 )
            v26 -= 16LL;
          *a5 = v26;
        }
LABEL_29:
        if ( (RtlpHpHeapFeatures & 4) != 0 && a1 != RtlpHpMetadataHeap && v25 )
        {
          RtlpHpStackTraceRemoveStack(a1, v8);
          RtlpHpStackTraceAddStack(a1, v25);
        }
        return v25;
      }
      v47 = -1073741819;
    }
    else
    {
      v47 = -1073741801;
    }
    v25 = 0LL;
    NtCurrentTeb()->LastStatusValue = v47;
    v48 = NtCurrentTeb();
    v48->LastErrorValue = RtlNtStatusToDosError(v47);
    if ( v22 < 0 || *(int *)(a1 + 20) < 0 )
    {
      ExceptionRecord.ExceptionCode = v47;
      ExceptionRecord.ExceptionAddress = RtlRaiseException;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 1;
      ExceptionRecord.ExceptionFlags = 0;
      ExceptionRecord.ExceptionInformation[0] = a4;
      RtlRaiseException(&ExceptionRecord);
    }
    goto LABEL_29;
  }
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0;
  v11 = *(_DWORD *)(a1 + 116);
  v12 = v11 | a2;
  if ( (v11 & 0x1000000) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v13 = RtlpProbeUserBufferSafe(a1, a3);
    }
    else if ( (a3 & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
      v13 = 0LL;
    }
    else
    {
      v13 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
      if ( (*(_BYTE *)(v13 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, a1, v13, 0, 0LL, 0LL);
        v13 = 0LL;
      }
    }
    if ( !v13 )
    {
      v27 = -1073741819;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(v8 - 1) != 5 )
    {
LABEL_16:
      v14 = 0;
      goto LABEL_17;
    }
    if ( *(char *)(v13 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v49 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v13 + 8);
        if ( HIBYTE(v49) != (BYTE2(v49) ^ (unsigned __int8)(BYTE1(v49) ^ v49)) )
          goto LABEL_96;
      }
    }
    else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v13) )
    {
      goto LABEL_96;
    }
    if ( *(char *)(v13 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v50 = *(_DWORD *)(v13 + 8);
        LOWORD(v63) = v50;
        if ( (v50 & *(_DWORD *)(a1 + 124)) != 0 )
          v63 = *(_DWORD *)(a1 + 136) ^ v50;
        v51 = v63;
      }
      else
      {
        v51 = *(_WORD *)(v13 + 8);
      }
      v30 = v51;
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4)) )
        v29 = 0LL;
      else
        v29 = *(_QWORD *)(v13
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12));
      v30 = *(unsigned __int16 *)(v29 + 36);
    }
    if ( *(_BYTE *)(v13 + 15) == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v52 = *(_DWORD *)(v13 + 8);
        LOWORD(v64) = v52;
        if ( (v52 & *(_DWORD *)(a1 + 124)) != 0 )
          v64 = *(_DWORD *)(a1 + 136) ^ v52;
        v53 = v64;
      }
      else
      {
        v53 = *(_WORD *)(v13 + 8);
      }
      v31 = v30 + *(_QWORD *)(v13 - 16) - v53;
    }
    else
    {
      v31 = 16LL * v30;
    }
    if ( v31 + v13 >= v8 )
    {
      v10 = *(_DWORD *)(v8 - 8);
      if ( (v12 & 0x3C000102) != 0 )
        goto LABEL_16;
      v32 = *(_BYTE *)(v8 - 1);
      v33 = v8 - 16;
      if ( v32 == 5 )
      {
        v34 = 16 * *(unsigned __int8 *)(v33 + 14);
      }
      else if ( (v32 & 0x40) != 0 )
      {
        v34 = 16 * (v32 & 0x3F);
      }
      else
      {
        v34 = 0;
      }
      v35 = v34;
      v62 = v34;
      v36 = v34 + a4;
      if ( v36 < a4 )
      {
LABEL_38:
        v27 = -1073741801;
        goto LABEL_39;
      }
      a4 = v36;
      if ( *(_BYTE *)(v33 + 15) == 5 )
        v37 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14);
      else
        v37 = 0LL;
      if ( (int)RtlpCallInterceptRoutine(v10, a1, v8, 5, v37) >= 0 )
      {
        v38 = *(_BYTE *)(v13 + 15);
        if ( v38 == 4 )
        {
          if ( (v12 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
            RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
            if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
              RtlpAnalyzeHeapFailure(a1, v13);
          }
          v14 = v62;
          *(_WORD *)(v13 + 8) -= v62;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
            *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          if ( (v12 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
            RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        }
        else
        {
          if ( v38 == 5 )
          {
            v39 = *(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v38 & 0x40) != 0 )
          {
            v39 = *(unsigned __int16 *)(16LL * (v38 & 0x3F) + v13 + 12);
          }
          else if ( (v38 & 0x3F) == 0x3F )
          {
            if ( v38 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v56 = *(_DWORD *)(v13 + 8);
                LOWORD(v65) = v56;
                if ( (v56 & *(_DWORD *)(a1 + 124)) != 0 )
                  v65 = *(_DWORD *)(a1 + 136) ^ v56;
                v57 = v65;
              }
              else
              {
                v57 = *(_WORD *)(v13 + 8);
              }
              v55 = v57;
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4)) )
                v54 = 0LL;
              else
                v54 = *(_QWORD *)(v13
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12));
              v55 = *(unsigned __int16 *)(v54 + 36);
            }
            v39 = *(_QWORD *)(16LL * v55 + v13);
          }
          else
          {
            v39 = v38 & 0x3F;
          }
          v40 = *(_BYTE *)(v13 + 15) & 0x80;
          if ( v40 )
            v41 = 0x80;
          else
            v41 = 0;
          if ( v40 )
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4)) )
              v42 = 0LL;
            else
              v42 = *(_QWORD *)(v13
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12));
            v43 = *(unsigned __int16 *)(v42 + 36);
          }
          else
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v58 = *(_DWORD *)(v13 + 8);
              LOWORD(v66) = v58;
              if ( (v58 & *(_DWORD *)(a1 + 124)) != 0 )
                v66 = *(_DWORD *)(a1 + 136) ^ v58;
              v59 = v66;
            }
            else
            {
              v59 = *(_WORD *)(v13 + 8);
            }
            v43 = v59;
          }
          v44 = v39 - v35;
          v14 = v62;
          if ( v44 >= 0x3F )
          {
            *(_QWORD *)(v13 + 16LL * v43) = v44;
            *(_BYTE *)(v13 + 15) = v41 | 0x3F;
          }
          else
          {
            *(_BYTE *)(v13 + 15) = v41 | v44;
          }
        }
        v8 = v13 + 16;
LABEL_17:
        v15 = RtlpReAllocateHeap(a1, v12 | 2u, v8, a4);
        v17 = v15;
        if ( (RtlpHpHeapFeatures & 4) != 0 && a1 != RtlpHpMetadataHeap )
        {
          if ( !v15 )
          {
LABEL_36:
            a4 -= v14;
            if ( v10 )
            {
              RtlSizeHeap(a1, 0LL, v8);
              v61 = RtlpSetupExtendedBlock(a1, v12, v8, v60, v14, v10);
              RtlpCallInterceptRoutine(v10, a1, v61, 6, v8);
            }
            goto LABEL_38;
          }
          if ( (v12 & 0x10000000) == 0 )
          {
            RtlpHpStackTraceRemoveStack(a1, v8);
            RtlpHpStackTraceAddStack(a1, v17);
          }
        }
        if ( v17 )
        {
          v6 = v17;
          if ( v10 )
          {
            v6 = RtlpSetupExtendedBlock(a1, v12, v17, v16, v14, v10);
            RtlpCallInterceptRoutine(v10, a1, v6, 6, v17);
          }
          return v6;
        }
        goto LABEL_36;
      }
      v27 = -1073741819;
LABEL_39:
      NtCurrentTeb()->LastStatusValue = v27;
      v28 = NtCurrentTeb();
      v28->LastErrorValue = RtlNtStatusToDosError(v27);
      if ( (v12 & 4) != 0 )
      {
        ExceptionRecord.ExceptionCode = v27;
        ExceptionRecord.ExceptionAddress = RtlRaiseException;
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.NumberParameters = 1;
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionInformation[0] = a4;
        RtlRaiseException(&ExceptionRecord);
      }
      return v6;
    }
LABEL_96:
    RtlpLogHeapFailure(3, a1, v13, v8, 0LL, 0LL);
    v27 = -1073741811;
    goto LABEL_39;
  }
  return RtlDebugReAllocateHeap((void *)a1);
}

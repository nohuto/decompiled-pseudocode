/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x180023D40
 * Callers:
 *     RtlReAllocateHeap @ 0x180023CF0 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x18007119C (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800711EC (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlpHpReAllocateHeap @ 0x18001ADE8 (RtlpHpReAllocateHeap.c)
 *     RtlSizeHeap @ 0x18001BA80 (RtlSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18001C0D4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x180074788 (RtlpProbeUserBufferSafe.c)
 *     RtlpSetupExtendedBlock @ 0x1800863B0 (RtlpSetupExtendedBlock.c)
 *     RtlpValidateLFHBlock @ 0x1800951F4 (RtlpValidateLFHBlock.c)
 *     RtlpCallInterceptRoutine @ 0x18009524C (RtlpCallInterceptRoutine.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(
        unsigned __int16 *BaseAddress,
        int a2,
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
  struct _TEB *v20; // rcx
  int v21; // edx
  int v22; // r14d
  unsigned __int64 v23; // r9
  unsigned __int64 Heap; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // r15d
  struct _TEB *v29; // rbx
  struct _TEB *v30; // rbx
  int v31; // r15d
  struct _TEB *v32; // rbx
  int v33; // ecx
  __int64 v34; // rax
  unsigned int v35; // edx
  int v36; // eax
  unsigned __int16 v37; // ax
  int v38; // eax
  unsigned __int16 v39; // ax
  __int64 v40; // rcx
  char v41; // al
  unsigned __int64 v42; // rcx
  unsigned __int16 v43; // ax
  __int64 v44; // r15
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  char v47; // cl
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // ecx
  int v51; // eax
  unsigned __int16 v52; // ax
  int v53; // r8d
  __int64 v54; // rax
  unsigned int v55; // ecx
  int v56; // eax
  unsigned __int16 v57; // ax
  unsigned __int64 v58; // rdx
  int v59; // r9d
  int v60; // eax
  unsigned __int16 v61; // [rsp+30h] [rbp-128h]
  int v62; // [rsp+40h] [rbp-118h]
  int v63; // [rsp+40h] [rbp-118h]
  int v64; // [rsp+40h] [rbp-118h]
  int v65; // [rsp+40h] [rbp-118h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v6 = 0LL;
  v8 = a3;
  v10 = 0;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v30 = NtCurrentTeb();
    v30->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
  if ( *((_DWORD *)BaseAddress + 4) == -571548178 )
  {
    v19 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v21 = *((_DWORD *)BaseAddress + 10);
    v22 = v19;
    if ( v21 )
    {
      v20 = NtCurrentTeb();
      if ( v21 == LODWORD(v20->ClientId.UniqueThread) )
        v22 = v19 | 1;
    }
    if ( (RtlpHpAppCompatFlags & 2) == 0 )
      goto LABEL_23;
    if ( (_WORD)v8 || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v20, v8 >> 16) )
      v8 -= 16LL;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      v23 = a4 + 16;
      if ( a4 + 16 < a4 )
        v23 = a4;
    }
    else
    {
LABEL_23:
      v23 = a4;
    }
    Heap = RtlpHpReAllocateHeap((__int64)BaseAddress, v22, v8, v23, a5, a6);
    v26 = Heap;
    if ( Heap )
    {
      if ( Heap != -1LL )
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0
          && ((_WORD)Heap || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v25, Heap >> 16)) )
        {
          v26 += 16LL;
        }
        if ( a5 )
        {
          v27 = *a5;
          if ( (RtlpHpAppCompatFlags & 2) != 0 )
            v27 -= 16LL;
          *a5 = v27;
          return v26;
        }
        return v26;
      }
      v31 = -1073741819;
    }
    else
    {
      v31 = -1073741801;
    }
    v26 = 0LL;
    NtCurrentTeb()->LastStatusValue = v31;
    v32 = NtCurrentTeb();
    v32->LastErrorValue = RtlNtStatusToDosError(v31);
    if ( v22 < 0 || *((int *)BaseAddress + 5) < 0 )
    {
      ExceptionRecord.ExceptionCode = v31;
      ExceptionRecord.ExceptionAddress = RtlRaiseException;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 1;
      ExceptionRecord.ExceptionFlags = 0;
      ExceptionRecord.ExceptionInformation[0] = a4;
      RtlRaiseException(&ExceptionRecord);
    }
    return v26;
  }
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0;
  v11 = *((_DWORD *)BaseAddress + 29);
  v12 = v11 | a2;
  if ( (v11 & 0x1000000) == 0 )
  {
    if ( (BaseAddress[60] & 1) != 0 )
    {
      v13 = RtlpProbeUserBufferSafe(BaseAddress, a3);
    }
    else if ( (a3 & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, (_DWORD)BaseAddress, a3, 0, 0LL, 0LL);
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
        RtlpLogHeapFailure(8, (_DWORD)BaseAddress, v13, 0, 0LL, 0LL);
        v13 = 0LL;
      }
    }
    if ( !v13 )
    {
      v28 = -1073741819;
      goto LABEL_37;
    }
    if ( *(_BYTE *)(v8 - 1) != 5 )
    {
LABEL_16:
      v14 = 0;
LABEL_17:
      v15 = RtlpReAllocateHeap(BaseAddress);
      v17 = v15;
      if ( v15 )
      {
        v6 = v15;
        if ( v10 )
        {
          v6 = RtlpSetupExtendedBlock((_DWORD)BaseAddress, v12, v15, v16, v14, v10);
          RtlpCallInterceptRoutine(v10, (_DWORD)BaseAddress, v6, 6, v17);
        }
        return v6;
      }
      a4 -= v14;
      if ( v10 )
      {
        RtlSizeHeap(BaseAddress, 0, (PVOID)v8);
        v60 = RtlpSetupExtendedBlock((_DWORD)BaseAddress, v12, v8, v59, v14, v10);
        RtlpCallInterceptRoutine(v10, (_DWORD)BaseAddress, v60, 6, v8);
      }
      goto LABEL_36;
    }
    if ( *(char *)(v13 + 15) >= 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v33 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v13 + 8);
        if ( HIBYTE(v33) != (BYTE2(v33) ^ (unsigned __int8)(BYTE1(v33) ^ v33)) )
          goto LABEL_84;
      }
    }
    else if ( !(unsigned __int8)RtlpValidateLFHBlock(BaseAddress, v13) )
    {
      goto LABEL_84;
    }
    if ( *(char *)(v13 + 15) >= 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v36 = *(_DWORD *)(v13 + 8);
        LOWORD(v62) = v36;
        if ( (v36 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v62 = *((_DWORD *)BaseAddress + 34) ^ v36;
        v37 = v62;
      }
      else
      {
        v37 = *(_WORD *)(v13 + 8);
      }
      v35 = v37;
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v13 + 8) ^ (unsigned __int16)BaseAddress ^ (v13 >> 4)) )
        v34 = 0LL;
      else
        v34 = *(_QWORD *)(v13
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)BaseAddress ^ (unsigned int)(v13 >> 4)) >> 12));
      v35 = *(unsigned __int16 *)(v34 + 36);
    }
    if ( *(_BYTE *)(v13 + 15) == 4 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v38 = *(_DWORD *)(v13 + 8);
        LOWORD(v63) = v38;
        if ( (v38 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v63 = *((_DWORD *)BaseAddress + 34) ^ v38;
        v39 = v63;
      }
      else
      {
        v39 = *(_WORD *)(v13 + 8);
      }
      v40 = v35 + *(_QWORD *)(v13 - 16) - v39;
    }
    else
    {
      v40 = 16LL * v35;
    }
    if ( v40 + v13 >= v8 )
    {
      v10 = *(_DWORD *)(v8 - 8);
      if ( (v12 & 0x3C000102) != 0 )
        goto LABEL_16;
      v41 = *(_BYTE *)(v8 - 1);
      v42 = v8 - 16;
      if ( v41 == 5 )
      {
        v43 = 16 * *(unsigned __int8 *)(v42 + 14);
      }
      else if ( (v41 & 0x40) != 0 )
      {
        v43 = 16 * (v41 & 0x3F);
      }
      else
      {
        v43 = 0;
      }
      v44 = v43;
      v61 = v43;
      v45 = v43 + a4;
      if ( v45 < a4 )
      {
LABEL_36:
        v28 = -1073741801;
        goto LABEL_37;
      }
      a4 = v45;
      if ( *(_BYTE *)(v42 + 15) == 5 )
        v46 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14);
      else
        v46 = 0LL;
      if ( (int)RtlpCallInterceptRoutine(v10, (_DWORD)BaseAddress, v8, 5, v46) >= 0 )
      {
        v47 = *(_BYTE *)(v13 + 15);
        if ( v47 == 4 )
        {
          if ( (v12 & 1) == 0 && (BaseAddress[58] & 1) == 0 )
            RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            *(_DWORD *)(v13 + 8) ^= *((_DWORD *)BaseAddress + 34);
            if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
              RtlpAnalyzeHeapFailure(BaseAddress, v13);
          }
          v14 = v61;
          *(_WORD *)(v13 + 8) -= v61;
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
            *(_DWORD *)(v13 + 8) ^= *((_DWORD *)BaseAddress + 34);
          }
          if ( (v12 & 1) == 0 && (BaseAddress[58] & 1) == 0 )
            RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
        }
        else
        {
          if ( v47 == 5 )
          {
            v48 = *(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)BaseAddress[70];
          }
          else if ( (v47 & 0x40) != 0 )
          {
            v48 = *(unsigned __int16 *)(16LL * (v47 & 0x3F) + v13 + 12);
          }
          else if ( (v47 & 0x3F) == 0x3F )
          {
            if ( v47 >= 0 )
            {
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v51 = *(_DWORD *)(v13 + 8);
                LOWORD(v64) = v51;
                if ( (v51 & *((_DWORD *)BaseAddress + 31)) != 0 )
                  v64 = *((_DWORD *)BaseAddress + 34) ^ v51;
                v52 = v64;
              }
              else
              {
                v52 = *(_WORD *)(v13 + 8);
              }
              v50 = v52;
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4)) )
                v49 = 0LL;
              else
                v49 = *(_QWORD *)(v13
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12));
              v50 = *(unsigned __int16 *)(v49 + 36);
            }
            v48 = *(_QWORD *)(16LL * v50 + v13);
          }
          else
          {
            v48 = v47 & 0x3F;
          }
          v53 = *(char *)(v13 + 15) < 0 ? 0x80 : 0;
          if ( (*(_BYTE *)(v13 + 15) & 0x80) != 0 )
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4)) )
              v54 = 0LL;
            else
              v54 = *(_QWORD *)(v13
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12));
            v55 = *(unsigned __int16 *)(v54 + 36);
          }
          else
          {
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v56 = *(_DWORD *)(v13 + 8);
              LOWORD(v65) = v56;
              if ( (v56 & *((_DWORD *)BaseAddress + 31)) != 0 )
                v65 = *((_DWORD *)BaseAddress + 34) ^ v56;
              v57 = v65;
            }
            else
            {
              v57 = *(_WORD *)(v13 + 8);
            }
            v55 = v57;
          }
          v58 = v48 - v44;
          v14 = v61;
          if ( v58 >= 0x3F )
          {
            *(_QWORD *)(v13 + 16LL * v55) = v58;
            *(_BYTE *)(v13 + 15) = v53 | 0x3F;
          }
          else
          {
            *(_BYTE *)(v13 + 15) = v53 | v58;
          }
        }
        v8 = v13 + 16;
        goto LABEL_17;
      }
      v28 = -1073741819;
LABEL_37:
      NtCurrentTeb()->LastStatusValue = v28;
      v29 = NtCurrentTeb();
      v29->LastErrorValue = RtlNtStatusToDosError(v28);
      if ( (v12 & 4) != 0 )
      {
        ExceptionRecord.ExceptionCode = v28;
        ExceptionRecord.ExceptionAddress = RtlRaiseException;
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.NumberParameters = 1;
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionInformation[0] = a4;
        RtlRaiseException(&ExceptionRecord);
      }
      return v6;
    }
LABEL_84:
    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v13, v8, 0LL, 0LL);
    v28 = -1073741811;
    goto LABEL_37;
  }
  return RtlDebugReAllocateHeap(BaseAddress);
}

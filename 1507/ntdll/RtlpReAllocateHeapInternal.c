/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x18002DA50
 * Callers:
 *     RtlReAllocateHeap @ 0x18002DA20 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x18006A954 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpVirtReAllocateHeap @ 0x1800EBA84 (RtlpHpVirtReAllocateHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18002AB24 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpHpReAllocateHeap @ 0x180037B9C (RtlpHpReAllocateHeap.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180057FF0 (RtlpProbeUserBufferSafe.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 *     RtlpSetupExtendedBlock @ 0x1800DD648 (RtlpSetupExtendedBlock.c)
 *     RtlDebugReAllocateHeap @ 0x1800ECDE8 (RtlDebugReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 *     RtlpValidateLFHBlock @ 0x1800F0B70 (RtlpValidateLFHBlock.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(
        unsigned __int16 *BaseAddress,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int16 v8; // r13
  int v9; // r15d
  int v10; // eax
  int v11; // r14d
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rbx
  int v17; // eax
  struct _TEB *v18; // rcx
  int v19; // edx
  int v20; // r14d
  unsigned __int64 v21; // r9
  unsigned __int64 Heap; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  int v25; // r15d
  struct _TEB *v26; // rbx
  struct _TEB *v27; // rbx
  int v28; // r15d
  struct _TEB *v29; // rbx
  int v30; // ecx
  __int64 v31; // rax
  unsigned int v32; // edx
  int v33; // eax
  unsigned __int16 v34; // ax
  int v35; // eax
  unsigned __int16 v36; // ax
  __int64 v37; // rcx
  char v38; // al
  unsigned __int64 v39; // rcx
  unsigned __int16 v40; // ax
  __int64 v41; // r13
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  char v44; // cl
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned __int16 v49; // ax
  int v50; // r8d
  __int64 v51; // rax
  unsigned int v52; // ecx
  int v53; // eax
  unsigned __int16 v54; // ax
  unsigned __int64 v55; // rdx
  int v56; // r9d
  int v57; // eax
  unsigned __int16 v58; // [rsp+30h] [rbp-128h]
  int v59; // [rsp+40h] [rbp-118h]
  int v60; // [rsp+40h] [rbp-118h]
  int v61; // [rsp+40h] [rbp-118h]
  int v62; // [rsp+40h] [rbp-118h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v4 = 0LL;
  v6 = a3;
  v8 = 0;
  v9 = 0;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v27 = NtCurrentTeb();
    v27->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
  if ( *((_DWORD *)BaseAddress + 4) == -571548178 )
  {
    v17 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v19 = *((_DWORD *)BaseAddress + 10);
    v20 = v17;
    if ( v19 )
    {
      v18 = NtCurrentTeb();
      if ( v19 == LODWORD(v18->ClientId.UniqueThread) )
        v20 = v17 | 1;
    }
    if ( (RtlpHpAppCompatFlags & 2) == 0 )
      goto LABEL_18;
    if ( (_WORD)v6 || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v18, v6 >> 16) )
      v6 -= 16LL;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      v21 = a4 + 16;
      if ( a4 + 16 < a4 )
        v21 = a4;
    }
    else
    {
LABEL_18:
      v21 = a4;
    }
    Heap = RtlpHpReAllocateHeap(BaseAddress, (unsigned int)v20, v6, v21);
    v24 = Heap;
    if ( Heap )
    {
      if ( Heap != -1LL )
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0
          && ((_WORD)Heap || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v23, Heap >> 16)) )
        {
          v24 += 16LL;
        }
        return v24;
      }
      v28 = -1073741819;
    }
    else
    {
      v28 = -1073741801;
    }
    v24 = 0LL;
    NtCurrentTeb()->LastStatusValue = v28;
    v29 = NtCurrentTeb();
    v29->LastErrorValue = RtlNtStatusToDosError(v28);
    if ( v20 < 0 || *((int *)BaseAddress + 5) < 0 )
    {
      ExceptionRecord.ExceptionCode = v28;
      ExceptionRecord.ExceptionAddress = RtlRaiseException;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 1;
      ExceptionRecord.ExceptionFlags = 0;
      ExceptionRecord.ExceptionInformation[0] = a4;
      RtlRaiseException(&ExceptionRecord);
    }
    return v24;
  }
  v10 = *((_DWORD *)BaseAddress + 29);
  v11 = v10 | a2;
  if ( (v10 & 0x1000000) == 0 )
  {
    if ( (BaseAddress[60] & 1) != 0 )
    {
      v12 = RtlpProbeUserBufferSafe(BaseAddress, a3);
    }
    else if ( (a3 & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, (_DWORD)BaseAddress, a3, 0, 0LL, 0LL);
      v12 = 0LL;
    }
    else
    {
      v12 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
      if ( (*(_BYTE *)(v12 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, (_DWORD)BaseAddress, v12, 0, 0LL, 0LL);
        v12 = 0LL;
      }
    }
    if ( !v12 )
    {
      v25 = -1073741819;
      goto LABEL_28;
    }
    if ( *(_BYTE *)(v6 - 1) != 5 )
    {
LABEL_12:
      v13 = RtlpReAllocateHeap(BaseAddress);
      v15 = v13;
      if ( v13 )
      {
        v4 = v13;
        if ( v9 )
        {
          v4 = RtlpSetupExtendedBlock((_DWORD)BaseAddress, v11, v13, v14, v8, v9);
          RtlpCallInterceptRoutine(v9, (_DWORD)BaseAddress, v4, 6, v15);
        }
        return v4;
      }
      a4 -= v8;
      if ( v9 )
      {
        RtlSizeHeap(BaseAddress, 0, (PVOID)v6);
        v57 = RtlpSetupExtendedBlock((_DWORD)BaseAddress, v11, v6, v56, v8, v9);
        RtlpCallInterceptRoutine(v9, (_DWORD)BaseAddress, v57, 6, v6);
      }
      goto LABEL_27;
    }
    if ( *(char *)(v12 + 15) >= 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v30 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v12 + 8);
        if ( HIBYTE(v30) != (BYTE2(v30) ^ (unsigned __int8)(BYTE1(v30) ^ v30)) )
          goto LABEL_75;
      }
    }
    else if ( !(unsigned __int8)RtlpValidateLFHBlock(BaseAddress, v12) )
    {
      goto LABEL_75;
    }
    if ( *(char *)(v12 + 15) >= 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v33 = *(_DWORD *)(v12 + 8);
        LOWORD(v59) = v33;
        if ( (v33 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v59 = *((_DWORD *)BaseAddress + 34) ^ v33;
        v34 = v59;
      }
      else
      {
        v34 = *(_WORD *)(v12 + 8);
      }
      v32 = v34;
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v12 + 8) ^ (unsigned __int16)BaseAddress ^ (v12 >> 4)) )
        v31 = 0LL;
      else
        v31 = *(_QWORD *)(v12
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)BaseAddress ^ (unsigned int)(v12 >> 4)) >> 12));
      v32 = *(unsigned __int16 *)(v31 + 36);
    }
    if ( *(_BYTE *)(v12 + 15) == 4 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v35 = *(_DWORD *)(v12 + 8);
        LOWORD(v60) = v35;
        if ( (v35 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v60 = *((_DWORD *)BaseAddress + 34) ^ v35;
        v36 = v60;
      }
      else
      {
        v36 = *(_WORD *)(v12 + 8);
      }
      v37 = v32 + *(_QWORD *)(v12 - 16) - v36;
    }
    else
    {
      v37 = 16LL * v32;
    }
    if ( v37 + v12 >= v6 )
    {
      v9 = *(_DWORD *)(v6 - 8);
      if ( (v11 & 0x3C000102) != 0 )
        goto LABEL_12;
      v38 = *(_BYTE *)(v6 - 1);
      v39 = v6 - 16;
      if ( v38 == 5 )
      {
        v40 = 16 * *(unsigned __int8 *)(v39 + 14);
      }
      else if ( (v38 & 0x40) != 0 )
      {
        v40 = 16 * (v38 & 0x3F);
      }
      else
      {
        v40 = 0;
      }
      v41 = v40;
      v58 = v40;
      v42 = a4 + v40;
      if ( v42 < a4 )
      {
LABEL_27:
        v25 = -1073741801;
        goto LABEL_28;
      }
      a4 = v42;
      if ( *(_BYTE *)(v39 + 15) == 5 )
        v43 = v6 - 16LL * *(unsigned __int8 *)(v6 - 16 + 14);
      else
        v43 = 0LL;
      if ( (int)RtlpCallInterceptRoutine(v9, (_DWORD)BaseAddress, v6, 5, v43) >= 0 )
      {
        v44 = *(_BYTE *)(v12 + 15);
        if ( v44 == 4 )
        {
          if ( (v11 & 1) == 0 && (BaseAddress[58] & 1) == 0 )
            RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
            if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
              RtlpAnalyzeHeapFailure(BaseAddress, v12);
          }
          v8 = v58;
          *(_WORD *)(v12 + 8) -= v58;
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
            *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
          }
          if ( (v11 & 1) == 0 && (BaseAddress[58] & 1) == 0 )
            RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
        }
        else
        {
          if ( v44 == 5 )
          {
            v45 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)BaseAddress[70];
          }
          else if ( (v44 & 0x40) != 0 )
          {
            v45 = *(unsigned __int16 *)(16LL * (v44 & 0x3F) + v12 + 12);
          }
          else if ( (v44 & 0x3F) == 0x3F )
          {
            if ( v44 >= 0 )
            {
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v48 = *(_DWORD *)(v12 + 8);
                LOWORD(v61) = v48;
                if ( (v48 & *((_DWORD *)BaseAddress + 31)) != 0 )
                  v61 = *((_DWORD *)BaseAddress + 34) ^ v48;
                v49 = v61;
              }
              else
              {
                v49 = *(_WORD *)(v12 + 8);
              }
              v47 = v49;
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4)) )
                v46 = 0LL;
              else
                v46 = *(_QWORD *)(v12
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
              v47 = *(unsigned __int16 *)(v46 + 36);
            }
            v45 = *(_QWORD *)(16LL * v47 + v12);
          }
          else
          {
            v45 = v44 & 0x3F;
          }
          v50 = *(char *)(v12 + 15) < 0 ? 0x80 : 0;
          if ( (*(_BYTE *)(v12 + 15) & 0x80) != 0 )
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4)) )
              v51 = 0LL;
            else
              v51 = *(_QWORD *)(v12
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
            v52 = *(unsigned __int16 *)(v51 + 36);
          }
          else
          {
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v53 = *(_DWORD *)(v12 + 8);
              LOWORD(v62) = v53;
              if ( (v53 & *((_DWORD *)BaseAddress + 31)) != 0 )
                v62 = *((_DWORD *)BaseAddress + 34) ^ v53;
              v54 = v62;
            }
            else
            {
              v54 = *(_WORD *)(v12 + 8);
            }
            v52 = v54;
          }
          v55 = v45 - v41;
          v8 = v58;
          if ( v55 >= 0x3F )
          {
            *(_QWORD *)(v12 + 16LL * v52) = v55;
            *(_BYTE *)(v12 + 15) = v50 | 0x3F;
          }
          else
          {
            *(_BYTE *)(v12 + 15) = v50 | v55;
          }
        }
        v6 = v12 + 16;
        goto LABEL_12;
      }
      v25 = -1073741819;
LABEL_28:
      NtCurrentTeb()->LastStatusValue = v25;
      v26 = NtCurrentTeb();
      v26->LastErrorValue = RtlNtStatusToDosError(v25);
      if ( (v11 & 4) != 0 )
      {
        ExceptionRecord.ExceptionCode = v25;
        ExceptionRecord.ExceptionAddress = RtlRaiseException;
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.NumberParameters = 1;
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionInformation[0] = a4;
        RtlRaiseException(&ExceptionRecord);
      }
      return v4;
    }
LABEL_75:
    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v12, v6, 0LL, 0LL);
    v25 = -1073741811;
    goto LABEL_28;
  }
  return RtlDebugReAllocateHeap(BaseAddress);
}

/*
 * XREFs of RtlCreateHeap @ 0x18002BA20
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180007570 (RtlDetectHeapLeaks.c)
 *     CsrpConnectToServer @ 0x180075364 (CsrpConnectToServer.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
 *     RtlHeapTrkInitialize @ 0x18008F3E0 (RtlHeapTrkInitialize.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     RtlDebugCreateHeap @ 0x1800FA2A0 (RtlDebugCreateHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DFC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlInitializeCriticalSectionEx @ 0x18002B290 (RtlInitializeCriticalSectionEx.c)
 *     RtlpCreateHeapEncoding @ 0x18002B974 (RtlpCreateHeapEncoding.c)
 *     RtlpMoveHeapBetweenLists @ 0x18002D954 (RtlpMoveHeapBetweenLists.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180041770 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpPopulateListIndex @ 0x18004CB3C (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCCC (RtlpInitializeHeapSegment.c)
 *     RtlDeleteCriticalSection @ 0x1800523B0 (RtlDeleteCriticalSection.c)
 *     RtlpHpSegHeapDestroy @ 0x180052528 (RtlpHpSegHeapDestroy.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     RtlpHpSegHeapCreate @ 0x18007F470 (RtlpHpSegHeapCreate.c)
 *     RtlpHpConvertCreationFlags @ 0x180087394 (RtlpHpConvertCreationFlags.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18008F240 (RtlpGetHeapInterceptorIndex.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1800F7D80 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x1800F7DA0 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x1800F90C8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x1800F920C (RtlpLogHeapCreateEvent.c)
 *     RtlDebugCreateHeap @ 0x1800FA2A0 (RtlDebugCreateHeap.c)
 */

__int64 __fastcall RtlCreateHeap(int a1, char *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdi
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned int NtGlobalFlag; // r12d
  unsigned int v13; // esi
  struct _PEB *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  int v19; // r13d
  __int64 v20; // rax
  void *v21; // r12
  char *v22; // rdi
  char *v23; // rdx
  char *v24; // r14
  __int64 v25; // rdi
  unsigned int v26; // r13d
  int v27; // r9d
  __int64 v28; // r11
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  unsigned __int64 v39; // rdi
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v41; // r11
  _QWORD *v42; // [rsp+40h] [rbp-1A8h] BYREF
  void *v43; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v44; // [rsp+50h] [rbp-198h] BYREF
  int v45; // [rsp+58h] [rbp-190h]
  unsigned __int64 v46; // [rsp+60h] [rbp-188h] BYREF
  char *v47; // [rsp+68h] [rbp-180h] BYREF
  __int64 v48; // [rsp+70h] [rbp-178h] BYREF
  __int64 v49; // [rsp+78h] [rbp-170h] BYREF
  unsigned __int64 v50; // [rsp+80h] [rbp-168h] BYREF
  __int64 v51; // [rsp+88h] [rbp-160h]
  char *v52; // [rsp+98h] [rbp-150h]
  __int64 v53; // [rsp+A0h] [rbp-148h]
  void *v54; // [rsp+A8h] [rbp-140h] BYREF
  unsigned __int64 v55; // [rsp+C0h] [rbp-128h]
  int v56; // [rsp+C8h] [rbp-120h]
  char v57; // [rsp+CCh] [rbp-11Ch]
  char v58[16]; // [rsp+D8h] [rbp-110h] BYREF
  unsigned __int64 v59; // [rsp+E8h] [rbp-100h]
  _OWORD v60[6]; // [rsp+100h] [rbp-E8h] BYREF
  char SystemInformation[40]; // [rsp+160h] [rbp-88h] BYREF
  __int64 v62; // [rsp+188h] [rbp-60h]

  v6 = a4;
  v51 = a4;
  v52 = a2;
  v10 = a5;
  v43 = (void *)a5;
  v53 = a5;
  v11 = a6;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v45 = 0;
  v42 = 0LL;
  if ( dword_18014C3F8 && !a2 && !a5 )
  {
    v34 = _guard_dispatch_icall_fptr();
    if ( v34 )
      goto LABEL_87;
    if ( a6 != -1 )
      goto LABEL_131;
    v11 = 0LL;
    v6 = v51;
    v10 = (__int64)v43;
  }
  v13 = a1 & 0xF1FFFFFF;
  if ( (RtlpHpHeapFeatures & 1) != 0 && (v13 & 2) != 0 && !a2 )
  {
    if ( !v11 )
      goto LABEL_110;
    if ( *(_QWORD *)(v11 + 8) || *(_QWORD *)(v11 + 16) || *(_QWORD *)(v11 + 48) || (v38 = 1, *(_QWORD *)(v11 + 72)) )
      v38 = 0;
    if ( v38 )
    {
LABEL_110:
      if ( !v10 )
      {
        if ( !a3 )
          a3 = v6;
        if ( v6 > a3 )
          v6 = a3;
        v36 = RtlpHpConvertCreationFlags(v13, NtGlobalFlag);
        v37 = RtlpHpSegHeapCreate(v36, a3, v6);
        v34 = v37;
        if ( !v37 )
          goto LABEL_87;
        RtlpMoveHeapBetweenLists(v37, 0LL, 1LL);
        if ( *(_WORD *)(v34 + 36) )
          goto LABEL_87;
        RtlpHpSegHeapDestroy(v34);
        goto LABEL_131;
      }
    }
  }
  if ( (v13 & 0x10000000) == 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( (v13 & 0xFFF80F00) == 0 )
        goto LABEL_7;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
      RtlpHeapHandleError(2LL);
    }
    if ( (v13 & 0xFFF80F00) != 0 )
      v13 &= 0x7F0FFu;
  }
LABEL_7:
  memset(v60, 0, sizeof(v60));
  if ( v11 && *(_DWORD *)v11 == 96 )
  {
    v60[0] = *(_OWORD *)v11;
    v60[1] = *(_OWORD *)(v11 + 16);
    v60[2] = *(_OWORD *)(v11 + 32);
    v60[3] = *(_OWORD *)(v11 + 48);
    v60[4] = *(_OWORD *)(v11 + 64);
    v60[5] = *(_OWORD *)(v11 + 80);
  }
  if ( (NtGlobalFlag & 0x10) != 0 )
    v13 |= 0x20u;
  if ( (NtGlobalFlag & 0x20) != 0 )
    v13 |= 0x40u;
  if ( (NtGlobalFlag & 0x200000) != 0 )
    v13 |= 0x80u;
  if ( (NtGlobalFlag & 0x40) != 0 )
    v13 |= 0x40000000u;
  if ( (NtGlobalFlag & 0x80) != 0 )
    v13 |= 0x20000000u;
  if ( (NtGlobalFlag & 0x1000) != 0 )
    v13 |= 0x8000000u;
  v14 = NtCurrentPeb();
  if ( !*((_QWORD *)&v60[0] + 1) )
    *((_QWORD *)&v60[0] + 1) = v14->HeapSegmentReserve;
  if ( !*(_QWORD *)&v60[1] )
    *(_QWORD *)&v60[1] = v14->HeapSegmentCommit;
  if ( !*((_QWORD *)&v60[1] + 1) )
    *((_QWORD *)&v60[1] + 1) = v14->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v60[2] )
    *(_QWORD *)&v60[2] = v14->HeapDeCommitTotalFreeThreshold;
  v15 = qword_180153038;
  if ( !qword_180153038 )
  {
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
      goto LABEL_131;
    v15 = v62;
    qword_180153038 = v62;
  }
  if ( !*((_QWORD *)&v60[2] + 1) )
    *((_QWORD *)&v60[2] + 1) = v15 - 69632;
  v16 = *(_QWORD *)&v60[3];
  if ( (unsigned __int64)(*(_QWORD *)&v60[3] - 1LL) > 0xFEFFF )
    v16 = 1044480LL;
  *(_QWORD *)&v60[3] = v16;
  if ( v6 )
    v17 = (v6 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v17 = 0x2000LL;
  if ( a3 )
    v18 = (a3 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v18 = (v17 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v44 = v18;
  if ( v17 > v18 )
    v17 = v18;
  v46 = v17;
  if ( (v13 & 2) == 0 || a2 )
  {
    v51 = 0LL;
  }
  else
  {
    v51 = 4096LL;
    v45 = 2;
    if ( v18 - 4096 < v17 )
    {
      v18 = (v18 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v44 = v18;
    }
  }
  if ( !v17 || !v18 )
    goto LABEL_131;
  LOBYTE(v16) = (v13 & 0x61000000) != 0;
  if ( ((unsigned __int8)v16 & ((v13 & 0x10000000) == 0)) != 0 )
    return RtlDebugCreateHeap(v13, (_DWORD)a2, v18, v17, (__int64)v43, (__int64)v60);
  v19 = 672;
  v20 = (__int64)v43;
  if ( (v13 & 1) != 0 )
  {
    if ( v43 )
    {
      v34 = 0LL;
      goto LABEL_88;
    }
    goto LABEL_49;
  }
  if ( !v43 )
  {
    v19 = 712;
LABEL_49:
    v21 = 0LL;
    goto LABEL_50;
  }
  v13 |= 0x80000000;
  v21 = v43;
LABEL_50:
  if ( a2 )
  {
    if ( *((_QWORD *)&v60[4] + 1) )
    {
      v16 = *((_QWORD *)&v60[3] + 1);
      if ( !*((_QWORD *)&v60[3] + 1)
        || !*(_QWORD *)&v60[4]
        || *((_QWORD *)&v60[3] + 1) > *(_QWORD *)&v60[4]
        || (v13 & 2) != 0 )
      {
        goto LABEL_151;
      }
      v47 = a2;
      v24 = &a2[*((_QWORD *)&v60[3] + 1)];
      v44 = *(_QWORD *)&v60[4];
      memset(a2, 0, 0x1000uLL);
      v23 = a2;
    }
    else
    {
      if ( (int)ZwQueryVirtualMemory(-1LL, a2, 0LL, &v54) < 0 )
        goto LABEL_151;
      v24 = (char *)v54;
      if ( v54 != a2 || v56 == 0x10000 )
        goto LABEL_151;
      v23 = (char *)v54;
      v47 = (char *)v54;
      if ( v56 == 4096 )
      {
        if ( (v13 & 0x40000) != 0 && (v57 & 0x40) == 0 )
          goto LABEL_151;
        memset(v54, 0, 0x1000uLL);
        if ( (int)ZwQueryVirtualMemory(-1LL, a2, 3LL, v58) < 0 )
          goto LABEL_151;
        v44 = v59;
        v46 = v55;
        v23 = v47;
        v24 = &v47[v55];
      }
      else
      {
        v44 = v55;
        v16 = v46;
        if ( v46 > v55 )
          v16 = v55;
        v46 = v16;
        if ( v16 < 0x2000 )
          goto LABEL_151;
      }
    }
    v45 |= 1u;
    v22 = a2;
    v42 = a2;
    goto LABEL_58;
  }
  v49 = 0LL;
  v48 = 0LL;
  if ( !*((_QWORD *)&v60[4] + 1) )
  {
    v48 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
    v50 = v44 + v48;
    if ( v44 + v48 < v44 )
    {
      v50 = v44;
      v48 = 0LL;
    }
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v49, 0LL, &v50, 0x2000, (v13 & 0x40000) != 0 ? 64 : 4) < 0 )
      goto LABEL_151;
    v22 = (char *)v49;
    v42 = (_QWORD *)v49;
    v44 = v50;
    if ( v48 )
    {
      RtlpSecMemFreeVirtualMemory(v16, &v49, &v48, 0x8000LL);
      v22 = (char *)(v48 + v49);
      v42 = (_QWORD *)(v48 + v49);
      v44 = v50 - v48;
    }
    v23 = v22;
    v47 = v22;
    v24 = v22;
LABEL_58:
    if ( v23 == v24 )
    {
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v47, 0LL, &v46, 4096, (v13 & 0x40000) != 0 ? 64 : 4) < 0 )
        goto LABEL_151;
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(v42, v47, v46, 1LL);
      v24 += v46;
      v22 = (char *)v42;
    }
    v25 = (__int64)(v22 + 672);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v39 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v42[41] = v39;
      v19 += 2064;
      v25 = v39 + 2064;
      v13 |= 0x4000000u;
    }
    v26 = (v19 + 15) & 0xFFFFFFF0;
    *((_WORD *)v42 + 4) = v26 >> 4;
    *((_BYTE *)v42 + 10) = 1;
    *((_BYTE *)v42 + 15) = 1;
    *((_DWORD *)v42 + 38) = -285217025;
    *((_DWORD *)v42 + 28) = v13 & 0xEFFFFFFF;
    *((_DWORD *)v42 + 36) = 0;
    memset(v42 + 67, 0, 0x78uLL);
    RtlpCreateHeapEncoding((__int64)v42);
    *((_DWORD *)v42 + 154) = 1;
    v28 = (__int64)v42;
    if ( (v42[14] & 0x8000000) != 0 )
    {
      HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
      *(_DWORD *)(v41 + 144) = HeapInterceptorIndex;
      *((_DWORD *)v42 + 28) &= ~0x40u;
      v28 = (__int64)v42;
    }
    *(_DWORD *)(v28 + 116) = v13 & 0x6001007D;
    *((_WORD *)v42 + 105) = v25 - (_WORD)v42;
    v42[27] = 0LL;
    v29 = v42 + 42;
    v42[43] = v42 + 42;
    *v29 = v29;
    v30 = v42 + 34;
    v42[35] = v42 + 34;
    *v30 = v30;
    v31 = v42 + 36;
    v42[37] = v42 + 36;
    *v31 = v31;
    v32 = v42 + 30;
    v42[31] = v42 + 30;
    *v32 = v32;
    if ( v21 || (v13 & 1) != 0 )
    {
LABEL_70:
      v42[44] = v21;
      *((_DWORD *)v42 + 30) |= 0x80000000;
      if ( (unsigned __int8)RtlpInitializeHeapSegment(
                              (_DWORD)v42,
                              (_DWORD)v42,
                              v26 + 1104,
                              v27,
                              v45,
                              (__int64)v47,
                              (__int64)v24,
                              (__int64)&v47[v44 - v51]) )
      {
        if ( a2 )
          memset((void *)v25, 0, 0x80uLL);
        *(_DWORD *)(v25 + 8) = 128;
        *(_QWORD *)(v25 + 40) = v25 + 56;
        *(_QWORD *)(v25 + 32) = v42 + 42;
        *(_QWORD *)(v25 + 48) = v25 + 72;
        RtlpPopulateListIndex(v42, v25);
        *((_WORD *)v42 + 104) = 0;
        v42[20] = *((_QWORD *)&v60[0] + 1);
        v42[21] = *(_QWORD *)&v60[1];
        v42[22] = *((_QWORD *)&v60[1] + 1) >> 4;
        v42[23] = *(_QWORD *)&v60[2] >> 4;
        v42[25] = *((_QWORD *)&v60[2] + 1);
        *((_DWORD *)v42 + 37) = (unsigned __int64)(*(_QWORD *)&v60[3] + 15LL) >> 4;
        v42[45] = RtlpHeapKey ^ *((_QWORD *)&v60[4] + 1);
        *((_DWORD *)v42 + 164) = 4;
        v42[83] = 2088960LL;
        if ( (RtlpDisableHeapLookaside & 1) != 0 )
          *((_DWORD *)v42 + 30) = 1;
        v42[32] = 31LL;
        v42[33] = -16LL;
        v33 = (__int64)v42;
        if ( (v42[14] & 0x20) != 0 )
        {
          v42[32] += 16LL;
          v33 = (__int64)v42;
        }
        *(_QWORD *)(v33 + 376) = 0LL;
        *((_WORD *)v42 + 192) = 0;
        *((_BYTE *)v42 + 386) = 0;
        *((_BYTE *)v42 + 387) = 0;
        v42[40] = 0LL;
        if ( (v13 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
        {
LABEL_80:
          RtlpMoveHeapBetweenLists(v42, 0LL, 1LL);
          if ( *((_WORD *)v42 + 104) )
          {
            LOBYTE(v16) = MEMORY[0x7FFE0380];
            if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapCreateEvent((_DWORD)v42, v13, v44, v46, MEMORY[0x7FFE0380]);
            if ( MEMORY[0x7FFE038A] )
              RtlpLogHeapCreateEvent((_DWORD)v42, v13, v44, v46, MEMORY[0x7FFE038A]);
            if ( MEMORY[0x7FFE0388] )
              RtlpHeapLogRangeCreate(v42, v44, v13);
            *((_DWORD *)v42 + 30) &= ~0x80000000;
            v42[46] = 0LL;
            v34 = (__int64)v42;
            v42 = 0LL;
            goto LABEL_87;
          }
          goto LABEL_151;
        }
        v42[49] = RtlAllocateHeap((__int64)v42, 0x80000Au, 0x100uLL);
        v16 = v42[49];
        if ( v16 )
        {
          *(_BYTE *)(v16 - 1) = 1;
          *((_WORD *)v42 + 200) = 128;
          goto LABEL_80;
        }
      }
LABEL_151:
      v34 = 0LL;
      v20 = (__int64)v43;
      goto LABEL_89;
    }
    v21 = (void *)v25;
    if ( (int)RtlInitializeCriticalSectionEx(v25, 0, 0x10000000) >= 0 )
    {
      v25 += 40LL;
      goto LABEL_70;
    }
LABEL_131:
    v34 = 0LL;
LABEL_87:
    v20 = (__int64)v43;
LABEL_88:
    v21 = 0LL;
    goto LABEL_89;
  }
  v34 = 0LL;
LABEL_89:
  if ( v21 && v21 != (void *)v20 )
    RtlDeleteCriticalSection(v21);
  if ( v42 )
  {
    if ( !a2 )
    {
      v44 = 0LL;
      RtlpSecMemFreeVirtualMemory(v16, &v42, &v44, 0x8000LL);
    }
  }
  return v34;
}

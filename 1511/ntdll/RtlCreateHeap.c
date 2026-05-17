/*
 * XREFs of RtlCreateHeap @ 0x180055310
 * Callers:
 *     CsrpConnectToServer @ 0x1800520A4 (CsrpConnectToServer.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800551A8 (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x18005B7E0 (RtlDetectHeapLeaks.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     RtlHeapTrkInitialize @ 0x1800E6560 (RtlHeapTrkInitialize.c)
 *     RtlDebugCreateHeap @ 0x1800EED84 (RtlDebugCreateHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpHpSegHeapDestroy @ 0x180050600 (RtlpHpSegHeapDestroy.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180052EB0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlInitializeCriticalSectionEx @ 0x180055050 (RtlInitializeCriticalSectionEx.c)
 *     RtlpMoveHeapBetweenLists @ 0x180055FE4 (RtlpMoveHeapBetweenLists.c)
 *     RtlpPopulateListIndex @ 0x1800563E8 (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x180057998 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeapEncoding @ 0x180057F88 (RtlpCreateHeapEncoding.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18005802C (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 *     RtlDeleteCriticalSection @ 0x180059D20 (RtlDeleteCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpHpConvertCreationFlags @ 0x180082520 (RtlpHpConvertCreationFlags.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A5780 (NtQuerySystemInformation.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 *     RtlDebugCreateHeap @ 0x1800EED84 (RtlDebugCreateHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1800F0D70 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapHandleError @ 0x1800F0DA8 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x1800F0DC8 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x1800F1708 (RtlpLogHeapCreateEvent.c)
 */

__int64 __fastcall RtlCreateHeap(unsigned int a1, char *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
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
  char *v22; // rbx
  char *v23; // rdx
  char *v24; // r14
  __int64 v25; // rbx
  unsigned int v26; // r13d
  int v27; // r9d
  __int64 v28; // r11
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 (__fastcall *v38)(_QWORD, _QWORD, unsigned __int64, __int64, _QWORD, __int64); // rbx
  int v39; // eax
  unsigned __int64 v40; // rbx
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v42; // r11
  _QWORD *v43; // [rsp+40h] [rbp-1A8h] BYREF
  void *v44; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v45; // [rsp+50h] [rbp-198h] BYREF
  int v46; // [rsp+58h] [rbp-190h]
  unsigned __int64 v47; // [rsp+60h] [rbp-188h] BYREF
  char *v48; // [rsp+68h] [rbp-180h] BYREF
  __int64 v49; // [rsp+70h] [rbp-178h] BYREF
  __int64 v50; // [rsp+78h] [rbp-170h]
  unsigned __int64 v51; // [rsp+80h] [rbp-168h] BYREF
  _QWORD v52[4]; // [rsp+88h] [rbp-160h] BYREF
  void *v53; // [rsp+A8h] [rbp-140h] BYREF
  unsigned __int64 v54; // [rsp+C0h] [rbp-128h]
  int v55; // [rsp+C8h] [rbp-120h]
  char v56; // [rsp+CCh] [rbp-11Ch]
  char v57[16]; // [rsp+D8h] [rbp-110h] BYREF
  unsigned __int64 v58; // [rsp+E8h] [rbp-100h]
  _OWORD v59[6]; // [rsp+100h] [rbp-E8h] BYREF
  char SystemInformation[40]; // [rsp+160h] [rbp-88h] BYREF
  __int64 v61; // [rsp+188h] [rbp-60h]

  v6 = a4;
  v50 = a4;
  v52[3] = a2;
  v10 = a5;
  v44 = (void *)a5;
  v52[1] = a5;
  v11 = a6;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v46 = 0;
  v43 = 0LL;
  if ( dword_1801420A8 && !a2 && !a5 )
  {
    v38 = (__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64, __int64, _QWORD, __int64))qword_1801420D8;
    _guard_check_icall_fptr();
    v34 = v38(a1, 0LL, a3, v50, 0LL, a6);
    if ( v34 )
      goto LABEL_87;
    if ( a6 != -1 )
      goto LABEL_131;
    v11 = 0LL;
    v6 = v50;
    v10 = (__int64)v44;
  }
  v13 = a1 & 0xF1FFFFFF;
  if ( (RtlpHpHeapFeatures & 1) != 0 && (v13 & 2) != 0 && !a2 )
  {
    if ( !v11 )
      goto LABEL_110;
    if ( *(_QWORD *)(v11 + 8) || *(_QWORD *)(v11 + 16) || *(_QWORD *)(v11 + 48) || (v39 = 1, *(_QWORD *)(v11 + 72)) )
      v39 = 0;
    if ( v39 )
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
  memset(v59, 0, sizeof(v59));
  if ( v11 && *(_DWORD *)v11 == 96 )
  {
    v59[0] = *(_OWORD *)v11;
    v59[1] = *(_OWORD *)(v11 + 16);
    v59[2] = *(_OWORD *)(v11 + 32);
    v59[3] = *(_OWORD *)(v11 + 48);
    v59[4] = *(_OWORD *)(v11 + 64);
    v59[5] = *(_OWORD *)(v11 + 80);
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
  if ( !*((_QWORD *)&v59[0] + 1) )
    *((_QWORD *)&v59[0] + 1) = v14->HeapSegmentReserve;
  if ( !*(_QWORD *)&v59[1] )
    *(_QWORD *)&v59[1] = v14->HeapSegmentCommit;
  if ( !*((_QWORD *)&v59[1] + 1) )
    *((_QWORD *)&v59[1] + 1) = v14->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v59[2] )
    *(_QWORD *)&v59[2] = v14->HeapDeCommitTotalFreeThreshold;
  v15 = qword_180145F50;
  if ( !qword_180145F50 )
  {
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
      goto LABEL_131;
    v15 = v61;
    qword_180145F50 = v61;
  }
  if ( !*((_QWORD *)&v59[2] + 1) )
    *((_QWORD *)&v59[2] + 1) = v15 - 69632;
  v16 = *(_QWORD *)&v59[3];
  if ( (unsigned __int64)(*(_QWORD *)&v59[3] - 1LL) > 0xFEFFF )
    v16 = 1044480LL;
  *(_QWORD *)&v59[3] = v16;
  if ( v6 )
    v17 = (v6 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v17 = 0x2000LL;
  if ( a3 )
    v18 = (a3 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v18 = (v17 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v45 = v18;
  if ( v17 > v18 )
    v17 = v18;
  v47 = v17;
  if ( (v13 & 2) == 0 || a2 )
  {
    v50 = 0LL;
  }
  else
  {
    v50 = 4096LL;
    v46 = 2;
    if ( v18 - 4096 < v17 )
    {
      v18 = (v18 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v45 = v18;
    }
  }
  if ( !v17 || !v18 )
    goto LABEL_131;
  LOBYTE(v16) = (v13 & 0x61000000) != 0;
  if ( ((unsigned __int8)v16 & ((v13 & 0x10000000) == 0)) != 0 )
    return RtlDebugCreateHeap(v13, (_DWORD)a2, v18, v17, (__int64)v44, (__int64)v59);
  v19 = 664;
  v20 = (__int64)v44;
  if ( (v13 & 1) != 0 )
  {
    if ( v44 )
    {
      v34 = 0LL;
      goto LABEL_88;
    }
    goto LABEL_49;
  }
  if ( !v44 )
  {
    v19 = 704;
LABEL_49:
    v21 = 0LL;
    goto LABEL_50;
  }
  v13 |= 0x80000000;
  v21 = v44;
LABEL_50:
  if ( a2 )
  {
    if ( *((_QWORD *)&v59[4] + 1) )
    {
      v16 = *((_QWORD *)&v59[3] + 1);
      if ( !*((_QWORD *)&v59[3] + 1)
        || !*(_QWORD *)&v59[4]
        || *((_QWORD *)&v59[3] + 1) > *(_QWORD *)&v59[4]
        || (v13 & 2) != 0 )
      {
        goto LABEL_151;
      }
      v48 = a2;
      v24 = &a2[*((_QWORD *)&v59[3] + 1)];
      v45 = *(_QWORD *)&v59[4];
      memset(a2, 0, 0x1000uLL);
      v23 = a2;
    }
    else
    {
      if ( (int)ZwQueryVirtualMemory(-1LL, a2, 0LL, &v53) < 0 )
        goto LABEL_151;
      v24 = (char *)v53;
      if ( v53 != a2 || v55 == 0x10000 )
        goto LABEL_151;
      v23 = (char *)v53;
      v48 = (char *)v53;
      if ( v55 == 4096 )
      {
        if ( (v13 & 0x40000) != 0 && (v56 & 0x40) == 0 )
          goto LABEL_151;
        memset(v53, 0, 0x1000uLL);
        if ( (int)ZwQueryVirtualMemory(-1LL, a2, 3LL, v57) < 0 )
          goto LABEL_151;
        v45 = v58;
        v47 = v54;
        v23 = v48;
        v24 = &v48[v54];
      }
      else
      {
        v45 = v54;
        v16 = v47;
        if ( v47 > v54 )
          v16 = v54;
        v47 = v16;
        if ( v16 < 0x2000 )
          goto LABEL_151;
      }
    }
    v46 |= 1u;
    v22 = a2;
    v43 = a2;
    goto LABEL_58;
  }
  v52[0] = 0LL;
  v49 = 0LL;
  if ( !*((_QWORD *)&v59[4] + 1) )
  {
    v49 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
    v51 = v45 + v49;
    if ( v45 + v49 < v45 )
    {
      v51 = v45;
      v49 = 0LL;
    }
    if ( (int)ZwAllocateVirtualMemory(-1LL, v52, 0LL, &v51, 0x2000, (v13 & 0x40000) != 0 ? 64 : 4) < 0 )
      goto LABEL_151;
    v22 = (char *)v52[0];
    v43 = (_QWORD *)v52[0];
    v45 = v51;
    if ( v49 )
    {
      RtlpSecMemFreeVirtualMemory(v16, v52, &v49, 0x8000LL);
      v22 = (char *)(v49 + v52[0]);
      v43 = (_QWORD *)(v49 + v52[0]);
      v45 = v51 - v49;
    }
    v23 = v22;
    v48 = v22;
    v24 = v22;
LABEL_58:
    if ( v23 == v24 )
    {
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v48, 0LL, &v47, 4096, (v13 & 0x40000) != 0 ? 64 : 4) < 0 )
        goto LABEL_151;
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(v43, v48, v47, 1LL);
      v24 += v47;
      v22 = (char *)v43;
    }
    v25 = (__int64)(v22 + 664);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v40 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v43[41] = v40;
      v19 += 2064;
      v25 = v40 + 2064;
      v13 |= 0x4000000u;
    }
    v26 = (v19 + 15) & 0xFFFFFFF0;
    *((_WORD *)v43 + 4) = v26 >> 4;
    *((_BYTE *)v43 + 10) = 1;
    *((_BYTE *)v43 + 15) = 1;
    *((_DWORD *)v43 + 38) = -285217025;
    *((_DWORD *)v43 + 28) = v13 & 0xEFFFFFFF;
    *((_DWORD *)v43 + 36) = 0;
    memset(v43 + 66, 0, 0x78uLL);
    RtlpCreateHeapEncoding(v43);
    *((_DWORD *)v43 + 152) = 1;
    v28 = (__int64)v43;
    if ( (v43[14] & 0x8000000) != 0 )
    {
      HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
      *(_DWORD *)(v42 + 144) = HeapInterceptorIndex;
      *((_DWORD *)v43 + 28) &= ~0x40u;
      v28 = (__int64)v43;
    }
    *(_DWORD *)(v28 + 116) = v13 & 0x6001007D;
    *((_WORD *)v43 + 105) = v25 - (_WORD)v43;
    v43[27] = 0LL;
    v29 = v43 + 42;
    v43[43] = v43 + 42;
    *v29 = v29;
    v30 = v43 + 34;
    v43[35] = v43 + 34;
    *v30 = v30;
    v31 = v43 + 36;
    v43[37] = v43 + 36;
    *v31 = v31;
    v32 = v43 + 30;
    v43[31] = v43 + 30;
    *v32 = v32;
    if ( v21 || (v13 & 1) != 0 )
    {
LABEL_70:
      v43[44] = v21;
      *((_DWORD *)v43 + 30) |= 0x80000000;
      if ( (unsigned __int8)RtlpInitializeHeapSegment(
                              (_DWORD)v43,
                              (_DWORD)v43,
                              v26 + 1104,
                              v27,
                              v46,
                              (__int64)v48,
                              (__int64)v24,
                              (__int64)&v48[v45 - v50]) )
      {
        if ( a2 )
          memset((void *)v25, 0, 0x80uLL);
        *(_DWORD *)(v25 + 8) = 128;
        *(_QWORD *)(v25 + 40) = v25 + 56;
        *(_QWORD *)(v25 + 32) = v43 + 42;
        *(_QWORD *)(v25 + 48) = v25 + 72;
        RtlpPopulateListIndex(v43, v25);
        *((_WORD *)v43 + 104) = 0;
        v43[20] = *((_QWORD *)&v59[0] + 1);
        v43[21] = *(_QWORD *)&v59[1];
        v43[22] = *((_QWORD *)&v59[1] + 1) >> 4;
        v43[23] = *(_QWORD *)&v59[2] >> 4;
        v43[25] = *((_QWORD *)&v59[2] + 1);
        *((_DWORD *)v43 + 37) = (unsigned __int64)(*(_QWORD *)&v59[3] + 15LL) >> 4;
        v43[45] = RtlpHeapKey ^ *((_QWORD *)&v59[4] + 1);
        *((_DWORD *)v43 + 162) = 4;
        v43[82] = 2088960LL;
        if ( (RtlpDisableHeapLookaside & 1) != 0 )
          *((_DWORD *)v43 + 30) = 1;
        v43[32] = 31LL;
        v43[33] = -16LL;
        v33 = (__int64)v43;
        if ( (v43[14] & 0x20) != 0 )
        {
          v43[32] += 16LL;
          v33 = (__int64)v43;
        }
        *(_QWORD *)(v33 + 368) = 0LL;
        *((_WORD *)v43 + 188) = 0;
        *((_BYTE *)v43 + 378) = 0;
        *((_BYTE *)v43 + 379) = 0;
        v43[40] = 0LL;
        if ( (v13 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
        {
LABEL_80:
          RtlpMoveHeapBetweenLists(v43, 0LL, 1LL);
          if ( *((_WORD *)v43 + 104) )
          {
            LOBYTE(v16) = MEMORY[0x7FFE0380];
            if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapCreateEvent((_DWORD)v43, v13, v45, v47, MEMORY[0x7FFE0380]);
            if ( MEMORY[0x7FFE038A] )
              RtlpLogHeapCreateEvent((_DWORD)v43, v13, v45, v47, MEMORY[0x7FFE038A]);
            if ( MEMORY[0x7FFE0388] )
              RtlpHeapLogRangeCreate(v43, v45, v13);
            *((_DWORD *)v43 + 30) &= ~0x80000000;
            v34 = (__int64)v43;
            v43 = 0LL;
            goto LABEL_87;
          }
          goto LABEL_151;
        }
        v43[48] = RtlAllocateHeap((__int64)v43, 0x80000Au, 256LL);
        v16 = v43[48];
        if ( v16 )
        {
          *(_BYTE *)(v16 - 1) = 1;
          *((_WORD *)v43 + 196) = 128;
          goto LABEL_80;
        }
      }
LABEL_151:
      v34 = 0LL;
      v20 = (__int64)v44;
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
    v20 = (__int64)v44;
LABEL_88:
    v21 = 0LL;
    goto LABEL_89;
  }
  v34 = 0LL;
LABEL_89:
  if ( v21 && v21 != (void *)v20 )
    RtlDeleteCriticalSection(v21);
  if ( v43 )
  {
    if ( !a2 )
    {
      v45 = 0LL;
      RtlpSecMemFreeVirtualMemory(v16, &v43, &v45, 0x8000LL);
    }
  }
  return v34;
}

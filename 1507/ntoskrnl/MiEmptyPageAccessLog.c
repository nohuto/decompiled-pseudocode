/*
 * XREFs of MiEmptyPageAccessLog @ 0x1400D71E0
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     MiAllocateAccessLog @ 0x140099C40 (MiAllocateAccessLog.c)
 *     MiEmptyAccessLogs @ 0x1400D6F7C (MiEmptyAccessLogs.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiCleanWorkingSet @ 0x1401088D4 (MiCleanWorkingSet.c)
 *     MmOutSwapProcess @ 0x14011029C (MmOutSwapProcess.c)
 *     MiDrainSystemAccessLog @ 0x140131290 (MiDrainSystemAccessLog.c)
 *     MiDeleteSessionAddressSpace @ 0x1401495B0 (MiDeleteSessionAddressSpace.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140152DC0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     MmFreeAccessPfnBuffer @ 0x1400D79C8 (MmFreeAccessPfnBuffer.c)
 *     ObReferenceObjectExWithTag @ 0x14010B640 (ObReferenceObjectExWithTag.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(_QWORD *P)
{
  __int16 v1; // r8
  _QWORD *v2; // r13
  struct _KPROCESS *v3; // rcx
  unsigned int v4; // edi
  unsigned __int64 v5; // rax
  unsigned int v6; // r10d
  unsigned __int64 v7; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbp
  __int16 v12; // r15
  unsigned __int64 v13; // r14
  __int16 v14; // bp
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int64 **v17; // r14
  volatile signed __int64 *v18; // r10
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  unsigned __int64 v21; // rtt
  unsigned int Alignment_low; // esi
  int v23; // esi
  unsigned __int64 v24; // rtt
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r13
  signed __int64 v30; // rdx
  signed __int64 v31; // rax
  signed __int64 v32; // rbp
  unsigned int v33; // edx
  ULONG_PTR v34; // rbp
  __int64 *v35; // r15
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  __int64 v38; // rax
  __int64 v39; // rdx
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  signed __int64 BugCheckParameter4; // rax
  __int64 SharedProtos; // rax
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v45; // ett
  _QWORD *v46; // rbx
  void *i; // rcx
  struct _KPROCESS *v48; // [rsp+30h] [rbp-58h]
  _QWORD *Pa; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  _QWORD *v51; // [rsp+90h] [rbp+8h]
  unsigned int v52; // [rsp+98h] [rbp+10h]
  int v53; // [rsp+A0h] [rbp+18h]
  int v54; // [rsp+A4h] [rbp+1Ch]
  unsigned __int64 v55; // [rsp+A8h] [rbp+20h]

  v51 = P;
  v1 = 0;
  v54 = 3;
  v2 = P;
  v53 = 0;
  v3 = (struct _KPROCESS *)P[7];
  v4 = 0;
  v48 = v3;
  if ( (unsigned __int64)v3 <= 1 || v3 == PsInitialSystemProcess || (v5 = v3[1].ActiveProcessors.Bitmap[2]) == 0 )
    v6 = -1;
  else
    v6 = *(_DWORD *)(v5 + 8);
  v52 = v6;
  v7 = 0LL;
  while ( 2 )
  {
    v8 = (__int64 *)(v2[4] - 8LL);
    Pa = (_QWORD *)*v2;
    v9 = 0LL;
    if ( v8 >= v2 + 9 )
    {
      while ( 1 )
      {
        v10 = *v8;
        v11 = ((unsigned __int64)*v8 >> 9) & 1;
        v12 = *v8 & 0x1FF;
        if ( !v12 )
          break;
        if ( (unsigned __int64)v3 > 1 )
        {
          v13 = v10 >> 16;
          if ( v12 == v1 )
          {
            v7 += (__int64)(v13 - v9) >> 3 << 12 << *(&v53 + ((v7 >> 10) & 1));
          }
          else
          {
            v25 = *(_QWORD **)(v2[6] - 8 * (*v8 & 0x1FF));
            v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)(32 * *(_DWORD *)(*v25 + 56LL))) & 0x400;
            if ( (*(_DWORD *)(*v25 + 56LL) & 0x20) != 0 )
            {
              v26 = v25[1];
              if ( v13 < v26 || v13 >= v26 + 8LL * *((unsigned int *)v25 + 11) )
              {
                if ( (*((_BYTE *)v25 + 34) & 2) != 0 )
                {
                  SharedProtos = MiGetSharedProtos(*v25, v6, v25);
                  v6 = v52;
                }
                else
                {
                  SharedProtos = v25[3];
                }
                v27 = (v13 << 9) - (*(_QWORD *)(SharedProtos + 32) << 9);
              }
              else
              {
                v27 = (v13 << 9) - (v26 << 9);
              }
              v28 = ((unsigned __int64)*((unsigned int *)v25 + 9) << 9) + (v27 & 0xFFFFFFFFFFFFF000uLL);
            }
            else
            {
              v38 = v25[1];
              if ( v38 )
                v39 = (__int64)(v13 - v38) >> 3 << 12;
              else
                v39 = 0LL;
              v28 = v39 + ((*((unsigned int *)v25 + 9) | ((unsigned __int64)((_WORD)v25[4] & 0xFFC0) << 26)) << 12);
            }
            v1 = v12;
            v55 = v28 << *((_BYTE *)&v53 + 4 * ((v4 >> 10) & 1));
            LODWORD(v55) = v4 & 0x400 | v55 & 0xFFFFFA00 | v12 & 0x1FF;
            v7 = v55;
          }
          v3 = v48;
          v9 = v13;
          v14 = v7 ^ ((_WORD)v11 << 9);
          *v8 = v7;
          goto LABEL_13;
        }
LABEL_14:
        if ( --v8 < v2 + 9 )
          goto LABEL_15;
      }
      v15 = v10 >> 16 << 25 >> 16;
      *v8 = v15;
      v14 = v15 ^ ((_WORD)v11 << 9);
LABEL_13:
      *(_DWORD *)v8 ^= v14 & 0x200;
      goto LABEL_14;
    }
LABEL_15:
    if ( (unsigned __int64)v3 <= 1 )
      goto LABEL_21;
    v16 = v2[6] - 8LL;
    v17 = (__int64 **)(v2[5] + 8LL);
    v55 = v16;
    if ( (unsigned __int64)v17 > v16 )
      goto LABEL_17;
    do
    {
      v29 = **v17;
      _m_prefetchw((const void *)(v29 + 64));
      v30 = *(_QWORD *)(v29 + 64);
      if ( (v30 & 0xF) != 0 )
      {
        do
        {
          v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 64), v30 - 1, v30);
          if ( v30 == v31 )
            break;
          v30 = v31;
        }
        while ( (v31 & 0xF) != 0 );
      }
      v32 = v30;
      v33 = v30 & 0xF;
      v34 = v32 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v33 > 1 )
        goto LABEL_39;
      if ( v33 )
      {
        ObReferenceObjectExWithTag(v34, 15LL);
        _m_prefetchw((const void *)(v29 + 64));
        v40 = *(_QWORD *)(v29 + 64);
        while ( (v40 & 0xF) == 0 )
        {
          if ( v34 != (v40 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v41 = v40;
          v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 64), v40 + 15, v40);
          if ( v41 == v40 )
            goto LABEL_39;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(v34 - 48);
        BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 - 48), 0xFFFFFFFFFFFFFFF1uLL)
                           - 15;
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, v34, 5uLL, BugCheckParameter4);
          ObpDeferObjectDeletion(v34 - 48);
        }
LABEL_39:
        if ( v34 )
          goto LABEL_40;
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v29 + 72);
      }
      else
      {
        _m_prefetchw((const void *)(v29 + 72));
        v45 = *(_DWORD *)(v29 + 72) & 0x7FFFFFFF;
        if ( v45 != _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 72), v45 + 1, v45) )
          ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(v29 + 72));
      }
      v34 = ObFastReferenceObjectLocked((_QWORD *)(v29 + 64));
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v29 + 72, retaddr);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)(v29 + 72), 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)(v29 + 72));
      }
      __writecr8(CurrentIrql);
      v16 = v55;
LABEL_40:
      v35 = *(__int64 **)(v34 + 24);
      _m_prefetchw((const void *)(v29 + 64));
      v36 = *(_QWORD *)(v29 + 64);
      if ( (v34 ^ v36) >= 0xF )
      {
LABEL_63:
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v34, 0x746C6644u);
      }
      else
      {
        while ( 1 )
        {
          v9 = v36 + 1;
          v37 = v36;
          v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 64), v36 + 1, v36);
          if ( v37 == v36 )
            break;
          if ( (v34 ^ v36) >= 0xF )
            goto LABEL_63;
        }
      }
      *v17++ = v35;
    }
    while ( (unsigned __int64)v17 <= v16 );
    v3 = v48;
    v2 = v51;
LABEL_17:
    v18 = (volatile signed __int64 *)&v3[-1].Spare2[39];
    _m_prefetchw(&v3[-1].Spare2[39]);
    v19 = *(_QWORD *)&v3[-1].Spare2[39];
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange64(v18, v19 + 1, v19);
        if ( v20 == v19 )
          break;
        if ( !v19 )
          goto LABEL_86;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v18);
LABEL_21:
      v2[3] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)v2 + 3) = dword_140367DD0;
      _m_prefetchw(&stru_140367D88);
      v21 = stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v21 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&stru_140367D88,
                    (stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                    stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL)
        && !ExfAcquireRundownProtection(&stru_140367D88) )
      {
        goto LABEL_58;
      }
      Alignment_low = LOWORD(stru_140367DC0.Alignment);
      if ( LOWORD(stru_140367DC0.Alignment) >= (unsigned int)dword_140367DA8 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140350510, 0x64u);
        v23 = 0;
      }
      else
      {
        RtlpInterlockedPushEntrySList(&stru_140367DC0, (PSLIST_ENTRY)v2);
        if ( Alignment_low >= 8 && !stru_140367D90.Header.SignalState )
          KeSetEvent(&stru_140367D90, 0, 0);
        v23 = 1;
      }
      _m_prefetchw(&stru_140367D88);
      v24 = stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v24 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&stru_140367D88,
                    (stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&stru_140367D88);
      if ( !v23 )
      {
LABEL_58:
        LOBYTE(v9) = 1;
        MmFreeAccessPfnBuffer(v2, v9);
      }
      v51 = Pa;
      v2 = Pa;
      if ( Pa )
      {
        v3 = v48;
        v1 = 0;
        v6 = v52;
        continue;
      }
    }
    else
    {
LABEL_86:
      ExFreePoolWithTag(v2, 0);
      v46 = Pa;
      for ( i = Pa; v46; i = v46 )
      {
        v46 = (_QWORD *)*v46;
        ExFreePoolWithTag(i, 0);
      }
    }
    break;
  }
}

/*
 * XREFs of MiEmptyPageAccessLog @ 0x1400271C0
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiEmptyAccessLogs @ 0x140088410 (MiEmptyAccessLogs.c)
 *     MiAllocateAccessLog @ 0x1400886E0 (MiAllocateAccessLog.c)
 *     MmOutSwapProcess @ 0x1400909CC (MmOutSwapProcess.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     MiCleanWorkingSet @ 0x1400FF31C (MiCleanWorkingSet.c)
 *     MiDeleteSessionAddressSpace @ 0x140123278 (MiDeleteSessionAddressSpace.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14012A1C0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x140006874 (MmFreeAccessPfnBuffer.c)
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(_SLIST_ENTRY *P)
{
  unsigned __int16 v1; // r8
  _SLIST_ENTRY *v2; // r13
  struct _KPROCESS *v3; // rax
  unsigned int v4; // edi
  unsigned __int64 v5; // rax
  unsigned int v6; // r10d
  unsigned __int64 v7; // rbx
  __int64 *v8; // rsi
  __int16 v9; // r11
  unsigned __int64 i; // rdx
  __int64 v11; // r14
  __int64 v12; // rbp
  unsigned __int16 v13; // r15
  __int64 v14; // r14
  __int16 v15; // bp
  unsigned __int64 v16; // r12
  __int64 **v17; // r15
  volatile signed __int64 *v18; // r10
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  unsigned __int64 v21; // rtt
  unsigned int Alignment_low; // esi
  int v23; // esi
  unsigned __int64 v24; // rtt
  unsigned __int64 v25; // r14
  _QWORD *v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rbp
  signed __int64 v31; // rdx
  signed __int64 v32; // rax
  signed __int64 v33; // r13
  unsigned int v34; // edx
  ULONG_PTR v35; // r13
  __int64 *v36; // rsi
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  __int64 v39; // rax
  __int64 v40; // rdx
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  signed __int64 BugCheckParameter4; // rax
  __int64 SharedProtos; // rax
  KIRQL v45; // si
  _SLIST_ENTRY *v46; // rbx
  _SLIST_ENTRY *j; // rcx
  unsigned __int64 v48; // [rsp+30h] [rbp-58h]
  _SLIST_ENTRY *Pa; // [rsp+38h] [rbp-50h]
  _SLIST_ENTRY *v50; // [rsp+90h] [rbp+8h]
  unsigned int v51; // [rsp+98h] [rbp+10h]
  struct _KPROCESS *v52; // [rsp+A0h] [rbp+18h]
  int v53; // [rsp+A8h] [rbp+20h]
  int v54; // [rsp+ACh] [rbp+24h]

  v50 = P;
  v1 = 0;
  v54 = 3;
  v53 = 0;
  v2 = P;
  v3 = (struct _KPROCESS *)*((_QWORD *)&P[3].Next + 1);
  v4 = 0;
  v52 = v3;
  if ( (unsigned __int64)v3 > 1 && v3 != PsInitialSystemProcess )
  {
    v5 = v3[1].ActiveProcessors.Bitmap[2];
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      v3 = v52;
      goto LABEL_5;
    }
    v3 = v52;
  }
  v6 = -1;
LABEL_5:
  v51 = v6;
  v7 = 0LL;
  while ( 2 )
  {
    v8 = (__int64 *)(&v2[2].Next[-1].Next + 1);
    v9 = 511;
    Pa = v2->Next;
    for ( i = 0LL; v8 >= (__int64 *)&v2[4].Next + 1; --v8 )
    {
      v11 = *v8;
      v12 = ((unsigned __int64)*v8 >> 9) & 1;
      v13 = v9 & *v8;
      if ( v13 )
      {
        if ( (unsigned __int64)v3 <= 1 )
          continue;
        v25 = v11 >> 16;
        if ( v13 == v1 )
        {
          v7 += (__int64)(v25 - i) >> 3 << 12 << *(&v53 + ((v7 >> 10) & 1));
        }
        else
        {
          v26 = (_QWORD *)*((_QWORD *)&v2[3].Next->Next - v13);
          v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)(32 * *(_DWORD *)(*v26 + 56LL))) & 0x400;
          if ( (*(_DWORD *)(*v26 + 56LL) & 0x20) != 0 )
          {
            v27 = v26[1];
            if ( v25 < v27 || v25 >= v27 + 8LL * *((unsigned int *)v26 + 11) )
            {
              if ( (*((_BYTE *)v26 + 34) & 2) != 0 )
              {
                SharedProtos = MiGetSharedProtos(*v26, v6, v26);
                v6 = v51;
                v9 = 511;
              }
              else
              {
                SharedProtos = MiGetSubsectionDriverProtos(v26);
              }
              v28 = (v25 << 9) - (*(_QWORD *)(SharedProtos + 32) << 9);
            }
            else
            {
              v28 = (v25 << 9) - (v27 << 9);
            }
            v29 = ((unsigned __int64)*((unsigned int *)v26 + 9) << 9) + (v28 & 0xFFFFFFFFFFFFF000uLL);
          }
          else
          {
            v39 = v26[1];
            if ( v39 )
              v40 = (__int64)(v25 - v39) >> 3 << 12;
            else
              v40 = 0LL;
            v29 = v40 + ((*((unsigned int *)v26 + 9) | ((unsigned __int64)((_WORD)v26[4] & 0xFFC0) << 26)) << 12);
          }
          v1 = v13;
          v48 = v29 << *((_BYTE *)&v53 + 4 * ((v4 >> 10) & 1));
          LODWORD(v48) = v4 & 0x400 | v48 & 0xFFFFFA00 | (unsigned __int16)(v9 & v13);
          v7 = v48;
        }
        i = v25;
        v15 = v7 ^ ((_WORD)v12 << 9);
        *v8 = v7;
      }
      else
      {
        v14 = v11 >> 16 << 25 >> 16;
        *v8 = v14;
        v15 = v14 ^ ((_WORD)v12 << 9);
      }
      v3 = v52;
      *(_DWORD *)v8 ^= v15 & 0x200;
    }
    if ( (unsigned __int64)v3 <= 1 )
      goto LABEL_17;
    v16 = (unsigned __int64)(&v2[3].Next[-1].Next + 1);
    v17 = (__int64 **)(*((_QWORD *)&v2[2].Next + 1) + 8LL);
    if ( (unsigned __int64)v17 > v16 )
      goto LABEL_13;
    do
    {
      v30 = **v17;
      _m_prefetchw((const void *)(v30 + 64));
      v31 = *(_QWORD *)(v30 + 64);
      if ( (v31 & 0xF) != 0 )
      {
        do
        {
          v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 64), v31 - 1, v31);
          if ( v31 == v32 )
            break;
          v31 = v32;
        }
        while ( (v32 & 0xF) != 0 );
      }
      v33 = v31;
      v34 = v31 & 0xF;
      v35 = v33 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v34 > 1 )
        goto LABEL_39;
      if ( v34 )
      {
        ObReferenceObjectExWithTag(v35, 15LL);
        _m_prefetchw((const void *)(v30 + 64));
        v41 = *(_QWORD *)(v30 + 64);
        while ( (v41 & 0xF) == 0 )
        {
          if ( v35 != (v41 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v42 = v41;
          v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 64), v41 + 15, v41);
          if ( v42 == v41 )
            goto LABEL_39;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(v35 - 48);
        BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 48), 0xFFFFFFFFFFFFFFF1uLL)
                           - 15;
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, v35, 5uLL, BugCheckParameter4);
          ObpDeferObjectDeletion(v35 - 48);
        }
LABEL_39:
        if ( v35 )
          goto LABEL_40;
      }
      v45 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v30 + 72));
      v35 = ObFastReferenceObjectLocked(v30 + 64);
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v30 + 72), v45);
LABEL_40:
      v36 = *(__int64 **)(v35 + 24);
      _m_prefetchw((const void *)(v30 + 64));
      v37 = *(_QWORD *)(v30 + 64);
      if ( (v35 ^ v37) >= 0xF )
      {
LABEL_70:
        ObDereferenceObjectDeferDelete((PVOID)v35);
      }
      else
      {
        while ( 1 )
        {
          v38 = v37;
          v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 64), v37 + 1, v37);
          if ( v38 == v37 )
            break;
          if ( (v35 ^ v37) >= 0xF )
            goto LABEL_70;
        }
      }
      *v17++ = v36;
    }
    while ( (unsigned __int64)v17 <= v16 );
    v3 = v52;
    v2 = v50;
LABEL_13:
    v18 = (volatile signed __int64 *)&v3[-1].Spare2[52];
    _m_prefetchw(&v3[-1].Spare2[52]);
    v19 = *(_QWORD *)&v3[-1].Spare2[52];
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange64(v18, v19 + 1, v19);
        if ( v20 == v19 )
          break;
        if ( !v19 )
          goto LABEL_78;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v18);
LABEL_17:
      *((_QWORD *)&v2[1].Next + 1) = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)&v2->Next + 3) = dword_14033B850;
      _m_prefetchw(&stru_14033B808);
      v21 = stru_14033B808.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v21 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&stru_14033B808,
                    (stru_14033B808.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                    stru_14033B808.Count & 0xFFFFFFFFFFFFFFFEuLL)
        && !ExfAcquireRundownProtection(&stru_14033B808) )
      {
        goto LABEL_64;
      }
      Alignment_low = LOWORD(ListHead.Alignment);
      if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_14033B828 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140328350, 0x64u);
        v23 = 0;
      }
      else
      {
        RtlpInterlockedPushEntrySList(&ListHead, v2);
        if ( Alignment_low >= 8 && !Event.Header.SignalState )
          KeSetEvent(&Event, 0, 0);
        v23 = 1;
      }
      _m_prefetchw(&stru_14033B808);
      v24 = stru_14033B808.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v24 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&stru_14033B808,
                    (stru_14033B808.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    stru_14033B808.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&stru_14033B808);
      if ( !v23 )
LABEL_64:
        MmFreeAccessPfnBuffer((__int64)v2, 1);
      v50 = Pa;
      v2 = Pa;
      if ( Pa )
      {
        v3 = v52;
        v1 = 0;
        v6 = v51;
        continue;
      }
    }
    else
    {
LABEL_78:
      ExFreePoolWithTag(v2, 0);
      v46 = Pa;
      for ( j = Pa; v46; j = v46 )
      {
        v46 = v46->Next;
        ExFreePoolWithTag(j, 0);
      }
    }
    break;
  }
}

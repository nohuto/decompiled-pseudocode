/*
 * XREFs of MiEmptyPageAccessLog @ 0x14006DE20
 * Callers:
 *     MiCleanWorkingSet @ 0x14001C2D0 (MiCleanWorkingSet.c)
 *     MmOutSwapProcess @ 0x1400328BC (MmOutSwapProcess.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiAllocateAccessLog @ 0x1400D7D70 (MiAllocateAccessLog.c)
 *     MiDeleteSessionAddressSpace @ 0x140114000 (MiDeleteSessionAddressSpace.c)
 *     MiEmptyAccessLogs @ 0x140116604 (MiEmptyAccessLogs.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MmDeleteProcessAddressSpace @ 0x1403E6E18 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     MiGetSubsectionDriverProtos @ 0x1400390D8 (MiGetSubsectionDriverProtos.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     ExfAcquireRundownProtection @ 0x140079F60 (ExfAcquireRundownProtection.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ObReferenceObjectExWithTag @ 0x1400D5D80 (ObReferenceObjectExWithTag.c)
 *     MmFreeAccessPfnBuffer @ 0x1400FAAA8 (MmFreeAccessPfnBuffer.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(_QWORD *P)
{
  unsigned __int16 v1; // r8
  _QWORD *v2; // r13
  struct _KPROCESS *v3; // rcx
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
  __int64 v24; // rdx
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
  _QWORD *v46; // rbx
  void *j; // rcx
  struct _KPROCESS *v48; // [rsp+30h] [rbp-58h]
  _QWORD *Pa; // [rsp+38h] [rbp-50h]
  _QWORD *v50; // [rsp+90h] [rbp+8h]
  unsigned int v51; // [rsp+98h] [rbp+10h]
  int v52; // [rsp+A0h] [rbp+18h]
  int v53; // [rsp+A4h] [rbp+1Ch]
  unsigned __int64 v54; // [rsp+A8h] [rbp+20h]

  v50 = P;
  v1 = 0;
  v53 = 3;
  v2 = P;
  v52 = 0;
  v3 = (struct _KPROCESS *)P[7];
  v4 = 0;
  v48 = v3;
  if ( (unsigned __int64)v3 <= 1 || v3 == PsInitialSystemProcess || (v5 = v3[1].ActiveProcessors.Bitmap[2]) == 0 )
    v6 = -1;
  else
    v6 = *(_DWORD *)(v5 + 8);
  v51 = v6;
  v7 = 0LL;
  while ( 2 )
  {
    v8 = (__int64 *)(v2[4] - 8LL);
    Pa = (_QWORD *)*v2;
    v9 = 511;
    for ( i = 0LL; v8 >= v2 + 9; --v8 )
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
          v7 += (__int64)(v25 - i) >> 3 << 12 << *(&v52 + ((v7 >> 10) & 1));
        }
        else
        {
          v26 = *(_QWORD **)(v2[6] - 8LL * v13);
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
          v54 = v29 << *((_BYTE *)&v52 + 4 * ((v4 >> 10) & 1));
          LODWORD(v54) = v4 & 0x400 | v54 & 0xFFFFFA00 | (unsigned __int16)(v9 & v13);
          v7 = v54;
        }
        v3 = v48;
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
      *(_DWORD *)v8 ^= v15 & 0x200;
    }
    if ( (unsigned __int64)v3 <= 1 )
      goto LABEL_17;
    v16 = v2[6] - 8LL;
    v17 = (__int64 **)(v2[5] + 8LL);
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
        goto LABEL_37;
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
            goto LABEL_37;
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
LABEL_37:
        if ( v35 )
          goto LABEL_38;
      }
      v45 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v30 + 72));
      v35 = ObFastReferenceObjectLocked((_QWORD *)(v30 + 64));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v30 + 72), v45);
LABEL_38:
      v36 = *(__int64 **)(v35 + 24);
      _m_prefetchw((const void *)(v30 + 64));
      v37 = *(_QWORD *)(v30 + 64);
      if ( (v35 ^ v37) >= 0xF )
      {
LABEL_65:
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v35, 0x746C6644u);
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
            goto LABEL_65;
        }
      }
      *v17++ = v36;
    }
    while ( (unsigned __int64)v17 <= v16 );
    v3 = v48;
    v2 = v50;
LABEL_13:
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
          goto LABEL_77;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v18);
LABEL_17:
      v2[3] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)v2 + 3) = dword_140317B10;
      _m_prefetchw(&RunRef);
      v21 = RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v21 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&RunRef,
                    (RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                    RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL)
        && !ExfAcquireRundownProtection(&RunRef) )
      {
        goto LABEL_55;
      }
      Alignment_low = LOWORD(stru_140317B00.Alignment);
      if ( LOWORD(stru_140317B00.Alignment) >= (unsigned int)dword_140317AE8 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140302790, 0x64u);
        v23 = 0;
      }
      else
      {
        RtlpInterlockedPushEntrySList(&stru_140317B00, (PSLIST_ENTRY)v2);
        if ( Alignment_low >= 8 && !stru_140317AD0.Header.SignalState )
          KeSetEvent(&stru_140317AD0, 0, 0);
        v23 = 1;
      }
      ExReleaseRundownProtection_0(&RunRef);
      if ( !v23 )
      {
LABEL_55:
        LOBYTE(v24) = 1;
        MmFreeAccessPfnBuffer(v2, v24);
      }
      v50 = Pa;
      v2 = Pa;
      if ( Pa )
      {
        v3 = v48;
        v1 = 0;
        v6 = v51;
        continue;
      }
    }
    else
    {
LABEL_77:
      ExFreePoolWithTag(v2, 0);
      v46 = Pa;
      for ( j = Pa; v46; j = v46 )
      {
        v46 = (_QWORD *)*v46;
        ExFreePoolWithTag(j, 0);
      }
    }
    break;
  }
}

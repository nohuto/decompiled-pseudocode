/*
 * XREFs of ObWaitForMultipleObjects @ 0x14044DCA0
 * Callers:
 *     NtWaitForMultipleObjects @ 0x1404A0720 (NtWaitForMultipleObjects.c)
 *     NtWaitForMultipleObjects32 @ 0x1404A5300 (NtWaitForMultipleObjects32.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     KeSetKernelStackSwapEnable @ 0x14007B664 (KeSetKernelStackSwapEnable.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140090450 (ExSlowReplenishHandleTableEntry.c)
 *     ObpIncrPointerCountEx @ 0x1400A3908 (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x1400AB7B4 (ExFastReplenishHandleTableEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ObpIsKernelHandle @ 0x1400CDBC8 (ObpIsKernelHandle.c)
 *     ExLockHandleTableEntry @ 0x1400CF5D0 (ExLockHandleTableEntry.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     __chkstk @ 0x140167BC0 (__chkstk.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x14022C880 (ExHandleLogBadReference.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObWaitForMultipleObjects(
        ULONG a1,
        __int64 a2,
        unsigned __int64 a3,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *a6,
        WAIT_TYPE a7)
{
  __int128 v7; // rax
  char v8; // bl
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  int v11; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *Process; // r9
  char v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r12
  unsigned __int16 v17; // r11
  unsigned __int64 v18; // rdi
  ULONG_PTR v19; // r15
  ULONG_PTR v20; // r13
  __int64 *v21; // rsi
  __int64 v22; // rdi
  char v23; // al
  __int128 v24; // rt0
  unsigned __int8 v25; // tt
  int v26; // ecx
  unsigned __int64 v27; // rsi
  WAIT_TYPE v28; // r10d
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  ULONG v31; // r13d
  struct _EX_RUNDOWN_REF *v32; // r15
  __int16 v33; // ax
  PKWAIT_BLOCK v34; // rbx
  unsigned int v35; // edi
  struct _NPAGED_LOOKASIDE_LIST *v36; // r13
  PVOID *v37; // rbx
  volatile signed __int64 *v39; // rbx
  int v40; // eax
  unsigned __int64 v41; // rcx
  unsigned int v42; // r11d
  unsigned int v43; // ebx
  unsigned __int64 v44; // rcx
  int v45; // ecx
  void *v46; // rsp
  unsigned int v47; // ebx
  signed __int32 v48[8]; // [rsp+0h] [rbp-40h] BYREF
  char v49; // [rsp+40h] [rbp+0h] BYREF
  char v50; // [rsp+41h] [rbp+1h]
  char v51; // [rsp+42h] [rbp+2h]
  BOOLEAN v52; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  WAIT_TYPE WaitType; // [rsp+50h] [rbp+10h]
  unsigned __int64 v55; // [rsp+58h] [rbp+18h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+60h] [rbp+20h]
  struct _EX_RUNDOWN_REF *v57; // [rsp+68h] [rbp+28h]
  struct _KTHREAD *v58; // [rsp+70h] [rbp+30h]
  __int128 v59; // [rsp+78h] [rbp+38h] BYREF
  ULONG Count; // [rsp+88h] [rbp+48h]
  unsigned int v61; // [rsp+8Ch] [rbp+4Ch]
  int v62; // [rsp+90h] [rbp+50h]
  __int64 v63; // [rsp+98h] [rbp+58h]
  unsigned __int64 v64; // [rsp+A0h] [rbp+60h]
  PLARGE_INTEGER Timeout; // [rsp+A8h] [rbp+68h]
  unsigned __int64 *v66; // [rsp+B0h] [rbp+70h]
  __int64 v67; // [rsp+B8h] [rbp+78h]
  PVOID Object; // [rsp+D0h] [rbp+90h] BYREF
  _BYTE v69[1016]; // [rsp+D8h] [rbp+98h] BYREF

  *((_QWORD *)&v7 + 1) = a2;
  WaitType = a7;
  v8 = a3;
  v49 = a3;
  v9 = *((_QWORD *)&v7 + 1);
  v64 = *((_QWORD *)&v7 + 1);
  v10 = a1;
  Count = a1;
  Timeout = a6;
  v52 = 0;
  v51 = 0;
  WaitBlockArray = 0LL;
  Lookaside = 0LL;
  if ( a1 > 3 )
  {
    if ( a1 > 0xA )
    {
      Lookaside = &ObpWaitBlockLookaside + (a1 - 11) / 0xE;
      *(_QWORD *)&v7 = ExAllocateFromNPagedLookasideList(Lookaside);
    }
    else
    {
      *(_QWORD *)&v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 48LL * a1, 0x6D57624Fu);
    }
    WaitBlockArray = (PKWAIT_BLOCK)v7;
    if ( (_QWORD)v7 )
    {
      v51 = 1;
    }
    else
    {
      v52 = KeSetKernelStackSwapEnable(0);
      *((_QWORD *)&v7 + 1) = 48 * v10;
      *(_QWORD *)&v7 = 48 * v10 + 15;
      if ( (unsigned __int64)v7 <= 48 * v10 )
        *(_QWORD *)&v7 = 0xFFFFFFFFFFFFFF0LL;
      v46 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
      WaitBlockArray = (PKWAIT_BLOCK)&v49;
    }
  }
  v11 = 0;
  v50 = 0;
  CurrentThread = KeGetCurrentThread();
  v58 = CurrentThread;
  Process = (unsigned __int64 *)CurrentThread->ApcState.Process;
  v57 = (struct _EX_RUNDOWN_REF *)Process;
  v66 = Process;
  v14 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (unsigned __int64 *)CurrentThread->Process )
  {
    v15 = Process[131];
    v63 = v15;
    goto LABEL_4;
  }
  v15 = ObReferenceProcessHandleTable(Process);
  v63 = v15;
  if ( v15 )
  {
    v50 = 1;
    goto LABEL_4;
  }
  v47 = 0;
  if ( !(_DWORD)v10 )
    goto LABEL_99;
  a3 = v9;
  LOBYTE(Process) = v49;
  while ( ObpIsKernelHandle(*(_QWORD *)a3, (char)Process) )
  {
    ++v47;
    a3 += 8LL;
    if ( v47 >= (unsigned int)v10 )
    {
      v15 = v63;
LABEL_99:
      v8 = v49;
LABEL_4:
      v16 = 0LL;
      v17 = 1;
      v18 = v55;
      while ( 2 )
      {
        v19 = *(_QWORD *)(v9 + 8 * v16);
        if ( v8 || (v19 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v19 >= 0xFFFFFFFFFFFFFFFEuLL )
        {
          v20 = v15;
        }
        else
        {
          v19 ^= 0xFFFFFFFF80000000uLL;
          v20 = ObpKernelHandleTable;
        }
        if ( (v19 & 0x3FC) != 0 )
        {
          *(_QWORD *)&v7 = ExpLookupHandleTableEntry(v20, v19);
          v21 = (__int64 *)v7;
          if ( (_QWORD)v7 )
          {
            _m_prefetchw((const void *)v7);
            v59 = *(_OWORD *)v7;
LABEL_10:
            v22 = v59;
            while ( (v22 & 0x1FFFE) != 0 )
            {
              if ( (v22 & 1) != 0 )
                v23 = 0;
              else
                v23 = v17;
              if ( v23 )
              {
                ExpBlockOnLockedHandleEntry(v20, v21, v22);
                _m_prefetchw(v21);
                v59 = *(_OWORD *)v21;
                v17 = 1;
                goto LABEL_10;
              }
              v67 = v22 - 2;
              *(_QWORD *)&v24 = v22;
              *((_QWORD *)&v24 + 1) = *((_QWORD *)&v59 + 1);
              v25 = _InterlockedCompareExchange128(v21, *((signed __int64 *)&v24 + 1), v22 - 2, (signed __int64 *)&v24);
              v7 = v24;
              v22 = v24;
              v59 = v24;
              if ( v25 )
              {
                if ( (unsigned __int16)((unsigned __int64)v7 >> 1) != 16 )
                {
                  v18 = (v22 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                  v55 = v18;
LABEL_18:
                  v8 = v49;
                  goto LABEL_19;
                }
                *(_QWORD *)&v59 = ((unsigned int)v22 ^ (2 * (unsigned int)((unsigned __int64)v7 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v22;
                v18 = ((__int64)v59 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v55 = v18;
                ObpIncrPointerCountEx((volatile signed __int64 *)v18, 32752);
                v45 = ExFastReplenishHandleTableEntry(v21, (unsigned __int64 *)&v59, 32752);
                v17 = 1;
                if ( !v45 )
                  goto LABEL_18;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v18, -v45);
LABEL_59:
                v18 = v55;
                goto LABEL_18;
              }
            }
            if ( ExLockHandleTableEntry(v20, v21) )
            {
              v55 = (*v21 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v39 = (volatile signed __int64 *)v55;
              v59 = *(_OWORD *)v21;
              v40 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v21);
              ObpIncrPointerCountEx(v39, v40 + 1);
              v17 = 1;
              _InterlockedExchangeAdd64(v21, 1uLL);
              _InterlockedOr(v48, 0);
              if ( *(_QWORD *)(v20 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v20 + 48), 0LL);
                v17 = 1;
              }
              goto LABEL_59;
            }
            v18 = v55;
            v8 = v49;
            v17 = 1;
          }
        }
        if ( v19 )
        {
          ExHandleLogBadReference(v20, v19, KeGetCurrentThread()->PreviousMode);
          v18 = v55;
          v17 = 1;
        }
        v21 = 0LL;
LABEL_19:
        if ( !v21 )
        {
LABEL_105:
          v35 = -1073741816;
          goto LABEL_106;
        }
        v26 = DWORD2(v59) & 0x1FFFFFF;
        v62 = ++v11;
        v27 = v18 + 48;
        *(_QWORD *)&v69[8 * v16 + 504] = v18 + 48;
        if ( v8 == 1 )
        {
          if ( (~v26 & 0x100000) != 0 )
          {
            v35 = -1073741790;
            goto LABEL_106;
          }
          if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
          {
            v41 = v18 - ObpInfoMaskToOffset[*(_BYTE *)(v18 + 26) & 0x7F];
            if ( *(_BYTE *)(*(_QWORD *)v41 + 24LL) )
            {
              if ( *(_QWORD *)(*(_QWORD *)v41 + 16LL) == 1LL )
              {
                v35 = -1073700858;
LABEL_106:
                v14 = 1;
                CurrentThread = v58;
                goto LABEL_107;
              }
              v18 = v55;
            }
          }
        }
        v28 = WaitType;
        if ( WaitType != WaitAny
          && (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v18 + 24) ^ (unsigned __int64)BYTE1(v18)] == IoCompletionObjectType )
        {
          goto LABEL_105;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v18, 1, v17, 1951883855);
          v28 = WaitType;
          v17 = 1;
        }
        v29 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v18 + 24) ^ (unsigned __int64)BYTE1(v18);
        a3 = ObTypeIndexTable[v29];
        v30 = *(_QWORD *)(a3 + 32);
        if ( (v30 & 1) != 0 )
        {
          if ( (v30 & 2) != 0 )
          {
            *((_QWORD *)&v7 + 1) = *(unsigned int *)(a3 + 176);
            v29 = (unsigned int)(DWORD2(v7) & *(_DWORD *)(*(unsigned __int16 *)(a3 + 180) + v27));
            if ( (_DWORD)v29 == DWORD2(v7) )
            {
              v30 = *(_QWORD *)(*(unsigned __int16 *)(a3 + 182) + v27);
            }
            else
            {
              v30 -= 3LL;
LABEL_28:
              v30 += v27;
            }
          }
          else
          {
            v30 = *(_QWORD *)(v30 + v27 - 1);
          }
        }
        else if ( v30 >= 0 )
        {
          goto LABEL_28;
        }
        *(_QWORD *)&v69[8 * v16 - 8] = v30;
        v16 = (unsigned int)(v16 + 1);
        v31 = Count;
        if ( (unsigned int)v16 >= Count )
        {
          v32 = v57;
          if ( v50 )
          {
            v50 = 0;
            ExReleaseRundownProtection(v57 + 92);
            v28 = WaitType;
          }
          CurrentThread = v58;
          v33 = v58->KernelApcDisable + 1;
          v58->KernelApcDisable = v33;
          if ( !v33
            && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v29);
            v28 = WaitType;
          }
          v14 = 0;
          v49 = 0;
          if ( v28 || v31 <= 1 )
          {
LABEL_36:
            v34 = WaitBlockArray;
            v35 = KeWaitForMultipleObjects(v31, &Object, v28, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
            v61 = v35;
            v36 = Lookaside;
            goto LABEL_37;
          }
          Process = (unsigned __int64 *)v69;
          v42 = 1;
LABEL_73:
          v43 = v42;
          a3 = *Process;
          while ( 1 )
          {
            *((_QWORD *)&v7 + 1) = v43 - 1;
            v44 = *(_QWORD *)&v69[8 * *((_QWORD *)&v7 + 1) - 8];
            if ( a3 > v44 )
            {
LABEL_77:
              *(_QWORD *)&v69[8 * v43 - 8] = a3;
              ++v42;
              ++Process;
              if ( v42 >= v31 )
                goto LABEL_36;
              goto LABEL_73;
            }
            if ( a3 == v44 )
              break;
            *(_QWORD *)&v69[8 * v43-- - 8] = v44;
            if ( !DWORD2(v7) )
              goto LABEL_77;
          }
          v35 = -1073741776;
          goto LABEL_108;
        }
        v8 = v49;
        v15 = v63;
        v9 = v64;
        continue;
      }
    }
  }
  v35 = -1073741558;
LABEL_107:
  v32 = v57;
LABEL_108:
  v36 = Lookaside;
  v34 = WaitBlockArray;
LABEL_37:
  if ( v11 )
  {
    v37 = (PVOID *)&v69[8 * v11 + 504];
    do
    {
      ObfDereferenceObjectWithTag(*--v37, 0x7457624Fu);
      --v11;
    }
    while ( v11 );
    v34 = WaitBlockArray;
  }
  if ( v14 )
  {
    if ( v50 )
      ExReleaseRundownProtection(v32 + 92);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, *((__int64 *)&v7 + 1), a3, (__int64)Process);
  }
  if ( v34 )
  {
    if ( v51 )
    {
      if ( v36 )
        ExFreeToNPagedLookasideList(v36, v34);
      else
        ExFreePoolWithTag(v34, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v52);
    }
  }
  return v35;
}

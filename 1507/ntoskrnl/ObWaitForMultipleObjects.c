/*
 * XREFs of ObWaitForMultipleObjects @ 0x140495AC0
 * Callers:
 *     NtWaitForMultipleObjects @ 0x14051FF30 (NtWaitForMultipleObjects.c)
 *     NtWaitForMultipleObjects32 @ 0x140521960 (NtWaitForMultipleObjects32.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeSetKernelStackSwapEnable @ 0x14006FE90 (KeSetKernelStackSwapEnable.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400F3880 (ExSlowReplenishHandleTableEntry.c)
 *     ExFastReplenishHandleTableEntry @ 0x14012B00C (ExFastReplenishHandleTableEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     ExHandleLogBadReference @ 0x1402631AC (ExHandleLogBadReference.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ObWaitForMultipleObjects(
        ULONG a1,
        unsigned __int64 *a2,
        char a3,
        WAIT_TYPE a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *a7)
{
  char v7; // bl
  unsigned __int64 *v8; // r14
  __int64 v9; // rdi
  PKWAIT_BLOCK v10; // r13
  int v11; // esi
  struct _KTHREAD *CurrentThread; // r12
  struct _EX_RUNDOWN_REF *Process; // r9
  char v14; // r15
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  unsigned __int16 v17; // r10
  ULONG_PTR v18; // r14
  ULONG_PTR v19; // r13
  __int128 *v20; // rax
  __int128 *v21; // rdi
  __int64 v22; // rax
  char v23; // cl
  __int128 v24; // rt0
  unsigned __int8 v25; // tt
  int v26; // ecx
  volatile signed __int64 *v27; // rdx
  volatile signed __int64 *v28; // rdi
  __int64 v29; // r8
  __int64 v30; // rbx
  ULONG v31; // edi
  struct _EX_RUNDOWN_REF *v32; // r14
  __int16 v33; // ax
  WAIT_TYPE v34; // r10d
  struct _NPAGED_LOOKASIDE_LIST *v35; // rdi
  PVOID *v36; // rbx
  struct _KWAIT_BLOCK *PoolWithTag; // rax
  signed __int64 v39; // r8
  volatile signed __int64 *v40; // rbx
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  char *v43; // rdx
  __int64 v44; // rcx
  int v45; // ecx
  unsigned __int64 *v46; // r9
  unsigned int v47; // r11d
  unsigned int v48; // ecx
  unsigned __int64 v49; // r8
  __int64 v50; // rbx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  void *v53; // rsp
  unsigned int v54; // edx
  unsigned __int64 *v55; // rcx
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rtt
  unsigned __int64 v58; // rtt
  __int16 v59; // ax
  signed __int32 v60[8]; // [rsp+0h] [rbp-40h] BYREF
  char v61; // [rsp+40h] [rbp+0h] BYREF
  char v62; // [rsp+41h] [rbp+1h]
  char v63; // [rsp+42h] [rbp+2h]
  BOOLEAN v64; // [rsp+43h] [rbp+3h]
  unsigned int v65; // [rsp+44h] [rbp+4h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+50h] [rbp+10h]
  volatile signed __int64 *v68; // [rsp+58h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v69; // [rsp+60h] [rbp+20h]
  __int128 v70; // [rsp+68h] [rbp+28h] BYREF
  WAIT_TYPE WaitType; // [rsp+78h] [rbp+38h]
  unsigned __int64 v72; // [rsp+80h] [rbp+40h]
  ULONG Count; // [rsp+88h] [rbp+48h]
  int v74; // [rsp+8Ch] [rbp+4Ch]
  unsigned __int64 *v75; // [rsp+90h] [rbp+50h]
  struct _EX_RUNDOWN_REF *v76; // [rsp+98h] [rbp+58h]
  struct _KTHREAD *v77; // [rsp+A0h] [rbp+60h]
  PLARGE_INTEGER Timeout; // [rsp+B0h] [rbp+70h]
  __int64 v79; // [rsp+C0h] [rbp+80h]
  PVOID Object; // [rsp+D0h] [rbp+90h] BYREF
  _BYTE v81[1016]; // [rsp+D8h] [rbp+98h] BYREF

  WaitType = a4;
  v7 = a3;
  v61 = a3;
  v8 = a2;
  v75 = a2;
  v9 = a1;
  Count = a1;
  Timeout = a7;
  v64 = 0;
  v63 = 0;
  v10 = 0LL;
  WaitBlockArray = 0LL;
  v11 = 0;
  Lookaside = 0LL;
  if ( a1 > 3 )
  {
    if ( a1 > 0xA )
    {
      Lookaside = &ObpWaitBlockLookaside + (a1 - 11) / 0xE;
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocateFromNPagedLookasideList(Lookaside);
    }
    else
    {
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 48LL * a1, 0x6D57624Fu);
    }
    v10 = PoolWithTag;
    WaitBlockArray = PoolWithTag;
    if ( PoolWithTag )
    {
      v63 = 1;
    }
    else
    {
      v64 = KeSetKernelStackSwapEnable(0);
      v52 = 48 * v9 + 15;
      if ( v52 <= 48 * v9 )
        v52 = 0xFFFFFFFFFFFFFF0LL;
      v53 = alloca(v52 & 0xFFFFFFFFFFFFFFF0uLL);
      v10 = (PKWAIT_BLOCK)&v61;
      WaitBlockArray = (PKWAIT_BLOCK)&v61;
    }
  }
  v62 = 0;
  CurrentThread = KeGetCurrentThread();
  v77 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v69 = Process;
  v76 = Process;
  v14 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v15 = Process[131].Count;
    v72 = v15;
    goto LABEL_4;
  }
  v15 = ObReferenceProcessHandleTable(Process);
  v72 = v15;
  if ( v15 )
  {
    v62 = 1;
    goto LABEL_4;
  }
  v54 = 0;
  if ( !(_DWORD)v9 )
  {
LABEL_4:
    v16 = 0LL;
    v17 = 1;
    while ( 1 )
    {
      v18 = v8[v16];
      if ( v7 || (v18 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v18 >= 0xFFFFFFFFFFFFFFFEuLL )
      {
        v19 = v15;
      }
      else
      {
        v18 ^= 0xFFFFFFFF80000000uLL;
        v19 = ObpKernelHandleTable;
      }
      if ( (v18 & 0x3FC) != 0 && (v20 = (__int128 *)ExpLookupHandleTableEntry(v19), (v21 = v20) != 0LL) )
      {
        _m_prefetchw(v20);
        v70 = *v20;
LABEL_10:
        v22 = v70;
        while ( (v22 & 0x1FFFE) != 0 )
        {
          if ( (v22 & 1) != 0 )
            v23 = 0;
          else
            v23 = v17;
          if ( v23 )
          {
            ExpBlockOnLockedHandleEntry(v19, v21);
            _m_prefetchw(v21);
            v70 = *v21;
            v17 = 1;
            goto LABEL_10;
          }
          v79 = v22 - 2;
          *(_QWORD *)&v24 = v22;
          *((_QWORD *)&v24 + 1) = *((_QWORD *)&v70 + 1);
          v25 = _InterlockedCompareExchange128(
                  (volatile signed __int64 *)v21,
                  *((signed __int64 *)&v24 + 1),
                  v22 - 2,
                  (signed __int64 *)&v24);
          v22 = v24;
          v70 = v24;
          if ( v25 )
          {
            if ( (unsigned __int16)((unsigned __int64)v22 >> 1) == 16 )
            {
              *(_QWORD *)&v70 = ((unsigned int)v22 ^ (2 * (unsigned int)((unsigned __int64)v22 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v22;
              v68 = (volatile signed __int64 *)(((__int64)v70 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
              v44 = _InterlockedExchangeAdd64(v68, 0x7FF0uLL);
              if ( v44 <= 0 )
                KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v68 + 6), 0x10uLL, v44 + 32752);
              v45 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v21, (unsigned __int64 *)&v70, 32752);
              v17 = 1;
              if ( v45 )
                _InterlockedExchangeAdd64(v68, -v45);
            }
            else
            {
              v68 = (volatile signed __int64 *)((v22 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
            }
            goto LABEL_18;
          }
        }
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v21);
            v39 = *(_QWORD *)v21;
            if ( (*(_QWORD *)v21 & 1) != 0 )
              break;
            if ( !v39 )
            {
              v7 = v61;
              v17 = 1;
              goto LABEL_79;
            }
            ExpBlockOnLockedHandleEntry(v19, v21);
          }
        }
        while ( v39 != _InterlockedCompareExchange64((volatile signed __int64 *)v21, v39 - 1, v39) );
        v68 = (volatile signed __int64 *)((*(__int64 *)v21 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        v40 = v68;
        v70 = *v21;
        v41 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v21) + 1);
        v42 = _InterlockedExchangeAdd64(v40, v41);
        if ( v42 <= 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v68 + 6), 0x10uLL, v41 + v42);
        v17 = 1;
        _InterlockedExchangeAdd64((volatile signed __int64 *)v21, 1uLL);
        _InterlockedOr(v60, 0);
        if ( *(_QWORD *)(v19 + 48) )
        {
          ExfUnblockPushLock((volatile __int64 *)(v19 + 48), 0LL);
          v17 = 1;
        }
LABEL_18:
        v7 = v61;
      }
      else
      {
LABEL_79:
        if ( v18 )
        {
          ExHandleLogBadReference(v19, v18, KeGetCurrentThread()->PreviousMode);
          v17 = 1;
        }
        v21 = 0LL;
      }
      if ( !v21 )
      {
        v65 = -1073741816;
        goto LABEL_109;
      }
      v26 = DWORD2(v70) & 0x1FFFFFF;
      v74 = ++v11;
      v27 = v68;
      v28 = v68 + 6;
      *(_QWORD *)&v81[8 * v16 + 504] = v68 + 6;
      if ( v7 == 1 )
      {
        if ( (~v26 & 0x100000) != 0 )
        {
          v65 = -1073741790;
          goto LABEL_109;
        }
        if ( (*((_BYTE *)v27 + 26) & 0x40) != 0 )
        {
          v43 = (char *)v27 - ObpInfoMaskToOffset[*((_BYTE *)v27 + 26) & 0x7F];
          if ( v43 )
          {
            if ( *((_QWORD *)v43 + 2) == 1LL )
            {
              v65 = -1073700858;
LABEL_109:
              v14 = 1;
              v10 = WaitBlockArray;
              goto LABEL_110;
            }
          }
        }
      }
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo((__int64)v68, 1, v17, 1951883855);
        v17 = 1;
      }
      v29 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v68 + 24) ^ (unsigned __int64)BYTE1(v68)];
      v30 = *(_QWORD *)(v29 + 32);
      if ( (v30 & 1) == 0 )
        break;
      if ( (v30 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v29 + 176) & *(_DWORD *)((_BYTE *)v28 + *(unsigned __int16 *)(v29 + 180))) != *(_DWORD *)(v29 + 176) )
        {
          v30 -= 3LL;
LABEL_27:
          v30 += (__int64)v28;
          goto LABEL_28;
        }
        v30 = *(volatile signed __int64 *)((char *)v28 + *(unsigned __int16 *)(v29 + 182));
      }
      else
      {
        v30 = *(volatile signed __int64 *)((char *)v28 + v30 - 1);
      }
LABEL_28:
      *(_QWORD *)&v81[8 * v16 - 8] = v30;
      v16 = (unsigned int)(v16 + 1);
      v31 = Count;
      if ( (unsigned int)v16 >= Count )
      {
        v32 = v69;
        if ( v62 )
        {
          v62 = 0;
          _m_prefetchw(&v69[92]);
          v57 = v69[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v57 != _InterlockedCompareExchange64((volatile signed __int64 *)&v69[92], v57 - 2, v57) )
            ExfReleaseRundownProtection(v32 + 92);
        }
        v33 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v33;
        if ( !v33
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v14 = 0;
        v61 = 0;
        v34 = WaitType;
        if ( WaitType == WaitAll && v31 > 1 )
        {
          v46 = (unsigned __int64 *)v81;
          v47 = 1;
          while ( 2 )
          {
            v48 = v47;
            v49 = *v46;
            do
            {
              v50 = v48 - 1;
              v51 = *(_QWORD *)&v81[8 * v50 - 8];
              if ( v49 > v51 )
                break;
              if ( v49 == v51 )
              {
                v65 = -1073741776;
                v10 = WaitBlockArray;
                goto LABEL_111;
              }
              *(_QWORD *)&v81[8 * v48-- - 8] = v51;
            }
            while ( (_DWORD)v50 );
            *(_QWORD *)&v81[8 * v48 - 8] = v49;
            ++v47;
            ++v46;
            if ( v47 < v31 )
              continue;
            break;
          }
        }
        v10 = WaitBlockArray;
        v65 = KeWaitForMultipleObjects(v31, &Object, v34, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
        v35 = Lookaside;
        goto LABEL_35;
      }
      v7 = v61;
      v15 = v72;
      v8 = v75;
    }
    if ( v30 < 0 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v55 = v8;
  while ( 1 )
  {
    v56 = *v55;
    if ( v61 || (v56 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v56 > 0xFFFFFFFFFFFFFFFDuLL )
      break;
    ++v54;
    ++v55;
    if ( v54 >= (unsigned int)v9 )
    {
      v7 = v61;
      v15 = v72;
      goto LABEL_4;
    }
  }
  v65 = -1073741558;
LABEL_110:
  v32 = v69;
LABEL_111:
  v35 = Lookaside;
LABEL_35:
  if ( v11 )
  {
    v36 = (PVOID *)&v81[8 * v11 + 504];
    do
    {
      ObfDereferenceObjectWithTag(*--v36, 0x7457624Fu);
      --v11;
    }
    while ( v11 );
  }
  if ( v14 )
  {
    if ( v62 )
    {
      _m_prefetchw(&v32[92]);
      v58 = v32[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v58 != _InterlockedCompareExchange64((volatile signed __int64 *)&v32[92], v58 - 2, v58) )
        ExfReleaseRundownProtection(v32 + 92);
    }
    v59 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v59;
    if ( !v59
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( v10 )
  {
    if ( v63 )
    {
      if ( v35 )
        ExFreeToNPagedLookasideList(v35, v10);
      else
        ExFreePoolWithTag(v10, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v64);
    }
  }
  return v65;
}

/*
 * XREFs of ObWaitForMultipleObjects @ 0x14040B380
 * Callers:
 *     NtWaitForMultipleObjects @ 0x14048C3E0 (NtWaitForMultipleObjects.c)
 *     NtWaitForMultipleObjects32 @ 0x140497EE0 (NtWaitForMultipleObjects32.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ObpIsKernelHandle @ 0x140038748 (ObpIsKernelHandle.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     ExLockHandleTableEntry @ 0x140079FA4 (ExLockHandleTableEntry.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400D0410 (ExSlowReplenishHandleTableEntry.c)
 *     KeSetKernelStackSwapEnable @ 0x1400DE5E0 (KeSetKernelStackSwapEnable.c)
 *     ObpIncrPointerCountEx @ 0x1400E39BC (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x1400ED618 (ExFastReplenishHandleTableEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x140213858 (ExHandleLogBadReference.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
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
  unsigned __int64 *v8; // r15
  __int64 v9; // r13
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *Process; // r9
  char v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r12
  unsigned __int16 v16; // r10
  unsigned __int64 v17; // rdi
  ULONG_PTR v18; // r15
  ULONG_PTR v19; // r13
  __int64 *v20; // rax
  __int64 *v21; // rsi
  __int64 v22; // rdi
  char v23; // al
  unsigned __int64 v24; // rax
  __int128 v25; // rt0
  unsigned __int8 v26; // tt
  int v27; // ecx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  ULONG v32; // r13d
  struct _EX_RUNDOWN_REF *v33; // r15
  __int16 v34; // ax
  WAIT_TYPE v35; // r10d
  PKWAIT_BLOCK v36; // rbx
  unsigned int v37; // edi
  struct _NPAGED_LOOKASIDE_LIST *v38; // r13
  PVOID *v39; // rbx
  struct _KWAIT_BLOCK *PoolWithTag; // rax
  volatile signed __int64 *v42; // rbx
  int v43; // eax
  __int64 v44; // rax
  unsigned __int64 *v45; // r9
  unsigned int v46; // r11d
  unsigned int v47; // ecx
  unsigned __int64 v48; // r8
  __int64 v49; // rbx
  unsigned __int64 v50; // rdx
  unsigned int v51; // edx
  int v52; // ecx
  unsigned __int64 v53; // rax
  void *v54; // rsp
  unsigned int v55; // ebx
  unsigned __int64 *v56; // r8
  char v57; // r9
  __int64 v58; // r8
  signed __int32 v59[8]; // [rsp+0h] [rbp-40h] BYREF
  char v60; // [rsp+40h] [rbp+0h] BYREF
  char v61; // [rsp+41h] [rbp+1h]
  char v62; // [rsp+42h] [rbp+2h]
  BOOLEAN v63; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  unsigned __int64 v65; // [rsp+50h] [rbp+10h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+58h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v67; // [rsp+60h] [rbp+20h]
  __int128 v68; // [rsp+68h] [rbp+28h] BYREF
  struct _KTHREAD *v69; // [rsp+78h] [rbp+38h]
  __int64 v70; // [rsp+80h] [rbp+40h]
  WAIT_TYPE WaitType; // [rsp+88h] [rbp+48h]
  int v72; // [rsp+8Ch] [rbp+4Ch]
  unsigned int v73; // [rsp+90h] [rbp+50h]
  ULONG Count; // [rsp+94h] [rbp+54h]
  PLARGE_INTEGER Timeout; // [rsp+98h] [rbp+58h]
  struct _EX_RUNDOWN_REF *v76; // [rsp+A0h] [rbp+60h]
  unsigned __int64 *v77; // [rsp+A8h] [rbp+68h]
  __int64 v78; // [rsp+B0h] [rbp+70h]
  PVOID Object; // [rsp+C0h] [rbp+80h] BYREF
  _BYTE v80[1016]; // [rsp+C8h] [rbp+88h] BYREF

  WaitType = a4;
  v7 = a3;
  v60 = a3;
  v8 = a2;
  v77 = a2;
  v9 = a1;
  Count = a1;
  Timeout = a7;
  v63 = 0;
  v62 = 0;
  WaitBlockArray = 0LL;
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
    WaitBlockArray = PoolWithTag;
    if ( PoolWithTag )
    {
      v62 = 1;
    }
    else
    {
      v63 = KeSetKernelStackSwapEnable(0);
      v53 = 48 * v9 + 15;
      if ( v53 <= 48 * v9 )
        v53 = 0xFFFFFFFFFFFFFF0LL;
      v54 = alloca(v53 & 0xFFFFFFFFFFFFFFF0uLL);
      WaitBlockArray = (PKWAIT_BLOCK)&v60;
    }
  }
  v10 = 0;
  v61 = 0;
  CurrentThread = KeGetCurrentThread();
  v69 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v67 = Process;
  v76 = Process;
  v13 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v14 = Process[131].Count;
    v70 = v14;
    goto LABEL_4;
  }
  v14 = ObReferenceProcessHandleTable(Process);
  v70 = v14;
  if ( v14 )
  {
    v61 = 1;
    goto LABEL_4;
  }
  v55 = 0;
  if ( !(_DWORD)v9 )
    goto LABEL_96;
  v56 = v8;
  v57 = v60;
  while ( ObpIsKernelHandle(*v56, v57) )
  {
    ++v55;
    v56 = (unsigned __int64 *)(v58 + 8);
    if ( v55 >= (unsigned int)v9 )
    {
      v14 = v70;
LABEL_96:
      v7 = v60;
LABEL_4:
      v15 = 0LL;
      v16 = 1;
      v17 = v65;
      while ( 2 )
      {
        v18 = v8[v15];
        if ( v7 || (v18 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v18 >= 0xFFFFFFFFFFFFFFFEuLL )
        {
          v19 = v14;
        }
        else
        {
          v18 ^= 0xFFFFFFFF80000000uLL;
          v19 = ObpKernelHandleTable;
        }
        if ( (v18 & 0x3FC) != 0 )
        {
          v20 = (__int64 *)ExpLookupHandleTableEntry(v19, v18);
          v21 = v20;
          if ( v20 )
          {
            _m_prefetchw(v20);
            v68 = *(_OWORD *)v20;
LABEL_10:
            v22 = v68;
            while ( (v22 & 0x1FFFE) != 0 )
            {
              if ( (v22 & 1) != 0 )
                v23 = 0;
              else
                v23 = v16;
              if ( v23 )
              {
                ExpBlockOnLockedHandleEntry(v19, v21, v22);
                _m_prefetchw(v21);
                v68 = *(_OWORD *)v21;
                v16 = 1;
                goto LABEL_10;
              }
              v78 = v22 - 2;
              *(_QWORD *)&v25 = v22;
              *((_QWORD *)&v25 + 1) = *((_QWORD *)&v68 + 1);
              v26 = _InterlockedCompareExchange128(v21, *((signed __int64 *)&v25 + 1), v22 - 2, (signed __int64 *)&v25);
              v24 = v25;
              v22 = v25;
              v68 = v25;
              if ( v26 )
              {
                if ( (unsigned __int16)(v24 >> 1) != 16 )
                {
                  v17 = (v22 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                  v65 = v17;
LABEL_18:
                  v7 = v60;
                  goto LABEL_19;
                }
                *(_QWORD *)&v68 = ((unsigned int)v22 ^ (2 * (unsigned int)(v24 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v22;
                v17 = ((__int64)v68 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v65 = v17;
                ObpIncrPointerCountEx((volatile signed __int64 *)v17, 32752);
                v52 = ExFastReplenishHandleTableEntry(v21, (unsigned __int64 *)&v68, 32752);
                v16 = 1;
                if ( !v52 )
                  goto LABEL_18;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v17, -v52);
LABEL_56:
                v17 = v65;
                goto LABEL_18;
              }
            }
            if ( ExLockHandleTableEntry(v19, v21) )
            {
              v65 = (*v21 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v42 = (volatile signed __int64 *)v65;
              v68 = *(_OWORD *)v21;
              v43 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v21);
              ObpIncrPointerCountEx(v42, v43 + 1);
              v16 = 1;
              _InterlockedExchangeAdd64(v21, 1uLL);
              _InterlockedOr(v59, 0);
              if ( *(_QWORD *)(v19 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v19 + 48), 0LL);
                v16 = 1;
              }
              goto LABEL_56;
            }
            v17 = v65;
            v7 = v60;
            v16 = 1;
          }
        }
        if ( v18 )
        {
          ExHandleLogBadReference(v19, v18, KeGetCurrentThread()->PreviousMode);
          v17 = v65;
          v16 = 1;
        }
        v21 = 0LL;
LABEL_19:
        if ( !v21 )
        {
          v37 = -1073741816;
          goto LABEL_103;
        }
        v27 = DWORD2(v68) & 0x1FFFFFF;
        v72 = ++v10;
        v28 = v17 + 48;
        *(_QWORD *)&v80[8 * v15 + 504] = v17 + 48;
        if ( v7 == 1 )
        {
          if ( (~v27 & 0x100000) != 0 )
          {
            v37 = -1073741790;
            goto LABEL_103;
          }
          if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
          {
            v44 = ObpInfoMaskToOffset[*(_BYTE *)(v17 + 26) & 0x7F];
            if ( v17 != v44 )
            {
              if ( *(_QWORD *)(v17 - v44 + 16) == 1LL )
              {
                v37 = -1073700858;
LABEL_103:
                CurrentThread = v69;
                v13 = 1;
                goto LABEL_104;
              }
              v17 = v65;
            }
          }
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v17, 1, v16, 1951883855);
          v16 = 1;
        }
        v29 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 + 24) ^ (unsigned __int64)BYTE1(v17);
        v30 = ObTypeIndexTable[v29];
        v31 = *(_QWORD *)(v30 + 32);
        if ( (v31 & 1) != 0 )
        {
          if ( (v31 & 2) != 0 )
          {
            v51 = *(_DWORD *)(v30 + 176);
            v29 = v51 & *(_DWORD *)(*(unsigned __int16 *)(v30 + 180) + v28);
            if ( (_DWORD)v29 == v51 )
            {
              v31 = *(_QWORD *)(*(unsigned __int16 *)(v30 + 182) + v28);
            }
            else
            {
              v31 -= 3LL;
LABEL_27:
              v31 += v28;
            }
          }
          else
          {
            v31 = *(_QWORD *)(v31 + v28 - 1);
          }
        }
        else if ( v31 >= 0 )
        {
          goto LABEL_27;
        }
        *(_QWORD *)&v80[8 * v15 - 8] = v31;
        v15 = (unsigned int)(v15 + 1);
        v32 = Count;
        if ( (unsigned int)v15 >= Count )
        {
          v33 = v67;
          if ( v61 )
          {
            v61 = 0;
            ExReleaseRundownProtection_0(v67 + 92);
          }
          CurrentThread = v69;
          v34 = v69->KernelApcDisable + 1;
          v69->KernelApcDisable = v34;
          if ( !v34
            && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v29);
          }
          v13 = 0;
          v60 = 0;
          v35 = WaitType;
          if ( WaitType == WaitAll && v32 > 1 )
          {
            v45 = (unsigned __int64 *)v80;
            v46 = 1;
            while ( 2 )
            {
              v47 = v46;
              v48 = *v45;
              do
              {
                v49 = v47 - 1;
                v50 = *(_QWORD *)&v80[8 * v49 - 8];
                if ( v48 > v50 )
                  break;
                if ( v48 == v50 )
                {
                  v37 = -1073741776;
                  goto LABEL_105;
                }
                *(_QWORD *)&v80[8 * v47-- - 8] = v50;
              }
              while ( (_DWORD)v49 );
              *(_QWORD *)&v80[8 * v47 - 8] = v48;
              ++v46;
              ++v45;
              if ( v46 < v32 )
                continue;
              break;
            }
          }
          v36 = WaitBlockArray;
          v37 = KeWaitForMultipleObjects(v32, &Object, v35, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
          v73 = v37;
          v38 = Lookaside;
          goto LABEL_36;
        }
        v7 = v60;
        v14 = v70;
        v8 = v77;
        continue;
      }
    }
  }
  v37 = -1073741558;
LABEL_104:
  v33 = v67;
LABEL_105:
  v36 = WaitBlockArray;
  v38 = Lookaside;
LABEL_36:
  if ( v10 )
  {
    v39 = (PVOID *)&v80[8 * v10 + 504];
    do
    {
      ObfDereferenceObjectWithTag(*--v39, 0x7457624Fu);
      --v10;
    }
    while ( v10 );
    v36 = WaitBlockArray;
  }
  if ( v13 )
  {
    if ( v61 )
      ExReleaseRundownProtection_0(v33 + 92);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  if ( v36 )
  {
    if ( v62 )
    {
      if ( v38 )
        ExFreeToNPagedLookasideList(v38, v36);
      else
        ExFreePoolWithTag(v36, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v63);
    }
  }
  return v37;
}

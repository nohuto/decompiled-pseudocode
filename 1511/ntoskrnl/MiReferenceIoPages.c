/*
 * XREFs of MiReferenceIoPages @ 0x1400C16A0
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiProbeLockFrame @ 0x1400A7C30 (MiProbeLockFrame.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoMappings @ 0x14074CB5C (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiDereferenceIoPages @ 0x1400C1300 (MiDereferenceIoPages.c)
 *     MiInitializeIoPageNodeArray @ 0x1400C1C88 (MiInitializeIoPageNodeArray.c)
 *     MiFlushCacheMdl @ 0x140117A20 (MiFlushCacheMdl.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(int a1, ULONG_PTR a2, __int64 a3, int a4, _DWORD *a5, unsigned __int64 *a6)
{
  int v7; // r11d
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  __int64 *v10; // rcx
  unsigned __int64 *v11; // r10
  ULONG_PTR v12; // r14
  unsigned int v13; // ebx
  _BYTE *v14; // r9
  unsigned __int8 CurrentIrql; // al
  _QWORD *v16; // rdx
  _QWORD *v17; // rbx
  bool v18; // si
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int16 *v24; // rbx
  unsigned __int64 v25; // rsi
  int v26; // r8d
  unsigned __int16 v27; // ax
  int v28; // edx
  __int64 v29; // rsi
  PVOID PoolWithTag; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  int v36; // ecx
  unsigned __int64 *v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  int v40; // eax
  int v41; // ecx
  unsigned __int16 *v42; // rcx
  unsigned __int16 *i; // rdx
  unsigned __int16 v44; // ax
  signed __int32 v45[8]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int16 v46; // [rsp+20h] [rbp-158h]
  int v47; // [rsp+24h] [rbp-154h]
  int v48; // [rsp+28h] [rbp-150h]
  _BYTE *v49; // [rsp+30h] [rbp-148h]
  unsigned __int64 *v50; // [rsp+38h] [rbp-140h]
  unsigned __int64 *v51; // [rsp+40h] [rbp-138h]
  unsigned __int64 *v52; // [rsp+48h] [rbp-130h]
  ULONG_PTR v53; // [rsp+50h] [rbp-128h]
  unsigned int v54; // [rsp+58h] [rbp-120h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-118h] BYREF
  _BYTE v56[48]; // [rsp+80h] [rbp-F8h] BYREF
  char v57; // [rsp+B0h] [rbp-C8h] BYREF

  v48 = a4;
  v7 = a4;
  v8 = a1;
  v9 = a2;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v53 = a2;
  v49 = 0LL;
  v10 = &MiState[a1 + 513];
  v47 = 0;
  v52 = 0LL;
  v51 = (unsigned __int64 *)&MiState[v8 + 513];
  v11 = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  v12 = a2;
  if ( (_DWORD)v8 == 1 )
    v11 = (unsigned __int64 *)&qword_1402FF198;
  v13 = 0;
  v50 = v11;
  v54 = 0;
  v14 = 0LL;
  LockHandle.LockQueue.Lock = &qword_1402FF180;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle);
LABEL_76:
    v10 = (__int64 *)v51;
    v14 = 0LL;
    v7 = v48;
    v11 = v50;
    goto LABEL_9;
  }
  v16 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&qword_1402FF180, (__int64)&LockHandle);
  if ( v16 )
  {
    KxWaitForLockOwnerShip((__int64)&LockHandle, v16, 2LL);
    goto LABEL_76;
  }
LABEL_9:
  if ( !a3 )
  {
    v29 = -1LL;
    goto LABEL_33;
  }
  while ( 2 )
  {
    v17 = (_QWORD *)*v10;
    v18 = 0;
    if ( *v10 )
    {
      while ( 1 )
      {
        v19 = v17[5];
        if ( v9 >= v19 )
        {
          if ( v9 < v19 + 512 )
          {
            v21 = (unsigned __int64)v17;
            goto LABEL_16;
          }
          v20 = (_QWORD *)v17[1];
          if ( !v20 )
          {
            v18 = 1;
            break;
          }
        }
        else
        {
          v20 = (_QWORD *)*v17;
          if ( !*v17 )
          {
            v18 = 0;
            break;
          }
        }
        v17 = v20;
      }
    }
    if ( !v11 || (v21 = *v11) == 0 )
    {
LABEL_40:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x440uLL, 0x6F49694Du);
      v21 = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x440uLL);
        *(_QWORD *)(v21 + 40) = v9 & 0xFFFFFFFFFFFFFE00uLL;
        *(_QWORD *)(v21 + 48) = v21 + 64;
        MiInitializeIoPageNodeArray(v21);
        goto LABEL_42;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      MiDereferenceIoPages(v8, v53, v9 - v53);
      return 3221225626LL;
    }
    while ( 1 )
    {
      v32 = *(_QWORD *)(v21 + 40);
      if ( v9 < v32 )
      {
        v21 = *(_QWORD *)v21;
        goto LABEL_67;
      }
      if ( v9 < v32 + 512 )
        break;
      v21 = *(_QWORD *)(v21 + 8);
LABEL_67:
      if ( !v21 )
        goto LABEL_40;
    }
    if ( !v21 )
      goto LABEL_40;
    RtlAvlRemoveNode(v11, v21);
    v33 = v21 + 24;
    if ( qword_1402FF1A0 == v21 + 24 && *(__int64 **)v33 != &qword_1402FF1A0 )
      dword_1402FF1B0 = *(_DWORD *)(*(_QWORD *)v33 + 32LL);
    v34 = *(_QWORD *)v33;
    v35 = *(_QWORD **)(v21 + 32);
    if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 || *v35 != v33 )
      __fastfail(3u);
    *v35 = v34;
    *(_QWORD *)(v34 + 8) = v35;
    _InterlockedOr(v45, 0);
    v36 = *(_DWORD *)(v21 + 56);
    if ( (unsigned int)(KiCacheFlushTimeStamp - v36) > 2
      || (v36 & 1) == 0 && (unsigned int)(KiCacheFlushTimeStamp - v36) >= 2 )
    {
      MiInitializeIoPageNodeArray(v21);
    }
    *(_QWORD *)(v21 + 56) = 0LL;
    --qword_1402FF1B8;
LABEL_42:
    RtlAvlInsertNodeEx(v51, (unsigned __int64)v17, v18, v21);
    v14 = v49;
    v11 = v50;
    v7 = v48;
LABEL_16:
    if ( a6 && !*a6 )
      *a6 = v21;
    v22 = *(_QWORD *)(v21 + 40);
    v23 = *(_QWORD *)(v21 + 48);
    v24 = (unsigned __int16 *)(v23 + 2 * (v9 - v22));
    if ( v9 + a3 > v22 + 512 )
      v25 = v23 + 1024;
    else
      v25 = v23 + 2 * (v9 - v22 + a3);
    if ( (unsigned __int64)v24 >= v25 )
    {
LABEL_28:
      if ( v47 )
      {
        v42 = *(unsigned __int16 **)(v21 + 48);
        for ( i = v42 + 512; v42 < i; ++v42 )
        {
          v44 = *v42;
          v46 = v44;
          if ( (v44 & 0x3FFF) == 0 )
          {
            v46 = v44 | 0xC000;
            *v42 = v44 | 0xC000;
          }
        }
      }
      if ( !a3 )
      {
        v13 = v54;
        v29 = -1LL;
        v12 = v53;
        goto LABEL_31;
      }
      v10 = (__int64 *)v51;
      continue;
    }
    break;
  }
  v26 = v47;
  while ( 1 )
  {
    v46 = *v24;
    v27 = v46;
    if ( (v46 & 0x3FFF) == 0x3FFF )
      break;
    v28 = v46 >> 14;
    if ( (v46 & 0x3FFF) != 0 )
    {
      if ( v28 == v7 )
        ++dword_1402FF1C0;
      else
        ++dword_1402FF1C4;
    }
    else
    {
      ++*(_QWORD *)(v21 + 56);
      if ( v28 == v7 )
      {
        ++dword_1402FF1CC;
      }
      else
      {
        if ( v11 && (v27 & 0xC000) == 0x4000 && !v26 )
        {
          ++dword_1402FF1D0;
          if ( v14 )
          {
            v37 = v52;
          }
          else
          {
            v14 = v56;
            v49 = v56;
            v37 = (unsigned __int64 *)&v57;
          }
          *v37 = v9;
          v52 = v37 + 1;
          if ( v37 + 1 == (unsigned __int64 *)(v14 + 176) )
          {
            ++dword_1402FF1C8;
            *(_QWORD *)v14 = 0LL;
            *((_DWORD *)v14 + 2) = 131248;
            *((_QWORD *)v14 + 4) = 0LL;
            *((_QWORD *)v14 + 5) = 0x10000LL;
            v40 = MiFlushCacheMdl();
            v41 = v47;
            v11 = v50;
            v7 = v48;
            if ( v40 )
              v41 = 1;
            v14 = 0LL;
            v47 = v41;
            v49 = 0LL;
            v26 = v41;
          }
        }
        v27 = (_WORD)v7 << 14;
      }
    }
    if ( a5 )
      *a5 |= 1 << (v27 >> 14);
    ++v9;
    --a3;
    v46 = (v27 ^ (v27 + 1)) & 0x3FFF ^ v27;
    *v24++ = v46;
    if ( (unsigned __int64)v24 >= v25 )
      goto LABEL_28;
  }
  v12 = v53;
  v29 = -1LL;
  v13 = -1073741670;
  if ( v9 != v53 )
    v29 = v9;
LABEL_31:
  if ( v14 )
  {
    ++dword_1402FF1C8;
    v38 = (char *)v52 - v14 - 48;
    *(_QWORD *)v14 = 0LL;
    v39 = (unsigned __int64)(unsigned int)(v38 >> 3) << 12;
    *((_QWORD *)v14 + 4) = 0LL;
    *((_QWORD *)v14 + 5) = (unsigned int)v39;
    *((_WORD *)v14 + 4) = 8 * (((v39 + 4095) >> 12) + 6);
    *((_WORD *)v14 + 5) = 2;
    MiFlushCacheMdl();
  }
LABEL_33:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v29 != -1 )
    MiDereferenceIoPages(v8, v12, v29 - v12);
  return v13;
}

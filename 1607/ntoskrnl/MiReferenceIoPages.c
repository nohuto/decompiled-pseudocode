/*
 * XREFs of MiReferenceIoPages @ 0x14009BB00
 * Callers:
 *     MiProbeLockFrame @ 0x14002F2B0 (MiProbeLockFrame.c)
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528B40 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoMappings @ 0x1407A3F38 (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x14009BF58 (MiIoSpaceIsConstant.c)
 *     MiRemoveUnmappedIoNode @ 0x14009BFD8 (MiRemoveUnmappedIoNode.c)
 *     MiInitializeIoPageNodeArray @ 0x14009C094 (MiInitializeIoPageNodeArray.c)
 *     MiFlushCacheMdl @ 0x14012710C (MiFlushCacheMdl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  int v6; // esi
  __int64 v7; // r15
  __int64 *v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 *v10; // rax
  char *v11; // r14
  unsigned int v12; // edi
  __int64 v13; // r13
  unsigned __int64 *v14; // r12
  __int64 IsConstant; // rax
  __int64 v16; // r9
  _QWORD *v17; // rdi
  bool v18; // bp
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int16 *v25; // rbp
  unsigned __int64 v26; // rdi
  int v27; // r10d
  unsigned __int16 v28; // ax
  unsigned int v29; // edx
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v32; // rcx
  int v33; // eax
  int v34; // ecx
  _WORD *v35; // rcx
  int v36; // [rsp+24h] [rbp-164h]
  __int64 v39; // [rsp+30h] [rbp-158h]
  __int64 *v40; // [rsp+40h] [rbp-148h]
  unsigned __int64 *v41; // [rsp+50h] [rbp-138h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-130h]
  __int64 v43; // [rsp+68h] [rbp-120h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-118h] BYREF
  char v45; // [rsp+90h] [rbp-F8h] BYREF
  char v46; // [rsp+C0h] [rbp-C8h] BYREF

  v6 = a1;
  v39 = a3;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v7 = -1LL;
  v36 = 0;
  v8 = &qword_140327608[a1];
  v9 = a2 & 0xFFFFFFFFFLL;
  v41 = (unsigned __int64 *)v8;
  v43 = a2 & 0xFFFFFFFFFLL;
  v10 = &qword_140327618;
  v11 = 0LL;
  v12 = 0;
  if ( a1 != 1 )
    v10 = 0LL;
  v13 = a2 & 0xFFFFFFFFFLL;
  v40 = v10;
  v14 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( a1 == 1 )
  {
    IsConstant = MiIoSpaceIsConstant(v9, a3, a3, 0LL);
    if ( IsConstant )
      a4 = *(_DWORD *)(IsConstant + 40);
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327600, &LockHandle);
  v16 = v39;
  if ( v39 )
  {
    while ( 1 )
    {
      v17 = (_QWORD *)*v8;
      v18 = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          v19 = v17[5];
          if ( v9 >= v19 )
          {
            if ( v9 < v19 + 512 )
            {
              v21 = v17;
              goto LABEL_19;
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
      if ( !v40 || (v21 = (_QWORD *)MiRemoveUnmappedIoNode(v40, v9)) == 0LL )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x440uLL, 0x6F49694Du);
        v21 = PoolWithTag;
        if ( !PoolWithTag )
        {
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          __writecr8(CurrentIrql);
          MiDereferenceIoPages(a1, v13, v9 - v13);
          return 3221225626LL;
        }
        memset(PoolWithTag, 0, 0x440uLL);
        v21[5] = v9 & 0xFFFFFFFFFFFFFE00uLL;
        v21[6] = v21 + 8;
        MiInitializeIoPageNodeArray(v21);
      }
      RtlAvlInsertNodeEx(v41, (unsigned __int64)v17, v18, (unsigned __int64)v21);
      v16 = v39;
LABEL_19:
      if ( a6 && !*a6 )
        *a6 = v21;
      v22 = v21[5];
      v23 = v21[6];
      v24 = v22 + 512;
      v25 = (unsigned __int16 *)(v23 + 2 * (v9 - v22));
      if ( v22 == -512 || v16 + v9 <= v24 )
        v26 = v23 + 2 * (v16 + v9 - v22);
      else
        v26 = v23 + 1024;
      if ( (unsigned __int64)v25 < v26 )
        break;
LABEL_36:
      if ( v36 )
      {
        v35 = (_WORD *)v21[6];
        v23 = (unsigned __int64)(v35 + 512);
        if ( v35 < v35 + 512 )
        {
          v24 = 0x3FFFLL;
          do
          {
            if ( (*v35 & 0x3FFF) == 0 )
              *v35 |= 0xC000u;
            ++v35;
          }
          while ( (unsigned __int64)v35 < v23 );
          v13 = v43;
          v16 = v39;
        }
      }
      if ( !v16 )
      {
        v12 = 0;
        goto LABEL_39;
      }
      v8 = (__int64 *)v41;
    }
    v24 = (unsigned __int64)a5;
    v27 = v36;
    while ( 1 )
    {
      v28 = *v25;
      v23 = *v25;
      if ( (*v25 & 0x3FFF) == 0x3FFF )
        break;
      v29 = (unsigned int)v23 >> 14;
      if ( (v28 & 0x3FFF) != 0 )
      {
        if ( v29 == a4 )
          ++dword_140327640;
        else
          ++dword_140327644;
      }
      else
      {
        ++v21[7];
        if ( v29 == a4 )
        {
          ++dword_14032764C;
        }
        else
        {
          if ( v40 && (v28 & 0xC000) == 0x4000 && !v27 )
          {
            ++dword_140327650;
            if ( !v11 )
            {
              v11 = &v45;
              v14 = (unsigned __int64 *)&v46;
            }
            *v14++ = v9;
            if ( v14 == (unsigned __int64 *)(v11 + 176) )
            {
              ++dword_140327648;
              *(_QWORD *)v11 = 0LL;
              *((_DWORD *)v11 + 2) = 131248;
              *((_QWORD *)v11 + 4) = 0LL;
              *((_QWORD *)v11 + 5) = 0x10000LL;
              v33 = MiFlushCacheMdl(1LL, 0x4000LL, v24);
              v34 = v36;
              v16 = v39;
              v11 = 0LL;
              if ( v33 )
                v34 = 1;
              v36 = v34;
              v27 = v34;
            }
          }
          v24 = (unsigned __int64)a5;
          v28 = (_WORD)a4 << 14;
        }
      }
      if ( v24 )
        *(_DWORD *)v24 |= 1 << (v28 >> 14);
      v23 = 1LL;
      --v16;
      ++v9;
      v39 = v16;
      *v25++ = (v28 ^ (v28 + 1)) & 0x3FFF ^ v28;
      if ( (unsigned __int64)v25 >= v26 )
        goto LABEL_36;
    }
    v12 = -1073741670;
    if ( v9 != v13 )
      v7 = v9;
LABEL_39:
    if ( v11 )
    {
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 4) = 0LL;
      *((_DWORD *)v11 + 11) = 0;
      v32 = (unsigned __int64)(unsigned int)(((char *)v14 - v11 - 48) >> 3) << 12;
      *((_DWORD *)v11 + 10) = v32;
      *((_WORD *)v11 + 4) = 8 * (((v32 + 4095) >> 12) + 6);
      *((_WORD *)v11 + 5) = 2;
      ++dword_140327648;
      MiFlushCacheMdl(v32, v23, v24);
    }
    v6 = a1;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  __writecr8(CurrentIrql);
  if ( v7 != -1 )
    MiDereferenceIoPages(v6, v13, v7 - v13);
  return v12;
}

/*
 * XREFs of MiReferenceIoPages @ 0x140116704
 * Callers:
 *     MiProbeLockFrame @ 0x140034AC0 (MiProbeLockFrame.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoMappings @ 0x1407C9294 (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     MiIoPfnCompare @ 0x140116BBC (MiIoPfnCompare.c)
 *     MiInitializeIoPageNodeArray @ 0x140116CAC (MiInitializeIoPageNodeArray.c)
 *     MiFlushCacheMdl @ 0x14014C9D0 (MiFlushCacheMdl.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(int a1, ULONG_PTR a2, __int64 a3, int a4, _DWORD *a5, unsigned __int64 *a6)
{
  ULONG_PTR v7; // rdi
  unsigned __int64 *v8; // rbx
  char *v9; // rsi
  unsigned int v10; // r13d
  unsigned __int64 *v11; // r14
  char *v12; // r15
  _QWORD *v13; // r14
  bool v14; // bp
  int v15; // eax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbx
  PVOID PoolWithTag; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int16 *v25; // r14
  unsigned __int64 v26; // rbp
  int v27; // r10d
  unsigned __int16 v28; // ax
  __int64 v29; // rdx
  int v31; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  int v35; // ecx
  __int64 v36; // r8
  unsigned __int64 v37; // rcx
  int v38; // eax
  int v39; // ecx
  unsigned __int16 *v40; // rcx
  unsigned __int16 v41; // ax
  signed __int32 v42[8]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int16 v43; // [rsp+20h] [rbp-158h]
  int v44; // [rsp+24h] [rbp-154h]
  int v45; // [rsp+28h] [rbp-150h]
  int v46; // [rsp+2Ch] [rbp-14Ch]
  __int64 v47; // [rsp+30h] [rbp-148h]
  int v48; // [rsp+38h] [rbp-140h]
  unsigned int v49; // [rsp+3Ch] [rbp-13Ch]
  unsigned __int64 *v50; // [rsp+40h] [rbp-138h]
  _DWORD *v51; // [rsp+48h] [rbp-130h]
  ULONG_PTR v52; // [rsp+50h] [rbp-128h]
  unsigned __int64 *v53; // [rsp+58h] [rbp-120h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-118h] BYREF
  char v55; // [rsp+80h] [rbp-F8h] BYREF
  char v56; // [rsp+B0h] [rbp-C8h] BYREF

  v7 = a2;
  v47 = a3;
  v45 = a4;
  v46 = a1;
  v51 = a5;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v8 = (unsigned __int64 *)&qword_14034F658;
  v52 = a2;
  v9 = 0LL;
  v49 = 0;
  v10 = 0;
  v44 = 0;
  v11 = (unsigned __int64 *)&qword_14034F648[a1];
  v12 = 0LL;
  v53 = v11;
  if ( a1 != 1 )
    v8 = 0LL;
  v50 = v8;
  KeAcquireInStackQueuedSpinLock(&qword_14034F640, &LockHandle);
  if ( !a3 )
    goto LABEL_40;
  v48 = 0x3FFF;
  while ( 2 )
  {
    v13 = (_QWORD *)*v11;
    v14 = 0;
    if ( !v13 )
      goto LABEL_16;
    while ( 1 )
    {
      v15 = MiIoPfnCompare(v7, v13);
      if ( v15 > 0 )
      {
        v16 = (_QWORD *)v13[1];
        if ( !v16 )
        {
          v14 = 1;
          goto LABEL_16;
        }
        goto LABEL_13;
      }
      if ( v15 >= 0 )
      {
        v17 = (unsigned __int64)v13;
        goto LABEL_22;
      }
      v16 = (_QWORD *)*v13;
      if ( !*v13 )
        break;
LABEL_13:
      v13 = v16;
    }
    v14 = 0;
LABEL_16:
    if ( v8 )
    {
      v17 = *v8;
      if ( v17 )
      {
        do
        {
          v31 = MiIoPfnCompare(v7, v17);
          if ( v31 < 0 )
          {
            v17 = *(_QWORD *)v17;
          }
          else
          {
            if ( v31 <= 0 )
              break;
            v17 = *(_QWORD *)(v17 + 8);
          }
        }
        while ( v17 );
        if ( v17 )
        {
          RtlAvlRemoveNode(v50, v17);
          v32 = v17 + 24;
          if ( qword_14034F660 == v17 + 24 && *(__int64 **)v32 != &qword_14034F660 )
            dword_14034F670 = *(_DWORD *)(*(_QWORD *)v32 + 32LL);
          v33 = *(_QWORD *)v32;
          v34 = *(_QWORD **)(v17 + 32);
          if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 || *v34 != v32 )
            __fastfail(3u);
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          _InterlockedOr(v42, 0);
          v35 = *(_DWORD *)(v17 + 56);
          v36 = 1LL;
          if ( (unsigned int)(KiCacheFlushTimeStamp - v35) > 2
            || (v35 & 1) == 0 && (unsigned int)(KiCacheFlushTimeStamp - v35) >= 2 )
          {
            MiInitializeIoPageNodeArray(v17, 2LL, 1LL);
          }
          *(_QWORD *)(v17 + 56) = 0LL;
          qword_14034F678 -= v36;
          goto LABEL_20;
        }
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x440uLL, 0x6F49694Du);
    v17 = (unsigned __int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x440uLL);
      *(_QWORD *)(v17 + 40) = v7 & 0xFFFFFFFFFFFFFE00uLL;
      *(_QWORD *)(v17 + 48) = v17 + 64;
      MiInitializeIoPageNodeArray(v17, v19, v20);
LABEL_20:
      RtlAvlInsertNodeEx(v53, (unsigned __int64)v13, v14, v17);
LABEL_22:
      if ( a6 && !*a6 )
        *a6 = v17;
      v21 = *(_QWORD *)(v17 + 40);
      v22 = v47;
      v23 = v7 - v21;
      v24 = *(_QWORD *)(v17 + 48);
      v25 = (unsigned __int16 *)(v24 + 2 * (v7 - v21));
      if ( v7 + v47 > v21 + 512 )
        v26 = v24 + 1024;
      else
        v26 = v24 + 2 * (v23 + v47);
      if ( (unsigned __int64)v25 >= v26 )
      {
LABEL_36:
        if ( v44 )
        {
          v40 = *(unsigned __int16 **)(v17 + 48);
          v23 = (unsigned __int64)(v40 + 512);
          if ( v40 < v40 + 512 )
          {
            v24 = 0x3FFFLL;
            do
            {
              v41 = *v40;
              v43 = v41;
              if ( (v41 & 0x3FFF) == 0 )
              {
                v43 = v41 | 0xC000;
                *v40 = v41 | 0xC000;
              }
              ++v40;
            }
            while ( (unsigned __int64)v40 < v23 );
            v10 = v49;
            v22 = v47;
          }
        }
        if ( v22 )
        {
          v8 = v50;
          v11 = v53;
          continue;
        }
      }
      else
      {
        v24 = (__int64)v51;
        v27 = v44;
        while ( 1 )
        {
          v43 = *v25;
          v28 = v43;
          if ( (v43 & 0x3FFF) == 0xFFFFFFFF )
            break;
          v29 = v43 >> 14;
          if ( (v43 & 0x3FFF) != 0 )
          {
            if ( (_DWORD)v29 == v45 )
              ++dword_14034F680;
            else
              ++dword_14034F684;
          }
          else
          {
            ++*(_QWORD *)(v17 + 56);
            if ( (_DWORD)v29 == v45 )
            {
              ++dword_14034F68C;
            }
            else
            {
              if ( v50 && (v28 & 0xC000) == 0x4000 && !v27 )
              {
                ++dword_14034F690;
                if ( !v9 )
                {
                  v9 = &v55;
                  v12 = &v56;
                }
                *(_QWORD *)v12 = v7;
                v12 += 8;
                if ( v12 == v9 + 176 )
                {
                  ++dword_14034F688;
                  *(_QWORD *)v9 = 0LL;
                  *((_DWORD *)v9 + 2) = 131248;
                  *((_QWORD *)v9 + 4) = 0LL;
                  *((_QWORD *)v9 + 5) = 0x10000LL;
                  v38 = MiFlushCacheMdl(1LL, v29, v24);
                  v39 = v44;
                  v22 = v47;
                  v9 = 0LL;
                  if ( v38 )
                    v39 = 1;
                  v44 = v39;
                  v27 = v39;
                }
              }
              v24 = (__int64)v51;
              v28 = (_WORD)v45 << 14;
            }
          }
          if ( v24 )
            *(_DWORD *)v24 |= 1 << (v28 >> 14);
          v23 = 1LL;
          --v22;
          ++v7;
          v47 = v22;
          v43 = v48 & (v28 ^ (v28 + 1)) ^ v28;
          *v25++ = v43;
          if ( (unsigned __int64)v25 >= v26 )
            goto LABEL_36;
        }
        MiDereferenceIoPages(v46, v52, v7 - v52);
        v10 = -1073741670;
      }
      if ( v9 )
      {
        *(_QWORD *)v9 = 0LL;
        *((_QWORD *)v9 + 4) = 0LL;
        *((_DWORD *)v9 + 11) = 0;
        v37 = (unsigned __int64)(unsigned int)((v12 - v9 - 48) >> 3) << 12;
        *((_DWORD *)v9 + 10) = v37;
        *((_WORD *)v9 + 4) = 8 * (((v37 + 4095) >> 12) + 6);
        *((_WORD *)v9 + 5) = 2;
        ++dword_14034F688;
        MiFlushCacheMdl(v37, v23, v24);
      }
LABEL_40:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return v10;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      MiDereferenceIoPages(v46, v52, v7 - v52);
      return 3221225626LL;
    }
  }
}

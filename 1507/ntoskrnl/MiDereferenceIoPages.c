/*
 * XREFs of MiDereferenceIoPages @ 0x140116398
 * Callers:
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiZeroAndFlushPtes @ 0x140115540 (MiZeroAndFlushPtes.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiReplaceRotateWithDemandZero @ 0x140134D50 (MiReplaceRotateWithDemandZero.c)
 *     MiDeletePhysmemVad @ 0x140138DDC (MiDeletePhysmemVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     MiIoPfnCompare @ 0x140116BBC (MiIoPfnCompare.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceIoPages(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v5; // rbp
  unsigned __int64 *v6; // rbx
  void *v7; // rdi
  unsigned __int64 *v8; // rax
  _QWORD *v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 j; // r14
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rsi
  _WORD *v17; // r15
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // r8
  _WORD *v21; // rcx
  _WORD *v22; // rdx
  int v23; // eax
  __int64 **v24; // rcx
  _QWORD *v25; // rdi
  bool v26; // r8
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  bool v29; // r8
  __int64 v30; // rbp
  _QWORD *i; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  signed __int32 v34[8]; // [rsp+0h] [rbp-A8h] BYREF
  ULONG_PTR v35; // [rsp+30h] [rbp-78h]
  unsigned __int64 *v36; // [rsp+38h] [rbp-70h]
  unsigned __int64 *v37; // [rsp+40h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  __int16 v39; // [rsp+B0h] [rbp+8h]
  _QWORD *v42; // [rsp+C8h] [rbp+20h] BYREF

  v35 = a3;
  BugCheckParameter4 = a2;
  v42 = 0LL;
  v5 = a3;
  v6 = (unsigned __int64 *)&qword_14034F648[a1];
  v7 = 0LL;
  v37 = v6;
  v8 = (unsigned __int64 *)&qword_14034F658;
  if ( a1 != 1 )
    v8 = 0LL;
  v36 = v8;
  KeAcquireInStackQueuedSpinLock(&qword_14034F640, &LockHandle);
  v9 = (_QWORD *)*v6;
  while ( v9 )
  {
    v10 = MiIoPfnCompare(a2, v9);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v9 = (_QWORD *)v9[1];
    }
    else
    {
      v9 = (_QWORD *)*v9;
    }
  }
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !v9 )
        KeBugCheckEx(0x1Au, 0x61948uLL, a2, a3, BugCheckParameter4);
      v11 = v9[1];
      v12 = v9;
      if ( v11 )
      {
        for ( i = *(_QWORD **)v11; i; i = (_QWORD *)*i )
          v11 = (unsigned __int64)i;
      }
      else
      {
        for ( j = v9[2]; ; j = *(_QWORD *)(v11 + 16) )
        {
          v11 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v11 || *(_QWORD **)v11 == v12 )
            break;
          v12 = (_QWORD *)v11;
        }
      }
      v14 = v9[5];
      v15 = v9[6];
      v16 = v9;
      v17 = (_WORD *)(v15 + 2 * (BugCheckParameter4 - v14));
      v18 = BugCheckParameter4 + v5 > v14 + 512 ? v15 + 1024 : v15 + 2 * (BugCheckParameter4 - v14 + v5);
      if ( (unsigned __int64)v17 < v18 )
        break;
LABEL_24:
      v9 = (_QWORD *)v11;
      if ( !v5 )
        goto LABEL_25;
    }
LABEL_18:
    if ( (*v17 & 0x3FFF) == 0 )
      KeBugCheckEx(0x1Au, 0x6194AuLL, a2, a3, BugCheckParameter4);
    v39 = (*v17 ^ (*v17 - 1)) & 0x3FFF ^ *v17;
    *v17 = v39;
    if ( (v39 & 0x3FFF) != 0 )
      goto LABEL_22;
    v19 = v16[7];
    if ( v19 > 0x200 || v19 == 0 )
      KeBugCheckEx(0x1Au, 0x6194BuLL, (ULONG_PTR)v16, v16[7], BugCheckParameter4);
    v16[7] = v19 - 1;
    if ( v19 != 1 )
      goto LABEL_22;
    RtlAvlRemoveNode(v37, (__int64)v16);
    v20 = v36;
    if ( v36 )
    {
      v21 = (_WORD *)v16[6];
      v22 = v21 + 512;
      while ( 1 )
      {
        if ( v21 >= v22 )
          goto LABEL_40;
        if ( (*v21 & 0xC000) == 0x4000 )
          break;
        ++v21;
      }
      _InterlockedOr(v34, 0);
      v23 = KiCacheFlushTimeStamp;
      *((_DWORD *)v16 + 14) = KiCacheFlushTimeStamp;
      if ( (__int64 *)qword_14034F660 == &qword_14034F660 )
        dword_14034F670 = v23;
      v24 = (__int64 **)qword_14034F668;
      v16[3] = &qword_14034F660;
      v16[4] = v24;
      if ( *v24 != &qword_14034F660 )
        __fastfail(3u);
      *v24 = v16 + 3;
      qword_14034F668 = (__int64)(v16 + 3);
      v25 = (_QWORD *)*v20;
      v26 = 0;
      v27 = v16[5];
      if ( v25 )
      {
        while ( 1 )
        {
          if ( (int)MiIoPfnCompare(v27, v25) < 0 )
          {
            v33 = (_QWORD *)*v25;
            if ( !*v25 )
            {
              v26 = 0;
              break;
            }
          }
          else
          {
            v33 = (_QWORD *)v25[1];
            if ( !v33 )
            {
              v26 = 1;
              break;
            }
          }
          v25 = v33;
        }
      }
      RtlAvlInsertNodeEx(v36, (unsigned __int64)v25, v26, (unsigned __int64)v9);
      v16 = 0LL;
      ++qword_14034F678;
    }
LABEL_40:
    if ( !v16 )
      goto LABEL_22;
    v28 = v42;
    v29 = 0;
    v30 = v16[5];
    if ( !v42 )
      goto LABEL_42;
    while ( 1 )
    {
      if ( (int)MiIoPfnCompare(v30, v28) < 0 )
      {
        v32 = (_QWORD *)*v28;
        if ( !*v28 )
        {
          v29 = 0;
LABEL_42:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v42, (unsigned __int64)v28, v29, (unsigned __int64)v9);
          v5 = v35;
LABEL_22:
          ++v17;
          --v5;
          ++BugCheckParameter4;
          v35 = v5;
          if ( (unsigned __int64)v17 >= v18 )
          {
            v7 = v42;
            goto LABEL_24;
          }
          goto LABEL_18;
        }
      }
      else
      {
        v32 = (_QWORD *)v28[1];
        if ( !v32 )
        {
          v29 = 1;
          goto LABEL_42;
        }
      }
      v28 = v32;
    }
  }
LABEL_25:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( v7 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&v42, (__int64)v7);
    ExFreePoolWithTag(v7, 0);
    v7 = v42;
  }
}

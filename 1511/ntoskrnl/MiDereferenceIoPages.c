/*
 * XREFs of MiDereferenceIoPages @ 0x1400C1300
 * Callers:
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MiZeroAndFlushPtes @ 0x1400C097C (MiZeroAndFlushPtes.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 *     MiReplaceRotateWithDemandZero @ 0x140102EA0 (MiReplaceRotateWithDemandZero.c)
 *     MiDeletePhysmemVad @ 0x1401061CC (MiDeletePhysmemVad.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceIoPages(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  void *v5; // r14
  ULONG_PTR v7; // rdi
  unsigned __int64 *v8; // r15
  __int64 *v9; // rax
  _QWORD *v10; // r15
  ULONG_PTR v11; // rax
  unsigned __int64 i; // r12
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  ULONG_PTR v16; // r10
  _WORD *v17; // rbx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // r10
  _QWORD *v22; // r8
  _WORD *v23; // rcx
  _WORD *j; // rdx
  bool v25; // r8
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  int v28; // eax
  __int64 **v29; // rcx
  unsigned __int64 v30; // rcx
  bool v31; // r8
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  signed __int32 v35[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 *v36; // [rsp+30h] [rbp-78h]
  __int64 *v37; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int16 v39; // [rsp+B0h] [rbp+8h]
  _QWORD *v40; // [rsp+B8h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+18h]
  _QWORD *v42; // [rsp+C8h] [rbp+20h]

  BugCheckParameter3 = a3;
  BugCheckParameter4 = a2;
  v5 = 0LL;
  v40 = 0LL;
  v7 = a3;
  v8 = (unsigned __int64 *)&qword_1402FF188[a1];
  v9 = 0LL;
  v36 = v8;
  if ( a1 == 1 )
    v9 = &qword_1402FF198;
  v37 = v9;
  KeAcquireInStackQueuedSpinLock(&qword_1402FF180, &LockHandle);
  v10 = (_QWORD *)*v8;
  while ( v10 )
  {
    v11 = v10[5];
    if ( a2 >= v11 )
    {
      if ( a2 < v11 + 512 )
        break;
      v10 = (_QWORD *)v10[1];
    }
    else
    {
      v10 = (_QWORD *)*v10;
    }
  }
  if ( a3 )
  {
    while ( 1 )
    {
      if ( !v10 )
        KeBugCheckEx(0x1Au, 0x61948uLL, a2, BugCheckParameter3, BugCheckParameter4);
      i = v10[1];
      v13 = v10;
      if ( i )
      {
        v27 = *(_QWORD **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = (unsigned __int64)v27;
            v27 = (_QWORD *)*v27;
          }
          while ( v27 );
        }
      }
      else
      {
        for ( i = v10[2] & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD **)i == v13 )
            break;
          v13 = (_QWORD *)i;
        }
      }
      v14 = v10[5];
      v15 = v10[6];
      v42 = v10;
      v16 = (ULONG_PTR)v10;
      v17 = (_WORD *)(v15 + 2 * (BugCheckParameter4 - v14));
      v18 = v7 + BugCheckParameter4 > v14 + 512 ? v15 + 1024 : v15 + 2 * (BugCheckParameter4 - v14 + v7);
      if ( (unsigned __int64)v17 < v18 )
        break;
LABEL_21:
      v10 = (_QWORD *)i;
      if ( !v7 )
        goto LABEL_22;
    }
LABEL_17:
    if ( (*v17 & 0x3FFF) == 0 )
      KeBugCheckEx(0x1Au, 0x6194AuLL, a2, BugCheckParameter3, BugCheckParameter4);
    v39 = (*v17 ^ (*v17 - 1)) & 0x3FFF ^ *v17;
    *v17 = v39;
    if ( (v39 & 0x3FFF) != 0 )
      goto LABEL_19;
    v19 = *(_QWORD *)(v16 + 56);
    if ( v19 > 0x200 || v19 == 0 )
      KeBugCheckEx(0x1Au, 0x6194BuLL, v16, *(_QWORD *)(v16 + 56), BugCheckParameter4);
    v20 = v19 - 1;
    *(_QWORD *)(v16 + 56) = v20;
    if ( v20 )
      goto LABEL_19;
    RtlAvlRemoveNode(v36, v16);
    v21 = (unsigned __int64 *)v37;
    v22 = v42;
    if ( v37 )
    {
      v23 = (_WORD *)v42[6];
      for ( j = v23 + 512; v23 < j; ++v23 )
      {
        if ( (*v23 & 0xC000) == 0x4000 )
        {
          _InterlockedOr(v35, 0);
          v28 = KiCacheFlushTimeStamp;
          *((_DWORD *)v22 + 14) = KiCacheFlushTimeStamp;
          if ( (__int64 *)qword_1402FF1A0 == &qword_1402FF1A0 )
            dword_1402FF1B0 = v28;
          v29 = (__int64 **)qword_1402FF1A8;
          v22[3] = &qword_1402FF1A0;
          v22[4] = v29;
          if ( *v29 != &qword_1402FF1A0 )
            __fastfail(3u);
          *v29 = v22 + 3;
          qword_1402FF1A8 = (__int64)(v22 + 3);
          v30 = v22[5];
          v31 = 0;
          v32 = (_QWORD *)*v21;
          if ( !*v21 )
            goto LABEL_45;
          while ( 1 )
          {
            if ( v30 < v32[5] )
            {
              v34 = (_QWORD *)*v32;
              if ( !*v32 )
              {
                v31 = 0;
                goto LABEL_45;
              }
            }
            else
            {
              v34 = (_QWORD *)v32[1];
              if ( !v34 )
              {
                v31 = 1;
LABEL_45:
                RtlAvlInsertNodeEx(v21, (unsigned __int64)v32, v31, (unsigned __int64)v10);
                v16 = 0LL;
                ++qword_1402FF1B8;
                v42 = 0LL;
                goto LABEL_19;
              }
            }
            v32 = v34;
          }
        }
      }
    }
    v25 = 0;
    v26 = v40;
    if ( !v40 )
      goto LABEL_32;
    while ( 1 )
    {
      if ( v42[5] < v26[5] )
      {
        v33 = (_QWORD *)*v26;
        if ( !*v26 )
        {
          v25 = 0;
LABEL_32:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v40, (unsigned __int64)v26, v25, (unsigned __int64)v10);
          v16 = (ULONG_PTR)v42;
LABEL_19:
          ++v17;
          ++BugCheckParameter4;
          --v7;
          if ( (unsigned __int64)v17 >= v18 )
          {
            v5 = v40;
            goto LABEL_21;
          }
          goto LABEL_17;
        }
      }
      else
      {
        v33 = (_QWORD *)v26[1];
        if ( !v33 )
        {
          v25 = 1;
          goto LABEL_32;
        }
      }
      v26 = v33;
    }
  }
LABEL_22:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 )
  {
    do
    {
      RtlAvlRemoveNode((unsigned __int64 *)&v40, (__int64)v5);
      ExFreePoolWithTag(v5, 0);
      v5 = v40;
    }
    while ( v40 );
  }
}

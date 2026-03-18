/*
 * XREFs of MiCloneProcessAddressSpace @ 0x140406774
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiCreateCloneChain @ 0x140001300 (MiCreateCloneChain.c)
 *     MiLockDownWorkingSet @ 0x140001790 (MiLockDownWorkingSet.c)
 *     MiInsertClone @ 0x140001A08 (MiInsertClone.c)
 *     MiCreateForkWsles @ 0x140001A9C (MiCreateForkWsles.c)
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiVadMapsLargeImage @ 0x14008D1A0 (MiVadMapsLargeImage.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiMapUserLargePages @ 0x14022F2A8 (MiMapUserLargePages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x1404069E0 (MiBuildNewCloneDescriptor.c)
 *     MiUnlockVadRange @ 0x1404B1B2C (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 *     MiDeleteAllPartialCloneVads @ 0x1406AA5D0 (MiDeleteAllPartialCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x1406AA7EC (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(_KPROCESS *BugCheckParameter1, _KPROCESS *a2, int a3)
{
  _KPROCESS *Process; // rsi
  int v7; // r12d
  _QWORD *v8; // r14
  __int16 *ProcessPartition; // rax
  __int16 *v10; // rdx
  __int64 v11; // r15
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rax
  _QWORD *v20; // r15
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  PVOID P; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  _KPROCESS *v30; // [rsp+40h] [rbp-40h]
  _BYTE v31[48]; // [rsp+48h] [rbp-38h] BYREF

  v29 = 0LL;
  P = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0;
  v30 = Process;
  v8 = 0LL;
  MiGetProcessPartition((__int64)a2);
  ProcessPartition = MiGetProcessPartition((__int64)BugCheckParameter1);
  if ( v10 != ProcessPartition )
    return 3221225659LL;
  MiLockDownWorkingSet((ULONG_PTR)a2, 1);
  if ( Process != BugCheckParameter1 )
  {
    v7 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v31);
  }
  if ( MEMORY[0xFFFFF58010804258] && (a3 & 1) == 0 )
  {
    v12 = -1073741637;
LABEL_34:
    if ( v7 )
      KiUnstackDetachProcess((struct _KTHREAD *)v31, 0);
    MiDeleteAllPartialCloneVads(a2);
    MiLockDownWorkingSet((ULONG_PTR)a2, 0);
    return (unsigned int)v12;
  }
  v11 = MiLockVadRange(BugCheckParameter1, -1LL, -1LL);
  if ( !v11 )
  {
    v12 = -1073741558;
    goto LABEL_30;
  }
  v12 = MiCreateCloneChain((__int64)a2, &P);
  if ( v12 < 0 )
    goto LABEL_30;
  v12 = MiAllocateChildVads((ULONG_PTR)a2, &v29);
  if ( v12 < 0 )
    goto LABEL_30;
  if ( (a3 & 1) != 0 )
  {
    v13 = MiBuildNewCloneDescriptor(a2, 2LL, MEMORY[0xFFFFF58010804258]);
    v8 = (_QWORD *)v13;
    if ( !v13 )
    {
      v12 = -1073741670;
      goto LABEL_30;
    }
    memset(*(void **)(v13 + 24), 0, 32LL * *(_QWORD *)(v13 + 40));
    *(_QWORD *)(v8[3] + 16LL) = *(_QWORD *)(v8[3] + 16LL) & 0x7FFFFFFFFFFFFFFLL | 0x2000000000000000LL;
    *(_QWORD *)(v8[3] + 48LL) = *(_QWORD *)(v8[3] + 48LL) & 0x7FFFFFFFFFFFFFFLL | 0x800000000000000LL;
  }
  v12 = MiCloneVads(BugCheckParameter1, (__int64)a2, (__int64)P, (__int64)v8, a3);
  if ( v12 < 0 )
  {
LABEL_30:
    MiUnlockVadRange(BugCheckParameter1, -1LL, v11);
    v20 = P;
    if ( P )
    {
      do
      {
        v21 = (_QWORD *)*v20;
        PsReturnProcessNonPagedPoolQuota((ULONG_PTR)a2, v20[8]);
        ExFreePoolWithTag(v20, 0);
        v20 = v21;
      }
      while ( v21 );
    }
    if ( v8 )
      MiFreeCloneDescriptor(a2, v8);
    goto LABEL_34;
  }
  MiUnlockVadRange(BugCheckParameter1, -1LL, v11);
  if ( v7 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v31, 0);
    v7 = 0;
  }
  if ( v30 != a2 )
  {
    v7 = 1;
    KiStackAttachProcess(a2, 0, (__int64)v31);
  }
  v14 = v29;
  if ( v29 )
  {
    v22 = (_QWORD *)a2[2].Affinity.Bitmap[0];
    v23 = 0LL;
    while ( v22 )
    {
      v23 = v22;
      v22 = (_QWORD *)*v22;
    }
    while ( v23 )
    {
      v24 = (_QWORD *)v23[1];
      v25 = (__int64)v23;
      v26 = v23;
      if ( v24 )
      {
        do
        {
          v23 = v24;
          v24 = (_QWORD *)*v24;
        }
        while ( v24 );
      }
      else
      {
        while ( 1 )
        {
          v23 = (_QWORD *)(v23[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v23 || (_QWORD *)*v23 == v26 )
            break;
          v26 = v23;
        }
      }
      if ( MiVadMapsLargeImage(v25) || (*(_BYTE *)(v27 + 48) & 7) == 5 )
      {
        MiMapUserLargePages(v27, (*(_DWORD *)(v27 + 48) >> 8) & 0x3F, (__int64)a2);
        if ( !--v14 )
          break;
      }
    }
  }
  MiCreateForkWsles();
  if ( v8 )
  {
    v15 = v8[5];
    v16 = 0LL;
    v17 = 0;
    if ( !v15 )
      goto LABEL_53;
    v18 = 0LL;
    do
    {
      ++v17;
      v16 += *(_QWORD *)(32 * v18 + v8[3] + 24);
      v18 = v17;
    }
    while ( v17 < v15 );
    if ( v16 )
    {
      v8[6] = v16;
      MiInsertClone((__int64)a2, (__int64)v8, v15);
    }
    else
    {
LABEL_53:
      MiFreeCloneDescriptor(a2, v8);
    }
  }
  MiLockDownWorkingSet((ULONG_PTR)a2, 0);
  if ( v7 )
    KiUnstackDetachProcess((struct _KTHREAD *)v31, 0);
  return 0LL;
}

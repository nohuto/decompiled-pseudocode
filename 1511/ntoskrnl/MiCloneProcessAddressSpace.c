/*
 * XREFs of MiCloneProcessAddressSpace @ 0x14046100C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     MiInsertClone @ 0x14009A54C (MiInsertClone.c)
 *     MiLockDownWorkingSet @ 0x14009A59C (MiLockDownWorkingSet.c)
 *     MiCreateForkWsles @ 0x14009A6E4 (MiCreateForkWsles.c)
 *     MiCreateCloneChain @ 0x14009ABD0 (MiCreateCloneChain.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiMapUserLargePages @ 0x1401E1F60 (MiMapUserLargePages.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiUnlockVadRange @ 0x1403E8634 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 *     MiBuildNewCloneDescriptor @ 0x140460EE0 (MiBuildNewCloneDescriptor.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 *     MiDeleteAllPartialCloneVads @ 0x14062CB58 (MiDeleteAllPartialCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x14062CD38 (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(_KPROCESS *BugCheckParameter1, struct _KPROCESS *a2, int a3)
{
  _KPROCESS *Process; // rsi
  int v7; // r12d
  _QWORD *v8; // r14
  int *ProcessPartition; // rax
  int *v10; // rdx
  __int64 v11; // r15
  int ChildVads; // esi
  _QWORD *v13; // rax
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
  __int64 v29; // [rsp+38h] [rbp-48h]
  struct _KPROCESS *v30; // [rsp+40h] [rbp-40h]
  $D4FCF91253F76F57393CBFE908971F67 v31; // [rsp+48h] [rbp-38h] BYREF

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
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)&v31);
  }
  if ( MEMORY[0xFFFFF580108042B0] && (a3 & 1) == 0 )
  {
    ChildVads = -1073741637;
LABEL_34:
    if ( v7 )
      KiUnstackDetachProcess(&v31, 0LL);
    MiDeleteAllPartialCloneVads(a2);
    MiLockDownWorkingSet((ULONG_PTR)a2, 0);
    return (unsigned int)ChildVads;
  }
  v11 = MiLockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( !v11 )
  {
    ChildVads = -1073741558;
    goto LABEL_30;
  }
  ChildVads = MiCreateCloneChain((__int64)a2, &P);
  if ( ChildVads < 0 )
    goto LABEL_30;
  ChildVads = MiAllocateChildVads((ULONG_PTR)a2);
  if ( ChildVads < 0 )
    goto LABEL_30;
  if ( (a3 & 1) != 0 )
  {
    v13 = MiBuildNewCloneDescriptor(a2, 2LL, MEMORY[0xFFFFF580108042B0]);
    v8 = v13;
    if ( !v13 )
    {
      ChildVads = -1073741670;
      goto LABEL_30;
    }
    memset((void *)v13[3], 0, 32LL * v13[5]);
    *(_QWORD *)(v8[3] + 16LL) = *(_QWORD *)(v8[3] + 16LL) & 0x7FFFFFFFFFFFFFFLL | 0x2000000000000000LL;
    *(_QWORD *)(v8[3] + 48LL) = *(_QWORD *)(v8[3] + 48LL) & 0x7FFFFFFFFFFFFFFLL | 0x800000000000000LL;
  }
  ChildVads = MiCloneVads((__int64)BugCheckParameter1, (unsigned __int64 *)a2, (__int64)P, (__int64)v8, a3);
  if ( ChildVads < 0 )
  {
LABEL_30:
    MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v11);
    v20 = P;
    if ( P )
    {
      do
      {
        v21 = (_QWORD *)*v20;
        PsReturnProcessNonPagedPoolQuota(a2, v20[8]);
        ExFreePoolWithTag(v20, 0);
        v20 = v21;
      }
      while ( v21 );
    }
    if ( v8 )
      MiFreeCloneDescriptor(a2, v8);
    goto LABEL_34;
  }
  MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v11);
  if ( v7 )
  {
    KiUnstackDetachProcess(&v31, 0LL);
    v7 = 0;
  }
  if ( v30 != a2 )
  {
    v7 = 1;
    KiStackAttachProcess(a2, 0LL, (__int64)&v31);
  }
  v14 = v29;
  if ( v29 )
  {
    v22 = (_QWORD *)a2[2].Affinity.Bitmap[1];
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
      MiInsertClone((__int64)a2, (unsigned __int64)v8);
    }
    else
    {
LABEL_53:
      MiFreeCloneDescriptor(a2, v8);
    }
  }
  MiLockDownWorkingSet((ULONG_PTR)a2, 0);
  if ( v7 )
    KiUnstackDetachProcess(&v31, 0LL);
  return 0LL;
}

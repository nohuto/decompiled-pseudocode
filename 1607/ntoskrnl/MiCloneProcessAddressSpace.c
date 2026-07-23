/*
 * XREFs of MiCloneProcessAddressSpace @ 0x14050A958
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140028040 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiVadMapsLargeImage @ 0x14002BF90 (MiVadMapsLargeImage.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiLockDownWorkingSet @ 0x14010A384 (MiLockDownWorkingSet.c)
 *     MiInsertClone @ 0x14010A4DC (MiInsertClone.c)
 *     MiCreateForkWsles @ 0x14010A528 (MiCreateForkWsles.c)
 *     MiCreateCloneChain @ 0x14010AA80 (MiCreateCloneChain.c)
 *     MiIsStoreProcess @ 0x14010AC04 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiUnlockVadRange @ 0x1404D6774 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404D6868 (MiLockVadRange.c)
 *     MiBuildNewCloneDescriptor @ 0x14050A7A4 (MiBuildNewCloneDescriptor.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x1406623D0 (MiCopyLargeVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x140663140 (MiDeleteAllPartialCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x140663320 (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(_KPROCESS *BugCheckParameter1, _KPROCESS *a2, int a3)
{
  int v4; // r13d
  unsigned int v5; // r15d
  _KPROCESS *Process; // rdi
  _QWORD *v9; // r14
  int *ProcessPartition; // rax
  int *v11; // rdx
  int ChildVads; // edi
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // r10
  _QWORD *v25; // rcx
  __int64 v26; // r10
  int v27; // [rsp+30h] [rbp-39h]
  _QWORD *v28; // [rsp+38h] [rbp-31h] BYREF
  __int64 v29; // [rsp+40h] [rbp-29h]
  __int64 v30; // [rsp+48h] [rbp-21h]
  _KPROCESS *v31; // [rsp+50h] [rbp-19h]
  _BYTE v32[48]; // [rsp+58h] [rbp-11h] BYREF

  v4 = 0;
  v5 = 0x40000000;
  v29 = 0LL;
  v28 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v31 = Process;
  v9 = 0LL;
  v27 = 0x40000000;
  MiGetProcessPartition((__int64)a2);
  ProcessPartition = MiGetProcessPartition((__int64)BugCheckParameter1);
  if ( v11 == ProcessPartition && !MiIsStoreProcess((__int64)BugCheckParameter1) )
  {
    MiLockDownWorkingSet(a2, 1);
    if ( Process != BugCheckParameter1 )
    {
      v4 = 1;
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v32);
    }
    if ( *(_QWORD *)(qword_140327FD0 + 276840632) && (a3 & 1) == 0 )
    {
      ChildVads = -1073741637;
LABEL_41:
      if ( v4 )
        KiUnstackDetachProcess((struct _KTHREAD *)v32, 0);
      MiDeleteAllPartialCloneVads(a2, v5);
      MiLockDownWorkingSet(a2, 0);
      return (unsigned int)ChildVads;
    }
    v30 = MiLockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v30 )
    {
      ChildVads = MiCreateCloneChain((__int64)a2, &v28);
      if ( ChildVads >= 0 )
      {
        ChildVads = MiAllocateChildVads((ULONG_PTR)a2);
        if ( ChildVads >= 0 )
        {
          if ( (a3 & 1) == 0 )
            goto LABEL_12;
          v13 = MiBuildNewCloneDescriptor((ULONG_PTR)a2, 2LL, *(_QWORD *)(qword_140327FD0 + 276840632));
          v9 = v13;
          if ( v13 )
          {
            memset((void *)v13[3], 0, 32LL * v13[5]);
            *(_QWORD *)(v9[3] + 16LL) = *(_QWORD *)(v9[3] + 16LL) & 0x7FFFFFFFFFFFFFFLL | 0x2000000000000000LL;
            *(_QWORD *)(v9[3] + 48LL) = *(_QWORD *)(v9[3] + 48LL) & 0x7FFFFFFFFFFFFFFLL | 0x800000000000000LL;
LABEL_12:
            v14 = v28;
            ChildVads = MiCloneVads(BugCheckParameter1, (ULONG_PTR)a2, (__int64)v28, (__int64)v9, a3);
            if ( ChildVads >= 0 )
            {
              v14 = 0LL;
              v27 = 0;
              if ( v29 )
              {
                v21 = (_QWORD *)a2[2].Affinity.Bitmap[3];
                v22 = 0LL;
                while ( v21 )
                {
                  v22 = v21;
                  v21 = (_QWORD *)*v21;
                }
                while ( v22 )
                {
                  v23 = (_QWORD *)v22[1];
                  v24 = (__int64)v22;
                  v25 = v22;
                  if ( v23 )
                  {
                    do
                    {
                      v22 = v23;
                      v23 = (_QWORD *)*v23;
                    }
                    while ( v23 );
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v22 = (_QWORD *)(v22[2] & 0xFFFFFFFFFFFFFFFCuLL);
                      if ( !v22 || (_QWORD *)*v22 == v25 )
                        break;
                      v25 = v22;
                    }
                  }
                  if ( MiVadMapsLargeImage(v24) || (*(_BYTE *)(v26 + 48) & 7) == 5 )
                  {
                    MiLocateAddress((*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32)) << 12);
                    ChildVads = MiCopyLargeVad((ULONG_PTR)a2);
                    if ( ChildVads < 0 )
                      goto LABEL_15;
                    if ( !--v29 )
                      break;
                  }
                }
              }
              ChildVads = 0;
LABEL_15:
              MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v30);
              if ( v4 )
              {
                KiUnstackDetachProcess((struct _KTHREAD *)v32, 0);
                v4 = 0;
              }
              if ( v31 != a2 )
              {
                v4 = 1;
                KiStackAttachProcess(a2, 0, (__int64)v32);
              }
              MiCreateForkWsles();
              if ( v9 )
              {
                v15 = v9[5];
                v16 = 0LL;
                v17 = 0;
                if ( !v15 )
                  goto LABEL_61;
                v18 = 0LL;
                do
                {
                  ++v17;
                  v16 += *(_QWORD *)(32 * v18 + v9[3] + 24);
                  v18 = v17;
                }
                while ( v17 < v15 );
                if ( v16 )
                {
                  v9[6] = v16;
                  MiInsertClone((__int64)a2, (unsigned __int64)v9);
                }
                else
                {
LABEL_61:
                  MiFreeCloneDescriptor(a2, v9);
                }
                v9 = 0LL;
              }
              if ( ChildVads >= 0 )
              {
                MiLockDownWorkingSet(a2, 0);
                if ( v4 )
                  KiUnstackDetachProcess((struct _KTHREAD *)v32, 0);
                return (unsigned int)ChildVads;
              }
              goto LABEL_36;
            }
LABEL_35:
            MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v30);
LABEL_36:
            if ( v14 )
            {
              do
              {
                v20 = (_QWORD *)*v14;
                PsReturnProcessNonPagedPoolQuota((ULONG_PTR)a2, v14[8]);
                ExFreePoolWithTag(v14, 0);
                v14 = v20;
              }
              while ( v20 );
            }
            if ( v9 )
              MiFreeCloneDescriptor(a2, v9);
            v5 = v27;
            goto LABEL_41;
          }
          ChildVads = -1073741670;
        }
      }
    }
    else
    {
      ChildVads = -1073741558;
    }
    v14 = v28;
    goto LABEL_35;
  }
  return 3221225659LL;
}

/*
 * XREFs of HMDestroyUnlockedObject @ 0x1C003A710
 * Callers:
 *     HMAssignmentUnlock @ 0x1C0014330 (HMAssignmentUnlock.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0038F60 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0039100 (DestroyThreadsObjects.c)
 *     ThreadUnlock1 @ 0x1C00590B0 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C007B320 (HMUnlockObjectInternal.c)
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00B4270 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003A784 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003A7A0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C007B26C (HMRemoveHandleForObjectWorker.c)
 *     HMUnlockObject @ 0x1C007B2FC (HMUnlockObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HMDestroyUnlockedObject(ULONG_PTR *a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdi
  void *v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  v2 = *((_BYTE *)a1 + 16);
  v3 = 0LL;
  *((_BYTE *)a1 + 17) |= 2u;
  if ( v2 == 19 )
  {
    v4 = *(void **)(*a1 + 32);
    goto LABEL_10;
  }
  if ( v2 == 22 )
  {
    v3 = *(_QWORD *)(*a1 + 16);
    v4 = *(void **)(v3 + 32);
LABEL_10:
    ObfDereferenceObject(v4);
    HMRemoveHandleForObjectWorker(a1);
    goto LABEL_4;
  }
  (*(&gahti + 2 * v2))(*a1);
LABEL_4:
  if ( !gbInDestroyHandleTableObjects && v3 )
    HMUnlockObject(v3);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
}

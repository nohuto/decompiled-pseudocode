/*
 * XREFs of HMDestroyUnlockedObject @ 0x1C0041660
 * Callers:
 *     HMAssignmentUnlock @ 0x1C0041220 (HMAssignmentUnlock.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0041CF0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0041EB0 (DestroyThreadsObjects.c)
 *     ThreadUnlock1 @ 0x1C005EA20 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C0077C90 (HMUnlockObjectInternal.c)
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AB070 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0041FF0 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0077BDC (HMRemoveHandleForObjectWorker.c)
 *     HMUnlockObject @ 0x1C0077C6C (HMUnlockObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HMDestroyUnlockedObject(unsigned __int8 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  void *v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  ++gdwInAtomicOperation;
  v5 = 0;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v5);
  a1[17] |= 2u;
  v2 = 0LL;
  if ( !dword_1C0101B30 )
  {
    v3 = a1[16];
    goto LABEL_5;
  }
  LOBYTE(v3) = a1[16];
  if ( (_BYTE)v3 == 19 )
  {
    v4 = *(void **)(*(_QWORD *)a1 + 32LL);
    goto LABEL_15;
  }
  if ( (_BYTE)v3 == 22 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    v4 = *(void **)(v2 + 32);
LABEL_15:
    ObfDereferenceObject(v4);
    HMRemoveHandleForObjectWorker(a1);
    goto LABEL_6;
  }
  v3 = (unsigned __int8)v3;
LABEL_5:
  (*(&gahti + 2 * v3))(*(_QWORD *)a1);
LABEL_6:
  if ( !gbInDestroyHandleTableObjects && v2 )
    HMUnlockObject(v2);
  if ( !v5 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v5);
  }
}

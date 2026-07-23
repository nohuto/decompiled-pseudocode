/*
 * XREFs of NtRenameKey @ 0x1405F9EA4
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFE80 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  KPROCESSOR_MODE PreviousMode; // r14
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  BOOLEAN v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // ebx
  char v14; // r13
  char v15; // si
  int v16; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v18; // rdx
  _WORD *v19; // rsi
  int v20; // ecx
  char v21; // si
  struct _KTHREAD *v22; // rax
  int v23; // eax
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  NTSTATUS v35; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  int v37[4]; // [rsp+40h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-98h]
  _SLIST_ENTRY v40; // [rsp+68h] [rbp-90h] BYREF
  int v41; // [rsp+78h] [rbp-80h]
  __int128 v42; // [rsp+80h] [rbp-78h]
  __int128 v43; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v44[6]; // [rsp+A0h] [rbp-58h] BYREF

  Object = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v44, 0, 0x28uLL);
  v41 = -1;
  *((_QWORD *)&v40.Next + 1) = &v40;
  v40.Next = &v40;
  v37[0] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v10 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
    v13 = -1073741431;
    v35 = -1073741431;
    v14 = 0;
    v15 = 0;
    goto LABEL_53;
  }
  v12 = 1LL;
  if ( PreviousMode == 1 )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewName >= 0x7FFFFFFF0000LL )
      NewName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v16 = *(_DWORD *)&NewName->Length;
    LODWORD(v42) = v16;
    Buffer = NewName->Buffer;
    *((_QWORD *)&v42 + 1) = Buffer;
    *(_OWORD *)Src = v42;
    if ( (_WORD)v16 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (unsigned __int64)Buffer + (unsigned __int16)v16;
      if ( v18 > 0x7FFFFFFF0000LL || v18 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  v11 = LOWORD(Src[0]);
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v19 = Src[1], !*(_WORD *)Src[1]) )
  {
    v13 = -1073741811;
    v35 = -1073741811;
    v14 = 0;
    v15 = 0;
    goto LABEL_53;
  }
  if ( PreviousMode == 1 )
  {
    P = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, LOWORD(Src[0]), 0x426E4D43u);
    if ( !P )
    {
      v13 = -1073741670;
      v35 = -1073741670;
      v14 = 0;
      v15 = 0;
      goto LABEL_53;
    }
    v19 = P;
    memmove(P, Src[1], LOWORD(Src[0]));
    Src[1] = P;
    v11 = LOWORD(Src[0]);
    v12 = 1LL;
  }
  v20 = 0;
  v8 = (unsigned __int16)v11 >> 1;
  if ( (unsigned __int16)v11 >> 1 )
  {
    while ( v19[v20] != 92 )
    {
      if ( ++v20 >= (unsigned int)v8 )
        goto LABEL_27;
    }
    v13 = -1073741811;
    goto LABEL_25;
  }
LABEL_27:
  v13 = CmObReferenceObjectByHandle(KeyHandle, 0x20006u, (void *)v8, PreviousMode, &Object, 0LL);
  v35 = v13;
  if ( v13 == -1073741790 && CmpVEEnabled && !CmpIsSystemEntity(v37) )
  {
    v13 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, (void *)v8, PreviousMode, &Object, 0LL);
    v35 = v13;
    if ( v13 < 0 )
      goto LABEL_26;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      v13 = -1073741790;
LABEL_25:
      v35 = v13;
LABEL_26:
      v14 = 0;
      v15 = 0;
      goto LABEL_53;
    }
    v21 = 1;
  }
  else
  {
    v21 = 0;
  }
  if ( v13 < 0 )
    goto LABEL_26;
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v14 = 0;
    goto LABEL_45;
  }
  v44[0] = Object;
  v44[1] = Src;
  v23 = CmpCallCallBacks(4u, (__int64)v44, 1, 0x13u, (__int64)Object, &v40);
  v13 = v23;
  v35 = v23;
  if ( v23 >= 0 )
  {
    v14 = 1;
LABEL_45:
    CmpLockRegistryExclusive();
    v5 = 1;
    v24 = Object;
    CmpFlushNotifiesOnKeyBodyList(*((_QWORD *)Object + 1), 0LL, 1);
    if ( (*(_DWORD *)(v24[1] + 4LL) & 0x180) == 0 )
    {
      if ( !v21 )
        goto LABEL_49;
      CmpUnlockRegistry();
      v5 = 0;
      LOBYTE(v25) = PreviousMode;
      v13 = CmKeyBodyReplicateToVirtual(&Object, v25, 131078LL, v37);
      v35 = v13;
      if ( v13 < 0 )
      {
LABEL_51:
        v15 = 1;
        goto LABEL_53;
      }
      CmpLockRegistryExclusive();
      v5 = 1;
      v26 = Object;
      CmpFlushNotifiesOnKeyBodyList(*((_QWORD *)Object + 1), 0LL, 1);
      if ( (*(_DWORD *)(v26[1] + 4LL) & 0x180) == 0 )
      {
LABEL_49:
        ExReleaseRundownProtection(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
        v10 = 0;
        v43 = *(_OWORD *)Src;
        LOBYTE(v30) = PreviousMode;
        v13 = CmRenameKey(Object, &v43, v30);
        v35 = v13;
        goto LABEL_51;
      }
    }
    v13 = -1073741790;
    v35 = -1073741790;
    goto LABEL_51;
  }
  v15 = 1;
  if ( v23 == -1073740541 )
  {
    v13 = 0;
    v35 = 0;
  }
  v14 = 0;
LABEL_53:
  if ( v5 )
    CmpUnlockRegistry();
  if ( v14 )
  {
    v13 = CmPostCallbackNotification(19, (__int64)Object, v13, (__int64)v44, &v40);
    v35 = v13;
  }
  if ( v15 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v8, v12);
    v13 = v35;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v31, v32, v33);
    return v35;
  }
  return v13;
}

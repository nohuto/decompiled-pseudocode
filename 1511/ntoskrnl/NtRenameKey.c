/*
 * XREFs of NtRenameKey @ 0x1405DC010
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1403DA798 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405E17EC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  int v8; // eax
  wchar_t *Buffer; // rcx
  ULONG64 v10; // rdx
  unsigned __int16 v11; // dx
  _WORD *v12; // rax
  unsigned int v13; // ecx
  int v14; // edi
  void *v15; // r8
  char v16; // r13
  struct _KTHREAD *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // r8
  PVOID Object[2]; // [rsp+30h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-A8h] BYREF
  int v22; // [rsp+50h] [rbp-98h] BYREF
  PVOID P; // [rsp+58h] [rbp-90h]
  _QWORD v24[2]; // [rsp+60h] [rbp-88h] BYREF
  __int128 v25; // [rsp+70h] [rbp-78h]
  _QWORD v26[6]; // [rsp+80h] [rbp-68h] BYREF
  _OWORD v27[3]; // [rsp+B0h] [rbp-38h] BYREF

  LOWORD(Src[0]) = 0;
  *(void **)((char *)Src + 2) = 0LL;
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  HIWORD(Src[1]) = 0;
  v22 = 0;
  memset(v26, 0, 40);
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v6 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( (unsigned __int64)NewName >= MmUserProbeAddress )
      NewName = (PUNICODE_STRING)MmUserProbeAddress;
    v8 = *(_DWORD *)&NewName->Length;
    LODWORD(v25) = v8;
    Buffer = NewName->Buffer;
    *((_QWORD *)&v25 + 1) = Buffer;
    *(_OWORD *)Src = v25;
    if ( (_WORD)v8 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (ULONG64)Buffer + (unsigned __int16)v8;
      if ( v10 > MmUserProbeAddress || v10 < (unsigned __int64)Buffer )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  v11 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu || ((__int64)Src[0] & 1) != 0 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741811;
  }
  else
  {
    if ( PreviousMode == 1 )
    {
      P = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x426E4D43u);
      if ( !P )
      {
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return -1073741670;
      }
      memmove(P, Src[1], LOWORD(Src[0]));
      Src[1] = P;
      v11 = (unsigned __int16)Src[0];
    }
    v12 = Src[1];
    v13 = 0;
    if ( v11 )
    {
      while ( *v12 != 92 )
      {
        ++v12;
        v13 += 2;
        if ( v13 >= v11 )
          goto LABEL_24;
      }
      v14 = -1073741811;
    }
    else
    {
LABEL_24:
      v14 = CmObReferenceObjectByHandle(KeyHandle, 0x20006u, (void *)v11, PreviousMode, Object, 0LL);
      if ( v14 == -1073741790 && CmpVEEnabled && !CmpIsSystemEntity(&v22) )
      {
        v14 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v15, PreviousMode, Object, 0LL);
        if ( v14 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
        {
          ObfDereferenceObject(Object[0]);
          v14 = -1073741790;
        }
        v16 = 1;
      }
      else
      {
        v16 = 0;
      }
      if ( v14 >= 0 )
      {
        v24[1] = v24;
        v24[0] = v24;
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v26[0] = Object[0];
          v26[1] = Src;
          v14 = CmpCallCallBacks(4u, (__int64)v26, 1, 0x13u, (__int64)Object[0], (__int64)v24);
        }
        if ( v14 < 0 )
        {
          if ( v14 == -1073740541 )
            v14 = 0;
        }
        else
        {
          CmpLockRegistryExclusive();
          v18 = Object[0];
          CmpFlushNotifiesOnKeyBodyList(*((_QWORD *)Object[0] + 1), 0LL, 1);
          if ( (*(_DWORD *)(v18[1] + 4LL) & 0x180) != 0 )
          {
            v14 = -1073741790;
          }
          else
          {
            if ( v16 )
              v14 = CmKeyBodyReplicateToVirtual(Object, 131078LL, &v22);
            if ( v14 >= 0 )
            {
              ExReleaseRundownProtection_0(&CmpShutdownRundown);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v6 = 0;
              v27[0] = *(_OWORD *)Src;
              LOBYTE(v19) = PreviousMode;
              v14 = CmRenameKey(Object[0], v27, v19);
            }
          }
          CmpUnlockRegistry();
          v14 = CmPostCallbackNotification(0x13u, (__int64)Object[0], v14, (__int64)v26, v24);
        }
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object[0]);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v6 )
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return v14;
  }
}

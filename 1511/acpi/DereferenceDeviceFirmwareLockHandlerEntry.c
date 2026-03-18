/*
 * XREFs of DereferenceDeviceFirmwareLockHandlerEntry @ 0x1C0037E74
 * Callers:
 *     AcquireDeviceFirmwareLock @ 0x1C0037BDC (AcquireDeviceFirmwareLock.c)
 *     ReleaseDeviceFirmwareLock @ 0x1C0038288 (ReleaseDeviceFirmwareLock.c)
 *     AcpiUnregisterDeviceFirmwareLockHandler @ 0x1C0079BFC (AcpiUnregisterDeviceFirmwareLockHandler.c)
 * Callees:
 *     <none>
 */

void __fastcall DereferenceDeviceFirmwareLockHandlerEntry(char *P, char a2)
{
  char v2; // bp
  char v3; // si
  KIRQL v6; // r8
  _QWORD *v7; // rdx
  PVOID *v8; // rcx
  __int64 **v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdx
  void *v12; // rcx
  struct _KEVENT Object; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = 0;
  if ( a2 )
    KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
  {
    v7 = *(_QWORD **)P;
    v8 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || *v8 != P )
      __fastfail(3u);
    *v8 = v7;
    v9 = (__int64 **)(P + 16);
    v7[1] = v8;
    while ( *v9 == (__int64 *)v9 )
    {
      v10 = *v9;
      v11 = **v9;
      if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
      *v9 = (__int64 *)v11;
      *(_QWORD *)(v11 + 8) = v9;
      v10[2] = 0LL;
    }
    v3 = 1;
  }
  else if ( a2 )
  {
    P[68] = 1;
    *((_QWORD *)P + 9) = &Object;
    v2 = 1;
  }
  KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v6);
  if ( v3 )
  {
    if ( P[68] )
      KeSetEvent(*((PRKEVENT *)P + 9), 0, 0);
    v12 = (void *)*((_QWORD *)P + 4);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x4F706341u);
    ExFreePoolWithTag(P, 0x4F706341u);
  }
  else if ( v2 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
}

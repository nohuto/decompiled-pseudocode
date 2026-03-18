/*
 * XREFs of PspCreatePicoProcess @ 0x1406C5ADC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 */

__int64 __fastcall PspCreatePicoProcess(__int64 a1, HANDLE *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  int v3; // ebx
  PVOID v6; // rsi
  int v7; // edi
  void *v8; // rcx
  int v9; // r9d
  PVOID v10; // r14
  HANDLE v11; // rbx
  __int64 v12; // r9
  unsigned __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r14
  __int16 v17; // ax
  PVOID v19; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  PVOID v21; // [rsp+A0h] [rbp+50h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 24);
  v19 = 0LL;
  Object = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  v21 = 0LL;
  if ( (v3 & 0xFFFFFFE0) != 0 || (v3 & 6) != 0 && (v3 & 1) == 0 || !*(_QWORD *)(a1 + 16) )
    return (unsigned int)-1073741811;
  v7 = ObReferenceObjectByHandleWithTag(*(HANDLE *)a1, 0x80u, (POBJECT_TYPE)PsProcessType, 0, 0x72437350u, &Object, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = *(void **)(a1 + 8);
  if ( !v8 )
  {
LABEL_10:
    v9 = 0;
    if ( (v3 & 1) != 0 )
    {
      v9 = 0x2000;
      if ( (v3 & 2) != 0 )
        v9 = 8196;
      if ( (v3 & 4) != 0 )
        v9 |= 0x4000u;
    }
    if ( (v3 & 8) != 0 )
      v9 |= 1u;
    if ( (v3 & 0x10) != 0 )
      v9 |= 0x10000u;
    v10 = Object;
    v7 = PspCreateMinimalProcess((struct _KPROCESS *)Object, 0, v6, v9, 1, &Handle);
    if ( v7 >= 0 )
    {
      v11 = Handle;
      v7 = ObReferenceObjectByHandleWithTag(Handle, 0x80u, (POBJECT_TYPE)PsProcessType, 0, 0x72437350u, &v21, 0LL);
      if ( v7 < 0 )
      {
LABEL_39:
        if ( v11 )
          ZwClose(v11);
        if ( v6 )
          ObfDereferenceObjectWithTag(v6, 0x72437350u);
        goto LABEL_43;
      }
      --CurrentThread->KernelApcDisable;
      v13 = (unsigned __int64 *)((char *)v21 + 728);
      v14 = KeAbPreAcquire((ULONG_PTR)v21 + 728, 0LL, 0LL, v12);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
        ExfAcquirePushLockExclusiveEx(v13, v14, (ULONG_PTR)v13, v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      if ( (*((_DWORD *)v21 + 193) & 8) != 0 )
      {
        v7 = -1073741558;
      }
      else
      {
        *((_QWORD *)v21 + 223) = *(_QWORD *)(a1 + 16);
        *a2 = Handle;
        Handle = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      KeAbPostRelease((ULONG_PTR)v13);
      v17 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v17;
      if ( !v17
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v7 >= 0 )
        v7 = 0;
      ObfDereferenceObjectWithTag(v21, 0x72437350u);
      v6 = v19;
      v10 = Object;
    }
    v11 = Handle;
    goto LABEL_39;
  }
  v7 = ObReferenceObjectByHandleWithTag(v8, 9u, (POBJECT_TYPE)SeTokenObjectType, 0, 0x72437350u, &v19, 0LL);
  if ( v7 >= 0 )
  {
    v6 = v19;
    goto LABEL_10;
  }
  v10 = Object;
LABEL_43:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x72437350u);
  return (unsigned int)v7;
}

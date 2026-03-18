/*
 * XREFs of UsbhHubProcessChangeWorker @ 0x1C000EBE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x1C003CB38 (UsbhTrapFatalTimeout_x9f.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhHubProcessChangeWorker(
        PDEVICE_OBJECT DeviceObject,
        unsigned __int16 *Context,
        __int64 a3,
        __int64 a4)
{
  _DWORD *DeviceExtension; // rdx
  __int64 v7; // r12
  struct _KEVENT *v8; // r14
  struct _KEVENT *v9; // r15
  __int64 Signalling; // r8
  void *v11; // rcx
  __int64 v12; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v14; // rbx
  _LIST_ENTRY *p_WaitListHead; // r14
  char *v16; // rax
  char **Blink; // rcx
  KIRQL v18; // al
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rdx
  KIRQL v24; // r8
  __int64 v25; // r9
  void *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KEVENT *v30; // r14
  __int64 v31; // rcx
  void *v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rdx
  volatile int Lock; // eax
  __int64 v40; // [rsp+80h] [rbp+8h]
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, a3, a4);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension, a3, a4);
  v7 = Context[2];
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)DeviceExtension,
      a3,
      100,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v7,
      (char)Context);
  v8 = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !v8 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, a3, a4);
  if ( v8->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, a3, a4);
  v9 = v8 + 139;
  v8[142].Header.Type = 1;
  KeWaitForSingleObject(&v8[139], Executive, 0, 0, 0LL);
  Signalling = v8[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v11 = DeviceObject->DeviceExtension;
    if ( v11 )
    {
      v12 = *((_QWORD *)v11 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
      *(_DWORD *)v12 = 1668172104;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v12 + 24) = Signalling;
    }
  }
  if ( v8[142].Header.Signalling )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    v14 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      p_WaitListHead = &v8[129].Header.WaitListHead;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[4] = 0LL;
      v16 = (char *)(PoolWithTag + 1);
      *(_DWORD *)v14 = 1215918946;
      *(_QWORD *)(v14 + 24) = Context;
      *(_DWORD *)(v14 + 32) = 1129345907;
      Blink = (char **)p_WaitListHead->Blink;
      *(_QWORD *)(v14 + 8) = p_WaitListHead;
      *(_QWORD *)(v14 + 16) = Blink;
      if ( *Blink != (char *)p_WaitListHead )
        __fastfail(3u);
      *Blink = v16;
      p_WaitListHead->Blink = (_LIST_ENTRY *)v16;
    }
    else
    {
      ++v8[130].Header.LockNV;
      v14 = 1936941672LL;
    }
    KeSetEvent(v9, 0, 0);
  }
  else
  {
    KeSetEvent(v8 + 139, 0, 0);
    v14 = 0LL;
  }
  Timeout.QuadPart = -6600000000LL - (int)(KeQueryTimeIncrement() - 1);
  if ( KeWaitForSingleObject(Context + 1232, Executive, 0, 0, &Timeout) == 258 )
  {
    v37 = *((_DWORD *)Context + 711);
    v38 = 10LL;
    if ( v37 )
      v38 = v37;
    UsbhTrapFatalTimeout_x9f(DeviceObject, v38, Context);
  }
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  *((_DWORD *)Context + 603) = 2;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v18);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v21 = DeviceObject->DeviceExtension;
    if ( v21 )
    {
      v22 = *((_QWORD *)v21 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
      *(_DWORD *)v22 = 1464029256;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = Context;
      *(_QWORD *)(v22 + 24) = v7;
    }
  }
  v23 = DeviceObject->DeviceExtension;
  if ( !v23 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, v19, v20);
  if ( *v23 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, v23, v19, v20);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      57,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      Context[2]);
  LODWORD(v40) = 0;
  UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, (_DWORD)Context, 5, (_DWORD)Context + 24, v40, 0, 0LL, 0LL);
  KeSetEvent((PRKEVENT)(Context + 1232), 0, 0);
  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  v25 = *((unsigned int *)Context + 603);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v26 = DeviceObject->DeviceExtension;
    if ( v26 )
    {
      v27 = *((_QWORD *)v26 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
      *(_DWORD *)v27 = 1682133064;
      *(_QWORD *)(v27 + 8) = 0LL;
      *(_QWORD *)(v27 + 16) = v25;
      *(_QWORD *)(v27 + 24) = v7;
    }
  }
  if ( *((_DWORD *)Context + 603) == 2 )
    *((_DWORD *)Context + 603) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v24);
  v30 = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !v30 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, v28, v29);
  if ( v30->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, v28, v29);
  v30[142].Header.Type = 1;
  KeWaitForSingleObject(&v30[139], Executive, 0, 0, 0LL);
  v31 = v30[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v32 = DeviceObject->DeviceExtension;
    if ( v32 )
    {
      v33 = *((_QWORD *)v32 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v32 + 220) & *((_DWORD *)v32 + 221));
      *(_DWORD *)v33 = 1667581000;
      *(_QWORD *)(v33 + 8) = 0LL;
      *(_QWORD *)(v33 + 16) = v14;
      *(_QWORD *)(v33 + 24) = v31;
    }
  }
  if ( v30[142].Header.Signalling )
  {
    if ( v14 == 1936941672 )
    {
      Lock = v30[130].Header.Lock;
      if ( Lock )
        v30[130].Header.LockNV = Lock - 1;
    }
    else if ( v14 )
    {
      v34 = *(_QWORD *)(v14 + 8);
      v35 = (_QWORD *)(v14 + 8);
      v36 = *(_QWORD **)(v14 + 16);
      if ( *(_QWORD *)(v34 + 8) != v14 + 8 || (_QWORD *)*v36 != v35 )
        __fastfail(3u);
      *v36 = v34;
      *(_QWORD *)(v34 + 8) = v36;
      *(_QWORD *)(v14 + 16) = v14 + 8;
      *v35 = v35;
      ExFreePoolWithTag((PVOID)v14, 0);
    }
  }
  KeSetEvent(v30 + 139, 0, 0);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 610, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(Context + 1208), 0, 0);
}

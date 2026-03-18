/*
 * XREFs of UsbhHubIsrWorker @ 0x1C001A780
 * Callers:
 *     <none>
 * Callees:
 *     UsbhHubProcessIsr @ 0x1C0013B50 (UsbhHubProcessIsr.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhHubIsrWorker(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _DWORD *DeviceExtension; // rdx
  KIRQL v8; // al
  char v9; // cl
  void *v10; // rdx
  __int64 v11; // rcx
  void *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rax
  signed __int32 v21; // esi
  __int64 v22; // r10

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension, a3, a4);
  v8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v9 = UsbhLogMask;
  if ( (UsbhLogMask & 4) != 0 )
  {
    v10 = a1->DeviceExtension;
    if ( v10 )
    {
      v11 = *((_QWORD *)v10 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
      *(_DWORD *)v11 = 2001883977;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = a1;
      *(_QWORD *)(v11 + 24) = a3;
      v9 = UsbhLogMask;
    }
  }
  if ( *(_DWORD *)(a3 + 152) == 1 )
  {
    if ( (v9 & 4) != 0 )
    {
      v12 = a1->DeviceExtension;
      if ( v12 )
      {
        v13 = *((_QWORD *)v12 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
        *(_DWORD *)v13 = 1902400329;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a1;
        *(_QWORD *)(v13 + 24) = a3;
      }
    }
    v14 = *(_QWORD *)(a3 + 160);
    v15 = *(_QWORD **)(a3 + 168);
    if ( *(_QWORD *)(v14 + 8) != a3 + 160 || *v15 != a3 + 160 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *(_DWORD *)(a3 + 152) = 0;
    KeReleaseSpinLock(&SpinLock, v8);
    UsbhHubProcessIsr(a1, a2, a3, v16);
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v8);
  }
  v20 = FdoExt((__int64)a1, v17, v18, v19);
  v21 = _InterlockedExchangeAdd(v20 + 685, 0xFFFFFFFF);
  Log((__int64)a1, 4, 1212764717, (__int64)a1, (int)v20[685]);
  if ( v21 == 1 )
    KeSetEvent((PRKEVENT)(v22 + 2744), 0, 0);
}

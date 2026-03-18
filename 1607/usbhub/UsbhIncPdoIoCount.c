/*
 * XREFs of UsbhIncPdoIoCount @ 0x1C00074E0
 * Callers:
 *     UsbhCreatePdo @ 0x1C0005B90 (UsbhCreatePdo.c)
 *     UsbhPdoSystemControl @ 0x1C0007110 (UsbhPdoSystemControl.c)
 *     UsbhPdoPower_WaitWake @ 0x1C00073F0 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoDeviceControl @ 0x1C0028F10 (UsbhPdoDeviceControl.c)
 *     UsbhPdoPower_Sequence @ 0x1C00466F0 (UsbhPdoPower_Sequence.c)
 *     UsbhPdoSuccess @ 0x1C0054FF0 (UsbhPdoSuccess.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

__int64 __fastcall UsbhIncPdoIoCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  int v5; // r14d
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // bp
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  int v17; // [rsp+50h] [rbp+8h]

  v4 = a4;
  v5 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v8 = (KSPIN_LOCK *)(v7 + 1208);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 1208));
  v10 = v9;
  if ( *(_DWORD *)(v7 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 1208), v9);
    return 3221225486LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      v12[3] = a2;
      v13 = v7 + 1216;
      LOBYTE(v17) = HIBYTE(v5);
      BYTE1(v17) = BYTE2(v5);
      BYTE2(v17) = BYTE1(v5);
      *((_DWORD *)v12 + 8) = v4;
      HIBYTE(v17) = v5;
      *(_DWORD *)v12 = v17;
      v14 = v12 + 1;
      v15 = *(_QWORD **)(v13 + 8);
      if ( *v15 != v13 )
        __fastfail(3u);
      *v14 = v13;
      v12[2] = v15;
      *v15 = v14;
      *(_QWORD *)(v13 + 8) = v14;
    }
    else
    {
      ++*(_DWORD *)(v7 + 1256);
    }
    KeReleaseSpinLock(v8, v10);
    return 0LL;
  }
}

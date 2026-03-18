/*
 * XREFs of UsbhIncPdoIoCount @ 0x1C001EE40
 * Callers:
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhPdoDevicePowerState @ 0x1C000C4B4 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSystemControl @ 0x1C001EC60 (UsbhPdoSystemControl.c)
 *     UsbhPdoPower_WaitWake @ 0x1C001ED50 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoDeviceControl @ 0x1C0028850 (UsbhPdoDeviceControl.c)
 *     UsbhPdoPower_Sequence @ 0x1C00463C0 (UsbhPdoPower_Sequence.c)
 *     UsbhPdoSuccess @ 0x1C00549C0 (UsbhPdoSuccess.c)
 * Callees:
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
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
  char *v14; // rax
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
      *((_DWORD *)v12 + 8) = v4;
      LOBYTE(v17) = HIBYTE(v5);
      BYTE1(v17) = BYTE2(v5);
      BYTE2(v17) = BYTE1(v5);
      HIBYTE(v17) = v5;
      *(_DWORD *)v12 = v17;
      v14 = (char *)(v12 + 1);
      v15 = *(_QWORD **)(v13 + 8);
      v12[1] = v13;
      v12[2] = v15;
      if ( *v15 != v13 )
        __fastfail(3u);
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

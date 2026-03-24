/*
 * XREFs of MouseAddDeviceEx @ 0x1C000B420
 * Callers:
 *     MouseClassFindMorePorts @ 0x1C000B120 (MouseClassFindMorePorts.c)
 *     MouseAddDevice @ 0x1C000B2F0 (MouseAddDevice.c)
 *     DriverEntry @ 0x1C000E350 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002390 (WPP_RECORDER_SF_S.c)
 *     memmove @ 0x1C0002A80 (memmove.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     MouseClassLogError @ 0x1C00044D4 (MouseClassLogError.c)
 *     MouSendConnectRequest @ 0x1C000B780 (MouSendConnectRequest.c)
 */

__int64 __fastcall MouseAddDeviceEx(__int64 a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS v6; // esi
  __int64 v7; // rdi
  int v8; // edx
  int DeviceContext; // eax
  __int64 v11; // r15
  PVOID PoolWithTag; // r12
  int v13; // eax
  __int64 v14; // rcx
  char v15; // al
  int ValueData; // [rsp+20h] [rbp-48h]

  v6 = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 72));
  v7 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v7 = a1;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)v7;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == a1 )
    goto LABEL_7;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels != v7 )
  {
    if ( a1 != v7 )
      return (unsigned int)v6;
    v6 = MouSendConnectRequest(a1);
LABEL_7:
    if ( a1 == v7 )
    {
      v6 = RtlWriteRegistryValue(4u, DestinationString.Buffer, a2, 1u, P, (unsigned __int16)word_1C0008260 + 2);
      if ( v6 < 0 )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v8, 1, 19, ValueData, (__int64)a2);
        MouseClassLogError((void *)a1, -2147155963, 20014, v6, 0, 0LL, 0);
      }
      else
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v8, 1, 20, ValueData, (__int64)a2);
      }
    }
    return (unsigned int)v6;
  }
  v6 = MouSendConnectRequest(a1);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  DeviceContext = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  v11 = 0LL;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v11 + 19) )
    {
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_16;
    }
    *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v11 + 19) = 0;
    DeviceContext = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  }
LABEL_16:
  if ( (_DWORD)v11 != DeviceContext )
  {
LABEL_22:
    *(_DWORD *)(a1 + 180) = v11;
    v14 = 3 * v11;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v14 + 1) = a1;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v14) = a3;
    v15 = *(_BYTE *)(*(_QWORD *)a1 + 76LL);
    if ( *(char *)(*(_QWORD *)v7 + 76LL) >= v15 )
      v15 = *(_BYTE *)(*(_QWORD *)v7 + 76LL);
    *(_BYTE *)(*(_QWORD *)v7 + 76LL) = v15;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * (unsigned int)(DeviceContext + 1), 0x43756F4Du);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1));
    v13 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      memmove(PoolWithTag, WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
      ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
      v13 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    }
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)PoolWithTag;
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = v13 + 1;
    goto LABEL_22;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  return 3221225626LL;
}

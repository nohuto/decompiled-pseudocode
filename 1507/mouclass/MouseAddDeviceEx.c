/*
 * XREFs of MouseAddDeviceEx @ 0x1C000B420
 * Callers:
 *     MouseClassFindMorePorts @ 0x1C000B120 (MouseClassFindMorePorts.c)
 *     MouseAddDevice @ 0x1C000B2F0 (MouseAddDevice.c)
 *     DriverEntry @ 0x1C000E390 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002210 (WPP_RECORDER_SF_S.c)
 *     memmove @ 0x1C0002B00 (memmove.c)
 *     memset @ 0x1C0002E40 (memset.c)
 *     MouseClassLogError @ 0x1C0004504 (MouseClassLogError.c)
 *     MouSendConnectRequest @ 0x1C000B780 (MouSendConnectRequest.c)
 */

__int64 __fastcall MouseAddDeviceEx(__int64 a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS v6; // esi
  __int64 v7; // rdi
  int DeviceContext; // eax
  __int64 v10; // r15
  PVOID PoolWithTag; // r12
  int v12; // eax
  __int64 v13; // rcx
  char v14; // al
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
        WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, 0x13u, ValueData, a2);
        MouseClassLogError((void *)a1, -2147155963, 20014, v6, 0, 0LL, 0);
      }
      else
      {
        WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x14u, ValueData, a2);
      }
    }
    return (unsigned int)v6;
  }
  v6 = MouSendConnectRequest(a1);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  DeviceContext = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  v10 = 0LL;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v10 + 19) )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_16;
    }
    *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v10 + 19) = 0;
    DeviceContext = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  }
LABEL_16:
  if ( (_DWORD)v10 != DeviceContext )
  {
LABEL_22:
    *(_DWORD *)(a1 + 180) = v10;
    v13 = 3 * v10;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v13 + 1) = a1;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v13) = a3;
    v14 = *(_BYTE *)(*(_QWORD *)a1 + 76LL);
    if ( *(char *)(*(_QWORD *)v7 + 76LL) >= v14 )
      v14 = *(_BYTE *)(*(_QWORD *)v7 + 76LL);
    *(_BYTE *)(*(_QWORD *)v7 + 76LL) = v14;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * (unsigned int)(DeviceContext + 1), 0x43756F4Du);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1));
    v12 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      memmove(PoolWithTag, WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
      ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
      v12 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    }
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)PoolWithTag;
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = v12 + 1;
    goto LABEL_22;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  return 3221225626LL;
}

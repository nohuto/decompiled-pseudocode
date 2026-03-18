/*
 * XREFs of DpiFdoConnectInterrupt @ 0x1C00D11C0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiFdoGetInterruptIrql @ 0x1C00D1300 (DpiFdoGetInterruptIrql.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1C0173DD0 (DpiLdaGetInterruptIrqlForChain.c)
 */

__int64 __fastcall DpiFdoConnectInterrupt(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int InterruptIrqlForChain; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v20; // [rsp+90h] [rbp+20h] BYREF

  v1 = a1[8];
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 504) )
    InterruptIrqlForChain = DpiLdaGetInterruptIrqlForChain(a1, &v20);
  else
    InterruptIrqlForChain = DpiFdoGetInterruptIrql(*(_QWORD *)(v1 + 1104), &v20);
  LODWORD(v6) = InterruptIrqlForChain;
  if ( InterruptIrqlForChain < 0 )
  {
    if ( !*(_BYTE *)(v1 + 480) && !*(_BYTE *)(v1 + 1479) && !*(_BYTE *)(v1 + 1095) && !*(_BYTE *)(v1 + 1480) )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v5);
      v16[4] = DpiFdoGetInterruptIrql;
      v16[5] = (int)v6;
      v16[3] = DpiFdoConnectInterrupt;
      WdLogEvent5_WdError(v16);
    }
    return (unsigned int)v6;
  }
  Parameters.Version = 0;
  memset(&Parameters.FullySpecified, 0, sizeof(Parameters.FullySpecified));
  if ( *(_QWORD *)(v3 + 184) )
  {
    v12 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
    v13 = v20;
    *(_QWORD *)(v12 + 24) = DpiFdoConnectInterrupt;
    *(_QWORD *)(v12 + 32) = v13;
    WdLogEvent5_WdEvent(v12);
    Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(v1 + 152);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v1 + 1184);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoMessageInterruptRoutine;
    Parameters.FullySpecified.SpinLock = *(PKSPIN_LOCK *)(v1 + 1272);
    Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoLineInterruptRoutine;
    Parameters.Version = 3;
    Parameters.FullySpecified.ServiceContext = a1;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = (unsigned __int8)v13;
    v14 = IoConnectInterruptEx(&Parameters);
    v6 = v14;
    if ( v14 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v18[4] = IoConnectInterruptEx;
      v18[3] = DpiFdoConnectInterrupt;
      v18[5] = v6;
      WdLogEvent5_WdError(v18);
      if ( (_DWORD)v6 == -1073741275 )
        LODWORD(v6) = -1073741823;
    }
    else
    {
      *(_DWORD *)(v1 + 1176) = Parameters.Version;
      *(_QWORD *)(v1 + 1192) = *Parameters.FullySpecified.InterruptObject;
    }
    return (unsigned int)v6;
  }
  if ( *(_BYTE *)(v1 + 1091) )
    return 3221226021LL;
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v9);
  v17[4] = 0LL;
  v17[5] = (int)v6;
  v17[3] = DpiFdoConnectInterrupt;
  WdLogEvent5_WdError(v17);
  return 3221225473LL;
}

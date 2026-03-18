/*
 * XREFs of DpiFdoConnectInterrupt @ 0x1C00EC25C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiFdoGetInterruptIrql @ 0x1C00EC384 (DpiFdoGetInterruptIrql.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1C019D844 (DpiLdaGetInterruptIrqlForChain.c)
 */

__int64 __fastcall DpiFdoConnectInterrupt(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  int InterruptIrqlForChain; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 v10; // bl
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v17; // [rsp+90h] [rbp+20h] BYREF

  v1 = a1[8];
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 504) )
    InterruptIrqlForChain = DpiLdaGetInterruptIrqlForChain(a1, &v17);
  else
    InterruptIrqlForChain = DpiFdoGetInterruptIrql(*(_QWORD *)(v1 + 1152), &v17);
  LODWORD(v6) = InterruptIrqlForChain;
  if ( InterruptIrqlForChain < 0 )
  {
    if ( !*(_BYTE *)(v1 + 480) && !*(_BYTE *)(v1 + 2559) && !*(_BYTE *)(v1 + 1143) && !*(_BYTE *)(v1 + 2560) )
    {
      v13 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v13 + 24) = (int)v6;
      WdLogEvent5_WdError(v13);
    }
    return (unsigned int)v6;
  }
  Parameters.Version = 0;
  memset(&Parameters.FullySpecified, 0, sizeof(Parameters.FullySpecified));
  if ( *(_QWORD *)(v3 + 184) )
  {
    v9 = WdLogNewEntry5_WdEvent(v8);
    v10 = v17;
    *(_QWORD *)(v9 + 24) = v17;
    WdLogEvent5_WdEvent(v9);
    Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(v1 + 152);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v1 + 1232);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoMessageInterruptRoutine;
    Parameters.FullySpecified.SpinLock = *(PKSPIN_LOCK *)(v1 + 1320);
    Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoLineInterruptRoutine;
    Parameters.Version = 3;
    Parameters.FullySpecified.ServiceContext = a1;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = v10;
    v11 = IoConnectInterruptEx(&Parameters);
    v6 = v11;
    if ( v11 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v15 + 24) = v6;
      WdLogEvent5_WdError(v15);
      if ( (_DWORD)v6 == -1073741275 )
        LODWORD(v6) = -1073741823;
    }
    else
    {
      *(_DWORD *)(v1 + 1224) = Parameters.Version;
      *(_QWORD *)(v1 + 1240) = *Parameters.FullySpecified.InterruptObject;
    }
    return (unsigned int)v6;
  }
  if ( *(_BYTE *)(v1 + 1139) )
    return 3221226021LL;
  v14 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v14 + 24) = (int)v6;
  WdLogEvent5_WdError(v14);
  return 3221225473LL;
}

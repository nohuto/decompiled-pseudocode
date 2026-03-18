/*
 * XREFs of InitializeGraphicsInfrastructure @ 0x1C0066C54
 * Callers:
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 * Callees:
 *     DlpLoadDxgkrnl @ 0x1C0066E4C (DlpLoadDxgkrnl.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 InitializeGraphicsInfrastructure()
{
  int Dxgkrnl; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  IRP *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  IRP *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-41h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+80h] [rbp-29h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+Fh]
  int v30; // [rsp+C0h] [rbp+17h]
  __int64 v31; // [rsp+C8h] [rbp+1Fh]
  _BYTE v32[32]; // [rsp+D0h] [rbp+27h] BYREF
  int InputBuffer; // [rsp+110h] [rbp+67h] BYREF
  int v34; // [rsp+118h] [rbp+6Fh] BYREF

  Dxgkrnl = DlpLoadDxgkrnl();
  v4 = Dxgkrnl;
  if ( (int)(Dxgkrnl + 0x80000000) >= 0 && Dxgkrnl != -1073741554 )
  {
    v23 = WdLogNewEntry5_WdError(0x80000000LL, v1, v2, v3);
    *(_QWORD *)(v23 + 24) = v4;
    goto LABEL_21;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  gDxgkInterface = 1246960;
  v5 = IoBuildDeviceIoControlRequest(
         0x23E057u,
         gpDxgkDeviceObject,
         &gDxgkInterface,
         0x6F0u,
         &gDxgkInterface,
         0x6F0u,
         1u,
         &Event,
         &IoStatusBlock);
  if ( v5 )
  {
    LODWORD(v4) = IofCallDriver(gpDxgkDeviceObject, v5);
    if ( (_DWORD)v4 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LODWORD(v4) = IoStatusBlock.Status;
    }
    if ( (int)v4 >= 0 )
    {
      KeResetEvent(&Event);
      InputBuffer = 1;
      v14 = IoBuildDeviceIoControlRequest(
              0x23E067u,
              gpDxgkDeviceObject,
              &InputBuffer,
              4u,
              0LL,
              0,
              1u,
              &Event,
              &IoStatusBlock);
      if ( v14 && IofCallDriver(gpDxgkDeviceObject, v14) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      CurrentProcess = PsGetCurrentProcess(v16, v15);
      if ( PsGetProcessWin32Process(CurrentProcess) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        WdLogEvent5_WdAssertion(v25);
      }
      gdwDirectDrawContext = 4;
      QueryTable.Name = L"DisableLddmSpriteTearDown";
      v34 = 0;
      QueryTable.EntryContext = &gbDisableLddmSpriteTearDown;
      QueryTable.QueryRoutine = 0LL;
      QueryTable.DefaultData = &v34;
      QueryTable.Flags = 32;
      QueryTable.DefaultType = 4;
      QueryTable.DefaultLength = 4;
      v29 = 0LL;
      v30 = 0;
      v31 = 0LL;
      memset(v32, 0, sizeof(v32));
      RtlQueryRegistryValues(2u, L"GraphicsDrivers", &QueryTable, 0LL, 0LL);
LABEL_12:
      if ( (int)v4 >= 0 )
        return (unsigned int)v4;
      goto LABEL_17;
    }
    v23 = WdLogNewEntry5_WdError(v11, v10, v12, v13);
    *(_QWORD *)(v23 + 24) = (int)v4;
LABEL_21:
    WdLogEvent5_WdError(v23);
    goto LABEL_12;
  }
  LODWORD(v4) = -1073741670;
  v24 = WdLogNewEntry5_WdError(v7, v6, v8, v9);
  *(_QWORD *)(v24 + 24) = -1073741670LL;
  WdLogEvent5_WdError(v24);
LABEL_17:
  memset(&gDxgkInterface, 0, 0x6F0uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return (unsigned int)v4;
}

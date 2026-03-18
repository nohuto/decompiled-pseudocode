/*
 * XREFs of InitializeGraphicsInfrastructure @ 0x1C0051AB4
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     DlpLoadDxgkrnl @ 0x1C0051CA4 (DlpLoadDxgkrnl.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 InitializeGraphicsInfrastructure()
{
  int Dxgkrnl; // eax
  __int64 v1; // rbx
  IRP *v2; // rax
  IRP *v3; // rax
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-41h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+80h] [rbp-29h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+Fh]
  int v18; // [rsp+C0h] [rbp+17h]
  _BYTE v19[40]; // [rsp+C8h] [rbp+1Fh] BYREF
  int InputBuffer; // [rsp+110h] [rbp+67h] BYREF
  int v21; // [rsp+118h] [rbp+6Fh] BYREF

  Dxgkrnl = DlpLoadDxgkrnl();
  v1 = Dxgkrnl;
  if ( (int)(Dxgkrnl + 0x80000000) >= 0 && Dxgkrnl != -1073741554 )
  {
    v11 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v11 + 24) = v1;
    goto LABEL_17;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  gDxgkInterface.LowPart = 1443680;
  v2 = IoBuildDeviceIoControlRequest(
         0x23E057u,
         (PDEVICE_OBJECT)WPP_MAIN_CB.Reserved,
         &gDxgkInterface,
         0x760u,
         &gDxgkInterface,
         0x760u,
         1u,
         &Event,
         &IoStatusBlock);
  if ( v2 )
  {
    LODWORD(v1) = IofCallDriver((PDEVICE_OBJECT)WPP_MAIN_CB.Reserved, v2);
    if ( (_DWORD)v1 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LODWORD(v1) = IoStatusBlock.Status;
    }
    if ( (int)v1 >= 0 )
    {
      KeResetEvent(&Event);
      InputBuffer = 1;
      v3 = IoBuildDeviceIoControlRequest(
             0x23E067u,
             (PDEVICE_OBJECT)WPP_MAIN_CB.Reserved,
             &InputBuffer,
             4u,
             0LL,
             0,
             1u,
             &Event,
             &IoStatusBlock);
      if ( v3 && IofCallDriver((PDEVICE_OBJECT)WPP_MAIN_CB.Reserved, v3) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      CurrentProcess = PsGetCurrentProcess(v4);
      if ( PsGetProcessWin32Process(CurrentProcess) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
        WdLogEvent5_WdAssertion(v13);
      }
      v21 = 0;
      QueryTable.QueryRoutine = 0LL;
      v17 = 0LL;
      v18 = 0;
      QueryTable.Name = L"DisableLddmSpriteTearDown";
      QueryTable.EntryContext = &gbDisableLddmSpriteTearDown;
      QueryTable.DefaultData = &v21;
      gdwDirectDrawContext = 4;
      QueryTable.Flags = 288;
      QueryTable.DefaultType = 67108868;
      QueryTable.DefaultLength = 4;
      memset(v19, 0, sizeof(v19));
      RtlQueryRegistryValues(2u, L"GraphicsDrivers", &QueryTable, 0LL, 0LL);
LABEL_12:
      if ( (int)v1 >= 0 )
        return (unsigned int)v1;
      goto LABEL_19;
    }
    v11 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v11 + 24) = (int)v1;
LABEL_17:
    WdLogEvent5_WdError(v11);
    goto LABEL_12;
  }
  LODWORD(v1) = -1073741670;
  v12 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v12 + 24) = -1073741670LL;
  WdLogEvent5_WdError(v12);
LABEL_19:
  memset(&gDxgkInterface, 0, 0x760uLL);
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
    ObfDereferenceObject(*(&WPP_MAIN_CB.Reserved + 1));
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
  WPP_MAIN_CB.Reserved = 0LL;
  return (unsigned int)v1;
}

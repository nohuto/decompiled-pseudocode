/*
 * XREFs of VidSchNotifyDeviceRemoved @ 0x1C0022600
 * Callers:
 *     VidSchiNotifyDeviceRemoved @ 0x1C0023160 (VidSchiNotifyDeviceRemoved.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchNotifyDeviceRemoved(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  int updated; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  _CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+98h] [rbp+18h] BYREF
  void *ProcessHandle; // [rsp+A0h] [rbp+20h] BYREF

  ProcessHandle = 0LL;
  ClientId.UniqueProcess = Context;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId) >= 0 )
  {
    v17 = 1;
    updated = ZwUpdateWnfStateData(&WNF_DX_DEVICE_REMOVAL, &v17, 4LL);
    v14 = updated;
    if ( updated >= 0 )
      goto LABEL_6;
    v8 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v8 + 24) = v14;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = ClientId.UniqueProcess;
  }
  WdLogEvent5_WdAssertion(v8);
LABEL_6:
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}

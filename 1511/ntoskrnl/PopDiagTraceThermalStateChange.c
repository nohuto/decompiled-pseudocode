/*
 * XREFs of PopDiagTraceThermalStateChange @ 0x1401F06F0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140142CE0 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1401F06D8 (PopDiagTraceThermalOverthrottleState.c)
 *     PopDiagTraceThermalStandbyState @ 0x1401F06E4 (PopDiagTraceThermalStandbyState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalStateChange(PDEVICE_OBJECT DeviceObject, int a2, const EVENT_DESCRIPTOR *a3)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v6; // rbx
  unsigned __int16 Lock; // cx
  struct _LIST_ENTRY *Flink; // rax
  __int16 v9; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+54h] [rbp-1Ch]
  int *v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+64h] [rbp-Ch]
  int v17; // [rsp+98h] [rbp+28h] BYREF

  v17 = a2;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, a3) )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    v6 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceAttachmentBaseRef = (PDEVICE_OBJECT)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    if ( DeviceAttachmentBaseRef )
    {
      Lock = DeviceAttachmentBaseRef->DeviceLock.Header.Lock;
      UserData.Reserved = 0;
      v9 = Lock >> 1;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 2;
      Flink = DeviceAttachmentBaseRef->DeviceLock.Header.WaitListHead.Flink;
      v13 = 0;
      v16 = 0;
      v11 = Flink;
      v12 = 2 * (Lock >> 1);
      v14 = &v17;
      v15 = 4;
      EtwWrite(PopDiagHandle, a3, 0LL, 3u, &UserData);
    }
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
}

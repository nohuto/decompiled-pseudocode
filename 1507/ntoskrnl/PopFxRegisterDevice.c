/*
 * XREFs of PopFxRegisterDevice @ 0x1405AC800
 * Callers:
 *     PoFxRegisterDevice @ 0x1405AC6C4 (PoFxRegisterDevice.c)
 *     PoFxEnableDStateReporting @ 0x1406B3568 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterPrimaryDevice @ 0x1406B36D4 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400CF130 (IoGetAttachedDeviceReference.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     PopFxInsertDevice @ 0x140166B1C (PopFxInsertDevice.c)
 *     PopFxAssignDeviceToDevNode @ 0x140166C10 (PopFxAssignDeviceToDevNode.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 *     PopFxTraceDeviceRegistration @ 0x1405AC94C (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 */

__int64 __fastcall PopFxRegisterDevice(
        struct _DEVICE_OBJECT *Object,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        ULONG_PTR **a7)
{
  ULONG_PTR *v7; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r14
  PDEVICE_OBJECT AttachedDeviceReference; // rbp
  __int64 DeviceNode; // rsi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  ULONG_PTR *v20; // [rsp+50h] [rbp-38h] BYREF

  v7 = 0LL;
  v20 = 0LL;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Object);
  if ( DeviceAttachmentBaseRef )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(Object);
    if ( AttachedDeviceReference )
    {
      DeviceNode = (__int64)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
      {
        if ( (*(_DWORD *)(DeviceNode + 296) & 1) != 0 )
        {
          v15 = PopFxRegisterDeviceWorker(
                  *(_QWORD *)(DeviceNode + 128),
                  (int)DeviceNode + 280,
                  a2,
                  a3,
                  a4,
                  a5,
                  AttachedDeviceReference->StackSize + 1,
                  a6,
                  (__int64)&v20);
          if ( v15 >= 0 )
          {
            v7 = v20;
            v20[6] = DeviceNode;
            if ( *(_QWORD *)(DeviceNode + 80) )
              PopFxBugCheck(0x600uLL, *(_QWORD *)(DeviceNode + 32), 0LL, 0LL);
            PopFxAssignDeviceToDevNode(DeviceNode, (__int64)v7);
            ObfReferenceObject(Object);
            v7[12] = (ULONG_PTR)Object;
            v7[13] = (ULONG_PTR)AttachedDeviceReference;
            PopFxTraceDeviceRegistration(v7, 0LL);
            PopFxInsertDevice(v17, v16, v7, v18);
            AttachedDeviceReference = 0LL;
            DeviceAttachmentBaseRef = 0LL;
            v15 = 0;
          }
        }
        else
        {
          v15 = -1073741661;
        }
      }
      else
      {
        v15 = -1073741811;
      }
      if ( AttachedDeviceReference )
        ObfDereferenceObject(AttachedDeviceReference);
    }
    else
    {
      v15 = -1073741811;
    }
    if ( DeviceAttachmentBaseRef )
      ObfDereferenceObject(DeviceAttachmentBaseRef);
  }
  else
  {
    v15 = -1073741811;
  }
  *a7 = v7;
  return (unsigned int)v15;
}

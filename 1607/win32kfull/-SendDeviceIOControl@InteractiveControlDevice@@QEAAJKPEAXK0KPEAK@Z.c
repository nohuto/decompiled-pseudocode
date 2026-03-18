/*
 * XREFs of ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023DEA4
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023D4F0 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023E230 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023E740 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FAFC (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LIN.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C023FFF4 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 */

__int64 __fastcall InteractiveControlDevice::SendDeviceIOControl(
        InteractiveControlDevice *this,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID OutputBuffer,
        ULONG a6,
        unsigned int *a7)
{
  unsigned int Status; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r14
  PIRP v12; // rax
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  ULONG InputBufferLength; // [rsp+50h] [rbp-81h] BYREF
  ULONG OutputBufferLength; // [rsp+54h] [rbp-7Dh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-79h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-31h] BYREF
  ULONG *p_InputBufferLength; // [rsp+B0h] [rbp-21h]
  int v23; // [rsp+B8h] [rbp-19h]
  int v24; // [rsp+BCh] [rbp-15h]

  OutputBufferLength = a6;
  InputBufferLength = a4;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( !*((_QWORD *)this + 11) )
  {
    Status = -1073741436;
    goto LABEL_10;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(*((PFILE_OBJECT *)this + 11));
  v12 = IoBuildDeviceIoControlRequest(
          a2,
          RelatedDeviceObject,
          a3,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v12 )
  {
    Status = -1073741823;
LABEL_10:
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "InteractiveControlDevice::SendDeviceIOControl failed.");
      v24 = 0;
      p_InputBufferLength = &InputBufferLength;
      InputBufferLength = Status;
      v23 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v13, v14, 4u, &pData);
    }
    return Status;
  }
  v12->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*((_QWORD *)this + 11);
  if ( IofCallDriver(RelatedDeviceObject, v12) == 259 )
  {
    if ( OutputBuffer )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( a7 )
        *a7 = IoStatusBlock.Information;
    }
  }
  Status = IoStatusBlock.Status;
  if ( IoStatusBlock.Status < 0 )
    goto LABEL_10;
  return Status;
}

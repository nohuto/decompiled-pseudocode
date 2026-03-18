/*
 * XREFs of UsbhSyncSendCommandToDevice @ 0x1C001C5D4
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhDisableDeviceForWake @ 0x1C0020760 (UsbhDisableDeviceForWake.c)
 *     UsbhGetStringFromDevice @ 0x1C0027ED0 (UsbhGetStringFromDevice.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C003FE30 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C00401C8 (UsbhGetMsOsFeatureDescriptor.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C004064C (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047BC4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhEnableDeviceForWake @ 0x1C0053CBC (UsbhEnableDeviceForWake.c)
 *     UsbhGetBosDescriptor @ 0x1C0053D60 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C0053ECC (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C0053FA4 (UsbhGetQualifierDescriptorFromDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001C0A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001C470 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001C840 (UsbhSyncSendInternalIoctl.c)
 *     memset @ 0x1C0029180 (memset.c)
 */

__int64 UsbhSyncSendCommandToDevice(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, _WORD *a5, ...)
{
  int *v5; // rbx
  __int64 v8; // r14
  _DWORD *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int Status; // edi
  int *PoolWithTag; // rax
  __int64 v15; // rax
  struct _DEVICE_OBJECT *v16; // rdi
  PIRP v17; // rcx
  int v18; // edx
  bool v19; // zf
  NTSTATUS v20; // eax
  __int64 v21; // r10
  __int64 v22; // r9
  int v23; // r10d
  _DWORD *v25; // [rsp+50h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF
  __int64 v30; // [rsp+E8h] [rbp+68h] BYREF
  va_list va; // [rsp+E8h] [rbp+68h]
  int *v32; // [rsp+F0h] [rbp+70h]
  va_list va1; // [rsp+F8h] [rbp+78h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v30 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, int *);
  v5 = 0LL;
  LODWORD(v30) = 0;
  memset(&Event, 0, sizeof(Event));
  v8 = 0LL;
  v9 = FdoExt(a1, a2, (__int64)a3, a4);
  v25 = PdoExt(a2, v10, v11, v12);
  Status = UsbhSyncSendInternalIoctl(a1, 2228243LL, (__int64 *)va, 0LL);
  Log(a1, 8, 1970303827, (unsigned int)v30, Status);
  if ( (Status & 0xC0000000) == 0xC0000000 )
    goto LABEL_20;
  if ( !a5 )
  {
    Status = -1073741811;
    goto LABEL_20;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x88uLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_23:
    v23 = -1073737728;
    Status = -1073741670;
    goto LABEL_12;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  v15 = UsbhRefPdoDeviceHandle(a1, a2, (__int64)v5, 1145983859LL);
  v16 = (struct _DEVICE_OBJECT *)*((_QWORD *)v9 + 152);
  v8 = v15;
  if ( !v15 || !v16 )
  {
    Status = -1073741810;
LABEL_20:
    v23 = -1073713152;
    goto LABEL_12;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v17 = IoBuildDeviceIoControlRequest(0x220003u, v16, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v17 )
    goto LABEL_23;
  *((_QWORD *)v5 + 1) = *((_QWORD *)v25 + 144);
  v5[8] = 10;
  v18 = v5[8];
  *v5 = 3276936;
  v19 = *a3 >= 0;
  v5[14] = 2000;
  v5[9] = (unsigned __int16)*a5;
  if ( !v19 )
    v18 = 11;
  *((_QWORD *)v5 + 6) = 0LL;
  v5[8] = v18;
  *((_QWORD *)v5 + 5) = a4;
  *((_QWORD *)v5 + 16) = *(_QWORD *)a3;
  v17->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v5;
  v20 = IofCallDriver(v16, v17);
  Status = v20;
  if ( v20 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  else
  {
    IoStatusBlock.Status = v20;
  }
  v21 = v5[1];
  v22 = *((unsigned __int16 *)v5 + 18);
  *a5 = v22;
  Log(a1, 256, 1396925558, v22, v21);
LABEL_12:
  if ( v32 )
    *v32 = v23;
  if ( v8 )
    UsbhDerefPdoDeviceHandle(a1, v8, (__int64)v5, 1145983859LL);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)Status;
}

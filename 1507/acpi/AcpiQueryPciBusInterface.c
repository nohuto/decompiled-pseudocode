/*
 * XREFs of AcpiQueryPciBusInterface @ 0x1C0068C60
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000830C (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C00697E4 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall AcpiQueryPciBusInterface(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rbx
  PVOID PoolWithTag; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  int v4; // esi
  __int64 v6; // rcx
  __int32 v7; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C8h]
  GUID *v9; // [rsp+48h] [rbp-C0h]
  __int64 v10; // [rsp+50h] [rbp-B8h]
  PVOID v11; // [rsp+58h] [rbp-B0h]
  __int32 *v12; // [rsp+60h] [rbp-A8h]
  _WORD v13[128]; // [rsp+88h] [rbp-80h] BYREF

  memset(v13, 0, sizeof(v13));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( *(_QWORD *)(DeviceExtension + 72) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x46706341u);
  if ( PoolWithTag )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 728));
    if ( AttachedDeviceReference )
    {
      LOWORD(v8) = 2075;
      v9 = &GUID_BUS_INTERFACE_STANDARD;
      LODWORD(v10) = 65600;
      v12 = &v7;
      v11 = PoolWithTag;
      v4 = ACPIInternalSendSynchronousIrp(AttachedDeviceReference);
      ObfDereferenceObject(AttachedDeviceReference);
      if ( v4 >= 0 )
      {
        *(_QWORD *)(DeviceExtension + 72) = PoolWithTag;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 80), 0, 0) & 0x100) == 0 )
        {
          _InterlockedExchange((volatile __int32 *)(DeviceExtension + 92), v7);
          _InterlockedOr((volatile signed __int32 *)(DeviceExtension + 80), 0x100u);
        }
        if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD, _WORD *, _QWORD, int))PoolWithTag + 7))(
               *((_QWORD *)PoolWithTag + 1),
               0LL,
               v13,
               0LL,
               26) == 26
          && (v13[7] & 0x7F) == 1
          && HIBYTE(v13[12]) )
        {
          v6 = HIBYTE(v13[12]) | v7 & 0xFFFF00u;
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 80), 0, 0) & 0x200) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(DeviceExtension + 96), v6);
            _InterlockedOr((volatile signed __int32 *)(DeviceExtension + 80), 0x200u);
          }
          (*(void (__fastcall **)(__int64))(PmHalDispatchTable + 72))(v6);
        }
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = -1073741823;
    }
    ExFreePoolWithTag(PoolWithTag, 0x46706341u);
    return (unsigned int)v4;
  }
  return 3221225626LL;
}

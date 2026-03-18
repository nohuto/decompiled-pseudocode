/*
 * XREFs of ACPIInternalNotifyAvailableDeviceObject @ 0x1C0072068
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001000 (ACPIDispatchIrp.c)
 * Callees:
 *     AMLIGetNSObjectNotifyFlag @ 0x1C0020C54 (AMLIGetNSObjectNotifyFlag.c)
 *     ACPIQueryDeviceBiosName @ 0x1C006A8B0 (ACPIQueryDeviceBiosName.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C007A588 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ACPIInternalNotifyAvailableDeviceObject(__int64 a1)
{
  unsigned __int16 *Buffer; // r8
  __int64 v3; // rcx
  int v4; // ebx
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  v3 = *(_QWORD *)(a1 + 704);
  *(_QWORD *)&v6.Length = 0LL;
  v6.Buffer = 0LL;
  if ( v3 && (unsigned __int8)AMLIGetNSObjectNotifyFlag(v3) )
  {
    v4 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 712), &v6);
    if ( v4 >= 0 )
      v4 = AcpiExternalAddBiosNameDeviceAssociation(&v6, *(_QWORD *)(a1 + 712));
    Buffer = v6.Buffer;
  }
  else
  {
    v4 = 0;
  }
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x53706341u);
  return (unsigned int)v4;
}

/*
 * XREFs of ExternalRequestBiosNameDeviceAssociation @ 0x1C007A9F8
 * Callers:
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C007A608 (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     AMLISetNSObjectNotifyFlag @ 0x1C0023C7C (AMLISetNSObjectNotifyFlag.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C003C92C (ACPIInternalGetDeviceFromNSOBJ.c)
 *     ACPIInitUnicodeString @ 0x1C006A934 (ACPIInitUnicodeString.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C007A588 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ExternalRequestBiosNameDeviceAssociation(char *a1, __int64 a2, char a3)
{
  void *v5; // rdi
  int v7; // ebx
  __int64 v8; // r8
  void *v10; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+98h] [rbp+48h] BYREF

  v10 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = 0LL;
  v7 = AMLIGetNameSpaceObject(a1);
  if ( v7 >= 0 )
  {
    AMLISetNSObjectNotifyFlag(0LL);
    v7 = ACPIInitUnicodeString(&DestinationString, a1);
    if ( v7 >= 0 )
    {
      ACPIInternalGetDeviceFromNSOBJ(0LL, &v10, v8, &v12);
      v5 = v10;
      if ( v12 == 3 )
      {
        v7 = AcpiExternalAddBiosNameDeviceAssociation((__int64)&DestinationString, (__int64)v10);
        if ( v7 < 0 )
          v7 = 0;
      }
      if ( (a3 & 4) == 0 )
      {
        v7 = IoReserveDependency(*(_QWORD *)(a2 + 728), &DestinationString, 2LL);
        if ( v7 < 0 )
          v7 = 0;
      }
    }
  }
  if ( DestinationString.Buffer )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0x53706341u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v7;
}

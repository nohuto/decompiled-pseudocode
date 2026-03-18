/*
 * XREFs of ExternalRequestBiosNameDeviceAssociation @ 0x1C009B958
 * Callers:
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C009B508 (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     AMLISetNSObjectNotifyFlag @ 0x1C002C2FC (AMLISetNSObjectNotifyFlag.c)
 *     WPP_RECORDER_SF_qSD @ 0x1C004D6B0 (WPP_RECORDER_SF_qSD.c)
 *     WPP_RECORDER_SF_qsD @ 0x1C004D828 (WPP_RECORDER_SF_qsD.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0050014 (ACPIInternalGetDeviceFromNSOBJ.c)
 *     ACPIInitUnicodeString @ 0x1C0087E38 (ACPIInitUnicodeString.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C009B488 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ExternalRequestBiosNameDeviceAssociation(char *a1, __int64 a2, char a3)
{
  void *v5; // rdi
  int v7; // ebx
  __int64 v8; // r8
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  void *v16; // [rsp+48h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v18; // [rsp+98h] [rbp+38h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v7 = AMLIGetNameSpaceObject(a1);
  if ( v7 >= 0 )
  {
    AMLISetNSObjectNotifyFlag(0LL);
    v7 = ACPIInitUnicodeString(&DestinationString, a1);
    if ( v7 >= 0 )
    {
      ACPIInternalGetDeviceFromNSOBJ(0LL, &v16, v8, &v18);
      v5 = v16;
      if ( v18 == 3 )
      {
        v7 = AcpiExternalAddBiosNameDeviceAssociation((__int64)&DestinationString, (__int64)v16);
        if ( v7 < 0 )
        {
          WPP_RECORDER_SF_qSD(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
          v7 = 0;
        }
      }
      if ( (a3 & 4) == 0 )
      {
        v7 = IoReserveDependency(*(_QWORD *)(a2 + 736), &DestinationString, 2LL);
        if ( v7 < 0 )
        {
          WPP_RECORDER_SF_qsD(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14);
          v7 = 0;
        }
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

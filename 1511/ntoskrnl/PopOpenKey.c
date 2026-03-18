/*
 * XREFs of PopOpenKey @ 0x140127654
 * Callers:
 *     PopOpenPowerKey @ 0x140127640 (PopOpenPowerKey.c)
 *     PpmInitIllegalThrottleLogging @ 0x140136FA4 (PpmInitIllegalThrottleLogging.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1401EE7CC (PopThermalWriteShutdownToRegistry.c)
 *     PopLoadResumeContext @ 0x1404F4E30 (PopLoadResumeContext.c)
 *     PopSaveHibernateEnabled @ 0x1406322A4 (PopSaveHibernateEnabled.c)
 *     PopSetHiberFileSize @ 0x140636238 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14063633C (PopSetHiberFileType.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 */

__int64 __fastcall PopOpenKey(HANDLE *a1, const WCHAR *a2, ACCESS_MASK a3)
{
  NTSTATUS v6; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  HANDLE v11; // [rsp+C8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v11 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&v11, a3, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v6 < 0 )
    {
      v11 = 0LL;
    }
    else
    {
      v6 = 0;
      *a1 = v11;
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v6;
}

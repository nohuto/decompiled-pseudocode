/*
 * XREFs of PopOpenKey @ 0x140132AA4
 * Callers:
 *     PopOpenPowerKey @ 0x140132A90 (PopOpenPowerKey.c)
 *     PpmInitIllegalThrottleLogging @ 0x140148094 (PpmInitIllegalThrottleLogging.c)
 *     PopThermalWriteShutdownToRegistry @ 0x140207108 (PopThermalWriteShutdownToRegistry.c)
 *     PopLoadResumeContext @ 0x140534390 (PopLoadResumeContext.c)
 *     PopSaveHibernateEnabled @ 0x14066A694 (PopSaveHibernateEnabled.c)
 *     PopSetHiberFileSize @ 0x14066E6C4 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14066E7C8 (PopSetHiberFileType.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
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

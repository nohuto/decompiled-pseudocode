/*
 * XREFs of PopOpenKey @ 0x140132534
 * Callers:
 *     PopOpenPowerKey @ 0x140132520 (PopOpenPowerKey.c)
 *     PpmInitIllegalThrottleLogging @ 0x140147B24 (PpmInitIllegalThrottleLogging.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1402072DC (PopThermalWriteShutdownToRegistry.c)
 *     PopLoadResumeContext @ 0x140533E50 (PopLoadResumeContext.c)
 *     PopSaveHibernateEnabled @ 0x14066A5B0 (PopSaveHibernateEnabled.c)
 *     PopSetHiberFileSize @ 0x14066E5E0 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14066E6E4 (PopSetHiberFileType.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14015A020 (ZwCreateKey.c)
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

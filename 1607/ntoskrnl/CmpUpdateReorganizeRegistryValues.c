/*
 * XREFs of CmpUpdateReorganizeRegistryValues @ 0x14057CD74
 * Callers:
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     CmpUpdatePhaseAccessBit @ 0x14057CD2C (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x1400A9368 (RtlTimeToTimeFields.c)
 *     ExSystemTimeToLocalTime @ 0x1400B3208 (ExSystemTimeToLocalTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 */

void CmpUpdateReorganizeRegistryValues()
{
  __int64 v0; // rbx
  PUNICODE_STRING Class; // [rsp+20h] [rbp-59h]
  __int64 CreateOptions; // [rsp+28h] [rbp-51h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-21h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  wchar_t Dst[16]; // [rsp+A0h] [rbp+27h] BYREF

  if ( CmpReorganizeTotalBytesSaved )
  {
    if ( CmpAccessBitForPhase == 2 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\registry\\machine\\system\\CurrentControlSet\\Control\\Session Manager\\Configuration Manager\\Defrag");
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 704;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      {
        ExSystemTimeToLocalTime(&CmpReorganizeLastRun, &LocalTime);
        RtlTimeToTimeFields(&LocalTime, &TimeFields);
        LODWORD(CreateOptions) = TimeFields.Year % 10000;
        LODWORD(Class) = TimeFields.Day;
        v0 = -1LL;
        if ( swprintf_s(Dst, 0x10uLL, L"%02d:%02d:%04d", (unsigned int)TimeFields.Month, Class, CreateOptions) != -1 )
        {
          RtlInitUnicodeString(&DestinationString, L"LastRun");
          do
            ++v0;
          while ( Dst[v0] );
          if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, Dst, 2 * v0) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"TotalBytesSaved");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &CmpReorganizeTotalBytesSaved, 8u);
          }
        }
        ZwClose(KeyHandle);
      }
    }
  }
}

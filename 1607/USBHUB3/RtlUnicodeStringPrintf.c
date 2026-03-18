/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C000F8F4
 * Callers:
 *     HUBID_BuildDeviceID @ 0x1C0015EE8 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x1C00160DC (HUBID_BuildHardwareID.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C00164E8 (HUBID_BuildClassCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x1C0016818 (HUBID_BuildContainerID.c)
 *     UsbSleepStudy_CsStateChange @ 0x1C00338A8 (UsbSleepStudy_CsStateChange.c)
 *     HUBPDO_MakePdoName @ 0x1C0068588 (HUBPDO_MakePdoName.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C006B3D8 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x1C006B60C (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C006BD04 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C006DD1C (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_QueryUxdDeviceKey @ 0x1C006DF50 (HUBREG_QueryUxdDeviceKey.c)
 *     HUBREG_DeleteUxdDeviceKey @ 0x1C006E0B8 (HUBREG_DeleteUxdDeviceKey.c)
 *     HUBREG_DeleteUxdPortKey @ 0x1C006E4D0 (HUBREG_DeleteUxdPortKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // r10
  size_t v5; // rdi
  NTSTATUS v6; // ebx
  unsigned __int16 MaximumLength; // ax
  int v8; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  Buffer = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
  {
    v6 = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v5 = (unsigned __int64)MaximumLength >> 1;
  }
  if ( v6 >= 0 )
  {
    v6 = 0;
    v8 = _vsnwprintf(Buffer, v5, pszFormat, Args);
    if ( v8 < 0 || v8 > v5 )
    {
      LOWORD(v8) = v5;
      v6 = -2147483643;
    }
    DestinationString->Length = 2 * v8;
  }
  return v6;
}

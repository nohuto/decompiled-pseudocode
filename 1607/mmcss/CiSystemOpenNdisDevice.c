/*
 * XREFs of CiSystemOpenNdisDevice @ 0x1C000A100
 * Callers:
 *     CiSystemThrottleNdis @ 0x1C000A010 (CiSystemThrottleNdis.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00045BC (WPP_SF_d.c)
 */

NTSTATUS CiSystemOpenNdisDevice()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CiNdisDevceName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&CiNdisDeviceHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  v1 = result;
  if ( result < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_68588231b6903e227175acd4ac9f80b2_Traceguids,
        result);
    return v1;
  }
  return result;
}

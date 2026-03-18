/*
 * XREFs of RtlUnicodeStringPrintf @ 0x140133B28
 * Callers:
 *     PiDevCfgBuildDriverConfigurationId @ 0x140511948 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x140512E14 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140514A28 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     PipHardwareConfigInit @ 0x14074F610 (PipHardwareConfigInit.c)
 * Callees:
 *     sub_140133B9C @ 0x140133B9C (sub_140133B9C.c)
 *     _vsnwprintf @ 0x1401439B8 (_vsnwprintf.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v3; // ebx
  int v4; // eax
  size_t Count; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *Dest; // [rsp+38h] [rbp-20h] BYREF
  __int64 Args; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF
  va_list Argsa; // [rsp+70h] [rbp+18h]

  va_start(va1, pszFormat);
  va_start(Argsa, pszFormat);
  Args = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  v3 = sub_140133B9C((_DWORD)DestinationString, (unsigned int)&Dest, (unsigned int)&Count, v10);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v4 = vsnwprintf(Dest, Count, pszFormat, Argsa);
    if ( v4 < 0 || v4 > Count )
    {
      LOWORD(v4) = Count;
      v3 = -2147483643;
    }
    DestinationString->Length = 2 * v4;
  }
  return v3;
}

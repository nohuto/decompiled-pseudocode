/*
 * XREFs of RtlUnicodeStringPrintf @ 0x14015DE04
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140588050 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406827A0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x140682918 (PiDevCfgBuildIndirectString.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     PipHardwareConfigInit @ 0x1407B6A40 (PipHardwareConfigInit.c)
 * Callees:
 *     sub_14015DFD8 @ 0x14015DFD8 (sub_14015DFD8.c)
 *     _vsnwprintf @ 0x140171A38 (_vsnwprintf.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v3; // ebx
  int v4; // eax
  size_t Count; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *Dest; // [rsp+38h] [rbp-20h] BYREF
  va_list Args; // [rsp+70h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  v3 = sub_14015DFD8((_DWORD)DestinationString, (unsigned int)&Dest, (unsigned int)&Count);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v4 = vsnwprintf(Dest, Count, pszFormat, Args);
    if ( v4 < 0 || v4 > Count )
    {
      LOWORD(v4) = Count;
      v3 = -2147483643;
    }
    DestinationString->Length = 2 * v4;
  }
  return v3;
}

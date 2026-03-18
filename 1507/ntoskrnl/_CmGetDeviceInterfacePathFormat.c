/*
 * XREFs of _CmGetDeviceInterfacePathFormat @ 0x14055EBD4
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     _CmValidateDeviceInterfaceName @ 0x140436820 (_CmValidateDeviceInterfaceName.c)
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall CmGetDeviceInterfacePathFormat(__int64 a1, const WCHAR *a2, _BYTE *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  inited = CmValidateDeviceInterfaceName(a1, (__int64)a2);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited < 0 )
      return (unsigned int)-1073741773;
    if ( RtlPrefixUnicodeString(&stru_140291F20, &DestinationString, 0) )
    {
      *a3 = 1;
      return (unsigned int)inited;
    }
    if ( !RtlPrefixUnicodeString(&stru_140291F10, &DestinationString, 0) )
      return (unsigned int)-1073741773;
    *a3 = 0;
  }
  return (unsigned int)inited;
}

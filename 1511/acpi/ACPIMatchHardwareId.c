/*
 * XREFs of ACPIMatchHardwareId @ 0x1C0071E58
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0067FBC (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C006823C (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIMatchHardwareId(PDEVICE_OBJECT DeviceObject, PCUNICODE_STRING String2, _BYTE *a3)
{
  int v6; // esi
  const WCHAR *v7; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v10[20]; // [rsp+30h] [rbp-50h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+30h] BYREF

  *a3 = 0;
  memset(v10, 0, 0x48uLL);
  LOWORD(v10[0]) = 4891;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10[2] = 1;
  v6 = ACPIInternalSendSynchronousIrp(DeviceObject, (__int64)v10, (unsigned __int64 *)&SourceString);
  if ( v6 >= 0 )
  {
    v7 = SourceString;
    if ( SourceString )
    {
      while ( *v7 )
      {
        RtlInitUnicodeString(&DestinationString, v7);
        v7 += (unsigned __int64)DestinationString.MaximumLength >> 1;
        if ( RtlEqualUnicodeString(&DestinationString, String2, 1u) )
        {
          *a3 = 1;
          break;
        }
        if ( !v7 )
          break;
      }
    }
    ExFreePoolWithTag((PVOID)SourceString, 0);
  }
  return (unsigned int)v6;
}

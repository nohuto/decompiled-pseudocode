/*
 * XREFs of ACPIMatchHardwareId @ 0x1C0068B50
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0069564 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C00697E4 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIMatchHardwareId(PDEVICE_OBJECT DeviceObject, PCUNICODE_STRING String2, _BYTE *a3)
{
  int v6; // esi
  const WCHAR *v7; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v10[18]; // [rsp+30h] [rbp-50h] BYREF
  WCHAR *SourceString; // [rsp+B0h] [rbp+30h]

  *a3 = 0;
  memset(v10, 0, sizeof(v10));
  LOWORD(v10[0]) = 4891;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10[2] = 1;
  v6 = ACPIInternalSendSynchronousIrp(DeviceObject);
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
    ExFreePoolWithTag(SourceString, 0);
  }
  return (unsigned int)v6;
}

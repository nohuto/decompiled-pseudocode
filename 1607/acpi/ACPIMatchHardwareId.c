/*
 * XREFs of ACPIMatchHardwareId @ 0x1C008F6BC
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0086A04 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     WPP_RECORDER_SF_SqLL @ 0x1C0027B98 (WPP_RECORDER_SF_SqLL.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C0086D08 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIMatchHardwareId(PDEVICE_OBJECT DeviceObject, PCUNICODE_STRING String2, _BYTE *a3)
{
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // r14d
  const WCHAR *v10; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v13[20]; // [rsp+60h] [rbp-19h] BYREF
  PCWSTR SourceString; // [rsp+E8h] [rbp+6Fh] BYREF

  *a3 = 0;
  memset(v13, 0, 0x48uLL);
  LOWORD(v13[0]) = 4891;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v13[2] = 1;
  v9 = ACPIInternalSendSynchronousIrp(DeviceObject, (__int64)v13, (unsigned __int64 *)&SourceString);
  if ( v9 >= 0 )
  {
    v10 = SourceString;
    if ( SourceString )
    {
      while ( *v10 )
      {
        RtlInitUnicodeString(&DestinationString, v10);
        v10 += (unsigned __int64)DestinationString.MaximumLength >> 1;
        if ( RtlEqualUnicodeString(&DestinationString, String2, 1u) )
        {
          *a3 = 1;
          break;
        }
        if ( !v10 )
          break;
      }
    }
    ExFreePoolWithTag((PVOID)SourceString, 0);
  }
  WPP_RECORDER_SF_SqLL(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
  return (unsigned int)v9;
}

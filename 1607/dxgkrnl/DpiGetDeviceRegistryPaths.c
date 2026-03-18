/*
 * XREFs of DpiGetDeviceRegistryPaths @ 0x1C000F508
 * Callers:
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 * Callees:
 *     DpiGetRegistryPathFromPDO @ 0x1C000F5E8 (DpiGetRegistryPathFromPDO.c)
 *     DpiCopyUnicodeString @ 0x1C00EC7DC (DpiCopyUnicodeString.c)
 */

__int64 __fastcall DpiGetDeviceRegistryPaths(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  int RegistryPathFromPDO; // eax
  unsigned int v9; // esi
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 != 1 )
    {
      v7 = 1LL;
LABEL_4:
      RegistryPathFromPDO = DpiGetRegistryPathFromPDO(a2, v7, &UnicodeString);
      goto LABEL_5;
    }
    if ( !*(_BYTE *)(v3 + 480) )
    {
      v7 = 0LL;
      goto LABEL_4;
    }
    RegistryPathFromPDO = DpiCopyUnicodeString(&UnicodeString, (PCUNICODE_STRING)(a3 + 40));
LABEL_5:
    v9 = RegistryPathFromPDO;
    if ( RegistryPathFromPDO >= 0 )
    {
      if ( v6 )
      {
        *(struct _UNICODE_STRING *)(v3 + 528) = UnicodeString;
        v6 = 2;
      }
      else
      {
        *(struct _UNICODE_STRING *)(v3 + 512) = UnicodeString;
        v6 = 1;
      }
    }
    *(_DWORD *)&UnicodeString.Length = 0;
    UnicodeString.Buffer = 0LL;
    if ( RegistryPathFromPDO < 0 )
      break;
    if ( v6 == 2 )
      return v9;
  }
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 512));
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 528));
  return v9;
}

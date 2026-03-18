/*
 * XREFs of ACPIRegDumpAcpiTable @ 0x1C00A777C
 * Callers:
 *     ACPIRegDumpAcpiTables @ 0x1C00A7620 (ACPIRegDumpAcpiTables.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000397C (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIRegLocalCopyString @ 0x1C0080E48 (ACPIRegLocalCopyString.c)
 *     OSCloseHandle @ 0x1C008D078 (OSCloseHandle.c)
 *     OSCreateHandle @ 0x1C008D080 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C008D154 (OSWriteRegValue.c)
 */

NTSTATUS __fastcall ACPIRegDumpAcpiTable(PCSZ SourceString, PVOID Data, ULONG DataSize, __int64 a4)
{
  NTSTATUS result; // eax
  HANDLE v9; // rbx
  HANDLE v10; // rbx
  int v11; // r9d
  HANDLE Handle; // [rsp+20h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+28h] [rbp-31h] BYREF
  char pszDest[80]; // [rsp+30h] [rbp-29h] BYREF

  strcpy(pszDest, "\\Registry\\Machine\\Hardware\\ACPI");
  memset(&pszDest[32], 0, 0x30uLL);
  KeyHandle = 0LL;
  Handle = 0LL;
  result = OSCreateHandle(pszDest, 0LL, &Handle);
  if ( result >= 0 )
  {
    if ( (int)OSCreateHandle(SourceString, Handle, &KeyHandle) >= 0 )
    {
      if ( !a4 )
        goto LABEL_7;
      OSCloseHandle(Handle);
      v9 = KeyHandle;
      Handle = KeyHandle;
      ACPIRegLocalCopyString((__int64)pszDest, (char *)(a4 + 10), 6u);
      if ( (int)OSCreateHandle(pszDest, v9, &KeyHandle) >= 0 )
      {
        OSCloseHandle(Handle);
        v10 = KeyHandle;
        Handle = KeyHandle;
        ACPIRegLocalCopyString((__int64)pszDest, (char *)(a4 + 16), 8u);
        if ( (int)OSCreateHandle(pszDest, v10, &KeyHandle) >= 0 )
        {
          OSCloseHandle(Handle);
          v11 = *(_DWORD *)(a4 + 24);
          Handle = KeyHandle;
          RtlStringCchPrintfA(pszDest, 0x50uLL, "%.8x", v11);
          if ( (int)OSCreateHandle(pszDest, Handle, &KeyHandle) >= 0 )
          {
LABEL_7:
            OSWriteRegValue("00000000", KeyHandle, Data, DataSize);
            OSCloseHandle(KeyHandle);
          }
        }
      }
    }
    return OSCloseHandle(Handle);
  }
  return result;
}

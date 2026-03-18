/*
 * XREFs of ACPIRegDumpAcpiTables @ 0x1C00857B0
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C0085D88 (ACPILoadProcessRSDT.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00858D8 (ACPIRegDumpAcpiTable.c)
 */

char ACPIRegDumpAcpiTables()
{
  ULONG *v0; // rdx
  ULONG *v1; // rsi
  ULONG *v2; // rdi
  ULONG *v3; // rbx
  char result; // al
  __int64 v5; // rdi
  unsigned __int8 v6; // bl
  _DWORD *v7; // rcx
  char v8; // al
  char SourceString[8]; // [rsp+20h] [rbp-18h] BYREF

  v0 = (ULONG *)*((_QWORD *)AcpiInformation + 3);
  v1 = (ULONG *)*((_QWORD *)AcpiInformation + 2);
  v2 = (ULONG *)*((_QWORD *)AcpiInformation + 1);
  v3 = *(ULONG **)AcpiInformation;
  strcpy(SourceString, "SSD0");
  result = aSsd0[4];
  if ( v0 )
    result = ACPIRegDumpAcpiTable("DSDT", v0, v0[1]);
  if ( v1 )
    result = ACPIRegDumpAcpiTable("FACS", v1, v1[1]);
  if ( v2 )
    result = ACPIRegDumpAcpiTable("FADT", v2, v2[1]);
  if ( v3 )
    result = ACPIRegDumpAcpiTable("RSDT", v3, v3[1]);
  v5 = AcpiDynamicDataBlockTableList;
  v6 = 0;
  while ( (__int64 *)v5 != &AcpiDynamicDataBlockTableList )
  {
    v7 = *(_DWORD **)(v5 + 24);
    if ( *v7 == 1413763923 )
    {
      if ( v6 )
      {
        if ( v6 >= 0xAu )
        {
          if ( v6 >= 0x23u )
            return result;
          v8 = v6 + 55;
        }
        else
        {
          v8 = v6 + 48;
        }
        SourceString[3] = v8;
      }
      else
      {
        SourceString[3] = 84;
      }
      ++v6;
      result = ACPIRegDumpAcpiTable(SourceString, *(PVOID *)(v5 + 24), v7[1]);
    }
    v5 = *(_QWORD *)v5;
  }
  return result;
}

/*
 * XREFs of SdbOpenDatabaseEx @ 0x1406C175C
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1406C4354 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     SdbGetDatabaseID @ 0x140495EA8 (SdbGetDatabaseID.c)
 *     SdbpReadMappedData @ 0x1404E3A0C (SdbpReadMappedData.c)
 *     AslFileMappingDelete @ 0x1405146D8 (AslFileMappingDelete.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslFileMappingCreate @ 0x1405153C4 (AslFileMappingCreate.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x1406C5A48 (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x1406C5F50 (AslFileMappingGetViewBase.c)
 */

__int64 __fastcall SdbOpenDatabaseEx(const WCHAR *a1)
{
  PVOID v2; // rax
  __int64 v3; // rbx
  const char *v4; // r9
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v8; // rcx
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v2 = AslAlloc((__int64)a1, 0x570uLL);
  v3 = (__int64)v2;
  if ( !v2 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 489, (unsigned int)"Failed to allocate DB structure");
    return 0LL;
  }
  memset(v2, 0, 0x570uLL);
  if ( (int)AslFileMappingCreate((__int64 *)v3, a1, 0LL, 0LL, 0LL) < 0 )
  {
    v4 = "Failed to create file mapping [%x]";
    v5 = 504;
LABEL_22:
    AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", v5, (_DWORD)v4);
    goto LABEL_23;
  }
  if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)v3 + 536LL) - 42LL) > 0x7FFFFFD5 )
  {
    v4 = "Failed to open SDB - File size too large or small.";
    v5 = 513;
    goto LABEL_22;
  }
  if ( (int)AslFileMappingEnsureMappedAs() < 0 )
  {
    v4 = "Failed to map SDB [%x]";
    v5 = 519;
    goto LABEL_22;
  }
  v6 = *(_QWORD *)v3;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = *(_DWORD *)(v6 + 536);
  *(_QWORD *)(v3 + 8) = AslFileMappingGetViewBase();
  if ( !(unsigned int)SdbpReadMappedData(v3, 0, v9, 0xCu) )
  {
    v4 = "Failed to read database header";
    v5 = 531;
    goto LABEL_22;
  }
  if ( v9[2] != 1717724275 )
  {
    v4 = "Magic does not match 0x%lx";
    v5 = 543;
    goto LABEL_22;
  }
  if ( v9[0] == 1 )
  {
    *(_DWORD *)(v3 + 1336) |= 1u;
    goto LABEL_17;
  }
  if ( v9[0] == 2 )
  {
LABEL_17:
    *(_DWORD *)(v3 + 1336) |= 2u;
    goto LABEL_18;
  }
  if ( v9[0] != 3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbOpenDatabaseEx",
      564,
      (unsigned int)"MajorVersion mismatch, MajorVersion 0x%lx Expected 0x%lx");
LABEL_23:
    AslFileMappingDelete(*(_QWORD *)v3);
    AslFree(v8, (void *)v3);
    return 0LL;
  }
LABEL_18:
  if ( !(unsigned int)SdbGetDatabaseID(v3, (void *)(v3 + 28)) )
    AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 569, (unsigned int)"Failed to get the database ID");
  return v3;
}

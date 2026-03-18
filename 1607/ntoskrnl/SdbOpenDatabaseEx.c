/*
 * XREFs of SdbOpenDatabaseEx @ 0x1406C1624
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1406C421C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     AslFileMappingDelete @ 0x140485350 (AslFileMappingDelete.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     SdbGetDatabaseID @ 0x140495418 (SdbGetDatabaseID.c)
 *     AslFileMappingCreate @ 0x14049D54C (AslFileMappingCreate.c)
 *     SdbpReadMappedData @ 0x140500A7C (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x1406C5910 (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x1406C5E18 (AslFileMappingGetViewBase.c)
 */

__int64 __fastcall SdbOpenDatabaseEx(const WCHAR *a1)
{
  PVOID v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  const char *v5; // r9
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  v2 = AslAlloc((__int64)a1, 0x570uLL);
  v3 = (__int64)v2;
  if ( !v2 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 489, (unsigned int)"Failed to allocate DB structure");
    return 0LL;
  }
  memset(v2, 0, 0x570uLL);
  v4 = AslFileMappingCreate((__int64 *)v3, a1, 0LL, 0LL, 0LL);
  if ( v4 < 0 )
  {
    v5 = "Failed to create file mapping [%x]";
    v6 = 504;
LABEL_5:
    LODWORD(v10) = v4;
    AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", v6, (_DWORD)v5, v10);
LABEL_23:
    AslFileMappingDelete(*(_QWORD *)v3);
    AslFree(v9, (void *)v3);
    return 0LL;
  }
  if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)v3 + 536LL) - 42LL) > 0x7FFFFFD5 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbOpenDatabaseEx",
      513,
      (unsigned int)"Failed to open SDB - File size too large or small.");
    goto LABEL_23;
  }
  v4 = AslFileMappingEnsureMappedAs();
  if ( v4 < 0 )
  {
    v5 = "Failed to map SDB [%x]";
    v6 = 519;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)v3;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = *(_DWORD *)(v7 + 536);
  *(_QWORD *)(v3 + 8) = AslFileMappingGetViewBase();
  if ( !(unsigned int)SdbpReadMappedData(v3, 0, &v11, 0xCu) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 531, (unsigned int)"Failed to read database header");
    goto LABEL_23;
  }
  v4 = v12;
  if ( v12 != 1717724275 )
  {
    v5 = "Magic does not match 0x%lx";
    v6 = 543;
    goto LABEL_5;
  }
  if ( v11 == 1 )
  {
    *(_DWORD *)(v3 + 1336) |= 1u;
    goto LABEL_18;
  }
  if ( v11 == 2 )
  {
LABEL_18:
    *(_DWORD *)(v3 + 1336) |= 2u;
    goto LABEL_19;
  }
  if ( v11 != 3 )
  {
    LODWORD(v10) = v11;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbOpenDatabaseEx",
      564,
      (unsigned int)"MajorVersion mismatch, MajorVersion 0x%lx Expected 0x%lx",
      v10,
      3);
    goto LABEL_23;
  }
LABEL_19:
  if ( !(unsigned int)SdbGetDatabaseID(v3, (void *)(v3 + 28)) )
    AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 569, (unsigned int)"Failed to get the database ID");
  return v3;
}

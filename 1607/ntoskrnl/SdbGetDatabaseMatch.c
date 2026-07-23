/*
 * XREFs of SdbGetDatabaseMatch @ 0x140515544
 * Callers:
 *     PiIsDriverBlocked @ 0x140515678 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SdbpSearchDB @ 0x1405142C4 (SdbpSearchDB.c)
 *     SdbpReleaseSearchDBContext @ 0x14051463C (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingDelete @ 0x1405146D8 (AslFileMappingDelete.c)
 *     SdbpCreateSearchDBContext @ 0x140514734 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreate @ 0x1405153C4 (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x140571838 (AslFileMappingCreateFromImageView.c)
 *     SdbTagIDToTagRef @ 0x14057E298 (SdbTagIDToTagRef.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r8
  unsigned int v9; // eax
  const char *v11; // r9
  int v12; // r8d
  const char *v13; // r9
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rbx
  int v17; // [rsp+28h] [rbp-D8h]
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v19; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[12]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[32]; // [rsp+A0h] [rbp-60h] BYREF

  memset(&v20[1], 0, 0x58uLL);
  memset(v21, 0, sizeof(v21));
  v18 = 0;
  v19 = 0LL;
  LODWORD(v20[0]) = 10;
  if ( a4 )
    LODWORD(v20[0]) = 26;
  if ( (int)AslFileMappingCreate((__int64 *)&v19, a2, (void *)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL) >= 0 )
    goto LABEL_4;
  if ( !a4 )
  {
    v11 = "Failed to create initialize file mapping [%x]";
    v12 = 3828;
    goto LABEL_13;
  }
  if ( (int)AslFileMappingCreateFromImageView(&v19, a2, a4, a5) < 0 )
  {
    v11 = "Failed to initialize file mapping from image view [%x]";
    v12 = 3820;
LABEL_13:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v12, (_DWORD)v11);
    goto LABEL_8;
  }
LABEL_4:
  if ( !(unsigned int)SdbpCreateSearchDBContext(v20, v19) )
  {
    v13 = "Failed to create search DB context";
    v14 = 3837;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v14, (_DWORD)v13);
    goto LABEL_8;
  }
  v9 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 8), v8, (__int64)v20, v21, v17);
  if ( v9 > 0x10 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseMatch",
      3852,
      (unsigned int)"The database has more matches than SDB_MAX_EXES");
    v9 = 16;
  }
  if ( v9 )
  {
    v15 = v9 - 1;
    v16 = v15;
    if ( v15 >= 0 )
    {
      while ( (v21[2 * v16 + 1] & 2) != 0
           || (unsigned int)SdbTagIDToTagRef(a1, *(_QWORD *)(a1 + 8), (unsigned int)v21[2 * v16], &v18) )
      {
        if ( --v16 < 0 )
          goto LABEL_8;
      }
      v13 = "Failed to convert tagid to tagref";
      v14 = 3871;
      goto LABEL_15;
    }
  }
LABEL_8:
  SdbpReleaseSearchDBContext((__int64)v20);
  AslFileMappingDelete((__int64)v19);
  return v18;
}

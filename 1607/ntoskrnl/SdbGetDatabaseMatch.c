/*
 * XREFs of SdbGetDatabaseMatch @ 0x14049D418
 * Callers:
 *     PiIsDriverBlocked @ 0x14049D1BC (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     SdbpSearchDB @ 0x140484F3C (SdbpSearchDB.c)
 *     SdbpReleaseSearchDBContext @ 0x1404852B4 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingDelete @ 0x140485350 (AslFileMappingDelete.c)
 *     SdbpCreateSearchDBContext @ 0x1404853AC (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreate @ 0x14049D54C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x1405712F8 (AslFileMappingCreateFromImageView.c)
 *     SdbTagIDToTagRef @ 0x14057DDEC (SdbTagIDToTagRef.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // eax
  const char *v12; // r9
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rbx
  void *v16; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+28h] [rbp-D8h]
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v19; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[12]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21[32]; // [rsp+A0h] [rbp-60h] BYREF

  memset(&v20[1], 0, 0x58uLL);
  memset(v21, 0, sizeof(v21));
  v18 = 0;
  v19 = 0LL;
  LODWORD(v20[0]) = 10;
  if ( a4 )
    LODWORD(v20[0]) = 26;
  v8 = AslFileMappingCreate(&v19, a2, -1LL, 0LL, 0LL);
  if ( v8 < 0 )
  {
    if ( a4 )
    {
      v8 = AslFileMappingCreateFromImageView(&v19, a2, a4, a5);
      if ( v8 >= 0 )
        goto LABEL_4;
      v12 = "Failed to initialize file mapping from image view [%x]";
      v13 = 3820;
    }
    else
    {
      v12 = "Failed to create initialize file mapping [%x]";
      v13 = 3828;
    }
    LODWORD(v16) = v8;
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v13, (_DWORD)v12, v16);
    goto LABEL_8;
  }
LABEL_4:
  if ( (unsigned int)SdbpCreateSearchDBContext(v20, v19) )
  {
    v10 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 8), v9, (__int64)v20, v21, v17);
    if ( v10 > 0x10 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGetDatabaseMatch",
        3852,
        (unsigned int)"The database has more matches than SDB_MAX_EXES");
      v10 = 16;
    }
    if ( v10 )
    {
      v14 = v10 - 1;
      v15 = v14;
      if ( v14 >= 0 )
      {
        while ( (v21[2 * v15 + 1] & 2) != 0
             || (unsigned int)SdbTagIDToTagRef(a1, *(_QWORD *)(a1 + 8), v21[2 * v15], &v18) )
        {
          if ( --v15 < 0 )
            goto LABEL_8;
        }
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbGetDatabaseMatch",
          3871,
          (unsigned int)"Failed to convert tagid to tagref");
      }
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", 3837, (unsigned int)"Failed to create search DB context");
  }
LABEL_8:
  SdbpReleaseSearchDBContext((__int64)v20);
  AslFileMappingDelete((__int64)v19);
  return v18;
}

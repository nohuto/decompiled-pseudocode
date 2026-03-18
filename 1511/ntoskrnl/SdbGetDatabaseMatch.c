/*
 * XREFs of SdbGetDatabaseMatch @ 0x1403B6D2C
 * Callers:
 *     PiIsDriverBlocked @ 0x1403B6AD0 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AslFileMappingCreate @ 0x1403B6E64 (AslFileMappingCreate.c)
 *     SdbpSearchDB @ 0x1403B7744 (SdbpSearchDB.c)
 *     SdbpReleaseSearchDBContext @ 0x1403B7CE4 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingDelete @ 0x1403B7DE0 (AslFileMappingDelete.c)
 *     SdbpCreateSearchDBContext @ 0x1403B83B4 (SdbpCreateSearchDBContext.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslFileMappingCreateFromImageView @ 0x14053FBC4 (AslFileMappingCreateFromImageView.c)
 *     SdbTagIDToTagRef @ 0x14054EFAC (SdbTagIDToTagRef.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // eax
  const char *v10; // r9
  int v11; // r8d
  const char *v12; // r9
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rbx
  int v16; // [rsp+28h] [rbp-D8h]
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v19[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v21[124]; // [rsp+A4h] [rbp-5Ch] BYREF

  memset(&v19[2], 0, 0x58uLL);
  v20 = 0;
  memset(v21, 0, sizeof(v21));
  v17 = 0;
  v18 = 0LL;
  v19[0] = 10;
  if ( a4 )
    v19[0] = 26;
  if ( (int)AslFileMappingCreate(&v18, a2, -1LL, 0LL, 0LL) >= 0 )
    goto LABEL_4;
  if ( !a4 )
  {
    v10 = "Failed to create initialize file mapping [%x]";
    v11 = 3701;
    goto LABEL_13;
  }
  if ( (int)AslFileMappingCreateFromImageView(&v18, a2, a4, a5) < 0 )
  {
    v10 = "Failed to initialize file mapping from image view [%x]";
    v11 = 3693;
LABEL_13:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v11, (_DWORD)v10);
    goto LABEL_8;
  }
LABEL_4:
  if ( !(unsigned int)SdbpCreateSearchDBContext(v19, v18) )
  {
    v12 = "Failed to create search DB context";
    v13 = 3710;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v13, (_DWORD)v12);
    goto LABEL_8;
  }
  v8 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 8), &v20, v16);
  if ( v8 > 0x10 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseMatch",
      3725,
      (unsigned int)"The database has more matches than SDB_MAX_EXES");
    v8 = 16;
  }
  if ( v8 )
  {
    v14 = v8 - 1;
    v15 = v14;
    if ( v14 >= 0 )
    {
      while ( (*(_DWORD *)&v21[8 * v15] & 2) != 0
           || (unsigned int)SdbTagIDToTagRef(a1, *(_QWORD *)(a1 + 8), *(unsigned int *)&v21[8 * v15 - 4], &v17) )
      {
        if ( --v15 < 0 )
          goto LABEL_8;
      }
      v12 = "Failed to convert tagid to tagref";
      v13 = 3744;
      goto LABEL_15;
    }
  }
LABEL_8:
  SdbpReleaseSearchDBContext(v19);
  AslFileMappingDelete(v18);
  return v17;
}

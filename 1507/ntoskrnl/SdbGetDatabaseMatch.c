/*
 * XREFs of SdbGetDatabaseMatch @ 0x1405AA8F0
 * Callers:
 *     PiIsDriverBlocked @ 0x1405AA694 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AslFileMappingDelete @ 0x140578388 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x1405AAA20 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x1405AAB1C (AslFileMappingCreate.c)
 *     SdbpSearchDB @ 0x1405AADAC (SdbpSearchDB.c)
 *     SdbpCreateSearchDBContext @ 0x1405AAEC8 (SdbpCreateSearchDBContext.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbTagIDToTagRef @ 0x1405C6D34 (SdbTagIDToTagRef.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // eax
  const char *v10; // r9
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rbx
  int v14; // [rsp+28h] [rbp-D8h]
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v17[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v19[124]; // [rsp+A4h] [rbp-5Ch] BYREF

  memset(&v17[2], 0, 0x58uLL);
  v18 = 0;
  memset(v19, 0, sizeof(v19));
  v15 = 0;
  v16 = 0LL;
  v17[0] = 10;
  if ( a4 )
    v17[0] = 26;
  if ( (int)AslFileMappingCreate(&v16, a2, -1LL, a4, a5) < 0 )
  {
    v10 = "Failed to create initialize file mapping";
    v11 = 3660;
LABEL_10:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v11, (_DWORD)v10);
    goto LABEL_8;
  }
  if ( !(unsigned int)SdbpCreateSearchDBContext(v17, v16) )
  {
    v10 = "Failed to create search DB context";
    v11 = 3668;
    goto LABEL_10;
  }
  v8 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 8), &v18, v14);
  if ( v8 > 0x10 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseMatch",
      3683,
      (unsigned int)"The database has more matches than SDB_MAX_EXES");
    v8 = 16;
  }
  if ( v8 )
  {
    v12 = v8 - 1;
    v13 = v12;
    if ( v12 >= 0 )
    {
      while ( (*(_DWORD *)&v19[8 * v13] & 2) != 0
           || (unsigned int)SdbTagIDToTagRef(a1, *(_QWORD *)(a1 + 8), *(unsigned int *)&v19[8 * v13 - 4], &v15) )
      {
        if ( --v13 < 0 )
          goto LABEL_8;
      }
      v10 = "Failed to convert tagid to tagref";
      v11 = 3702;
      goto LABEL_10;
    }
  }
LABEL_8:
  SdbpReleaseSearchDBContext(v17);
  AslFileMappingDelete(v16);
  return v15;
}

/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x1406C4354
 * Callers:
 *     SdbTagRefToTagID @ 0x14057F580 (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcsstr @ 0x14014F70C (wcsstr.c)
 *     SdbOpenDatabaseEx @ 0x1406C175C (SdbOpenDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x1406C42C8 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabase @ 0x1406C45E4 (SdbResolveDatabase.c)
 *     AslStringUpper @ 0x1406C56FC (AslStringUpper.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, __int64 *a4, unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned int v9; // edi
  const char *v10; // r9
  int v11; // r8d
  __int16 v12; // ax
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  __int128 v16; // xmm0
  int v18; // [rsp+30h] [rbp-258h] BYREF
  wchar_t Str[264]; // [rsp+40h] [rbp-248h] BYREF

  v5 = 0;
  v18 = 0;
  v9 = *a5;
  if ( (*a5 & 0xF0000000) != 0 )
    v9 >>= 28;
  if ( v9 >= 0x10 )
  {
    v10 = "Bad index 0x%lx";
    v11 = 880;
LABEL_23:
    v14 = 1;
    goto LABEL_24;
  }
  SdbpCloseLocalDatabaseEx(a1, (__int64)a2, v9);
  if ( (unsigned int)SdbResolveDatabase(a1, (_DWORD)a2, (unsigned int)&v18, (unsigned int)Str) - 1 > 0x102 )
  {
    v10 = "Cannot resolve database, the path length is 0x%lx";
    v11 = 913;
    goto LABEL_23;
  }
  AslStringUpper(Str);
  if ( *(_WORD *)(a1 + 568) != 0x7FFF )
  {
    if ( wcsstr(Str, L"\\CUSTOM64\\") )
    {
      if ( *(_WORD *)(a1 + 568) != 332 )
        goto LABEL_11;
    }
    else
    {
      v12 = *(_WORD *)(a1 + 568);
      if ( v12 != -31132 && v12 != 512 && v12 != -21916 )
        goto LABEL_11;
    }
    v11 = 935;
    v10 = "Database \"%ws\" is not of the same type as the main EXE";
    v14 = 3;
LABEL_24:
    AslLogCallPrintf(v14, (unsigned int)"SdbpOpenLocalDatabaseEx", v11, (_DWORD)v10);
    return v5;
  }
LABEL_11:
  v13 = SdbOpenDatabaseEx(Str);
  if ( v13 )
  {
    v15 = 32LL * v9;
    *(_QWORD *)(v15 + a1 + 48) = v13;
    *(_DWORD *)(v15 + a1 + 56) = 2;
    *(_DWORD *)(a1 + 28) |= 1 << v9;
    if ( a2 )
    {
      v16 = *a2;
      *(_DWORD *)(v15 + a1 + 56) |= 1u;
      *(_OWORD *)(v15 + a1 + 32) = v16;
    }
    else
    {
      *(_QWORD *)(v15 + a1 + 32) = 0LL;
      *(_QWORD *)(v15 + a1 + 40) = 0LL;
    }
    v5 = 1;
    if ( v9 == 1 )
      *(_QWORD *)(a1 + 16) = v13;
    *a5 = v9 << 28;
    if ( a4 )
      *a4 = v13;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenLocalDatabaseEx", 951, (unsigned int)"Failed to open database");
  }
  return v5;
}

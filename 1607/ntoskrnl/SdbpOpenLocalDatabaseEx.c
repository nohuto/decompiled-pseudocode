/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x1406C421C
 * Callers:
 *     SdbTagRefToTagID @ 0x14057F0D4 (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     wcsstr @ 0x14014F14C (wcsstr.c)
 *     SdbOpenDatabaseEx @ 0x1406C1624 (SdbOpenDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x1406C4190 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabase @ 0x1406C44AC (SdbResolveDatabase.c)
 *     AslStringUpper @ 0x1406C55C4 (AslStringUpper.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, __int64 *a4, unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned int v9; // edi
  const char *v10; // r9
  int v11; // r8d
  unsigned int v12; // ecx
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0
  unsigned int v18; // [rsp+20h] [rbp-268h]
  int v19; // [rsp+30h] [rbp-258h] BYREF
  wchar_t Str[264]; // [rsp+40h] [rbp-248h] BYREF

  v5 = 0;
  v19 = 0;
  v9 = *a5;
  if ( (*a5 & 0xF0000000) != 0 )
    v9 >>= 28;
  if ( v9 >= 0x10 )
  {
    v18 = v9;
    v10 = "Bad index 0x%lx";
    v11 = 880;
LABEL_23:
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenLocalDatabaseEx", v11, (_DWORD)v10, v18);
    return v5;
  }
  SdbpCloseLocalDatabaseEx(a1, (__int64)a2, v9);
  v12 = SdbResolveDatabase(a1, (_DWORD)a2, (unsigned int)&v19, (unsigned int)Str);
  if ( v12 - 1 > 0x102 )
  {
    v18 = v12;
    v10 = "Cannot resolve database, the path length is 0x%lx";
    v11 = 913;
    goto LABEL_23;
  }
  AslStringUpper(Str);
  if ( *(_WORD *)(a1 + 568) == 0x7FFF )
    goto LABEL_11;
  if ( wcsstr(Str, L"\\CUSTOM64\\") )
  {
    if ( *(_WORD *)(a1 + 568) != 332 )
      goto LABEL_11;
LABEL_14:
    AslLogCallPrintf(
      3,
      (unsigned int)"SdbpOpenLocalDatabaseEx",
      935,
      (unsigned int)"Database \"%ws\" is not of the same type as the main EXE",
      Str);
    return v5;
  }
  v13 = *(_WORD *)(a1 + 568);
  if ( v13 == -31132 || v13 == 512 || v13 == -21916 )
    goto LABEL_14;
LABEL_11:
  v14 = SdbOpenDatabaseEx(Str);
  if ( v14 )
  {
    v15 = 32LL * v9;
    *(_QWORD *)(v15 + a1 + 48) = v14;
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
      *(_QWORD *)(a1 + 16) = v14;
    *a5 = v9 << 28;
    if ( a4 )
      *a4 = v14;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenLocalDatabaseEx", 951, (unsigned int)"Failed to open database");
  }
  return v5;
}

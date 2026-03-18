/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x14067F280
 * Callers:
 *     SdbTagRefToTagID @ 0x14054F2BC (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     wcsstr @ 0x140145D70 (wcsstr.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     SdbOpenDatabaseEx @ 0x14067CED8 (SdbOpenDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x14067F1F4 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabase @ 0x14067F510 (SdbResolveDatabase.c)
 *     AslStringUpper @ 0x1406804F8 (AslStringUpper.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, __int64 *a4, unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned int v9; // edi
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // xmm0
  int v16; // [rsp+30h] [rbp-258h] BYREF
  wchar_t Str[264]; // [rsp+40h] [rbp-248h] BYREF

  v5 = 0;
  v16 = 0;
  v9 = *a5;
  if ( (*a5 & 0xF0000000) != 0 )
    v9 >>= 28;
  if ( v9 >= 0x10
    || (SdbpCloseLocalDatabaseEx(a1, (__int64)a2, v9),
        (unsigned int)SdbResolveDatabase(a1, (_DWORD)a2, (unsigned int)&v16, (unsigned int)Str) - 1 > 0x102) )
  {
    v12 = 1LL;
    goto LABEL_22;
  }
  AslStringUpper(Str);
  if ( *(_WORD *)(a1 + 568) == 0x7FFF )
    goto LABEL_10;
  if ( wcsstr(Str, L"\\CUSTOM64\\") )
  {
    if ( *(_WORD *)(a1 + 568) != 332 )
      goto LABEL_10;
    goto LABEL_13;
  }
  v10 = *(_WORD *)(a1 + 568);
  if ( v10 == -31132 || v10 == 512 || v10 == -21916 )
  {
LABEL_13:
    v12 = 3LL;
LABEL_22:
    AslLogCallPrintf(v12);
    return v5;
  }
LABEL_10:
  v11 = SdbOpenDatabaseEx(Str);
  if ( v11 )
  {
    v13 = 32LL * v9;
    *(_QWORD *)(v13 + a1 + 48) = v11;
    *(_DWORD *)(v13 + a1 + 56) = 2;
    *(_DWORD *)(a1 + 28) |= 1 << v9;
    if ( a2 )
    {
      v14 = *a2;
      *(_DWORD *)(v13 + a1 + 56) |= 1u;
      *(_OWORD *)(v13 + a1 + 32) = v14;
    }
    else
    {
      *(_QWORD *)(v13 + a1 + 32) = 0LL;
      *(_QWORD *)(v13 + a1 + 40) = 0LL;
    }
    v5 = 1;
    if ( v9 == 1 )
      *(_QWORD *)(a1 + 16) = v11;
    *a5 = v9 << 28;
    if ( a4 )
      *a4 = v11;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v5;
}

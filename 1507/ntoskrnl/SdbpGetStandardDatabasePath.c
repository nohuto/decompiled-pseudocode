/*
 * XREFs of SdbpGetStandardDatabasePath @ 0x140704768
 * Callers:
 *     SdbResolveDatabase @ 0x140704364 (SdbResolveDatabase.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbGetAppPatchDirEx @ 0x1407042C4 (SdbGetAppPatchDirEx.c)
 */

__int64 __fastcall SdbpGetStandardDatabasePath(__int64 a1, int a2, __int64 a3, wchar_t *a4, int a5)
{
  int v7; // r9d
  unsigned int v9; // eax
  const wchar_t *v10; // rsi
  __int64 v11; // rdi
  int v12; // ebx
  __int64 v13; // rax
  size_t pcchRemaining[2]; // [rsp+40h] [rbp-248h] BYREF
  wchar_t v15[264]; // [rsp+50h] [rbp-238h] BYREF

  v15[0] = 0;
  if ( a2 == -2145386496 || a2 == -2147221504 || (v7 = 1, a2 == -2147352576) )
    v7 = 0;
  SdbGetAppPatchDirEx(a1, v15, 0x104u, v7);
  if ( a2 >= 0 )
    return 0LL;
  v9 = a2 & 0xF02F0000;
  if ( (a2 & 0xF02F0000) == 0x80020000 )
  {
    v10 = L"msimain.sdb";
  }
  else
  {
    switch ( v9 )
    {
      case 0x80030000:
        v10 = L"sysmain.sdb";
        break;
      case 0x80040000:
        v10 = L"drvmain.sdb";
        break;
      case 0x80200000:
        v10 = L"acres.dll";
        break;
      default:
        AslLogCallPrintf(1LL);
        return 0LL;
    }
  }
  v11 = -1LL;
  if ( !a4 )
  {
    v12 = -1;
    goto LABEL_20;
  }
  if ( RtlStringCchPrintfExW(a4, a5, 0LL, pcchRemaining, 0, L"%s\\%s", v15, v10) < 0 )
    return 0LL;
  v12 = a5 - LODWORD(pcchRemaining[0]);
LABEL_20:
  if ( v12 < 0 )
  {
    if ( a4 )
      AslLogCallPrintf(1LL);
    v13 = -1LL;
    do
      ++v13;
    while ( v10[v13] );
    do
      ++v11;
    while ( v15[v11] );
    return (unsigned int)(v13 + v11 + 2);
  }
  return (unsigned int)v12;
}

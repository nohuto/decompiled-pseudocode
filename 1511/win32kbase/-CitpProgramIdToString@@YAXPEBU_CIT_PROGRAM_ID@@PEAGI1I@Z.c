/*
 * XREFs of ?CitpProgramIdToString@@YAXPEBU_CIT_PROGRAM_ID@@PEAGI1I@Z @ 0x1C00E4C98
 * Callers:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C004D770 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 * Callees:
 *     ?CitpFileNameFromPath@@YAPEBGPEBG@Z @ 0x1C0050140 (-CitpFileNameFromPath@@YAPEBGPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0068CE4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0077E00 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?CitpTimeDateStampToString@@YAXIPEAGI@Z @ 0x1C00E5E94 (-CitpTimeDateStampToString@@YAXIPEAGI@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00E6334 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall CitpProgramIdToString(const struct _CIT_PROGRAM_ID *a1, char *a2, __int64 a3, unsigned __int16 *a4)
{
  unsigned __int16 *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned int v9; // r8d
  unsigned __int64 v10; // rdx
  const unsigned __int16 *v11; // rbx
  unsigned int v12; // r8d
  int v13; // [rsp+20h] [rbp-88h]
  int v14; // [rsp+20h] [rbp-88h]
  unsigned __int16 v15[32]; // [rsp+30h] [rbp-78h] BYREF

  *(_WORD *)a2 = 0;
  *a4 = 0;
  v7 = *(unsigned __int16 **)a1;
  if ( v7 )
  {
    if ( *((_DWORD *)a1 + 8) == 1 )
    {
      StringCchCopyW(a2, 128LL, (char *)v7);
      if ( *((_QWORD *)a1 + 1) )
      {
        StringCchCatW((unsigned __int16 *)a2, v8, L"!");
        StringCchCatW((unsigned __int16 *)a2, v10, *((const unsigned __int16 **)a1 + 1));
      }
      CitpTimeDateStampToString(*((_DWORD *)a1 + 6), v15, v9);
      v13 = *((_DWORD *)a1 + 7);
      StringCchPrintfW(a4, 128LL, L"%ws!%x", v15, v13);
    }
    else
    {
      v11 = CitpFileNameFromPath(v7);
      StringCchPrintfW((wchar_t *)a2, 128LL, L"W:!!%ws", v11);
      CitpTimeDateStampToString(*((_DWORD *)a1 + 6), v15, v12);
      v14 = *((_DWORD *)a1 + 7);
      StringCchPrintfW(a4, 128LL, L"%ws!%x!%ws", v15, v14, v11);
    }
  }
}

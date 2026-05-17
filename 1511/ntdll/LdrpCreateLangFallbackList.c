/*
 * XREFs of LdrpCreateLangFallbackList @ 0x18001A418
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x18001C3DC (LdrpMergeLangFallbackLists.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003B530 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18003D860 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18003DF80 (RtlGetUserPreferredUILanguages.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180070DA0 (RtlpFilterandReplaceConsoleLanguages.c)
 * Callees:
 *     _SafeAllocBlob @ 0x18001A4CC (_SafeAllocBlob.c)
 */

__int64 __fastcall LdrpCreateLangFallbackList(__int64 *a1, __int64 a2, int a3, char a4)
{
  __int64 v4; // rbx
  int v6; // esi
  __int64 v9; // rax
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  v6 = a3;
  if ( !a2 || !a1 )
    return 3221225485LL;
  v11 = 0;
  if ( a3 < 1 )
    v6 = 4;
  v9 = SafeAllocBlob(64, v6, 6, 0, 0, (__int64)&v11);
  if ( v9 )
  {
    *(_DWORD *)v9 = v11;
    *(_WORD *)(v9 + 4) = 0;
    *(_DWORD *)(v9 + 40) = 0;
    v4 = v9;
    *(_QWORD *)(v9 + 24) = v9 + 64;
    *(_WORD *)(v9 + 6) = v6;
    *(_BYTE *)(v9 + 8) = a4;
    *(_QWORD *)(v9 + 16) = a2;
  }
  *a1 = v4;
  return v4 == 0 ? 0xC0000017 : 0;
}

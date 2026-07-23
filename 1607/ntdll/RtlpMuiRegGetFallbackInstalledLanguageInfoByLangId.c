/*
 * XREFs of RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x1800F4448
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        _WORD *a5)
{
  __int16 v7; // r8
  __int16 i; // bx
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _OWORD v14[3]; // [rsp+0h] [rbp-38h] BYREF

  memset((char *)v14 + 2, 0, 26);
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  v7 = 0;
  for ( i = 0; i < 8; i += 2 )
  {
    v9 = (*(unsigned __int16 *)(a2 + 8) >> i) & 3;
    if ( v9 )
    {
      if ( v9 == 2 )
      {
        v10 = *(__int16 *)(a2 + 2LL * v7 + 12);
        if ( *(_WORD *)(28 * v10 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 4) == a3 )
        {
          v11 = 28LL * (__int16)v10;
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
          *(_OWORD *)a4 = *(_OWORD *)(v11 + v12);
          *(_QWORD *)(a4 + 16) = *(_QWORD *)(v11 + v12 + 16);
          *(_DWORD *)(a4 + 24) = *(_DWORD *)(v11 + v12 + 24);
          *a5 = *(_WORD *)(a2 + 2LL * v7 + 12);
          return 0LL;
        }
      }
      else if ( v9 == 1 && *(__int16 *)(a2 + 2LL * v7 + 12) == a3 )
      {
        LOWORD(v14[0]) = 1;
        WORD2(v14[0]) = a3;
        *a5 = -1;
        *(_OWORD *)a4 = v14[0];
        *(_QWORD *)(a4 + 16) = *(_QWORD *)&v14[1];
        *(_DWORD *)(a4 + 24) = DWORD2(v14[1]);
        return 0LL;
      }
    }
    ++v7;
  }
  return 3221225524LL;
}

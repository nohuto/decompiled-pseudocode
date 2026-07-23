/*
 * XREFs of LdrpLangFallbackListFindNode @ 0x180043CD0
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180043BD0 (LdrpLangFallbackListAppendNode.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x180043E6C (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 */

__int64 __fastcall LdrpLangFallbackListFindNode(__int64 a1, __int64 a2, wchar_t *a3, _WORD *a4)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int16 v10; // dx
  DWORD v11; // esi
  int v12; // eax
  __int16 v13; // cx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r10
  bool v18; // zf
  _UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    String.Buffer = a3;
    *a4 = -1;
    v8 = -1LL;
    do
      ++v8;
    while ( a3[v8] );
    v9 = 2 * v8;
    if ( v9 >= 0xFFFE )
      LOWORD(v9) = -4;
    String.Length = v9;
    String.MaximumLength = v9 + 2;
    if ( !RtlCultureNameToLCID(&String, &Lcid) )
      return 3221225524LL;
    v10 = -1;
    v11 = ((Lcid - 4096) & 0xFFFFFBFF) != 0 ? Lcid : 0;
    if ( *a3 )
    {
      v10 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a3, 0LL, &Lcid);
      if ( v10 < 0 )
        goto LABEL_27;
      v12 = 0;
    }
    else
    {
      v12 = -1073741811;
    }
    if ( v12 >= 0 )
    {
LABEL_14:
      v13 = 0;
      if ( !*(_WORD *)(a2 + 4) )
        return 3221225524LL;
      v15 = *(_QWORD *)(a2 + 24);
      while ( 1 )
      {
        if ( *(_WORD *)(v15 + 6LL * v13) == 1 )
        {
          if ( !v11 )
            goto LABEL_25;
          v18 = *(__int16 *)(v15 + 6LL * v13 + 4) == v11;
          goto LABEL_24;
        }
        if ( *(_WORD *)(v15 + 6LL * v13) != 2 )
          break;
        v16 = 28LL * *(__int16 *)(v15 + 6LL * v13 + 4);
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( v10 > 0 && v10 == *(_WORD *)(v16 + v17 + 6) )
        {
LABEL_21:
          *a4 = v13;
          return 0LL;
        }
        if ( v11 )
        {
          v18 = v11 == *(unsigned __int16 *)(v16 + v17 + 4);
LABEL_24:
          if ( v18 )
            goto LABEL_21;
        }
LABEL_25:
        if ( ++v13 >= (int)*(unsigned __int16 *)(a2 + 4) )
          return 3221225524LL;
      }
      if ( *(_WORD *)(v15 + 6LL * v13) != 3 || v10 == -1 )
        goto LABEL_25;
      v18 = *(_WORD *)(v15 + 6LL * v13 + 4) == (unsigned __int16)v10;
      goto LABEL_24;
    }
LABEL_27:
    v10 = -1;
    goto LABEL_14;
  }
  return 3221225485LL;
}

/*
 * XREFs of WmipUuidFromString @ 0x140473198
 * Callers:
 *     WmipOpenGuidObject @ 0x140473104 (WmipOpenGuidObject.c)
 * Callees:
 *     WmipHexStringToDword @ 0x14047331C (WmipHexStringToDword.c)
 */

__int64 __fastcall WmipUuidFromString(__int64 a1, __int64 a2)
{
  int v4; // r9d
  int v5; // r9d
  __int16 v7; // [rsp+30h] [rbp+10h] BYREF

  if ( !(unsigned __int8)WmipHexStringToDword(a1, a2, 8LL) )
    return 3221225485LL;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 18, &v7, (unsigned int)(v4 - 41)) )
    return 3221225485LL;
  *(_WORD *)(a2 + 4) = v7;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 28, &v7, (unsigned int)(v5 - 41)) )
    return 3221225485LL;
  *(_WORD *)(a2 + 6) = v7;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 38, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 8) = v7;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 42, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 9) = v7;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 48, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 10) = v7;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 52, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 11) = v7;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 56, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 12) = v7;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 60, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 13) = v7;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 64, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 14) = v7;
  if ( !(unsigned __int8)WmipHexStringToDword(a1 + 68, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 15) = v7;
  return 0LL;
}

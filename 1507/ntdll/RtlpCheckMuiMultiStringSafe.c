/*
 * XREFs of RtlpCheckMuiMultiStringSafe @ 0x18006B210
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x18001C2B0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006AFD0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x1800D4970 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x18001F5CC (RtlStringCchLengthW.c)
 */

__int64 __fastcall RtlpCheckMuiMultiStringSafe(_WORD *a1, __int64 a2)
{
  int v4; // ecx
  __int64 v5; // r11
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
    ++a1;
  while ( a1 )
  {
    if ( !*a1 )
      break;
    v4 = RtlStringCchLengthW(a1, a2 + 1, &v7);
    if ( v4 < 0 )
      break;
    a1 = (_WORD *)(v5 + 2 * v7 + 2);
  }
  return (unsigned int)v4;
}

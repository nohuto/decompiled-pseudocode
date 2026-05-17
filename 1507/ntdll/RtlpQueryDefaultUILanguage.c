/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x180048A00
 * Callers:
 *     <none>
 * Callees:
 *     InitializeTEBUserLangList @ 0x18001B7C8 (InitializeTEBUserLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001DD60 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18001F930 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800273D8 (RtlpMuiRegFreeLanguageList.c)
 *     InitializeUserOrMachineLangList @ 0x180048B38 (InitializeUserOrMachineLangList.c)
 *     GetLCIDFromLangListNode @ 0x180048BFC (GetLCIDFromLangListNode.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *a1, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  char v8; // al
  int v9; // r9d
  int v10; // eax
  int LCIDFromLangListNode; // esi
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    *a1 = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v14);
    v4 = v14;
    if ( v6 >= 0 && (int)InitializeTEBUserLangList(a2, v14) >= 0 )
    {
      if ( NtCurrentTeb()->UserPrefLanguages )
        v7 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
      else
        v7 = 0LL;
      v4 = v14;
      v13 = v7;
      if ( v7 )
      {
        if ( *(_WORD *)(v7 + 4) )
        {
          LCIDFromLangListNode = GetLCIDFromLangListNode(v14, *(_QWORD *)(v7 + 24), a1);
          if ( LCIDFromLangListNode >= 0 )
            goto LABEL_15;
        }
        v13 = 0LL;
      }
      if ( a2 )
      {
        v8 = 0;
        v9 = 2;
      }
      else
      {
        v8 = 1;
        v9 = 3;
      }
      v10 = InitializeUserOrMachineLangList(v4, 0, (unsigned int)&v13, v9, v8);
      v5 = v13;
      if ( v10 >= 0 )
      {
        if ( v13 && *(_WORD *)(v13 + 4) )
          LCIDFromLangListNode = GetLCIDFromLangListNode(v4, *(_QWORD *)(v13 + 24), a1);
        else
          LCIDFromLangListNode = -1073741823;
LABEL_15:
        if ( LCIDFromLangListNode >= 0 )
          goto LABEL_16;
      }
    }
  }
  LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage(a1, v4);
  if ( LCIDFromLangListNode < 0 )
    *a1 = 0;
LABEL_16:
  if ( v5 )
    RtlpMuiRegFreeLanguageList(v5);
  return (unsigned int)LCIDFromLangListNode;
}

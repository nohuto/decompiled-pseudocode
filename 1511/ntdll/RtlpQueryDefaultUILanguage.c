/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x180039B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x18001D9B0 (RtlpMuiRegFreeLanguageList.c)
 *     InitializeUserOrMachineLangList @ 0x180039CC8 (InitializeUserOrMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180039EE8 (InitializeTEBUserLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     GetLCIDFromLangListNode @ 0x18003BE24 (GetLCIDFromLangListNode.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003EB40 (RtlpGetSystemDefaultUILanguage.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  int v12; // r9d
  int v13; // eax
  int LCIDFromLangListNode; // esi
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    *a1 = 0;
    v8 = RtlpCreateProcessRegistryInfo(&v17);
    v6 = v17;
    if ( v8 >= 0 )
    {
      LOBYTE(v9) = a2;
      if ( (int)InitializeTEBUserLangList(v9, v17, a3) >= 0 )
      {
        if ( NtCurrentTeb()->UserPrefLanguages )
          v10 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
        else
          v10 = 0LL;
        v6 = v17;
        v16 = v10;
        if ( v10 )
        {
          if ( *(_WORD *)(v10 + 4) )
          {
            LCIDFromLangListNode = GetLCIDFromLangListNode(v17, *(_QWORD *)(v10 + 24), a1);
            if ( LCIDFromLangListNode >= 0 )
              goto LABEL_15;
          }
          v16 = 0LL;
        }
        if ( a2 )
        {
          v11 = 0;
          v12 = 2;
        }
        else
        {
          v11 = 1;
          v12 = 3;
        }
        v13 = InitializeUserOrMachineLangList(v6, 0, (unsigned int)&v16, v12, v11);
        v7 = v16;
        if ( v13 >= 0 )
        {
          if ( v16 && *(_WORD *)(v16 + 4) )
            LCIDFromLangListNode = GetLCIDFromLangListNode(v6, *(_QWORD *)(v16 + 24), a1);
          else
            LCIDFromLangListNode = -1073741823;
LABEL_15:
          if ( LCIDFromLangListNode >= 0 )
            goto LABEL_16;
        }
      }
    }
  }
  LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage(a1, v6, a3, a4);
  if ( LCIDFromLangListNode < 0 )
    *a1 = 0;
LABEL_16:
  if ( v7 )
    RtlpMuiRegFreeLanguageList(v7);
  return (unsigned int)LCIDFromLangListNode;
}

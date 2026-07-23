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

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *DefaultUILanguageId, char a2)
{
  DWORD *v4; // rdi
  PVOID v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // al
  int v11; // r9d
  int v12; // eax
  NTSTATUS LCIDFromLangListNode; // esi
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  DWORD *v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( DefaultUILanguageId )
  {
    *DefaultUILanguageId = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v16);
    v4 = v16;
    if ( v6 >= 0 )
    {
      LOBYTE(v7) = a2;
      if ( (int)InitializeTEBUserLangList(v7, v16, v8) >= 0 )
      {
        if ( NtCurrentTeb()->UserPrefLanguages )
          v9 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
        else
          v9 = 0LL;
        v4 = v16;
        BaseAddress = (PVOID)v9;
        if ( v9 )
        {
          if ( *(_WORD *)(v9 + 4) )
          {
            LCIDFromLangListNode = GetLCIDFromLangListNode(v16, *(_QWORD *)(v9 + 24), DefaultUILanguageId);
            if ( LCIDFromLangListNode >= 0 )
              goto LABEL_15;
          }
          BaseAddress = 0LL;
        }
        if ( a2 )
        {
          v10 = 0;
          v11 = 2;
        }
        else
        {
          v10 = 1;
          v11 = 3;
        }
        v12 = InitializeUserOrMachineLangList((_DWORD)v4, 0, (unsigned int)&BaseAddress, v11, v10);
        v5 = BaseAddress;
        if ( v12 >= 0 )
        {
          if ( BaseAddress && *((_WORD *)BaseAddress + 2) )
            LCIDFromLangListNode = GetLCIDFromLangListNode(v4, *((_QWORD *)BaseAddress + 3), DefaultUILanguageId);
          else
            LCIDFromLangListNode = -1073741823;
LABEL_15:
          if ( LCIDFromLangListNode >= 0 )
            goto LABEL_16;
        }
      }
    }
  }
  LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, v4);
  if ( LCIDFromLangListNode < 0 )
    *DefaultUILanguageId = 0;
LABEL_16:
  if ( v5 )
    RtlpMuiRegFreeLanguageList(v5);
  return (unsigned int)LCIDFromLangListNode;
}

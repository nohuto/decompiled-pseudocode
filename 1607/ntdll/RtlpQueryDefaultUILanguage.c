/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x1800708C0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeTEBUserLangList @ 0x180012650 (InitializeTEBUserLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014530 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003F6B0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F04 (RtlpMuiRegFreeLanguageList.c)
 *     InitializeUserOrMachineLangList @ 0x1800709F8 (InitializeUserOrMachineLangList.c)
 *     GetLCIDFromLangListNode @ 0x180070ABC (GetLCIDFromLangListNode.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *DefaultUILanguageId, char a2)
{
  DWORD *v4; // rdi
  PVOID v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  char v8; // al
  int v9; // r9d
  int v10; // eax
  NTSTATUS LCIDFromLangListNode; // esi
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  DWORD *v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( DefaultUILanguageId )
  {
    *DefaultUILanguageId = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v14);
    v4 = v14;
    if ( v6 >= 0 && (int)InitializeTEBUserLangList(a2, (__int64)v14) >= 0 )
    {
      if ( NtCurrentTeb()->UserPrefLanguages )
        v7 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
      else
        v7 = 0LL;
      v4 = v14;
      BaseAddress = (PVOID)v7;
      if ( v7 )
      {
        if ( *(_WORD *)(v7 + 4) )
        {
          LCIDFromLangListNode = GetLCIDFromLangListNode(v14, *(_QWORD *)(v7 + 24), DefaultUILanguageId);
          if ( LCIDFromLangListNode >= 0 )
            goto LABEL_15;
        }
        BaseAddress = 0LL;
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
      v10 = InitializeUserOrMachineLangList((_DWORD)v4, 0, (unsigned int)&BaseAddress, v9, v8);
      v5 = BaseAddress;
      if ( v10 >= 0 )
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
  LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, v4);
  if ( LCIDFromLangListNode < 0 )
    *DefaultUILanguageId = 0;
LABEL_16:
  if ( v5 )
    RtlpMuiRegFreeLanguageList(v5);
  return (unsigned int)LCIDFromLangListNode;
}

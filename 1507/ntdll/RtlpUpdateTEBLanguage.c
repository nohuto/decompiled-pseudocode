/*
 * XREFs of RtlpUpdateTEBLanguage @ 0x180048904
 * Callers:
 *     InitializeTEBUserLangList @ 0x18001B7C8 (InitializeTEBUserLangList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18001C2B0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpInitializeUserList @ 0x180048720 (RtlpInitializeUserList.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800273D8 (RtlpMuiRegFreeLanguageList.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpMuiRegFreeStringPool @ 0x180047C60 (RtlpMuiRegFreeStringPool.c)
 */

__int64 __fastcall RtlpUpdateTEBLanguage(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 *Heap; // rax
  __int64 *UserPrefLanguages; // rdi
  int v9; // esi
  unsigned __int64 v11; // rcx

  v3 = 0;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL);
    UserPrefLanguages = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    *Heap = 0LL;
    Heap[1] = 0LL;
    NtCurrentTeb()->UserPrefLanguages = Heap;
  }
  v9 = a3 - 4;
  if ( !v9 )
  {
    if ( a1 )
    {
      if ( *UserPrefLanguages )
      {
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(*UserPrefLanguages + 40);
        RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
      }
      *UserPrefLanguages = a1;
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 )
    return v3;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v11 = UserPrefLanguages[1];
  if ( v11 )
    RtlpMuiRegFreeStringPool(v11);
  UserPrefLanguages[1] = a2;
  return v3;
}

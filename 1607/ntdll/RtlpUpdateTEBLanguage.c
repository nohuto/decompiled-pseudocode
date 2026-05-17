/*
 * XREFs of RtlpUpdateTEBLanguage @ 0x180080EA4
 * Callers:
 *     RtlpInitializeUserList @ 0x180010CE4 (RtlpInitializeUserList.c)
 *     InitializeTEBUserLangList @ 0x180012660 (InitializeTEBUserLangList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180013860 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180045F14 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeStringPool @ 0x1800720D8 (RtlpMuiRegFreeStringPool.c)
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
    Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
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

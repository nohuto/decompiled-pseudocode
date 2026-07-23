/*
 * XREFs of ApiSetQueryApiSetPresence @ 0x1800157C0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetResolveToHost @ 0x180015BEC (ApiSetResolveToHost.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 */

__int64 __fastcall ApiSetQueryApiSetPresence(__int64 a1, _BYTE *a2)
{
  void *ApiSetMap; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  _WORD v9[12]; // [rsp+30h] [rbp-18h] BYREF

  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  LdrpLogDllState(0LL, a1, 5328LL);
  v5 = ApiSetResolveToHost((_DWORD)ApiSetMap, a1, 0, (_DWORD)a2, (__int64)v9);
  if ( v5 >= 0 && *a2 )
  {
    v6 = a1;
    if ( v9[0] )
      v7 = 5329LL;
    else
      v7 = 5330LL;
  }
  else
  {
    v7 = 5331LL;
    v6 = a1;
  }
  LdrpLogDllState(0LL, v6, v7);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( !v9[0] )
  {
    if ( *a2 )
      *a2 = 0;
  }
  return 0LL;
}

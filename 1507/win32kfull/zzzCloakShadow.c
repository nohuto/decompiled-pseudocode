/*
 * XREFs of zzzCloakShadow @ 0x1C0223B30
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0081990 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 */

struct tagSHADOW *__fastcall zzzCloakShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  int v2; // edx
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  result = FindShadow(a1);
  if ( result )
  {
    v3 = *((_QWORD *)result + 1);
    v6[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v6;
    v6[1] = v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 8);
    zzzSetWindowCompositionCloak(*((_QWORD *)result + 1), 0LL, v2 != 0);
    return (struct tagSHADOW *)ThreadUnlock1(v5, v4);
  }
  return result;
}

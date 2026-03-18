/*
 * XREFs of FindShadowWindow @ 0x140231868
 * Callers:
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14017A5C0 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x140011E54 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall FindShadowWindow(struct tagWND *a1, __int64 a2)
{
  struct tagSHADOW *result; // rax

  result = FindShadow(a1, a2);
  if ( result )
    return (struct tagSHADOW *)*((_QWORD *)result + 1);
  return result;
}

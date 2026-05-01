/*
 * XREFs of ??$replace@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@YAPEAPEAXAEAV?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@0@@Z @ 0x180033F58
 * Callers:
 *     ?TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x180038D10 (-TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x18003F838 (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005394 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 */

void **__fastcall tlx::replace<void *,int (*)(void *),&int CloseHandle(void *),0>(void **a1)
{
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(a1);
  *a1 = 0LL;
  return a1;
}

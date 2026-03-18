/*
 * XREFs of ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0071C38
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00711B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007156C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDwmApiPort(void *a1)
{
  if ( !a1 && g_pDwmApiPort )
    ObfDereferenceObject(g_pDwmApiPort);
  g_pDwmApiPort = a1;
}

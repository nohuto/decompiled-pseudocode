/*
 * XREFs of ?CitpIsInteractiveSession@@YAEXZ @ 0x1C00170BC
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0016F8C (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C007A47C (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 CitpIsInteractiveSession(void)
{
  char v0; // bl

  v0 = 0;
  if ( gSessionId || !(unsigned __int8)RtlIsMultiSessionSku() )
    return 1;
  return v0;
}

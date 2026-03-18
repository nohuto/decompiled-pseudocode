/*
 * XREFs of ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0068854
 * Callers:
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C006825C (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0068724 (-CitpStart@@YAJXZ.c)
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

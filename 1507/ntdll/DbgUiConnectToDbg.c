/*
 * XREFs of DbgUiConnectToDbg @ 0x1800BBE80
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateDebugObject @ 0x1800942A0 (NtCreateDebugObject.c)
 */

__int64 DbgUiConnectToDbg()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( !NtCurrentTeb()->DbgSsReserved[1] )
    return (unsigned int)NtCreateDebugObject();
  return v0;
}

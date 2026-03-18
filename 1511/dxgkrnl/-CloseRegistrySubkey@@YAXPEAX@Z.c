/*
 * XREFs of ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x1C005DA94
 * Callers:
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0165318 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CloseRegistrySubkey(void *a1)
{
  if ( a1 )
    ZwClose(a1);
}

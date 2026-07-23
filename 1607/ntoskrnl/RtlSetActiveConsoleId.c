/*
 * XREFs of RtlSetActiveConsoleId @ 0x140548CB8
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 */

unsigned __int64 __fastcall RtlSetActiveConsoleId(unsigned int a1)
{
  unsigned __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = (unsigned __int64)PsGetCurrentServerSiloGlobals();
    *(_DWORD *)(result + 1012) = a1;
  }
  else
  {
    result = a1;
    MEMORY[0xFFFFF780000002D8] = a1;
  }
  return result;
}

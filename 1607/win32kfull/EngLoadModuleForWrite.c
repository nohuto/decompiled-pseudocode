/*
 * XREFs of EngLoadModuleForWrite @ 0x1C027C790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall EngLoadModuleForWrite(LPWSTR pwsz, ULONG cjSizeOfModule)
{
  ULONG v3; // edx

  v3 = -1;
  if ( cjSizeOfModule )
    v3 = cjSizeOfModule;
  return (HANDLE)LoadModuleWorkHorse(pwsz, v3);
}

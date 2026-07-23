/*
 * XREFs of FsRtlCurrentOplock @ 0x1401B8FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlCurrentOplock(POPLOCK Oplock)
{
  BOOLEAN v1; // dl

  v1 = 0;
  if ( *Oplock )
    return (*((_DWORD *)*Oplock + 36) & 0x701E) != 0;
  return v1;
}

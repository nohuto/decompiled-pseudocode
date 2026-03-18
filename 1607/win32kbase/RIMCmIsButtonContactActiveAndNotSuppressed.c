/*
 * XREFs of RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C00E130C
 * Callers:
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C00D0F30 (rimAbShouldButtonContactBeSuppressed.c)
 *     rimFinalizePointerFlags @ 0x1C00DD90C (rimFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmIsButtonContactActiveAndNotSuppressed(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx

  if ( *(_DWORD *)(a1 + 24) != 7 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 1528);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 32) & 2) != 0 )
    return *(_DWORD *)(v1 + 8) == 0;
  return v2;
}

/*
 * XREFs of VerifierExfReleasePushLock @ 0x140751D00
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x140751FC4 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfReleasePushLock(_QWORD *a1, __int64 a2)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(235, (ULONG_PTR)a1);
  return pXdvExfReleasePushLock(a1, a2);
}

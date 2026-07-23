/*
 * XREFs of ViFilterStartCompletionRoutine @ 0x14071B17C
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 */

__int64 __fastcall ViFilterStartCompletionRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v2 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 52LL) & 1) != 0 )
    *(_DWORD *)(a1 + 52) |= 1u;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 32), (PVOID)a2, 0x20u);
  return 0LL;
}

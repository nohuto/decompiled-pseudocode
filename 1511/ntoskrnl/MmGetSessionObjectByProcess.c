/*
 * XREFs of MmGetSessionObjectByProcess @ 0x14012E640
 * Callers:
 *     PspEstablishDfssHierarchy @ 0x140517E8C (PspEstablishDfssHierarchy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionObjectByProcess(struct _KPROCESS *a1)
{
  unsigned __int64 v1; // rax

  v1 = a1[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 72);
}

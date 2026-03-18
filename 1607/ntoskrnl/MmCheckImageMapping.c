/*
 * XREFs of MmCheckImageMapping @ 0x14051C05C
 * Callers:
 *     PspLocateInPEManifest @ 0x14051B07C (PspLocateInPEManifest.c)
 *     MiInitializeWowPeb @ 0x14051BDC4 (MiInitializeWowPeb.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C4D0 (MiSectionControlArea.c)
 */

__int64 __fastcall MmCheckImageMapping(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  bool *v3; // rdx

  v1 = *(_QWORD *)(a1 + 952);
  if ( !v1 )
    return 3221225477LL;
  v2 = MiSectionControlArea(v1);
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
    return 3221225477LL;
  *v3 = *(_QWORD *)(v2 + 144) != 0LL;
  return 0LL;
}

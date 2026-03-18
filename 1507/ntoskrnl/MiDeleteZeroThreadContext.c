/*
 * XREFs of MiDeleteZeroThreadContext @ 0x1400FC244
 * Callers:
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiZeroLargePageThread @ 0x140165A28 (MiZeroLargePageThread.c)
 *     MiStartZeroPageWorkers @ 0x1407C97DC (MiStartZeroPageWorkers.c)
 * Callees:
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiReleaseNonPagedResources @ 0x1400FC2A8 (MiReleaseNonPagedResources.c)
 *     MiReplaceUltraBit @ 0x1400FC6D4 (MiReplaceUltraBit.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 */

void __fastcall MiDeleteZeroThreadContext(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 32) == 1 )
  {
    MiReleaseFreshPage(48LL * *(_QWORD *)(a2 + 24) - 0x58000000000LL);
    MiReplaceUltraBit(a2, 0LL);
  }
  else
  {
    MiReleasePtes((__int64)&qword_14034FC70, *(_QWORD **)(a2 + 40), 0x200u);
  }
  MiReleaseNonPagedResources(a1, 513LL);
  ExFreePoolWithTag((PVOID)a2, 0);
}

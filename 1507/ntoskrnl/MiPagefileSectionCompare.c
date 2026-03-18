/*
 * XREFs of MiPagefileSectionCompare @ 0x140082E4C
 * Callers:
 *     MiUpdatePageFileSectionList @ 0x140082D08 (MiUpdatePageFileSectionList.c)
 *     MiReferencePfBackedSection @ 0x1400FD148 (MiReferencePfBackedSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPagefileSectionCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx

  v3 = *(_QWORD *)(a2 - 48);
  if ( a1 < v3 )
    return 0xFFFFFFFFLL;
  else
    return a1 >= v3 + 8LL * *(unsigned int *)(a2 - 12);
}

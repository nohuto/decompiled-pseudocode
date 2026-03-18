/*
 * XREFs of MiFreeForkMaps @ 0x1400EC940
 * Callers:
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 * Callees:
 *     MiFinishLastForkPageTable @ 0x1400ECA54 (MiFinishLastForkPageTable.c)
 *     MiUnmapSinglePage @ 0x1400ECCC4 (MiUnmapSinglePage.c)
 */

__int64 __fastcall MiFreeForkMaps(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi

  if ( *(_QWORD *)(a1 + 56) )
    result = MiUnmapSinglePage();
  v3 = (_QWORD *)(a1 + 8);
  v4 = 3LL;
  do
  {
    if ( *v3 != -1LL )
      result = MiFinishLastForkPageTable();
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}

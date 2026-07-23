/*
 * XREFs of MiFreeForkMaps @ 0x14010A2AC
 * Callers:
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 * Callees:
 *     MiFinishLastForkPageTable @ 0x140108B7C (MiFinishLastForkPageTable.c)
 *     MiUnmapSinglePage @ 0x14010A354 (MiUnmapSinglePage.c)
 */

__int64 __fastcall MiFreeForkMaps(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    result = MiUnmapSinglePage();
  v4 = (__int64 *)(a1 + 8);
  v5 = 3LL;
  do
  {
    if ( *v4 != -1 )
      result = MiFinishLastForkPageTable(v2, *v4);
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}

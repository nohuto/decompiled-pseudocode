/*
 * XREFs of MiPageHasRelocations @ 0x140661834
 * Callers:
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageHasRelocations(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v5; // edx

  v2 = *(_QWORD *)(a1 + 96);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(*(_QWORD *)v2 + 56LL) )
    return 0LL;
  v5 = 0;
  while ( !*(_QWORD *)(**(_QWORD **)v2 + 8LL * (v5 + a2)) )
  {
    if ( ++v5 )
      return 0LL;
  }
  return 1LL;
}

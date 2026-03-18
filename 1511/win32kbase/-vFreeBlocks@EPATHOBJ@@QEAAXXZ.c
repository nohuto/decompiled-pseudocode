/*
 * XREFs of ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C006FF70
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C006FEE0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C00B3BD0 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 * Callees:
 *     freepathalloc @ 0x1C0070450 (freepathalloc.c)
 */

void __fastcall EPATHOBJ::vFreeBlocks(EPATHOBJ *this)
{
  __int64 *v2; // rcx
  __int64 *v3; // rbx

  v2 = *(__int64 **)(*((_QWORD *)this + 1) + 24LL);
  if ( v2 )
  {
    do
    {
      v3 = (__int64 *)*v2;
      if ( *((_DWORD *)v2 + 4) == 4032 )
        freepathalloc();
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = 0LL;
}

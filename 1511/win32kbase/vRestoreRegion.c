/*
 * XREFs of vRestoreRegion @ 0x1C00B6870
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall vRestoreRegion(__int64 a1)
{
  __int64 v2; // rdx
  bool v3; // zf
  __int64 v4; // rcx
  __int16 *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 232LL);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 32))-- == 1;
    v5 = (__int16 *)v2;
    if ( v3 )
      RGNOBJ::vDeleteRGNOBJ(&v5);
  }
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
  if ( v4 )
  {
    v3 = (*(_DWORD *)(v4 + 32))-- == 1;
    v5 = (__int16 *)v4;
    if ( v3 )
      RGNOBJ::vDeleteRGNOBJ(&v5);
  }
}

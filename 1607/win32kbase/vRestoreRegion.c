/*
 * XREFs of vRestoreRegion @ 0x1C0074CF0
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall vRestoreRegion(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // zf
  __int16 *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 232LL);
  if ( v2 )
  {
    v4 = (*(_DWORD *)(v2 + 32))-- == 1;
    v5 = (__int16 *)v2;
    if ( v4 )
      RGNOBJ::vDeleteRGNOBJ(&v5);
  }
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 32))-- == 1;
    v5 = (__int16 *)v3;
    if ( v4 )
      RGNOBJ::vDeleteRGNOBJ(&v5);
  }
}

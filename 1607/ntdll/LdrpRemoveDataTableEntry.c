/*
 * XREFs of LdrpRemoveDataTableEntry @ 0x18000DC78
 * Callers:
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 *     LdrpMapDllSearchPath @ 0x18000E5B8 (LdrpMapDllSearchPath.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpRemoveDataTableEntry(__int64 *a1)
{
  __int64 v1; // r8
  __int64 **v2; // rdx
  __int64 *v3; // rdx
  __int64 **v4; // rax
  __int64 v5; // rdx
  __int64 **v6; // rax

  if ( (a1[13] & 0x40) != 0 )
  {
    v1 = a1[14];
    v2 = (__int64 **)a1[15];
    if ( *(__int64 **)(v1 + 8) != a1 + 14 || *v2 != a1 + 14 )
      __fastfail(3u);
    *v2 = (__int64 *)v1;
    *(_QWORD *)(v1 + 8) = v2;
    v3 = (__int64 *)*a1;
    v4 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v4 != a1 )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (__int64)v4;
    v5 = a1[2];
    v6 = (__int64 **)a1[3];
    if ( *(__int64 **)(v5 + 8) != a1 + 2 || *v6 != a1 + 2 )
      __fastfail(3u);
    *v6 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    *((_DWORD *)a1 + 26) &= ~0x40u;
  }
}

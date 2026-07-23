/*
 * XREFs of MiLocateIndirectHash @ 0x14004B690
 * Callers:
 *     MiUpdateWsle @ 0x14003C310 (MiUpdateWsle.c)
 *     MiTryLocateWsle @ 0x140046710 (MiTryLocateWsle.c)
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 *     MiReplaceWsleHash @ 0x1400FCEC4 (MiReplaceWsleHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLocateIndirectHash(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 56);
  v4 = a3;
  while ( !a2 )
  {
    if ( !*(_QWORD *)(v3 + 16 * v4) )
      return v4;
LABEL_7:
    if ( (unsigned __int64)++v4 >= 0x100 )
      v4 = 0LL;
    if ( v4 == a3 )
      return 0xFFFFFFFFFLL;
  }
  v5 = *(_QWORD *)(v3 + 16 * v4);
  if ( (v5 & 1) != 0 )
  {
    if ( (v5 & 0x800000000000LL) != 0 )
      v6 = v5 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
    else
      v6 = v5 & 0xFFFFFFFFF000LL | 1;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 != a2 )
    goto LABEL_7;
  return v4;
}

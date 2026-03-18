/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x1407D9C04
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x1407D9810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14001F3E0 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlCreateInvertedFunctionTableCacheEntry(ULONG_PTR a1, int a2)
{
  int v3; // edi
  PVOID v5; // rax
  ULONG_PTR v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  ULONG_PTR v10; // [rsp+50h] [rbp+8h]

  v3 = 0;
  if ( a1 >= *(&xmmword_14031EF70 + 1) && a1 < *(&xmmword_14031EF70 + 1) + (unsigned int)qword_14031EF80 )
  {
    v8 = *(_OWORD *)&xmmword_14031EF70;
    v9 = qword_14031EF80;
    v5 = (PVOID)xmmword_14031EF70;
  }
  else
  {
    v5 = RtlpxLookupFunctionTable(a1, (__int64 *)&v8);
  }
  if ( v5 )
  {
    v6 = *((_QWORD *)&v8 + 1);
    v3 = HIDWORD(v9);
  }
  else
  {
    v6 = v10;
  }
  *(&xmmword_14031EF70 + 1) = v6;
  xmmword_14031EF70 = (ULONG_PTR)v5;
  LODWORD(qword_14031EF80) = a2;
  HIDWORD(qword_14031EF80) = v3;
  return RtlRemoveInvertedFunctionTable(a1);
}

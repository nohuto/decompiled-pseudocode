/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x1407B162C
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x1407B1234 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400510C0 (RtlpxLookupFunctionTable.c)
 */

void __fastcall RtlCreateInvertedFunctionTableCacheEntry(ULONG_PTR a1, int a2)
{
  int v3; // edi
  PVOID v5; // rax
  ULONG_PTR v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  ULONG_PTR v9; // [rsp+50h] [rbp+8h]

  v3 = 0;
  if ( a1 >= *(&xmmword_1402F6FB0 + 1) && a1 < *(&xmmword_1402F6FB0 + 1) + (unsigned int)qword_1402F6FC0 )
  {
    v7 = *(_OWORD *)&xmmword_1402F6FB0;
    v8 = qword_1402F6FC0;
    v5 = (PVOID)xmmword_1402F6FB0;
  }
  else
  {
    v5 = RtlpxLookupFunctionTable(a1, (__int64 *)&v7);
  }
  if ( v5 )
  {
    v6 = *((_QWORD *)&v7 + 1);
    v3 = HIDWORD(v8);
  }
  else
  {
    v6 = v9;
  }
  xmmword_1402F6FB0 = (ULONG_PTR)v5;
  HIDWORD(qword_1402F6FC0) = v3;
  *(&xmmword_1402F6FB0 + 1) = v6;
  LODWORD(qword_1402F6FC0) = a2;
  RtlRemoveInvertedFunctionTable(a1);
}

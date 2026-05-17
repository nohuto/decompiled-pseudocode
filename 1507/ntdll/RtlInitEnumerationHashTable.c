/*
 * XREFs of RtlInitEnumerationHashTable @ 0x180065590
 * Callers:
 *     RtlInitWeakEnumerationHashTable @ 0x1800DBB70 (RtlInitWeakEnumerationHashTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x1800656EC (RtlpPopulateContext.c)
 */

char __fastcall RtlInitEnumerationHashTable(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v7; // [rsp+20h] [rbp-28h] BYREF

  RtlpPopulateContext(a1, &v7, 0LL);
  v4 = v7;
  ++*(_DWORD *)(a1 + 28);
  if ( (_QWORD *)*v4 == v4 )
    ++*(_DWORD *)(a1 + 24);
  v5 = (_QWORD *)*v4;
  *(_QWORD *)a2 = *v4;
  *(_QWORD *)(a2 + 8) = v4;
  if ( (_QWORD *)v5[1] != v4 )
    __fastfail(3u);
  v5[1] = a2;
  *v4 = a2;
  *(_DWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = v4;
  return 1;
}

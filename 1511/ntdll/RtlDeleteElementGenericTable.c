/*
 * XREFs of RtlDeleteElementGenericTable @ 0x18006D420
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x18006D698 (FindNodeOrParent_0.c)
 *     RtlDelete @ 0x18006D950 (RtlDelete.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

char __fastcall RtlDeleteElementGenericTable(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  void (__fastcall *v6)(__int64, __int64); // rbx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent_0(a1, a2, &v8) != 1 )
    return 0;
  v3 = v8;
  *(_QWORD *)a1 = RtlDelete(v8);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = *(_QWORD **)(v3 + 32);
  if ( *(_QWORD *)(v4 + 8) != v3 + 24 || *v5 != v3 + 24 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = *(void (__fastcall **)(__int64, __int64))(a1 + 56);
  --*(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  v6(a1, v3);
  return 1;
}

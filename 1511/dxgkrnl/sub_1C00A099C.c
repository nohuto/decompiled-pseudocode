/*
 * XREFs of sub_1C00A099C @ 0x1C00A099C
 * Callers:
 *     sub_1C00A0D40 @ 0x1C00A0D40 (sub_1C00A0D40.c)
 * Callees:
 *     sub_1C00A0C4C @ 0x1C00A0C4C (sub_1C00A0C4C.c)
 *     sub_1C00A1AD0 @ 0x1C00A1AD0 (sub_1C00A1AD0.c)
 */

__int64 __fastcall sub_1C00A099C(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // eax
  bool v13; // dl
  __int64 v14; // rax
  __int64 v15; // rax

  v8 = *(_QWORD *)(104LL * a2 + a1 + 16);
  if ( !(unsigned __int8)sub_1C00A0C4C(a1, a2) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !(unsigned __int8)sub_1C00A0C4C(a1, a2) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (*(_DWORD *)v8 & 0x100) == 0 )
    return 0LL;
  v12 = *(_DWORD *)(v8 + 104);
  v13 = *(_DWORD *)(a3 + 96) == v12;
  if ( v13 == (*(_DWORD *)(a4 + 96) == v12) )
    return sub_1C00A1AD0(
             (struct _D3DKMDT_2DREGION *)(a3 + 76),
             (struct _D3DKMDT_2DREGION *)(a4 + 76),
             (struct _D3DKMDT_2DREGION *)(v8 + 84));
  result = 0xFFFFFFFFLL;
  if ( v13 )
    return 1LL;
  return result;
}

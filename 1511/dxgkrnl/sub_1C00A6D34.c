/*
 * XREFs of sub_1C00A6D34 @ 0x1C00A6D34
 * Callers:
 *     sub_1C00A6A98 @ 0x1C00A6A98 (sub_1C00A6A98.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     sub_1C00A1AD0 @ 0x1C00A1AD0 (sub_1C00A1AD0.c)
 *     sub_1C00A6E28 @ 0x1C00A6E28 (sub_1C00A6E28.c)
 *     sub_1C00A94AC @ 0x1C00A94AC (sub_1C00A94AC.c)
 *     sub_1C01827C0 @ 0x1C01827C0 (sub_1C01827C0.c)
 */

__int64 __fastcall sub_1C00A6D34(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // r14
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( a4 == a5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  v10 = 104LL * a3;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v10 + a1 + 16) + 16LL),
           *(_DWORD *)(*(_QWORD *)(v10 + a1 + 16) + 20LL));
  if ( !Path )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*((_QWORD *)Path + 12) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !*(_QWORD *)(*((_QWORD *)Path + 12) + 96LL) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v20);
  }
  result = sub_1C00A6E28(a1, a3, a4, a5);
  if ( !(_DWORD)result )
  {
    LOBYTE(v14) = a6;
    result = sub_1C00A94AC(a4, a5, v14, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    if ( !(_DWORD)result )
    {
      result = sub_1C00A1AD0(
                 (struct _D3DKMDT_2DREGION *)(a4 + 84),
                 (struct _D3DKMDT_2DREGION *)(a5 + 84),
                 (struct _D3DKMDT_2DREGION *)(v10 + a1 + 52));
      if ( !(_DWORD)result )
        return sub_1C01827C0(a4, a5);
    }
  }
  return result;
}

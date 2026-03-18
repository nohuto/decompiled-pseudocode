/*
 * XREFs of sub_1C00A0D40 @ 0x1C00A0D40
 * Callers:
 *     sub_1C00A0A40 @ 0x1C00A0A40 (sub_1C00A0A40.c)
 * Callees:
 *     sub_1C00A07D0 @ 0x1C00A07D0 (sub_1C00A07D0.c)
 *     sub_1C00A099C @ 0x1C00A099C (sub_1C00A099C.c)
 *     sub_1C00A0E64 @ 0x1C00A0E64 (sub_1C00A0E64.c)
 *     sub_1C00A1B7C @ 0x1C00A1B7C (sub_1C00A1B7C.c)
 *     sub_1C0182824 @ 0x1C0182824 (sub_1C0182824.c)
 */

__int64 __fastcall sub_1C00A0D40(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned int v12; // ebx
  int v13; // r12d
  int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a4 == a5 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  v9 = 104LL * a3;
  if ( *(_BYTE *)(*(_QWORD *)(v9 + a1 + 16) + 117LL) && (*(_DWORD *)(a1 + 8) & 2) != 0
    || (result = sub_1C00A099C(a1, a3, a4, a5), !(_DWORD)result) )
  {
    v11 = 1;
    if ( !*(_BYTE *)(*(_QWORD *)(v9 + a1 + 16) + 117LL)
      || (*(_DWORD *)(v9 + a1 + 116) & 1) == 0
      || (result = sub_1C0182824(a1, a3, a4, a5), !(_DWORD)result) )
    {
      v12 = *(_DWORD *)(a4 + 96);
      v13 = sub_1C00A0E64(*(unsigned int *)(a5 + 96));
      v14 = sub_1C00A0E64(v12);
      if ( v14 <= v13 )
      {
        if ( v14 >= v13 )
        {
          v11 = sub_1C00A1B7C(a4 + 76, a5 + 76);
          if ( v11 )
          {
            v16 = sub_1C00A07D0(a1, a3, v15, a4, a5);
            if ( v16 )
              return v16;
          }
        }
        else
        {
          return (unsigned int)-1;
        }
      }
      return v11;
    }
  }
  return result;
}

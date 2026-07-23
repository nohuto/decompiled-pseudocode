/*
 * XREFs of CmpRecordParseFailure @ 0x1401B3C98
 * Callers:
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseFailure(__int64 a1, int a2, int a3)
{
  unsigned __int8 v3; // al

  if ( a1 )
  {
    v3 = *(_BYTE *)(a1 + 194);
    if ( v3 < 4u )
    {
      *(_DWORD *)(a1 + 4LL * v3 + 196) = a2;
      *(_DWORD *)(a1 + 4LL * (unsigned __int8)(*(_BYTE *)(a1 + 194))++ + 212) = a3;
    }
  }
}

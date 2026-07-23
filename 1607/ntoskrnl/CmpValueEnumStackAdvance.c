/*
 * XREFs of CmpValueEnumStackAdvance @ 0x14060B534
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1401B5A7C (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCDA4 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     CmpIsValueTombstone @ 0x1404CD800 (CmpIsValueTombstone.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14060B698 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14060B704 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 */

__int64 __fastcall CmpValueEnumStackAdvance(__int64 a1)
{
  __int64 *i; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edi
  bool v8; // sf
  char v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF

  HvpGetCellContextReinitialize((__int64)&v11);
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(_DWORD *)a1 == -1 )
      return (unsigned int)-2147483622;
    ++*(_DWORD *)(a1 + 8);
  }
  else
  {
    *(_WORD *)(a1 + 6) = *(_WORD *)(a1 + 12);
    *(_BYTE *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 8) = 0;
  }
  *(_DWORD *)a1 = -1;
  if ( *(__int16 *)(a1 + 6) >= 0 )
  {
    do
    {
      for ( i = (__int64 *)CmpValueEnumStackGetEntryAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 6));
            *(_DWORD *)(a1 + 8) < *((_DWORD *)i + 6);
            ++*(_DWORD *)(a1 + 8) )
      {
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*i + 8))(
               *i,
               *(unsigned int *)(i[1] + 4LL * *(unsigned int *)(a1 + 8)),
               &v11);
        if ( CmpIsValueTombstone(*i, v3) )
        {
          (*(void (__fastcall **)(__int64, char *))(v6 + 16))(v5, &v11);
        }
        else
        {
          v7 = CmpValueEnumStackMatchingValueInUpperLayer(a1, *(unsigned __int16 *)(a1 + 6), v4, &v10);
          (*(void (__fastcall **)(__int64, char *))(*i + 16))(*i, &v11);
          if ( v7 < 0 )
            return (unsigned int)v7;
          if ( !v10 )
          {
            v7 = 0;
            *(_DWORD *)a1 = *(_DWORD *)(i[1] + 4LL * *(unsigned int *)(a1 + 8));
            return (unsigned int)v7;
          }
        }
      }
      v8 = (__int16)--*(_WORD *)(a1 + 6) < 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    while ( !v8 );
  }
  return (unsigned int)-2147483622;
}

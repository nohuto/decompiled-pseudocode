/*
 * XREFs of ndisWmiMapOids @ 0x1C00A8BEC
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x1C00A87C4 (ndisQuerySupportedGuidToOidList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWmiMapOids(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned __int16 i; // r11
  unsigned __int16 v10; // cx
  __int64 v11; // r8
  int v12; // edx
  __int64 v14; // rdx

  for ( i = 0; i < a6; ++i )
  {
    v10 = 0;
    if ( a4 )
    {
      v11 = 28LL * i;
      v12 = *(_DWORD *)(v11 + a5 + 16);
      while ( !v12 || v12 != *(_DWORD *)(a3 + 4LL * v10) )
      {
        if ( ++v10 >= a4 )
          goto LABEL_11;
      }
      if ( a1 )
      {
        v14 = 28LL * a2;
        *(_OWORD *)(v14 + a1) = *(_OWORD *)(v11 + a5);
        *(_QWORD *)(v14 + a1 + 16) = *(_QWORD *)(v11 + a5 + 16);
        *(_DWORD *)(v14 + a1 + 24) = *(_DWORD *)(v11 + a5 + 24);
      }
      ++a2;
    }
LABEL_11:
    ;
  }
  return a2;
}

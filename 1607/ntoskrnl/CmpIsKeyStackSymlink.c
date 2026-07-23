/*
 * XREFs of CmpIsKeyStackSymlink @ 0x140402638
 * Callers:
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 */

char __fastcall CmpIsKeyStackSymlink(__int64 a1)
{
  __int16 v1; // r8
  __int64 KcbAtLayerHeight; // rax
  __int16 v3; // r8
  int v4; // eax

  v1 = *(_WORD *)(a1 + 2);
  if ( v1 < 0 )
  {
LABEL_4:
    LOBYTE(v4) = 0;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, (unsigned __int16)v1);
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
        return (*(unsigned __int8 *)(KcbAtLayerHeight + 178) >> 4) & 1;
      v1 = v3 - 1;
      if ( v1 < 0 )
        goto LABEL_4;
    }
  }
  return v4;
}

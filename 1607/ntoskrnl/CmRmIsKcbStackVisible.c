/*
 * XREFs of CmRmIsKcbStackVisible @ 0x14060DD80
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 */

bool __fastcall CmRmIsKcbStackVisible(__int64 a1)
{
  __int16 v1; // r8
  __int64 KcbAtLayerHeight; // rax
  __int16 v3; // r8
  __int64 v4; // r9

  v1 = *(_WORD *)(a1 + 2);
  if ( v1 < 0 )
    return 1;
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v1);
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      break;
    v1 = v3 - 1;
    if ( v1 < 0 )
      return 1;
  }
  return CmRmIsKCBVisible(KcbAtLayerHeight, v4);
}

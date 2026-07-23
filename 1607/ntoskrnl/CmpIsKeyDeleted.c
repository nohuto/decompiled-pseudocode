/*
 * XREFs of CmpIsKeyDeleted @ 0x140403EF0
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1403E1228 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpFindSubKeyByNumberEx @ 0x140437BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteOpenLogic @ 0x14043F180 (CmpVEExecuteOpenLogic.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404A7724 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpIsMasterHive @ 0x1404BCA00 (CmpIsMasterHive.c)
 *     CmpSyncKcbCacheForHive @ 0x140601A44 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpStartKcbStack @ 0x140403F80 (CmpStartKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x140403FD0 (CmpIsKeyStackDeleted.c)
 *     CmpSetKcbAtLayerHeight @ 0x1404B0A9C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int16 v5; // r10
  unsigned __int8 IsKeyStackDeleted; // bl
  __int64 i; // r11
  __int64 v9; // r11
  __int16 v10; // r10
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v11, 0, 0x20uLL);
  v4 = *(unsigned __int16 *)(a1 + 58);
  WORD1(v11[0]) = -1;
  if ( (int)CmpStartKcbStack(v11, v4) >= 0 )
  {
    v5 = *(_WORD *)(a1 + 58);
    WORD1(v11[0]) = v5;
    if ( v5 )
    {
      for ( i = *(_QWORD *)(a1 + 184); i; v5 = v10 - 1 )
      {
        CmpSetKcbAtLayerHeight(v11, v5, *(_QWORD *)(i + 16));
        i = *(_QWORD *)(v9 + 24);
      }
    }
    else
    {
      v11[1] = a1;
    }
  }
  IsKeyStackDeleted = CmpIsKeyStackDeleted(v11, a2);
  if ( v11[3] )
    MiDeleteSubsection((PPRIVILEGE_SET)v11[3]);
  return IsKeyStackDeleted;
}

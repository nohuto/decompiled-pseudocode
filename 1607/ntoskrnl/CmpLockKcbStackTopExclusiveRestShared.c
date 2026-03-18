/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x1403FBF0C
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpPromoteKey @ 0x1401B3424 (CmpPromoteKey.c)
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpLockKcbShared @ 0x140435440 (CmpLockKcbShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404400C0 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 v3; // rax
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; (__int16)i <= *(__int16 *)(a1 + 2) - 1; ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpLockKcbShared(KcbAtLayerHeight);
  }
  v3 = CmpGetKcbAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 2));
  return CmpLockKcbExclusive(v3);
}

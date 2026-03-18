/*
 * XREFs of CmpRebuildKcbCacheFromNode @ 0x14000AEEC
 * Callers:
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1401B366C (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3C44 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 *     CmpRebuildKcbCache @ 0x1403FDA60 (CmpRebuildKcbCache.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 * Callees:
 *     CmpCleanUpSubKeyInfo @ 0x1403FDC28 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1403FDE38 (CmpAssignSecurityToKcb.c)
 *     CmpCleanUpKcbValueCache @ 0x1404372D8 (CmpCleanUpKcbValueCache.c)
 */

__int64 __fastcall CmpRebuildKcbCacheFromNode(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  int v4; // eax
  __int64 result; // rax
  ULONG_PTR v6; // rdx

  *(_BYTE *)(BugCheckParameter3 + 57) = *(_BYTE *)(a2 + 13) & 3;
  CmpCleanUpSubKeyInfo();
  if ( (*(_BYTE *)(BugCheckParameter3 + 178) & 0x40) == 0 )
  {
    CmpCleanUpKcbValueCache(BugCheckParameter3);
    v4 = *(_DWORD *)(a2 + 36);
    *(_QWORD *)(BugCheckParameter3 + 96) = *(unsigned int *)(a2 + 40);
    *(_DWORD *)(BugCheckParameter3 + 88) = v4;
  }
  *(_QWORD *)(BugCheckParameter3 + 160) = *(_QWORD *)(a2 + 4);
  *(_WORD *)(BugCheckParameter3 + 168) = *(_WORD *)(a2 + 52);
  *(_WORD *)(BugCheckParameter3 + 170) = *(_WORD *)(a2 + 60);
  *(_DWORD *)(BugCheckParameter3 + 172) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(BugCheckParameter3 + 176) ^= (*(_DWORD *)(BugCheckParameter3 + 176) ^ *(unsigned __int16 *)(a2 + 54)) & 0xF;
  *(_DWORD *)(BugCheckParameter3 + 176) ^= ((unsigned __int8)*(_DWORD *)(BugCheckParameter3 + 176) ^ (unsigned __int8)*(_WORD *)(a2 + 54)) & 0xF0;
  *(_BYTE *)(BugCheckParameter3 + 177) = *(_BYTE *)(a2 + 55);
  result = *(unsigned __int16 *)(a2 + 2);
  *(_WORD *)(BugCheckParameter3 + 178) = result;
  v6 = *(unsigned int *)(a2 + 44);
  if ( (_DWORD)v6 != -1 )
    return CmpAssignSecurityToKcb(BugCheckParameter3, v6, 0);
  *(_QWORD *)(BugCheckParameter3 + 80) = 0LL;
  return result;
}

/*
 * XREFs of MiFreeBootPageTable @ 0x1407B28EC
 * Callers:
 *     MxZeroBootMappings @ 0x1407B2838 (MxZeroBootMappings.c)
 * Callees:
 *     MiPageToChannel @ 0x14001B5C0 (MiPageToChannel.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeBootPageTable(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  unsigned __int8 v4; // al
  char v6; // al
  __int64 v7; // rdx

  v2 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v3 = *(_WORD *)(v2 + 32);
  if ( v3 )
  {
    if ( v3 != 2 || (*(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(0x1Au, 0x3030307uLL, BugCheckParameter2, 0LL, 0LL);
    v4 = MiLockPageInline(v2);
    *(_WORD *)(v2 + 32) = 0;
    *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
    *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v4);
  }
  else
  {
    *(_QWORD *)(v2 + 40) = ((unsigned __int64)(unsigned int)MiPageToNode(BugCheckParameter2, 0) << 58) | *(_QWORD *)(v2 + 40) & 0x3FFFFFFFFFFFFFFLL;
    v6 = MiPageToChannel(BugCheckParameter2);
    v7 = *(_QWORD *)(v2 + 40);
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 40) = v7 & 0xFFFFFFCFFFFFFFFFuLL | ((unsigned __int64)(v6 & 3) << 36) | 0x20000000000000LL;
  }
  return MiLockAndInsertPageInFreeList(v2);
}

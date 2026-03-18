/*
 * XREFs of MiFreeBootPageTable @ 0x140747AC8
 * Callers:
 *     MxZeroBootMappings @ 0x140747A20 (MxZeroBootMappings.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400C05B0 (MiPageToChannel.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeBootPageTable(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  __int16 v3; // ax
  unsigned __int8 v4; // al
  unsigned __int64 v6; // rdx

  v1 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v3 = *(_WORD *)(v1 + 32);
  if ( v3 )
  {
    if ( v3 != 2 || (*(_QWORD *)(v1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(0x1Au, 0x3030307uLL, BugCheckParameter2, 0LL, 0LL);
    v4 = MiLockPageInline(v1);
    *(_WORD *)(v1 + 32) = 0;
    *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
    *(_BYTE *)(v1 + 34) = *(_BYTE *)(v1 + 34) & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v4);
  }
  else
  {
    *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(BugCheckParameter2, 0) << 58);
    v6 = *(_QWORD *)(v1 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(BugCheckParameter2) & 3) << 36);
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_QWORD *)(v1 + 40) = v6 | 0x20000000000000LL;
  }
  return MiLockAndInsertPageInFreeList(v1);
}

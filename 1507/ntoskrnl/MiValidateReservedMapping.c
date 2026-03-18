/*
 * XREFs of MiValidateReservedMapping @ 0x1401398E0
 * Callers:
 *     MmUnmapReservedMapping @ 0x140214F34 (MmUnmapReservedMapping.c)
 *     MmFreeMappingAddress @ 0x140563DF0 (MmFreeMappingAddress.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPteLink @ 0x140225B3C (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x140225C20 (MiMakeLinkedListPte.c)
 */

ULONG_PTR __fastcall MiValidateReservedMapping(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // r8
  ULONG_PTR v4; // r9
  __int64 LinkedListPte; // r10
  __int64 *v6; // r11
  ULONG_PTR BugCheckParameter4; // rax
  __int64 PteShadow; // rax
  ULONG_PTR result; // rax
  ULONG_PTR v10; // r9

  LinkedListPte = MiMakeLinkedListPte((unsigned int)a2, a2);
  BugCheckParameter4 = *(_QWORD *)(v3 - 8);
  if ( (unsigned __int64)(v3 - 8 + 0x90482413000LL) <= 0x7F8 )
    BugCheckParameter4 = MiReadPteShadow(v3 - 8, *(_QWORD *)(v3 - 8));
  if ( BugCheckParameter4 != LinkedListPte )
    KeBugCheckEx(0xDAu, 0x101uLL, BugCheckParameter2, v4, BugCheckParameter4);
  PteShadow = *v6;
  if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v6, *v6);
  result = MiGetPteLink(PteShadow);
  if ( result <= 2 )
    KeBugCheckEx(0xDAu, 0x102uLL, BugCheckParameter2, v10, result);
  return result;
}

/*
 * XREFs of PopDiscardRange @ 0x1403F267C
 * Callers:
 *     PopSetRange @ 0x14014D568 (PopSetRange.c)
 *     PopCloneRange @ 0x1403F2280 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x1403F25F8 (PopGenerateUnHibernatedMdl.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, char *a2, __int64 a3, int a4)
{
  ULONG v4; // edi
  ULONG v5; // ebx
  int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = a4;
  v4 = a3;
  v5 = (unsigned int)a2;
  if ( (PoDebug & 0x80u) != 0 )
    DbgPrint("PopDiscardRange - removing pages %p - %p, Tag %.4s\n", a2, &a2[a3], (const char *)&v7);
  RtlSetBits(a1 + 2, v5, v4);
}

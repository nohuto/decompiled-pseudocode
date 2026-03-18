/*
 * XREFs of PopSetBootPhaseRange @ 0x1403F2584
 * Callers:
 *     PopSetRange @ 0x14014D568 (PopSetRange.c)
 * Callees:
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 */

void __fastcall PopSetBootPhaseRange(__int64 a1, char *a2, __int64 a3, int a4)
{
  ULONG v4; // edi
  ULONG v5; // ebx
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  int v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = a4;
  v4 = a3;
  v5 = (unsigned int)a2;
  if ( (PoDebug & 0x80u) != 0 )
    DbgPrint("PopSetBootPhaseRange - setting pages %p - %p, Tag %.4s\n", a2, &a2[a3], (const char *)&v9);
  v7 = v5;
  if ( v5 < v4 + v5 )
  {
    v8 = v5;
    do
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 40), v8) )
        _bittestandreset(*(signed __int32 **)(a1 + 56), v7);
      ++v7;
      ++v8;
    }
    while ( v7 < v4 + v5 );
  }
  RtlSetBits((PRTL_BITMAP)(a1 + 32), v5, v4);
}

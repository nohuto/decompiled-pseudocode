/*
 * XREFs of ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0023470
 * Callers:
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C00237B4 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00B4A10 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0023258 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(
        struct _SINGLE_LIST_ENTRY **this,
        struct tagPALETTEENTRY a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // r9
  __int64 Next_high; // rax
  char *v4; // r8
  struct _SINGLE_LIST_ENTRY *Next; // r9
  unsigned __int8 *v6; // rdi
  char *v7; // r11
  unsigned int v8; // r10d
  __int64 peRed; // r14
  unsigned int v10; // edx

  v2 = *this;
  Next_high = HIDWORD((*this)[3].Next);
  if ( !(_DWORD)Next_high )
    return XEPALOBJ::ulGetMatchFromPalentry((XEPALOBJ *)this, a2);
  v4 = 0LL;
  if ( v2 == WPP_MAIN_CB.Dpc.DpcListEntry.Next )
    Next = (struct _SINGLE_LIST_ENTRY *)&aPalDefaultVGA;
  else
    Next = v2[16].Next;
  v6 = (unsigned __int8 *)Next + 4 * Next_high;
  v7 = (char *)Next;
  v8 = 196608;
  peRed = a2.peRed;
  do
  {
    v10 = pArrayOfSquares[BYTE1(Next->Next) - (unsigned __int64)a2.peGreen]
        + pArrayOfSquares[LOBYTE(Next->Next) - peRed]
        + pArrayOfSquares[BYTE2(Next->Next) - (unsigned __int64)a2.peBlue];
    if ( v10 < v8 )
    {
      v4 = (char *)Next;
      v8 = pArrayOfSquares[BYTE1(Next->Next) - (unsigned __int64)a2.peGreen]
         + pArrayOfSquares[LOBYTE(Next->Next) - peRed]
         + pArrayOfSquares[BYTE2(Next->Next) - (unsigned __int64)a2.peBlue];
      if ( !v10 )
        break;
    }
    Next = (struct _SINGLE_LIST_ENTRY *)((char *)Next + 4);
  }
  while ( Next < (struct _SINGLE_LIST_ENTRY *)v6 );
  return (unsigned int)((v4 - v7) >> 2);
}

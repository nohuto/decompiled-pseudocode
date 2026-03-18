/*
 * XREFs of ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00BF5C0
 * Callers:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0026E10 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C002725C (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00B1454 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(
        struct PALETTE **this,
        struct tagPALETTEENTRY a2)
{
  struct PALETTE *v2; // r8
  __int64 v3; // rax
  unsigned __int8 *v5; // r9
  unsigned __int8 *v6; // r8
  unsigned __int8 *v7; // rdi
  unsigned __int8 *v8; // rbx
  unsigned int v9; // r11d
  unsigned int v10; // r10d

  v2 = *this;
  v3 = *((unsigned int *)*this + 7);
  if ( !(_DWORD)v3 )
    return XEPALOBJ::ulGetMatchFromPalentry(this, a2);
  v5 = 0LL;
  if ( v2 == (struct PALETTE *)WPP_MAIN_CB.DeviceQueue.32 )
    v6 = (unsigned __int8 *)&aPalDefaultVGA;
  else
    v6 = (unsigned __int8 *)*((_QWORD *)v2 + 15);
  v7 = &v6[4 * v3];
  v8 = v6;
  v9 = 196608;
  do
  {
    v10 = pArrayOfSquares[v6[1] - a2.peGreen] + pArrayOfSquares[*v6 - a2.peRed] + pArrayOfSquares[v6[2] - a2.peBlue];
    if ( v10 < v9 )
    {
      v5 = v6;
      v9 = pArrayOfSquares[v6[1] - a2.peGreen] + pArrayOfSquares[*v6 - a2.peRed] + pArrayOfSquares[v6[2] - a2.peBlue];
      if ( !v10 )
        break;
    }
    v6 += 4;
  }
  while ( v6 < v7 );
  return (v5 - v8) >> 2;
}

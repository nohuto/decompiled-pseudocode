/*
 * XREFs of ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00B1860
 * Callers:
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C003AF50 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00B16F0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C003AAB0 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(
        XEPALOBJ *this,
        struct tagPALETTEENTRY a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int8 *v6; // r8
  unsigned __int8 *v7; // r9
  unsigned __int8 *v8; // rdi
  unsigned __int8 *v9; // r11
  unsigned int v10; // r10d
  __int64 peRed; // r14
  unsigned int v12; // edx

  v3 = *(_QWORD *)this;
  v4 = *(unsigned int *)(*(_QWORD *)this + 28LL);
  if ( !(_DWORD)v4 )
    return XEPALOBJ::ulGetMatchFromPalentry(this, a2, a3, v3);
  v6 = 0LL;
  if ( (struct PALETTE *)v3 == ppalDefault )
    v7 = (unsigned __int8 *)&aPalDefaultVGA;
  else
    v7 = *(unsigned __int8 **)(v3 + 128);
  v8 = &v7[4 * v4];
  v9 = v7;
  v10 = 196608;
  peRed = a2.peRed;
  do
  {
    v12 = pArrayOfSquares[v7[1] - (unsigned __int64)a2.peGreen]
        + pArrayOfSquares[*v7 - peRed]
        + pArrayOfSquares[v7[2] - (unsigned __int64)a2.peBlue];
    if ( v12 < v10 )
    {
      v6 = v7;
      v10 = pArrayOfSquares[v7[1] - (unsigned __int64)a2.peGreen]
          + pArrayOfSquares[*v7 - peRed]
          + pArrayOfSquares[v7[2] - (unsigned __int64)a2.peBlue];
      if ( !v12 )
        break;
    }
    v7 += 4;
  }
  while ( v7 < v8 );
  return (unsigned int)((v6 - v9) >> 2);
}

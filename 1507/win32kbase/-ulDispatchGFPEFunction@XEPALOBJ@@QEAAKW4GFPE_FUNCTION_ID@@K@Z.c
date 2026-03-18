/*
 * XREFs of ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00B16F0
 * Callers:
 *     ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C000D4A4 (-ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z.c)
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C003AAB0 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C003AF50 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     GreSetMagicColors @ 0x1C00BD108 (GreSetMagicColors.c)
 * Callees:
 *     ?ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x1C000C1F4 (-ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00B1860 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulDispatchGFPEFunction(struct PALETTE **a1, int a2, unsigned int a3)
{
  unsigned int v3; // r11d
  unsigned int result; // eax
  unsigned int v5; // eax
  int v6; // r11d
  _DWORD *v7; // r8
  struct PALETTE *v8; // rbx
  struct tagPALETTEENTRY v9; // r11d
  struct PALETTE *v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  if ( a2 == 1 )
    return ulIndexedGetMatchFromPalentry(*a1, a3);
  if ( a2 != 2 )
  {
    switch ( a2 )
    {
      case 3:
        v5 = (a3 & 0xFC00 | (a3 >> 14) & 0x3E0) >> 5;
        v6 = (a3 & 0xF8) << 8;
        break;
      case 4:
        v5 = (a3 & 0xF800 | (a3 >> 13) & 0x7C0) >> 6;
        v6 = (a3 & 0xF8) << 7;
        break;
      case 5:
        v7 = (_DWORD *)*((_QWORD *)*a1 + 16);
        v5 = v7[1] & (v3 >> v7[4] << v7[7]) | v7[2] & (v3 >> v7[5] << v7[8]);
        v6 = *v7 & (v3 >> v7[3] << v7[6]);
        break;
      case 6:
        v5 = ((unsigned __int8)a3 << 16) | BYTE2(a3);
        v6 = a3 & 0xFF00;
        break;
      case 7:
        return v3;
      case 8:
        return a3 & 0xFFFFFF;
      default:
        KeBugCheckEx(0x164u, 0xCuLL, (ULONG_PTR)*a1, a2, 9uLL);
    }
    return v6 | v5;
  }
  v8 = *a1;
  result = ulIndexedGetMatchFromPalentry(*a1, a3);
  if ( result == -1 )
  {
    v10 = v8;
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&v10, v9);
  }
  return result;
}

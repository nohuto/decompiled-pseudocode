/*
 * XREFs of CreateScreenPalette @ 0x1C022A6EC
 * Callers:
 *     xxxSnapWindow @ 0x1C014F320 (xxxSnapWindow.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01E5DB8 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1C0100A04 (GreGetSystemPaletteUse.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B4130 (GreGetSystemPaletteEntries.c)
 */

__int64 __fastcall CreateScreenPalette(HDC a1, __int64 *a2, __int64 *a3)
{
  unsigned int v6; // ebx
  int v7; // ebp
  signed int DeviceCaps; // esi
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // esi
  __int64 v14; // rax
  _BYTE *v15; // rcx
  __int64 Palette; // rax

  v6 = 0;
  if ( (unsigned int)GreGetSystemPaletteUse(a1) == 1 )
    v7 = (int)GreGetDeviceCaps(a1, 106LL) / 2;
  else
    v7 = 1;
  DeviceCaps = GreGetDeviceCaps(a1, 104LL);
  if ( DeviceCaps < 0 )
    return 3221225485LL;
  if ( DeviceCaps < v7 )
    return 3221225485LL;
  v9 = 4LL * (unsigned int)DeviceCaps;
  if ( v9 > 0xFFFFFFFF || (unsigned int)v9 >= 0xFFFFFFF8 )
    return 3221225485LL;
  v10 = Win32AllocPoolWithQuota((unsigned int)(v9 + 8), 1650684757LL);
  if ( v10 )
  {
    *(_WORD *)(v10 + 2) = DeviceCaps;
    *(_WORD *)v10 = 768;
    if ( !(unsigned int)GreGetSystemPaletteEntries(a1, 0, DeviceCaps, (struct tagPALETTEENTRY *)(v10 + 4)) )
      goto LABEL_14;
    v13 = DeviceCaps - v7;
    if ( v7 < (__int64)v13 )
    {
      v14 = v13 - (__int64)v7;
      v15 = (_BYTE *)(v10 + 7 + 4LL * v7);
      do
      {
        *v15 = 4;
        v15 += 4;
        --v14;
      }
      while ( v14 );
    }
    Palette = GreCreatePalette(v10, v7, v12);
    if ( Palette )
    {
      *a2 = v10;
      *a3 = Palette;
    }
    else
    {
LABEL_14:
      Win32FreePool(v10, v11, v12);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}

/*
 * XREFs of ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C0299B1C
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0299C1C (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z @ 0x1C00099B0 (-bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::AddUFIToBuffer(
        RFONTOBJ *this,
        struct PFE *a2,
        struct _UNIVERSAL_FONT_ID **a3,
        int *a4,
        int a5)
{
  int v8; // edx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v9[0] = *((_QWORD *)a2 + 4);
    if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v9) )
    {
      v8 = *a4;
      if ( *a4 < a5 )
      {
        *(_QWORD *)*a3 = *(_QWORD *)((char *)a2 + 92);
        *a3 = (struct _UNIVERSAL_FONT_ID *)((char *)*a3 + 8);
      }
      *a4 = v8 + 1;
    }
  }
}

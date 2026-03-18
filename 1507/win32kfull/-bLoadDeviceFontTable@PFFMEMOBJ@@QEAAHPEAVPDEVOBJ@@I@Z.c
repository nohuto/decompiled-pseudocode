/*
 * XREFs of ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C02B4510
 * Callers:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025D6B4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 * Callees:
 *     ?QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0030D34 (-QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C01297A8 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C013DD70 (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C013E440 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C013E4D8 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C0141494 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02B41B4 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadDeviceFontTable(PFFMEMOBJ *this, struct PDEVOBJ *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v9; // r15d
  struct _IFIMETRICS *v10; // r12
  struct _FD_GLYPHSET *v11; // rdi
  unsigned __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  struct _FD_GLYPHSET *v13; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp+48h] BYREF
  struct _FD_GLYPHSET *v16; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  LODWORD(v7) = *(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x8000;
  v12 = 0LL;
  v15 = 0LL;
  if ( a3 )
  {
    result = PFFMEMOBJ::bAllocPFEData(this, a3);
    if ( !(_DWORD)result )
      return result;
  }
  v9 = 1;
  if ( !a3 )
  {
LABEL_17:
    if ( a3 )
    {
      FHMEMOBJ::FHMEMOBJ((__int64)v14, (_QWORD *)(*(_QWORD *)this + 104LL), 0, a3);
      FHMEMOBJ::FHMEMOBJ((__int64)v14, (_QWORD *)(*(_QWORD *)this + 112LL), 1, a3);
      FHMEMOBJ::FHMEMOBJ((__int64)v14, (_QWORD *)(*(_QWORD *)this + 120LL), 2, a3);
    }
    return 1;
  }
  v7 = (int)v7;
  v14[0] = (int)v7;
  while ( 1 )
  {
    v10 = PDEVOBJ::QueryFont(a2, *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL), 0LL, v9, &v12);
    if ( !v10 )
    {
      EngSetLastError(0x3EBu);
      return v3;
    }
    if ( v7 )
    {
      v11 = 0LL;
      v15 = 0LL;
      goto LABEL_15;
    }
    v16 = (struct _FD_GLYPHSET *)PDEVOBJ::QueryFontTree(
                                   a2,
                                   *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL),
                                   0LL,
                                   v9,
                                   3u,
                                   &v15);
    v11 = v16;
    if ( !v16 )
      break;
    if ( v10->jWinCharSet == 2 )
    {
      v13 = 0LL;
      if ( bExtendGlyphSet(&v16, &v13) )
      {
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3056LL) )
          PDEVOBJ::Free(a2, v16, v15);
        v11 = v13;
      }
      else
      {
        v11 = v16;
      }
    }
LABEL_15:
    if ( !(unsigned int)PFFMEMOBJ::bAddEntry(this, v9, v11, v15, v10, v12, 0LL, 0LL) )
      goto LABEL_23;
    v7 = v14[0];
    if ( ++v9 > a3 )
      goto LABEL_17;
  }
  EngSetLastError(0x3EBu);
LABEL_23:
  if ( v10->jWinCharSet != 2 )
    goto LABEL_27;
  if ( v11 )
  {
    if ( (v11->flAccel & 0x10) != 0 )
    {
      Win32FreePool(v11);
      goto LABEL_30;
    }
LABEL_27:
    if ( v11 && *(_QWORD *)(*(_QWORD *)a2 + 3056LL) )
      PDEVOBJ::Free(a2, v11, v15);
  }
LABEL_30:
  if ( *(_QWORD *)(*(_QWORD *)a2 + 3056LL) )
    PDEVOBJ::Free(a2, v10, v12);
  return v3;
}

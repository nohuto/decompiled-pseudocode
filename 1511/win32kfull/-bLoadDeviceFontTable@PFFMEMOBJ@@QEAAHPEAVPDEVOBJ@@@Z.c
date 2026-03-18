/*
 * XREFs of ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02B34D8
 * Callers:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C025D314 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C001CC24 (-QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C001CCC8 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C001CD38 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C010C72C (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C0119D74 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0119E0C (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02B317C (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadDeviceFontTable(PFFMEMOBJ *this, struct PDEVOBJ *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v9; // r15d
  struct _IFIMETRICS *v10; // r12
  struct _FD_GLYPHSET *v11; // rdi
  struct _FD_GLYPHSET *v12; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+48h] BYREF
  struct _FD_GLYPHSET *v15; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 v16; // [rsp+B8h] [rbp+58h] BYREF

  v4 = PDEVOBJ::cFonts(a2);
  v5 = 0;
  v6 = v4;
  LODWORD(v7) = *(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x8000;
  v16 = 0LL;
  v14 = 0LL;
  if ( v4 )
  {
    result = PFFMEMOBJ::bAllocPFEData(this, v4);
    if ( !(_DWORD)result )
      return result;
  }
  v9 = 1;
  if ( !v6 )
  {
LABEL_17:
    if ( v6 )
    {
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 104LL), 0, v6);
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 112LL), 1, v6);
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 120LL), 2, v6);
    }
    return 1;
  }
  v7 = (int)v7;
  v13[0] = (int)v7;
  while ( 1 )
  {
    v10 = PDEVOBJ::QueryFont(a2, *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL), 0LL, v9, &v16);
    if ( !v10 )
    {
      EngSetLastError(0x3EBu);
      return v5;
    }
    if ( v7 )
    {
      v11 = 0LL;
      v14 = 0LL;
      goto LABEL_15;
    }
    v15 = (struct _FD_GLYPHSET *)PDEVOBJ::QueryFontTree(
                                   a2,
                                   *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL),
                                   0LL,
                                   v9,
                                   3u,
                                   &v14);
    v11 = v15;
    if ( !v15 )
      break;
    if ( v10->jWinCharSet == 2 )
    {
      v12 = 0LL;
      if ( bExtendGlyphSet(&v15, &v12) )
      {
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3056LL) )
          PDEVOBJ::Free(a2, v15, v14);
        v11 = v12;
      }
      else
      {
        v11 = v15;
      }
    }
LABEL_15:
    if ( !(unsigned int)PFFMEMOBJ::bAddEntry(this, v9, v11, v14, v10, v16, 0LL, 0LL) )
      goto LABEL_23;
    v7 = v13[0];
    if ( ++v9 > v6 )
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
      PDEVOBJ::Free(a2, v11, v14);
  }
LABEL_30:
  if ( *(_QWORD *)(*(_QWORD *)a2 + 3056LL) )
    PDEVOBJ::Free(a2, v10, v16);
  return v5;
}

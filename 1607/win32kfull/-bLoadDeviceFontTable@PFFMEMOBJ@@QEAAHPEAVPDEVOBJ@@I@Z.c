/*
 * XREFs of ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C02B6618
 * Callers:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025A6C4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 * Callees:
 *     ?QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C002A168 (-QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C002A210 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C002A324 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C00644DC (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0064B88 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C012DA9C (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02B62B8 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadDeviceFontTable(PFFMEMOBJ *this, struct PDEVOBJ *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v9; // r15d
  struct _IFIMETRICS *v10; // r12
  struct _FD_GLYPHSET *v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  struct _FD_GLYPHSET *v14; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+A8h] [rbp+48h] BYREF
  struct _FD_GLYPHSET *v17; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  LODWORD(v7) = *(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x8000;
  v13 = 0LL;
  v16 = 0LL;
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
      FHMEMOBJ::FHMEMOBJ((__int64)v15, (_QWORD *)(*(_QWORD *)this + 104LL), 0, a3);
      FHMEMOBJ::FHMEMOBJ((__int64)v15, (_QWORD *)(*(_QWORD *)this + 112LL), 1, a3);
      FHMEMOBJ::FHMEMOBJ((__int64)v15, (_QWORD *)(*(_QWORD *)this + 120LL), 2, a3);
    }
    return 1;
  }
  v7 = (int)v7;
  v15[0] = (int)v7;
  while ( 1 )
  {
    v10 = PDEVOBJ::QueryFont(a2, *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL), 0LL, v9, &v13);
    if ( !v10 )
    {
      EngSetLastError(0x3EBu);
      return v3;
    }
    if ( v7 )
    {
      v11 = 0LL;
      v16 = 0LL;
      goto LABEL_15;
    }
    v17 = (struct _FD_GLYPHSET *)PDEVOBJ::QueryFontTree(
                                   a2,
                                   *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL),
                                   0LL,
                                   v9,
                                   3u,
                                   &v16);
    v11 = v17;
    if ( !v17 )
      break;
    if ( v10->jWinCharSet == 2 )
    {
      v14 = 0LL;
      if ( bExtendGlyphSet(&v17, &v14) )
      {
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3048LL) )
          PDEVOBJ::Free(a2, v17, v16);
        v11 = v14;
      }
      else
      {
        v11 = v17;
      }
    }
LABEL_15:
    if ( !(unsigned int)PFFMEMOBJ::bAddEntry(this, v9, v11, v16, v10, v13, 0LL, 0LL) )
      goto LABEL_23;
    v7 = v15[0];
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
      Win32FreePool(v11, v12);
      goto LABEL_30;
    }
LABEL_27:
    if ( v11 && *(_QWORD *)(*(_QWORD *)a2 + 3048LL) )
      PDEVOBJ::Free(a2, v11, v16);
  }
LABEL_30:
  if ( *(_QWORD *)(*(_QWORD *)a2 + 3048LL) )
    PDEVOBJ::Free(a2, v10, v13);
  return v3;
}

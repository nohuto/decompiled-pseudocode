/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000C0A0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00336C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003AD7C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00B3B30 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B78B0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(XEPALOBJ *this)
{
  __int64 v2; // rcx
  unsigned __int8 *v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 24) & 0x1000000) != 0 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)v2, 0, 1, 0, 8, 0LL) )
    {
      DEC_SHARE_REF_CNT(*(_DWORD **)this);
    }
    else
    {
      if ( (*(_DWORD *)(*(_QWORD *)this + 24LL) & 0x800) != 0 && *(_QWORD *)(*(_QWORD *)this + 48LL) )
      {
        v4 = *(_QWORD *)(*(_QWORD *)this + 48LL);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v4);
      }
      if ( *(_QWORD *)this != *(_QWORD *)(*(_QWORD *)this + 136LL) )
      {
        v4 = *(_QWORD *)(*(_QWORD *)this + 136LL);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v4);
      }
      v3 = *(unsigned __int8 **)(*(_QWORD *)this + 120LL);
      if ( v3 )
      {
        if ( v3 != gpRGBXlate )
          Win32FreePool();
        *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
      }
      FreeObject(*(_QWORD *)this);
    }
    *(_QWORD *)this = 0LL;
  }
}

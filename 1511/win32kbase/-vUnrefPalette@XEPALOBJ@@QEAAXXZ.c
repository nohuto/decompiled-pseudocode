/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C002360C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EngDeletePalette @ 0x1C007DC10 (EngDeletePalette.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B9798 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     HmgRemoveObject @ 0x1C0036F40 (HmgRemoveObject.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(XEPALOBJ *this)
{
  __int64 v2; // rcx
  unsigned __int8 *v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 24) & 0x1000000) != 0 || !HmgRemoveObject(*(_QWORD *)v2, 0LL, 1, 0, 8, 0LL) )
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

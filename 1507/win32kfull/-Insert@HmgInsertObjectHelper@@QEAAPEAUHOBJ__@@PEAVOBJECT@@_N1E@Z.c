/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025B1A0
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C000CD18 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C000D620 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C000D890 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0016138 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     hfontCreate @ 0x1C00569C0 (hfontCreate.c)
 *     NtGdiCreateClientObj @ 0x1C00F6340 (NtGdiCreateClientObj.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C011C590 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     EngCreateDriverObj @ 0x1C027BCE0 (EngCreateDriverObj.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0286D04 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall HmgInsertObjectHelper::Insert(
        HmgInsertObjectHelper *this,
        struct OBJECT *a2,
        char a3,
        char a4,
        char a5)
{
  struct HOBJ__ *result; // rax
  unsigned int v8; // edx

  result = 0LL;
  if ( !*((_QWORD *)this + 4) )
  {
    v8 = 1;
    if ( a3 )
      v8 = 3;
    if ( a4 )
      v8 |= 8u;
    result = HmgInsertObjectInternal(a2, v8, a5);
    if ( result )
      *((_QWORD *)this + 4) = a2;
  }
  return result;
}

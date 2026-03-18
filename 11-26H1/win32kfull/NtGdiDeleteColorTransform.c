/*
 * XREFs of NtGdiDeleteColorTransform @ 0x140330C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1402931A8 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x140320B68 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiDeleteColorTransform(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+40h] [rbp-88h]
  DC *v7[15]; // [rsp+50h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  v3 = 0;
  if ( v7[0] )
  {
    if ( DC::bInFullScreen(v7[0]) )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v5, a2);
      if ( v6 )
        v3 = COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v5, v7);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v3;
}

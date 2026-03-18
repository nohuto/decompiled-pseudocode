/*
 * XREFs of BRUSHOBJ_hGetColorTransform @ 0x1C02B7740
 * Callers:
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02AAD20 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02AFFC0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C025AC30 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 */

HANDLE __stdcall BRUSHOBJ_hGetColorTransform(BRUSHOBJ *pbo)
{
  void *v1; // rdx
  void *v2; // rbx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  if ( pbo )
  {
    if ( (pbo[3].iSolidColor & 2) != 0 )
    {
      v1 = *(void **)&pbo[2].flColorType;
      if ( v1 )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v4, v1);
        if ( v5 )
        {
          v2 = *(void **)(v5 + 24);
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
          return v2;
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
      }
    }
  }
  return 0LL;
}

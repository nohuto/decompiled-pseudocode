/*
 * XREFs of XDCOBJ_vCleanupColorTransformWrap @ 0x1401AE3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1402931A8 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x140320B68 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall XDCOBJ_vCleanupColorTransformWrap(struct XDCOBJ *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 2080LL);
  while ( v2 )
  {
    COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v4, *(void **)v2);
    v3 = v2;
    if ( v5 )
      COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v4, a1);
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 2080LL);
    if ( v2 == v3 )
    {
      v2 = *(_QWORD *)(v2 + 8);
      *(_QWORD *)(*(_QWORD *)a1 + 2080LL) = v2;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
  }
}

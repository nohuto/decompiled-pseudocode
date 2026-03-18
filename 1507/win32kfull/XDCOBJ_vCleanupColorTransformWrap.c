/*
 * XREFs of XDCOBJ_vCleanupColorTransformWrap @ 0x1C00D8AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C025AC30 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0286B70 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall XDCOBJ_vCleanupColorTransformWrap(struct XDCOBJ *a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 2496LL);
  while ( v4 )
  {
    COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v6, *(void **)v4);
    v5 = v4;
    if ( v7 )
      COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v6, a1, a2);
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 2496LL);
    if ( v4 == v5 )
    {
      v4 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(*(_QWORD *)a1 + 2496LL) = v4;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v6);
  }
}

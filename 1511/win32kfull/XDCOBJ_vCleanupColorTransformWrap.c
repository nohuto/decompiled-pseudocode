/*
 * XREFs of XDCOBJ_vCleanupColorTransformWrap @ 0x1C00DFD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0286C64 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall XDCOBJ_vCleanupColorTransformWrap(struct XDCOBJ *a1, __int64 a2)
{
  int v2; // ebp
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v4 = *(_QWORD **)(*(_QWORD *)a1 + 2472LL);
  while ( v4 )
  {
    LOBYTE(a2) = 14;
    v6 = HmgShareLockCheck(*v4, a2);
    v5 = v4;
    if ( v6 )
      COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)&v6, a1, v2);
    v4 = *(_QWORD **)(*(_QWORD *)a1 + 2472LL);
    if ( v4 == v5 )
    {
      v4 = (_QWORD *)v4[1];
      *(_QWORD *)(*(_QWORD *)a1 + 2472LL) = v4;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
  }
}

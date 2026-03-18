/*
 * XREFs of ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0015684
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0013280 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bNextFigure@READER@@IEAAHXZ @ 0x1C00159B4 (-bNextFigure@READER@@IEAAHXZ.c)
 *     ?bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z @ 0x1C0015A0C (-bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z.c)
 */

STYLER *__fastcall STYLER::STYLER(STYLER *this, struct EPATHOBJ *a2, struct _LINEATTRS *a3)
{
  int v5; // edx
  PFLOAT_LONG pstyle; // rcx
  __int64 cstyle; // rax

  *(_QWORD *)this = a2;
  *(_DWORD *)a2 &= ~8u;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  *((_DWORD *)this + 10) |= 1u;
  if ( (unsigned int)READER::bNextFigure(this) )
  {
    READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
    *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
    *((_DWORD *)this + 126) = 1;
  }
  else
  {
    *((_DWORD *)this + 126) = 4;
  }
  *((_DWORD *)this + 205) = 0;
  *((_QWORD *)this + 101) = (char *)this + 768;
  if ( a3->pstyle && a3->cstyle )
    *((_DWORD *)this + 10) |= 2u;
  else
    *((_DWORD *)this + 10) &= ~2u;
  v5 = *((_DWORD *)this + 10);
  if ( (v5 & 2) != 0 )
  {
    pstyle = a3->pstyle;
    *((_QWORD *)this + 90) = pstyle;
    *((_QWORD *)this + 91) = pstyle;
    cstyle = a3->cstyle;
    *((_DWORD *)this + 10) = v5 & 0xFFFFFFFB;
    *((_QWORD *)this + 92) = &pstyle[cstyle];
  }
  return this;
}

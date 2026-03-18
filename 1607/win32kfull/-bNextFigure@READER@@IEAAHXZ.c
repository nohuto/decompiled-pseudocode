/*
 * XREFs of ?bNextFigure@READER@@IEAAHXZ @ 0x1C00159B4
 * Callers:
 *     ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0015684 (--0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vNextPoint@LINER@@AEAAXXZ @ 0x1C0015728 (-vNextPoint@LINER@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall READER::bNextFigure(READER *this)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *((_DWORD *)this + 10) & 1;
  if ( v2 )
  {
    if ( EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 8)) )
      *((_DWORD *)this + 10) |= 1u;
    else
      *((_DWORD *)this + 10) &= ~1u;
    v3 = *((unsigned int *)this + 3);
    v2 &= -(*((_DWORD *)this + 3) != 0);
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 3) = v4;
    *((_QWORD *)this + 4) = v4 + 8 * v3;
  }
  return v2;
}

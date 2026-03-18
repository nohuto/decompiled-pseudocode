/*
 * XREFs of ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C002723C
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0025670 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1C005B700 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::bIsMonochrome(XEPALOBJ *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 24) & 0x2000) != 0;
  return v2;
}

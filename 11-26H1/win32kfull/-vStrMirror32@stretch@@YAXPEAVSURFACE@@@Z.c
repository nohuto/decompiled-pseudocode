/*
 * XREFs of ?vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z @ 0x1401589A0
 * Callers:
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x140266E6C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vStrMirror32(stretch *this, struct SURFACE *a2)
{
  int v2; // r9d
  int v3; // ebx
  int *v4; // r10
  __int64 i; // rdi
  int *v7; // r8
  int *v8; // rcx
  __int64 v9; // r9
  int v10; // edx
  int v11; // eax

  v2 = *((_DWORD *)this + 14);
  v3 = 0;
  v4 = (int *)*((_QWORD *)this + 10);
  for ( i = (unsigned int)(v2 / 2); v3 < *((_DWORD *)this + 15); v4 = (int *)((char *)v4 + *((int *)this + 22)) )
  {
    v7 = v4;
    v8 = &v4[v2 - 1];
    if ( (int)i > 0 )
    {
      v9 = i;
      do
      {
        v10 = *v7++;
        v11 = *v8--;
        *(v7 - 1) = v11;
        v8[1] = v10;
        --v9;
      }
      while ( v9 );
      v2 = *((_DWORD *)this + 14);
    }
    ++v3;
  }
}

/*
 * XREFs of bOutOfBounds @ 0x1400D517C
 * Callers:
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 * Callees:
 *     STROBJ_bEnum @ 0x1400DA160 (STROBJ_bEnum.c)
 */

__int64 __fastcall bOutOfBounds(STROBJ *pstro, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  BOOL v6; // eax
  __int64 i; // rdx
  GLYPHBITS *pgb; // r8
  LONG v9; // r9d
  LONG v10; // r11d
  ULONG pc; // [rsp+48h] [rbp+10h] BYREF
  PGLYPHPOS ppgpos; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a2;
  v3 = 0;
  pc = 0;
  ppgpos = 0LL;
  if ( *(float *)(v2 + 140) == 0.0 && *(float *)(v2 + 144) == 0.0 )
    return 0LL;
  do
  {
    v6 = STROBJ_bEnum(pstro, &pc, &ppgpos);
    if ( pc )
    {
      for ( i = 0LL; (unsigned int)i < pc; i = (unsigned int)(i + 1) )
      {
        pgb = ppgpos[i].pgdf->pgb;
        if ( pgb )
        {
          v9 = pgb->ptlOrigin.y + ppgpos[i].ptl.y;
          v10 = pgb->ptlOrigin.x + ppgpos[i].ptl.x;
          if ( v10 < pstro->rclBkGround.left
            || v10 + pgb->sizlBitmap.cx > pstro->rclBkGround.right
            || v9 < pstro->rclBkGround.top
            || v9 + pgb->sizlBitmap.cy > pstro->rclBkGround.bottom )
          {
            v3 = 1;
            break;
          }
        }
      }
    }
  }
  while ( v6 );
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  return v3;
}

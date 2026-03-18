/*
 * XREFs of GreDCSelectPen @ 0x1C0048F10
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     GreSelectPen @ 0x1C00B3090 (GreSelectPen.c)
 * Callees:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00158B0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C002DB20 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     GreSetSolidBrushLight @ 0x1C006E5F0 (GreSetSolidBrushLight.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 */

__int64 __fastcall GreDCSelectPen(struct BRUSH **this, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rsi
  int v5; // r12d
  struct BRUSH *v6; // rdi
  struct BRUSH *v7; // rax
  _DWORD *v8; // r14
  struct BRUSH *v9; // rcx
  char *v11; // [rsp+38h] [rbp-60h] BYREF
  int v12; // [rsp+40h] [rbp-58h]
  int v13; // [rsp+44h] [rbp-54h]
  struct BRUSH **v14; // [rsp+48h] [rbp-50h] BYREF
  int v15; // [rsp+50h] [rbp-48h]
  int v16; // [rsp+54h] [rbp-44h]

  v2 = a2;
  v4 = 0LL;
  v15 = 0;
  v16 = 0;
  v14 = this;
  if ( !this )
    return v4;
  v5 = 0;
  v6 = this[19];
  v4 = *((_QWORD *)this[10] + 3);
  if ( a2 != *(_QWORD *)v6 )
  {
    LOBYTE(a2) = 16;
    v7 = (struct BRUSH *)HmgShareLockCheck(v2, a2);
    v6 = v7;
    if ( v7 )
    {
      if ( (*((_DWORD *)v7 + 12) & 0x400) != 0 )
      {
        DEC_SHARE_REF_CNT_LAZY0(this[19]);
        *((_DWORD *)this[10] + 2) |= 2u;
        this[19] = v6;
        v5 = 1;
        goto LABEL_8;
      }
      DEC_SHARE_REF_CNT(v7);
      v6 = 0LL;
    }
    v4 = 0LL;
  }
LABEL_8:
  if ( v6 )
  {
    if ( v4 )
    {
      v8 = (_DWORD *)*((_QWORD *)v6 + 7);
      if ( v8 != (_DWORD *)((char *)v6 + 80) && (*v8 & 4) != 0 )
      {
        GreSetSolidBrushLight(v6, (unsigned int)v8[1], 1LL);
        *((_DWORD *)this[10] + 2) |= 2u;
        *v8 &= ~4u;
        v5 = 1;
      }
      if ( v5 )
      {
        v9 = this[10];
        v12 = *((_DWORD *)v9 + 17);
        v13 = *((_DWORD *)v9 + 78) & 1;
        if ( (*((_DWORD *)v9 + 88) & 0xE000) != 0 )
          EXFORMOBJ::vInit((EXFORMOBJ *)&v11, (DC **)&v14, 516);
        else
          v11 = (char *)(this + 42);
        DC::vRealizeLineAttrs((DC *)this, (struct EXFORMOBJ *)&v11);
      }
    }
    *((_QWORD *)this[10] + 3) = v2;
    *((_DWORD *)this[10] + 2) &= ~0x2000u;
  }
  return v4;
}

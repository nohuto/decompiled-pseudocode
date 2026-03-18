/*
 * XREFs of vSrcOpaqCopyS8D16 @ 0x1C0265650
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00B9AF4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vSrcOpaqCopyS8D16(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int near **v15; // r12
  unsigned __int8 *v16; // rbx
  _WORD *v17; // r9
  unsigned __int8 *v19; // r8
  _WORD *i; // rdx
  _QWORD v21[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v22[104]; // [rsp+50h] [rbp-68h] BYREF

  v12 = a3;
  v13 = a2;
  v21[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v15 = pvFillOpaqTableCT(2u, a9, a10, a11, (struct _BLENDINFO *)v22, 0);
  v21[1] = v15;
  v16 = (unsigned __int8 *)(v13 + a1);
  v17 = (_WORD *)(a4 + 2LL * a5);
  while ( a8 )
  {
    v19 = v16;
    for ( i = v17; i < &v17[a6 - a5]; ++i )
      *i = *((_WORD *)v15 + *v19++);
    --a8;
    v16 += v12;
    v17 = (_WORD *)((char *)v17 + a7);
  }
  SEMOBJ::vUnlock((SEMOBJ *)v21);
}

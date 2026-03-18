/*
 * XREFs of vSrcOpaqCopyS8D24 @ 0x1C02634A0
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00D3018 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

void __fastcall vSrcOpaqCopyS8D24(
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
  unsigned int near **v15; // r11
  unsigned __int8 *v16; // rdi
  _BYTE *v17; // rbx
  unsigned __int8 *v19; // r8
  _BYTE *v20; // rdx
  _BYTE *v21; // rcx
  _BYTE *v22; // rdx
  _QWORD v23[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v24[104]; // [rsp+50h] [rbp-68h] BYREF

  v12 = a3;
  v13 = a2;
  memset(v24, 0, 0x40uLL);
  v23[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v15 = pvFillOpaqTableCT(4u, a9, a10, a11, (struct _BLENDINFO *)v24, 0);
  v23[1] = v15;
  v16 = (unsigned __int8 *)(v13 + a1);
  v17 = (_BYTE *)(3 * a5 + a4);
  while ( a8 )
  {
    v19 = v16;
    v20 = v17;
    while ( v20 < &v17[3 * (a6 - a5)] )
    {
      v21 = (char *)v15 + 4 * *v19;
      *v20 = *v21;
      v22 = v20 + 1;
      *v22++ = v21[1];
      *v22 = v21[2];
      v20 = v22 + 1;
      ++v19;
    }
    --a8;
    v16 += v12;
    v17 += a7;
  }
  SEMOBJ::vUnlock((SEMOBJ *)v23);
}

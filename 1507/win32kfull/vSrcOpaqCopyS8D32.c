/*
 * XREFs of vSrcOpaqCopyS8D32 @ 0x1C00C0CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00C1130 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void __fastcall vSrcOpaqCopyS8D32(
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
  __int64 v12; // r12
  __int64 v13; // rsi
  _DWORD *v15; // r10
  unsigned __int8 *v16; // r14
  _DWORD *v17; // r11
  unsigned __int8 *v19; // r8
  _DWORD *i; // rax
  _QWORD v21[2]; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v22[16]; // [rsp+50h] [rbp-68h] BYREF

  v12 = a3;
  v13 = a2;
  memset(v22, 0, sizeof(v22));
  v21[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v15 = pvFillOpaqTableCT(4u, a9, a10, a11, (struct _BLENDINFO *)v22, 0);
  v21[1] = v15;
  v16 = (unsigned __int8 *)(v13 + a1);
  v17 = (_DWORD *)(a4 + 4LL * a5);
  while ( a8 )
  {
    v19 = v16;
    for ( i = v17; i < &v17[a6 - a5]; ++i )
      *i = v15[*v19++];
    --a8;
    v16 += v12;
    v17 = (_DWORD *)((char *)v17 + a7);
  }
  SEMOBJ::vUnlock((SEMOBJ *)v21);
}

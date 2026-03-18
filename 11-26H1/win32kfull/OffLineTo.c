/*
 * XREFs of OffLineTo @ 0x140064D40
 * Callers:
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140067810 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140068720 (-SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x140066BC4 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     EngLineTo @ 0x1401874C0 (EngLineTo.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OffLineTo(
        __int64 (__fastcall *a1)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, _QWORD, int, int, int, RECTL *, MIX),
        int *a2,
        SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        BRUSHOBJ *a5,
        int a6,
        LONG a7,
        int a8,
        LONG a9,
        RECTL *a10,
        MIX mix)
{
  int v11; // edi
  int v14; // ebx
  RECTL *prclBounds; // rsi
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // r12d
  unsigned int v19; // ebp
  __int128 v23; // [rsp+68h] [rbp-60h] BYREF
  LONG y1; // [rsp+100h] [rbp+38h]
  LONG y2; // [rsp+110h] [rbp+48h]

  v11 = a2[1];
  v14 = *a2;
  prclBounds = a10;
  CLIPOBJ_vOffset(a4, *a2, v11);
  v16 = v11 + a7;
  v17 = v11 + a9;
  v18 = v14 + a6;
  y1 = v11 + a7;
  y2 = v11 + a9;
  v23 = 0LL;
  if ( a10 )
  {
    LODWORD(v23) = v14 + a10->left;
    DWORD2(v23) = v14 + a10->right;
    DWORD1(v23) = v11 + a10->top;
    prclBounds = (RECTL *)&v23;
    HIDWORD(v23) = v11 + a10->bottom;
  }
  v19 = a1(a3, a4, a5, v18, v16, v14 + a8, v17, prclBounds, mix);
  if ( !v19 )
    v19 = EngLineTo(a3, a4, a5, v18, y1, v14 + a8, y2, prclBounds, mix);
  CLIPOBJ_vOffset(a4, -v14, -v11);
  return v19;
}

/*
 * XREFs of OffDrawStream @ 0x1C02C0DFC
 * Callers:
 *     ?SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C026E100 (-SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02960E0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00E16C8 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffDrawStream(
        __int64 (__fastcall *a1)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, int, __int64, __int64),
        LONG *a2,
        __int64 a3,
        __int64 a4,
        struct _CLIPOBJ *a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  LONG v11; // r14d
  LONG v14; // esi
  LONG v15; // edx
  _DWORD *v16; // rdi
  _DWORD *v17; // rbx
  unsigned int v19; // ebx
  _DWORD v21[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v22; // [rsp+58h] [rbp-80h]
  __int64 v23; // [rsp+60h] [rbp-78h]
  __int64 v24; // [rsp+68h] [rbp-70h]
  _DWORD v25[4]; // [rsp+70h] [rbp-68h] BYREF

  v11 = a2[1];
  v14 = *a2;
  v15 = *a2;
  v16 = a7;
  v17 = a8;
  v23 = a6;
  v22 = a10;
  v24 = a11;
  CLIPOBJ_vOffset(a5, v15, v11);
  if ( a7 )
  {
    v25[0] = v14 + *a7;
    v25[2] = v14 + a7[2];
    v25[1] = v11 + a7[1];
    v16 = v25;
    v25[3] = v11 + a7[3];
  }
  if ( a8 )
  {
    v21[0] = v14 + *a8;
    v17 = v21;
    v21[1] = v11 + a8[1];
  }
  v19 = a1(a3, a4, a5, v23, v16, v17, a9, v22, v24);
  CLIPOBJ_vOffset(a5, -v14, -v11);
  return v19;
}

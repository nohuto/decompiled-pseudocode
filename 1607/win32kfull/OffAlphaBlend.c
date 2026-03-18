/*
 * XREFs of OffAlphaBlend @ 0x1C0102670
 * Callers:
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C01023D0 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271C40 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0293B90 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0102D38 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffAlphaBlend(
        __int64 (__fastcall *a1)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64),
        int *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        struct _CLIPOBJ *a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10)
{
  int v10; // r14d
  int v11; // esi
  _DWORD *v12; // rdi
  _DWORD *v13; // rbx
  int v14; // r15d
  int v15; // r12d
  int v16; // r8d
  unsigned int v17; // ebx
  _DWORD v21[4]; // [rsp+68h] [rbp-29h] BYREF
  _DWORD v22[4]; // [rsp+78h] [rbp-19h] BYREF

  v10 = a2[1];
  v11 = *a2;
  v12 = a8;
  v13 = a9;
  v14 = *a4;
  v15 = a4[1];
  CLIPOBJ_vOffset(a6, *a2, v10);
  if ( a8 )
  {
    v21[0] = v11 + *a8;
    v21[2] = v11 + a8[2];
    v21[1] = v10 + a8[1];
    v12 = v21;
    v21[3] = v10 + a8[3];
  }
  if ( a9 )
  {
    v16 = a9[3];
    v22[0] = v14 + *a9;
    v22[2] = v14 + a9[2];
    v13 = v22;
    v22[1] = v15 + a9[1];
    v22[3] = v15 + v16;
  }
  v17 = a1(a3, a5, a6, a7, v12, v13, a10);
  CLIPOBJ_vOffset(a6, -v11, -v10);
  return v17;
}

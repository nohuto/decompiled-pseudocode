/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C01027A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1C0033DB8 (-bRedirHooked@SURFACE@@QEAAHXZ.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C003DE00 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C003E0B4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     OffTextOut @ 0x1C0102A30 (OffTextOut.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C0102D58 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall SpTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  BOOL v12; // ebx
  unsigned int v14; // r12d
  FLONG flFontType; // ecx
  HDEV hdev; // rax
  ULONG cGlyphs; // edi
  RECTL *p_rclBkGround; // r9
  _BOOL8 v19; // r15
  struct _SURFOBJ *v20; // rdi
  SURFACE *v21; // rax
  USHORT *p_iType; // rbx
  BOOL (__stdcall *v23)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rsi
  __int64 v24; // rbx
  int v25; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  struct _SURFOBJ *v55; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v56; // [rsp+68h] [rbp-98h] BYREF
  ULONG v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v59; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h]
  __int64 *v65[114]; // [rsp+B0h] [rbp-50h] BYREF

  v55 = a1;
  v12 = 0;
  v63 = (__int64)a5;
  v62 = (__int64)a7;
  v14 = 1;
  v61 = (__int64)a8;
  v60 = (__int64)a9;
  flFontType = a3->flFontType;
  v64 = (__int64)a3;
  v56 = a4;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
      v12 = ((_DWORD)hdev[538] & 0x4000) == 0;
    else
      v12 = ((_DWORD)hdev[462] & 0x1000000) == 0;
  }
  cGlyphs = a2[1].cGlyphs;
  p_rclBkGround = a6;
  v57 = cGlyphs;
  if ( !a6 )
    p_rclBkGround = &a2->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v65, a1, a4, p_rclBkGround);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v65, &v55, &v59, &v56) )
  {
    v19 = v12;
    do
    {
      a2[1].cGlyphs = cGlyphs;
      v20 = v55;
      v21 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v55);
      if ( (unsigned int)SURFACE::bRedirHooked(v21) )
      {
        v23 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
        goto LABEL_13;
      }
      if ( v19 )
        goto LABEL_24;
      p_iType = &v20->iType;
      if ( v20->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v20) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 280)
                          + 20LL) & 8) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41);
            v20 = v55;
            v23 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 96LL);
            goto LABEL_13;
          }
          v20 = v55;
        }
        if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v20) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54) + 108)) )
          {
            v20 = v55;
LABEL_24:
            v23 = EngTextOut;
            goto LABEL_13;
          }
          v20 = v55;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v20) + 112) & 8) == 0 )
        goto LABEL_24;
      v23 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v20->hdev + 171);
LABEL_13:
      v24 = 0LL;
      v58 = 0LL;
      if ( v20
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v20) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v20) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v20) + 112) & 0x200) == 0 )
      {
        v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v20);
        v58 = v24;
        GreLockDisplayDevice(*(_QWORD *)(v24 + 48));
      }
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v58, &v56) )
        v14 &= OffTextOut((int)v23, (int)&v59, (int)v20, (int)a2, v64, v56, v63, (__int64)a6, v62, v61, v60, a10);
      if ( v24 )
        GreUnlockDisplayDevice(*(_QWORD *)(v24 + 48));
      v25 = ENUMUNDERLAYS::bEnum(v65, &v55, &v59, &v56);
      cGlyphs = v57;
    }
    while ( v25 );
  }
  return v14;
}

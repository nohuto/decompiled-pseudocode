/*
 * XREFs of ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C00DF35C
 * Callers:
 *     EngTransparentBlt @ 0x1C00DEAF0 (EngTransparentBlt.c)
 *     EngGradientFill @ 0x1C00DF0D0 (EngGradientFill.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

struct SURFACE *__fastcall psSetupDstSurface(struct SURFACE *a1, struct _RECTL *a2, struct SURFMEM *a3, int a4, int a5)
{
  int v6; // r15d
  int v8; // r12d
  struct SURFACE *v9; // rdi
  __int64 v11; // rbx
  _QWORD *v12; // rax
  int v13; // ecx
  int DIB; // edx
  bool v15; // zf
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v17; // rcx
  _DWORD v18[2]; // [rsp+60h] [rbp-21h] BYREF
  int v19; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int64 v20; // [rsp+6Ch] [rbp-15h]
  __int128 v21; // [rsp+74h] [rbp-Dh]
  int v22; // [rsp+84h] [rbp+3h]
  struct _RECTL v23; // [rsp+88h] [rbp+7h] BYREF

  v6 = a2->right - a2->left;
  v8 = a2->bottom - a2->top;
  v9 = a1;
  if ( !a1 )
    return 0LL;
  if ( a4 || *((_WORD *)a1 + 50) )
  {
    v11 = *((_QWORD *)a1 + 6);
    v20 = 0LL;
    v21 = 0uLL;
    v22 = 0;
    v12 = (_QWORD *)*((_QWORD *)a1 + 15);
    v19 = *((_DWORD *)a1 + 24);
    v13 = *((_DWORD *)a1 + 28) & 0x40000;
    v20 = __PAIR64__(v8, v6);
    HIDWORD(v21) = v13;
    *(_QWORD *)((char *)&v21 + 4) = 0LL;
    if ( v12 )
      *(_QWORD *)((char *)&v21 + 4) = *v12;
    DIB = SURFMEM::bCreateDIB(a3, (struct _DEVBITMAPINFO *)&v19, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !DIB )
      return 0LL;
    *(_QWORD *)(*(_QWORD *)a3 + 48LL) = *((_QWORD *)v9 + 6);
    *(_QWORD *)&v23.left = 0LL;
    *(_QWORD *)&v23.right = __PAIR64__(v8, v6);
    if ( a5 )
    {
      v15 = (*((_DWORD *)v9 + 28) & 0x400) == 0;
      v18[0] = a2->left;
      v18[1] = a2->top;
      if ( v15 )
        v16 = EngCopyBits;
      else
        v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v11 + 2872);
      v17 = 0LL;
      if ( *(_QWORD *)a3 )
        v17 = *(_QWORD *)a3 + 24LL;
      DIB = ((__int64 (__fastcall *)(__int64, char *, _QWORD, XLATEOBJ *const, struct _RECTL *, _DWORD *))v16)(
              v17,
              (char *)v9 + 24,
              0LL,
              xloIdent,
              &v23,
              v18);
    }
    if ( DIB )
    {
      *a2 = v23;
      return *(struct SURFACE **)a3;
    }
    else
    {
      return 0LL;
    }
  }
  return v9;
}

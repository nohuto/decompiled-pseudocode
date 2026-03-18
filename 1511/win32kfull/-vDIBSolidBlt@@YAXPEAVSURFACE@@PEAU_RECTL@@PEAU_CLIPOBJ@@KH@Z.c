/*
 * XREFs of ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C00396E0
 * Callers:
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1C0038E48 (--1FRINGERECT@@QEAA@XZ.c)
 *     EngBitBlt @ 0x1C0038EE0 (EngBitBlt.c)
 *     EngEraseSurface @ 0x1C00BCB20 (EngEraseSurface.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall vDIBSolidBlt(struct SURFACE *a1, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4, int a5)
{
  int v8; // r13d
  int v9; // esi
  __int64 v10; // rbx
  unsigned int v11; // edx
  void (__fastcall *v12)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, unsigned int); // r12
  void (__fastcall *v13)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, unsigned int); // rax
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  XCLIPOBJ *v17; // rbx
  int v18; // r8d
  unsigned __int8 *v19; // r14
  unsigned int i; // ebx
  struct _RECTL *v21; // rcx
  LONG right; // eax
  LONG top; // eax
  LONG bottom; // eax
  unsigned int v25; // [rsp+40h] [rbp-1E8h]
  int v26; // [rsp+48h] [rbp-1E0h]
  unsigned int v28; // [rsp+90h] [rbp-198h] BYREF
  _OWORD v29[20]; // [rsp+94h] [rbp-194h] BYREF

  v8 = 0;
  v9 = 0;
  v28 = 0;
  memset(v29, 0, sizeof(v29));
  v10 = *((unsigned int *)a1 + 24);
  if ( (unsigned int)(v10 - 1) > 5 && (unsigned int)bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\patblt.cxx:%d:vDIBSolidBlt:Invalid surface format.\n", 88);
    return;
  }
  v11 = aulShiftFormat[v10];
  v25 = v11;
  if ( a5 )
  {
    v12 = vSolidXorRect1;
    v13 = vSolidXorRect24;
  }
  else
  {
    v12 = vSolidFillRect1;
    v13 = vSolidFillRect24;
  }
  if ( (_DWORD)v10 == 5 )
    v12 = v13;
  v14 = v10 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 != 1 )
          goto LABEL_20;
LABEL_17:
        a4 = ((unsigned __int16)a4 << 16) | (unsigned __int16)a4;
        goto LABEL_20;
      }
    }
    else
    {
      LOBYTE(a4) = (16 * (a4 & 0xF)) | a4 & 0xF;
    }
    LOWORD(a4) = ((unsigned __int8)a4 << 8) | (unsigned __int8)a4;
    goto LABEL_17;
  }
  a4 &= 1u;
  if ( a4 )
    a4 = -1;
LABEL_20:
  v17 = (XCLIPOBJ *)a3;
  if ( a3 )
  {
    if ( a3->iDComplexity == 1 )
    {
      v9 = 1;
      v28 = 1;
      v29[0] = a3->rclBounds;
    }
    else if ( a3->iDComplexity == 3 )
    {
      v9 = 1;
      v8 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
      v11 = v25;
    }
  }
  v18 = *((_DWORD *)a1 + 22);
  v26 = v18;
  if ( *((_QWORD *)a1 + 71) )
  {
    v12 = vSolidFillRectWithCallback;
    v19 = (unsigned __int8 *)*((_QWORD *)a1 + 71);
  }
  else
  {
    v19 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  }
  if ( v9 )
  {
    if ( !v8 )
      goto LABEL_32;
    do
    {
      v8 = XCLIPOBJ::bEnum(v17, 0x144u, (char *)&v28, 0LL);
      v18 = v26;
LABEL_32:
      for ( i = 0; i < v28; ++i )
      {
        v21 = (struct _RECTL *)&v29[i];
        if ( v21->left < a2->left )
          v21->left = a2->left;
        right = a2->right;
        if ( v21->right > right )
          v21->right = right;
        top = a2->top;
        if ( v21->top < top )
          v21->top = top;
        bottom = a2->bottom;
        if ( v21->bottom > bottom )
          v21->bottom = bottom;
        if ( v21->top < v21->bottom && v21->left < v21->right )
        {
          v12(v21, 1u, v19, v18, a4, v25);
          v18 = v26;
        }
      }
      v17 = (XCLIPOBJ *)a3;
    }
    while ( v8 );
  }
  else
  {
    v12(a2, 1u, v19, v18, a4, v11);
  }
}

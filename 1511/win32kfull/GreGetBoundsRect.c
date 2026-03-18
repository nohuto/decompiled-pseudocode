/*
 * XREFs of GreGetBoundsRect @ 0x1C00FCBE0
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1C00FCB80 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0019C8C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  unsigned int v5; // ebx
  struct tagRECT *v6; // rdi
  __m128i v8; // xmm6
  struct EPOINTL *v9; // rax
  struct tagRECT *v10; // rdx
  LONG right; // r9d
  LONG left; // r8d
  LONG top; // ecx
  LONG bottom; // r10d
  __int128 v15; // xmm0
  LONG v16; // ecx
  LONG v17; // eax
  LONG v18; // edx
  LONG v19; // r8d
  LONG v20; // eax
  LONG v21; // r9d
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // edx
  LONG v28; // r8d
  LONG v29; // ecx
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // r9d
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  DC *v38[2]; // [rsp+28h] [rbp-69h] BYREF
  _QWORD v39[2]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v40[80]; // [rsp+48h] [rbp-49h] BYREF
  struct _POINTL v41[2]; // [rsp+98h] [rbp+7h] BYREF
  LONG x; // [rsp+A8h] [rbp+17h]
  LONG y; // [rsp+ACh] [rbp+1Bh]
  LONG v44; // [rsp+B0h] [rbp+1Fh]
  LONG v45; // [rsp+B4h] [rbp+23h]

  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  v5 = 3;
  if ( !v38[0] )
  {
    v5 = 0;
    goto LABEL_7;
  }
  v6 = 0LL;
  if ( (a3 & 0x8000) == 0 )
  {
    if ( (a3 & 0x4000) != 0 )
    {
      v6 = (struct tagRECT *)((char *)v38[0] + 1472);
      goto LABEL_5;
    }
    if ( IsRectEmptyInl((const struct tagRECT *)v38[0] + 93) )
      goto LABEL_6;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v40, (struct XDCOBJ *)v38, 0);
    if ( (v40[24] & 1) != 0 )
    {
      v8 = *(__m128i *)((char *)XDCOBJ::prgnEffRao((XDCOBJ *)v38) + 88);
      *(__m128i *)&v41[0].x = v8;
      v9 = DC::eptlOrigin(v38[0]);
      v6 = v10 + 93;
      right = v41[1].x - *(_DWORD *)v9;
      left = _mm_cvtsi128_si32(v8) - *(_DWORD *)v9;
      LODWORD(v9) = *((_DWORD *)v9 + 1);
      top = v41[0].y - (_DWORD)v9;
      bottom = v41[1].y - (_DWORD)v9;
      if ( v10[93].left > left )
        left = v6->left;
      a2->x = left;
      if ( v10[93].right < right )
        right = v10[93].right;
      a2[1].x = right;
      if ( v10[93].top > top )
        top = v10[93].top;
      a2->y = top;
      if ( v10[93].bottom < bottom )
        bottom = v10[93].bottom;
      a2[1].y = bottom;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v39, (struct XDCOBJ *)v38, 0x402u);
      if ( !v39[0] )
        goto LABEL_27;
      if ( (*(_DWORD *)(v39[0] + 32LL) & 1) != 0 )
      {
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v39, a2) )
          goto LABEL_22;
        goto LABEL_27;
      }
      v15 = *(_OWORD *)&a2->x;
      x = a2->x;
      y = a2[1].y;
      v44 = a2[1].x;
      v45 = a2->y;
      *(_OWORD *)&v41[0].x = v15;
      if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v39, v41) )
      {
LABEL_27:
        v5 = 0;
        goto LABEL_22;
      }
      v16 = v41[1].x;
      v17 = v41[1].x;
      v18 = v41[0].x;
      v19 = x;
      if ( v41[0].x < v41[1].x )
        v17 = v41[0].x;
      if ( v17 >= x )
      {
        v20 = x;
      }
      else
      {
        v20 = v41[1].x;
        if ( v41[0].x < v41[1].x )
          v20 = v41[0].x;
      }
      v21 = v44;
      if ( v20 >= v44 )
      {
        v23 = v44;
      }
      else
      {
        v22 = v41[1].x;
        if ( v41[0].x < v41[1].x )
          v22 = v41[0].x;
        if ( v22 >= x )
        {
          v23 = x;
        }
        else
        {
          v23 = v41[1].x;
          if ( v41[0].x < v41[1].x )
            v23 = v41[0].x;
        }
      }
      a2->x = v23;
      v24 = v16;
      if ( v18 > v16 )
        v24 = v18;
      if ( v24 <= v19 )
      {
        v25 = v19;
      }
      else
      {
        v25 = v16;
        if ( v18 > v16 )
          v25 = v18;
      }
      if ( v25 <= v21 )
      {
        v16 = v21;
      }
      else
      {
        v26 = v16;
        if ( v18 > v16 )
          v26 = v18;
        if ( v26 <= v19 )
        {
          v16 = v19;
        }
        else if ( v18 > v16 )
        {
          v16 = v18;
        }
      }
      v27 = v41[0].y;
      v28 = y;
      a2[1].x = v16;
      v29 = v41[1].y;
      v30 = v41[1].y;
      if ( v27 < v41[1].y )
        v30 = v27;
      if ( v30 >= v28 )
      {
        v31 = v28;
      }
      else
      {
        v31 = v41[1].y;
        if ( v27 < v41[1].y )
          v31 = v27;
      }
      v32 = v45;
      if ( v31 >= v45 )
      {
        v34 = v45;
      }
      else
      {
        v33 = v41[1].y;
        if ( v27 < v41[1].y )
          v33 = v27;
        if ( v33 >= v28 )
        {
          v34 = v28;
        }
        else
        {
          v34 = v41[1].y;
          if ( v27 < v41[1].y )
            v34 = v27;
        }
      }
      a2->y = v34;
      v35 = v29;
      if ( v27 > v29 )
        v35 = v27;
      if ( v35 <= v28 )
      {
        v36 = v28;
      }
      else
      {
        v36 = v29;
        if ( v27 > v29 )
          v36 = v27;
      }
      if ( v36 <= v32 )
      {
        v29 = v32;
      }
      else
      {
        v37 = v29;
        if ( v27 > v29 )
          v37 = v27;
        if ( v37 <= v28 )
        {
          v29 = v28;
        }
        else if ( v27 > v29 )
        {
          v29 = v27;
        }
      }
      a2[1].y = v29;
    }
    else
    {
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)v38) != 0;
    }
LABEL_22:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v40);
    if ( v5 != 3 )
      goto LABEL_7;
    goto LABEL_25;
  }
  v6 = (struct tagRECT *)((char *)v38[0] + 1456);
LABEL_5:
  if ( IsRectEmptyInl(v6) )
  {
LABEL_6:
    v5 = 1;
    goto LABEL_7;
  }
  *(struct tagRECT *)&a2->x = *v6;
LABEL_25:
  if ( (a3 & 1) != 0 )
  {
    v6->top = 0x7FFFFFFF;
    v6->left = 0x7FFFFFFF;
    v6->bottom = 0x80000000;
    v6->right = 0x80000000;
  }
LABEL_7:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v38);
  return v5;
}

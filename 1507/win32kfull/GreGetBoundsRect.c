/*
 * XREFs of GreGetBoundsRect @ 0x1C00F45F0
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1C00F4590 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0032CFC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
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
  _QWORD v38[2]; // [rsp+28h] [rbp-E0h] BYREF
  DC *v39[6]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v40[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v41[80]; // [rsp+88h] [rbp-80h] BYREF
  struct _POINTL v42[2]; // [rsp+D8h] [rbp-30h] BYREF
  LONG x; // [rsp+E8h] [rbp-20h]
  LONG y; // [rsp+ECh] [rbp-1Ch]
  LONG v45; // [rsp+F0h] [rbp-18h]
  LONG v46; // [rsp+F4h] [rbp-14h]

  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  v5 = 3;
  if ( !v39[0] )
  {
    v5 = 0;
    goto LABEL_7;
  }
  v6 = 0LL;
  if ( (a3 & 0x8000) == 0 )
  {
    if ( (a3 & 0x4000) != 0 )
    {
      v6 = (struct tagRECT *)((char *)v39[0] + 1472);
      goto LABEL_5;
    }
    if ( IsRectEmptyInl((const struct tagRECT *)v39[0] + 93) )
      goto LABEL_6;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v40, (struct XDCOBJ *)v39, 0);
    if ( (v40[24] & 1) != 0 )
    {
      v8 = *(__m128i *)((char *)XDCOBJ::prgnEffRao((XDCOBJ *)v39) + 88);
      *(__m128i *)&v42[0].x = v8;
      v9 = DC::eptlOrigin(v39[0]);
      v6 = v10 + 93;
      right = v42[1].x - *(_DWORD *)v9;
      left = _mm_cvtsi128_si32(v8) - *(_DWORD *)v9;
      LODWORD(v9) = *((_DWORD *)v9 + 1);
      top = v42[0].y - (_DWORD)v9;
      bottom = v42[1].y - (_DWORD)v9;
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
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v38, (struct XDCOBJ *)v39, 0x402u);
      if ( !v38[0] )
        goto LABEL_27;
      if ( (*(_DWORD *)(v38[0] + 32LL) & 1) != 0 )
      {
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, a2, 2LL) )
          goto LABEL_22;
        goto LABEL_27;
      }
      v15 = *(_OWORD *)&a2->x;
      x = a2->x;
      y = a2[1].y;
      v45 = a2[1].x;
      v46 = a2->y;
      *(_OWORD *)&v42[0].x = v15;
      if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, v42, 4LL) )
      {
LABEL_27:
        v5 = 0;
        goto LABEL_22;
      }
      v16 = v42[1].x;
      v17 = v42[1].x;
      v18 = v42[0].x;
      v19 = x;
      if ( v42[0].x < v42[1].x )
        v17 = v42[0].x;
      if ( v17 >= x )
      {
        v20 = x;
      }
      else
      {
        v20 = v42[1].x;
        if ( v42[0].x < v42[1].x )
          v20 = v42[0].x;
      }
      v21 = v45;
      if ( v20 >= v45 )
      {
        v23 = v45;
      }
      else
      {
        v22 = v42[1].x;
        if ( v42[0].x < v42[1].x )
          v22 = v42[0].x;
        if ( v22 >= x )
        {
          v23 = x;
        }
        else
        {
          v23 = v42[1].x;
          if ( v42[0].x < v42[1].x )
            v23 = v42[0].x;
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
      v27 = v42[0].y;
      v28 = y;
      a2[1].x = v16;
      v29 = v42[1].y;
      v30 = v42[1].y;
      if ( v27 < v42[1].y )
        v30 = v27;
      if ( v30 >= v28 )
      {
        v31 = v28;
      }
      else
      {
        v31 = v42[1].y;
        if ( v27 < v42[1].y )
          v31 = v27;
      }
      v32 = v46;
      if ( v31 >= v46 )
      {
        v34 = v46;
      }
      else
      {
        v33 = v42[1].y;
        if ( v27 < v42[1].y )
          v33 = v27;
        if ( v33 >= v28 )
        {
          v34 = v28;
        }
        else
        {
          v34 = v42[1].y;
          if ( v27 < v42[1].y )
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
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)v39) != 0;
    }
LABEL_22:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v40);
    DCOBJ::~DCOBJ((DCOBJ *)v41);
    if ( v5 != 3 )
      goto LABEL_7;
    goto LABEL_25;
  }
  v6 = (struct tagRECT *)((char *)v39[0] + 1456);
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
  DCOBJ::~DCOBJ((DCOBJ *)v39);
  return v5;
}

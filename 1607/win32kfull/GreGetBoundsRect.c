/*
 * XREFs of GreGetBoundsRect @ 0x1C011EC10
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1C011EBB0 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C003955C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  unsigned int v5; // ebx
  struct tagRECT *v6; // rdi
  __m128i v7; // xmm6
  struct EPOINTL *v8; // rax
  struct tagRECT *v9; // rdx
  LONG right; // r9d
  LONG left; // r8d
  LONG top; // ecx
  LONG bottom; // r10d
  __int128 v14; // xmm0
  LONG v15; // ecx
  LONG v16; // eax
  LONG v17; // edx
  LONG v18; // r8d
  LONG v19; // eax
  LONG v20; // r9d
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // edx
  LONG v27; // r8d
  LONG v28; // ecx
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // r9d
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  _QWORD v38[2]; // [rsp+28h] [rbp-E0h] BYREF
  DC *v39[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v40[32]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v41[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v42[80]; // [rsp+88h] [rbp-80h] BYREF
  struct _POINTL v43[2]; // [rsp+D8h] [rbp-30h] BYREF
  LONG x; // [rsp+E8h] [rbp-20h]
  LONG y; // [rsp+ECh] [rbp-1Ch]
  LONG v46; // [rsp+F0h] [rbp-18h]
  LONG v47; // [rsp+F4h] [rbp-14h]

  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  v5 = 3;
  if ( !v39[0] )
  {
    v5 = 0;
    goto LABEL_95;
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
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v41, (struct XDCOBJ *)v39, 0);
    if ( (v41[24] & 1) == 0 )
    {
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)v39) != 0;
      goto LABEL_92;
    }
    v7 = *(__m128i *)((char *)XDCOBJ::prgnEffRao((XDCOBJ *)v39) + 88);
    *(__m128i *)&v43[0].x = v7;
    v8 = DC::eptlOrigin(v39[0]);
    v6 = v9 + 93;
    right = v43[1].x - *(_DWORD *)v8;
    left = _mm_cvtsi128_si32(v7) - *(_DWORD *)v8;
    LODWORD(v8) = *((_DWORD *)v8 + 1);
    top = v43[0].y - (_DWORD)v8;
    bottom = v43[1].y - (_DWORD)v8;
    if ( v9[93].left > left )
      left = v6->left;
    a2->x = left;
    if ( v9[93].right < right )
      right = v9[93].right;
    a2[1].x = right;
    if ( v9[93].top > top )
      top = v9[93].top;
    a2->y = top;
    if ( v9[93].bottom < bottom )
      bottom = v9[93].bottom;
    a2[1].y = bottom;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v38, (struct XDCOBJ *)v39, 0x402u);
    if ( v38[0] )
    {
      if ( (*(_DWORD *)(v38[0] + 32LL) & 1) != 0 )
      {
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, a2, 2LL) )
          goto LABEL_92;
      }
      else
      {
        v14 = *(_OWORD *)&a2->x;
        x = a2->x;
        y = a2[1].y;
        v46 = a2[1].x;
        v47 = a2->y;
        *(_OWORD *)&v43[0].x = v14;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, v43, 4LL) )
        {
          v15 = v43[1].x;
          v16 = v43[1].x;
          v17 = v43[0].x;
          v18 = x;
          if ( v43[0].x < v43[1].x )
            v16 = v43[0].x;
          if ( v16 >= x )
          {
            v19 = x;
          }
          else
          {
            v19 = v43[1].x;
            if ( v43[0].x < v43[1].x )
              v19 = v43[0].x;
          }
          v20 = v46;
          if ( v19 >= v46 )
          {
            v22 = v46;
          }
          else
          {
            v21 = v43[1].x;
            if ( v43[0].x < v43[1].x )
              v21 = v43[0].x;
            if ( v21 >= x )
            {
              v22 = x;
            }
            else
            {
              v22 = v43[1].x;
              if ( v43[0].x < v43[1].x )
                v22 = v43[0].x;
            }
          }
          a2->x = v22;
          v23 = v15;
          if ( v17 > v15 )
            v23 = v17;
          if ( v23 <= v18 )
          {
            v24 = v18;
          }
          else
          {
            v24 = v15;
            if ( v17 > v15 )
              v24 = v17;
          }
          if ( v24 <= v20 )
          {
            v15 = v20;
          }
          else
          {
            v25 = v15;
            if ( v17 > v15 )
              v25 = v17;
            if ( v25 <= v18 )
            {
              v15 = v18;
            }
            else if ( v17 > v15 )
            {
              v15 = v17;
            }
          }
          v26 = v43[0].y;
          v27 = y;
          a2[1].x = v15;
          v28 = v43[1].y;
          v29 = v43[1].y;
          if ( v26 < v43[1].y )
            v29 = v26;
          if ( v29 >= v27 )
          {
            v30 = v27;
          }
          else
          {
            v30 = v43[1].y;
            if ( v26 < v43[1].y )
              v30 = v26;
          }
          v31 = v47;
          if ( v30 >= v47 )
          {
            v33 = v47;
          }
          else
          {
            v32 = v43[1].y;
            if ( v26 < v43[1].y )
              v32 = v26;
            if ( v32 >= v27 )
            {
              v33 = v27;
            }
            else
            {
              v33 = v43[1].y;
              if ( v26 < v43[1].y )
                v33 = v26;
            }
          }
          a2->y = v33;
          v34 = v28;
          if ( v26 > v28 )
            v34 = v26;
          if ( v34 <= v27 )
          {
            v35 = v27;
          }
          else
          {
            v35 = v28;
            if ( v26 > v28 )
              v35 = v26;
          }
          if ( v35 <= v31 )
          {
            v28 = v31;
          }
          else
          {
            v36 = v28;
            if ( v26 > v28 )
              v36 = v26;
            if ( v36 <= v27 )
            {
              v28 = v27;
            }
            else if ( v26 > v28 )
            {
              v28 = v26;
            }
          }
          a2[1].y = v28;
LABEL_92:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v41);
          DCOBJ::~DCOBJ((DCOBJ *)v42);
          if ( v5 != 3 )
            goto LABEL_95;
          goto LABEL_93;
        }
      }
    }
    v5 = 0;
    goto LABEL_92;
  }
  v6 = (struct tagRECT *)((char *)v39[0] + 1456);
LABEL_5:
  if ( IsRectEmptyInl(v6) )
  {
LABEL_6:
    v5 = 1;
    goto LABEL_95;
  }
  *(struct tagRECT *)&a2->x = *v6;
LABEL_93:
  if ( (a3 & 1) != 0 )
  {
    v6->top = 0x7FFFFFFF;
    v6->left = 0x7FFFFFFF;
    v6->bottom = 0x80000000;
    v6->right = 0x80000000;
  }
LABEL_95:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v39);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v40);
  return v5;
}

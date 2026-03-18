/*
 * XREFs of GreRectVisible @ 0x1C00D49F8
 * Callers:
 *     NtGdiRectVisible @ 0x1C00D49B0 (NtGdiRectVisible.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C01057B4 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreRectVisible(HDC a1, struct _RECTL *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  struct _RECTL v5; // xmm0
  __int64 v6; // rdx
  LONG left; // ecx
  LONG right; // edx
  _DWORD *v9; // r8
  LONG v10; // eax
  LONG v11; // edx
  struct _RECTL *v13; // r9
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  int v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+2Ch] [rbp-D4h]
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v20[7]; // [rsp+58h] [rbp-A8h] BYREF
  char v21[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h]
  _BYTE v23[32]; // [rsp+110h] [rbp+10h] BYREF
  char v24[80]; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v25; // [rsp+180h] [rbp+80h] BYREF
  struct _POINTL v26; // [rsp+190h] [rbp+90h] BYREF
  struct _POINTL v27; // [rsp+198h] [rbp+98h] BYREF
  LONG v28; // [rsp+1A0h] [rbp+A0h]
  LONG bottom; // [rsp+1A4h] [rbp+A4h]
  LONG v30; // [rsp+1A8h] [rbp+A8h]
  LONG v31; // [rsp+1ACh] [rbp+ACh]

  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  if ( v20[0] )
  {
    v3 = 1;
    if ( *(_WORD *)(v20[0] + 12LL) == 1 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v24);
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, (struct XDCOBJ *)v20, 1);
      if ( (v23[24] & 1) == 0 )
      {
LABEL_23:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
        goto LABEL_24;
      }
      v4 = *(_QWORD *)(v20[0] + 1552LL);
      if ( !v4 )
        v4 = *(_QWORD *)(v20[0] + 1544LL);
      v5 = *a2;
      v17 = v4;
      v25 = v5;
      v15 = *(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 68LL);
      v16 = *(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 312LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v20[0] + 80LL) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v20, 0x204u, 0);
        v6 = v14;
      }
      else
      {
        v6 = v20[0] + 336LL;
        v14 = v20[0] + 336LL;
      }
      if ( (*(_DWORD *)(v6 + 32) & 1) != 0 )
      {
        EXFORMOBJ::vOrder((EXFORMOBJ *)&v14, &v25);
        if ( (*(_BYTE *)(v14 + 32) & 0x43) != 0x43 )
          bCvtPts1(v14, &v25, 2LL);
        left = v25.left;
        right = v25.right;
        if ( v16 )
        {
          left = v25.left + 1;
          right = v25.right + 1;
          ++v25.left;
          ++v25.right;
        }
        if ( (*(_DWORD *)(v20[0] + 40LL) & 1) != 0 )
          v9 = (_DWORD *)(v20[0] + 1416LL);
        else
          v9 = (_DWORD *)(v20[0] + 1408LL);
        v25.left = *v9 + left;
        v25.right = *v9 + right;
        v25.top += v9[1];
        v25.bottom += v9[1];
        v3 = RGNOBJ::bInside((RGNOBJ *)&v17, &v25) == 2;
        goto LABEL_23;
      }
      v10 = a2->right;
      v11 = a2->left;
      v26.y = a2->top;
      v27.x = v10;
      v27.y = v26.y;
      v28 = v10;
      bottom = a2->bottom;
      v31 = bottom;
      v26.x = v11;
      v30 = v11;
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v21);
      if ( v22 )
      {
        if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v21, (struct EXFORMOBJ *)&v14, &v26)
          && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v21, (struct EXFORMOBJ *)&v14, &v27, 3u)
          && EPATHOBJ::bCloseFigure((EPATHOBJ *)v21) )
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v19, (struct EPATHOBJ *)v21, 1u, v13);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
          if ( v19[0] && v18[0] )
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)v18, (struct RGNOBJ *)&v17, (struct RGNOBJ *)v19, BYTE1(gafjRgnOp))
              && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v18) != 1 )
            {
              v3 = 2;
            }
          }
          else
          {
            EngSetLastError(8u);
            v3 = -1;
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
          goto LABEL_22;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      v3 = -1;
LABEL_22:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v21);
      goto LABEL_23;
    }
  }
  EngSetLastError(6u);
  v3 = -1;
LABEL_24:
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v3;
}

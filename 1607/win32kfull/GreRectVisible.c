/*
 * XREFs of GreRectVisible @ 0x1C004C688
 * Callers:
 *     NtGdiRectVisible @ 0x1C004C9E0 (NtGdiRectVisible.c)
 * Callees:
 *     bCvtPts1 @ 0x1C003BEC0 (bCvtPts1.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C013A204 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreRectVisible(HDC a1, struct _RECTL *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  struct _RECTL v6; // xmm0
  __int64 v7; // rdx
  LONG left; // ecx
  LONG right; // edx
  _DWORD *v10; // r8
  LONG v11; // eax
  LONG v12; // edx
  struct _RECTL *v14; // r9
  __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  int v16; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+2Ch] [rbp-D4h]
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+64h] [rbp-9Ch]
  char v24[40]; // [rsp+68h] [rbp-98h] BYREF
  char v25[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  _BYTE v27[32]; // [rsp+110h] [rbp+10h] BYREF
  char v28[80]; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v29; // [rsp+180h] [rbp+80h] BYREF
  struct _POINTL v30; // [rsp+190h] [rbp+90h] BYREF
  struct _POINTL v31; // [rsp+198h] [rbp+98h] BYREF
  LONG v32; // [rsp+1A0h] [rbp+A0h]
  LONG bottom; // [rsp+1A4h] [rbp+A4h]
  LONG v34; // [rsp+1A8h] [rbp+A8h]
  LONG v35; // [rsp+1ACh] [rbp+ACh]

  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v24);
  XDCOBJ::vLock((XDCOBJ *)&v21, a1);
  if ( v21 )
  {
    v4 = 1;
    if ( *(_WORD *)(v21 + 12) == 1 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v28);
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v27, (struct XDCOBJ *)&v21, 1);
      if ( (v27[24] & 1) == 0 )
      {
LABEL_23:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v27);
        goto LABEL_24;
      }
      v5 = *(_QWORD *)(v21 + 1552);
      if ( !v5 )
        v5 = *(_QWORD *)(v21 + 1544);
      v6 = *a2;
      v18 = v5;
      v29 = v6;
      v16 = *(_DWORD *)(*(_QWORD *)(v21 + 80) + 68LL);
      v17 = *(_DWORD *)(*(_QWORD *)(v21 + 80) + 312LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v21 + 80) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v15, (struct XDCOBJ *)&v21, 0x204u, 0);
        v7 = v15;
      }
      else
      {
        v7 = v21 + 336;
        v15 = v21 + 336;
      }
      if ( (*(_DWORD *)(v7 + 32) & 1) != 0 )
      {
        EXFORMOBJ::vOrder((EXFORMOBJ *)&v15, &v29);
        if ( (*(_BYTE *)(v15 + 32) & 0x43) != 0x43 )
          bCvtPts1(v15, &v29.left, 2LL);
        left = v29.left;
        right = v29.right;
        if ( v17 )
        {
          left = v29.left + 1;
          right = v29.right + 1;
          ++v29.left;
          ++v29.right;
        }
        if ( (*(_DWORD *)(v21 + 40) & 1) != 0 )
          v10 = (_DWORD *)(v21 + 1416);
        else
          v10 = (_DWORD *)(v21 + 1408);
        v29.left = *v10 + left;
        v29.right = *v10 + right;
        v29.top += v10[1];
        v29.bottom += v10[1];
        v4 = RGNOBJ::bInside((RGNOBJ *)&v18, &v29) == 2;
        goto LABEL_23;
      }
      v11 = a2->right;
      v12 = a2->left;
      v30.y = a2->top;
      v31.x = v11;
      v31.y = v30.y;
      v32 = v11;
      bottom = a2->bottom;
      v35 = bottom;
      v30.x = v12;
      v34 = v12;
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v25);
      if ( v26 )
      {
        if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v25, (struct EXFORMOBJ *)&v15, &v30)
          && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v25, (struct EXFORMOBJ *)&v15, &v31, 3u)
          && EPATHOBJ::bCloseFigure((EPATHOBJ *)v25) )
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v20, (struct EPATHOBJ *)v25, 1u, v14);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
          if ( v20[0] && v19[0] )
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)v19, (struct RGNOBJ *)&v18, (struct RGNOBJ *)v20, BYTE1(gafjRgnOp))
              && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v19) != 1 )
            {
              v4 = 2;
            }
          }
          else
          {
            EngSetLastError(8u);
            v4 = -1;
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
          goto LABEL_22;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      v4 = -1;
LABEL_22:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v25);
      goto LABEL_23;
    }
  }
  EngSetLastError(6u);
  v4 = -1;
LABEL_24:
  DCOBJ::~DCOBJ((DCOBJ *)&v21);
  return v4;
}

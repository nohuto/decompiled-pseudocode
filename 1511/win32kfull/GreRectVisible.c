/*
 * XREFs of GreRectVisible @ 0x1C00DAA88
 * Callers:
 *     NtGdiRectVisible @ 0x1C00DAA40 (NtGdiRectVisible.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C013073C (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectVisible(__int64 a1, struct _RECTL *a2)
{
  struct _RECTL *v2; // rsi
  unsigned int v3; // edi
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rax
  struct _RECTL v7; // xmm0
  __int64 v8; // rdx
  LONG left; // ecx
  LONG right; // edx
  _DWORD *v11; // r8
  LONG v13; // eax
  LONG v14; // edx
  struct _RECTL *v15; // r9
  _QWORD v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+3Ch] [rbp-C4h]
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[3]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  char v26[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-38h]
  struct _RECTL v28; // [rsp+140h] [rbp+40h] BYREF
  struct _POINTL v29; // [rsp+150h] [rbp+50h] BYREF
  struct _POINTL v30; // [rsp+158h] [rbp+58h] BYREF
  LONG v31; // [rsp+160h] [rbp+60h]
  LONG bottom; // [rsp+164h] [rbp+64h]
  LONG v33; // [rsp+168h] [rbp+68h]
  LONG v34; // [rsp+16Ch] [rbp+6Ch]

  v2 = a2;
  v16[1] = 0LL;
  v3 = 1;
  LOBYTE(a2) = 1;
  v16[0] = HmgLockEx(a1, a2, 0LL);
  if ( v16[0] )
  {
    v4 = (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v16) == 0;
    v5 = v16[0];
    if ( v4 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v16[0] + 12LL), 0xFFFFFFFF);
      v5 = 0LL;
      v16[0] = 0LL;
    }
    if ( v5 )
    {
      v24 = 0LL;
      v25 = 0LL;
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, (struct XDCOBJ *)v16, 1);
      if ( (v23[24] & 1) == 0 )
      {
LABEL_18:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
        goto LABEL_19;
      }
      v6 = *(_QWORD *)(v16[0] + 1528LL);
      if ( !v6 )
        v6 = *(_QWORD *)(v16[0] + 1520LL);
      v7 = *v2;
      v20 = v6;
      v28 = v7;
      v18 = *(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 68LL);
      v19 = *(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 312LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v16[0] + 80LL) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v17, (struct XDCOBJ *)v16, 0x204u, 0);
        v8 = v17;
      }
      else
      {
        v8 = v16[0] + 336LL;
        v17 = v16[0] + 336LL;
      }
      if ( (*(_DWORD *)(v8 + 32) & 1) != 0 )
      {
        EXFORMOBJ::vOrder((EXFORMOBJ *)&v17, &v28);
        if ( (*(_BYTE *)(v17 + 32) & 0x43) != 0x43 )
          bCvtPts1(v17, &v28, 2LL);
        left = v28.left;
        right = v28.right;
        if ( v19 )
        {
          left = v28.left + 1;
          right = v28.right + 1;
          ++v28.left;
          ++v28.right;
        }
        if ( (*(_DWORD *)(v16[0] + 40LL) & 1) != 0 )
          v11 = (_DWORD *)(v16[0] + 1416LL);
        else
          v11 = (_DWORD *)(v16[0] + 1408LL);
        v28.left = *v11 + left;
        v28.right = *v11 + right;
        v28.top += v11[1];
        v28.bottom += v11[1];
        v3 = RGNOBJ::bInside((RGNOBJ *)&v20, &v28) == 2;
        goto LABEL_18;
      }
      v13 = v2->right;
      v14 = v2->left;
      v29.y = v2->top;
      v30.x = v13;
      v30.y = v29.y;
      v31 = v13;
      bottom = v2->bottom;
      v34 = bottom;
      v29.x = v14;
      v33 = v14;
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v26);
      if ( v27 )
      {
        if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v26, (struct EXFORMOBJ *)&v17, &v29)
          && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v26, (struct EXFORMOBJ *)&v17, &v30, 3u)
          && EPATHOBJ::bCloseFigure((EPATHOBJ *)v26) )
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v22, (struct EPATHOBJ *)v26, 1u, v15);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
          if ( v22[0] && v21[0] )
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)v21, (struct RGNOBJ *)&v20, (struct RGNOBJ *)v22, BYTE1(gafjRgnOp))
              && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v21) != 1 )
            {
              v3 = 2;
            }
          }
          else
          {
            EngSetLastError(8u);
            v3 = -1;
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v22);
          goto LABEL_28;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      v3 = -1;
LABEL_28:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v26);
      goto LABEL_18;
    }
  }
  EngSetLastError(6u);
  v3 = -1;
LABEL_19:
  if ( v16[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v16);
    _InterlockedAdd((volatile signed __int32 *)(v16[0] + 12LL), 0xFFFFFFFF);
  }
  return v3;
}

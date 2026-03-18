/*
 * XREFs of GreGetAppClipBox @ 0x1C00D7294
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C00D7240 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0032CFC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // r9
  _DWORD *v7; // rcx
  int v8; // eax
  LONG v9; // r8d
  bool v10; // zf
  int v11; // eax
  LONG v12; // ecx
  LONG v13; // eax
  LONG v14; // edx
  LONG v15; // eax
  LONG v16; // r9d
  LONG v17; // r11d
  LONG v18; // eax
  LONG v19; // ebx
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // ecx
  LONG y; // r8d
  bool v24; // cc
  LONG v25; // r10d
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // esi
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // ecx
  LONG v38; // eax
  unsigned __int64 v40; // [rsp+20h] [rbp-A9h] BYREF
  int v41; // [rsp+28h] [rbp-A1h]
  int v42; // [rsp+2Ch] [rbp-9Dh]
  _QWORD v43[6]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v44[32]; // [rsp+60h] [rbp-69h] BYREF
  char v45[80]; // [rsp+80h] [rbp-49h] BYREF
  struct _POINTL v46; // [rsp+D0h] [rbp+7h] BYREF
  LONG v47; // [rsp+D8h] [rbp+Fh]
  LONG v48; // [rsp+DCh] [rbp+13h]
  LONG x; // [rsp+E0h] [rbp+17h]
  LONG v50; // [rsp+E4h] [rbp+1Bh]
  LONG v51; // [rsp+E8h] [rbp+1Fh]
  LONG v52; // [rsp+ECh] [rbp+23h]

  DCOBJ::DCOBJ((DCOBJ *)v43, a1);
  v3 = 0;
  if ( !v43[0] || *(_WORD *)(v43[0] + 12LL) != 1 )
  {
    EngSetLastError(6u);
    goto LABEL_94;
  }
  DCOBJ::DCOBJ((DCOBJ *)v45);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v44, (struct XDCOBJ *)v43, 1);
  if ( (v44[24] & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v43) )
    {
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      v3 = 3;
    }
    goto LABEL_92;
  }
  v4 = v43[0];
  v5 = *(_QWORD *)(v43[0] + 1552LL);
  if ( !v5 )
    v5 = *(_QWORD *)(v43[0] + 1544LL);
  *(_OWORD *)a2 = *(_OWORD *)(v5 + 88);
  if ( *a2 >= a2[2] || a2[1] >= a2[3] )
  {
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    goto LABEL_88;
  }
  v41 = *(_DWORD *)(*(_QWORD *)(v4 + 80) + 68LL);
  v42 = *(_DWORD *)(*(_QWORD *)(v4 + 80) + 312LL) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v40, (struct XDCOBJ *)v43, 0x402u, 0);
  v6 = v40;
  if ( v40 )
  {
    v4 = v43[0];
    v7 = (_DWORD *)(v43[0] + 1416LL);
    if ( (*(_DWORD *)(v43[0] + 40LL) & 1) == 0 )
      v7 = (_DWORD *)(v43[0] + 1408LL);
    *a2 -= *v7;
    a2[2] -= *v7;
    a2[1] -= v7[1];
    a2[3] -= v7[1];
    v8 = *(_DWORD *)(v6 + 32);
    v9 = a2[3];
    if ( (v8 & 1) == 0 )
    {
      v12 = a2[2];
      v13 = a2[1];
      v46.x = *a2;
      v47 = v12;
      x = v46.x;
      v51 = v12;
      v50 = v9;
      v52 = v9;
      v46.y = v13;
      v48 = v13;
      EXFORMOBJ::bXform((EXFORMOBJ *)&v40, &v46, 4LL);
      v14 = v47;
      v15 = v47;
      v16 = v46.x;
      v17 = x;
      if ( v46.x < v47 )
        v15 = v46.x;
      if ( v15 >= x )
      {
        v18 = x;
      }
      else
      {
        v18 = v47;
        if ( v46.x < v47 )
          v18 = v46.x;
      }
      v19 = v51;
      if ( v18 >= v51 )
      {
        v21 = v51;
      }
      else
      {
        v20 = v47;
        if ( v46.x < v47 )
          v20 = v46.x;
        if ( v20 >= x )
        {
          v21 = x;
        }
        else
        {
          v21 = v47;
          if ( v46.x < v47 )
            v21 = v46.x;
        }
      }
      v22 = v48;
      y = v46.y;
      v24 = v46.y < v48;
      v25 = v50;
      *a2 = v21;
      v26 = v22;
      if ( v24 )
        v26 = y;
      if ( v26 >= v25 )
      {
        v27 = v25;
      }
      else
      {
        v27 = v22;
        if ( y < v22 )
          v27 = y;
      }
      v28 = v52;
      if ( v27 >= v52 )
      {
        v30 = v52;
      }
      else
      {
        v29 = v22;
        if ( y < v22 )
          v29 = y;
        if ( v29 >= v25 )
        {
          v30 = v25;
        }
        else
        {
          v30 = v22;
          if ( y < v22 )
            v30 = y;
        }
      }
      a2[1] = v30;
      v31 = v14;
      if ( v16 > v14 )
        v31 = v16;
      if ( v31 <= v17 )
      {
        v32 = v17;
      }
      else
      {
        v32 = v14;
        if ( v16 > v14 )
          v32 = v16;
      }
      if ( v32 <= v19 )
      {
        v14 = v19;
      }
      else
      {
        v33 = v14;
        if ( v16 > v14 )
          v33 = v16;
        if ( v33 <= v17 )
        {
          v14 = v17;
        }
        else if ( v16 > v14 )
        {
          v14 = v16;
        }
      }
      a2[2] = v14;
      v34 = v22;
      if ( y > v22 )
        v34 = y;
      if ( v34 <= v25 )
      {
        v35 = v25;
      }
      else
      {
        v35 = v22;
        if ( y > v22 )
          v35 = y;
      }
      if ( v35 <= v28 )
      {
        v22 = v28;
      }
      else
      {
        v36 = v22;
        if ( y > v22 )
          v36 = y;
        if ( v36 <= v25 )
        {
          v22 = v25;
        }
        else if ( y > v22 )
        {
          v22 = y;
        }
      }
      a2[3] = v22;
      v3 = 3;
      goto LABEL_89;
    }
    if ( (v8 & 0x43) == 0x43 || (v10 = (unsigned int)bCvtPts1(v6, a2, 2LL) == 0, v11 = 0, !v10) )
      v11 = 1;
    if ( v42 )
    {
      ++*a2;
      ++a2[2];
    }
    if ( !v11 )
      goto LABEL_92;
    if ( *(_DWORD *)(v5 + 84) != 1 )
    {
      LOBYTE(v3) = *(_DWORD *)(v5 + 80) > 0xA0u;
      v3 += 2;
LABEL_89:
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 80) + 312LL) & 1) != 0 )
      {
        v37 = *a2;
        v38 = a2[2];
        if ( *a2 > v38 )
        {
          *a2 = v38;
          a2[2] = v37;
        }
      }
      goto LABEL_92;
    }
LABEL_88:
    v3 = 1;
    goto LABEL_89;
  }
LABEL_92:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v44);
LABEL_94:
  DCOBJ::~DCOBJ((DCOBJ *)v43);
  return v3;
}

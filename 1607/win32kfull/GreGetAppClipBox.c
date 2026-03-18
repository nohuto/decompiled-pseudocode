/*
 * XREFs of GreGetAppClipBox @ 0x1C00FA434
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C00FA3E0 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C003955C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     bCvtPts1 @ 0x1C003BEC0 (bCvtPts1.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  unsigned int v3; // edi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r9
  _DWORD *v8; // rcx
  int v9; // eax
  LONG v10; // r8d
  bool v11; // zf
  int v12; // eax
  LONG v13; // ecx
  LONG v14; // eax
  LONG v15; // edx
  LONG v16; // eax
  LONG v17; // r9d
  LONG v18; // r11d
  LONG v19; // eax
  LONG v20; // ebx
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // ecx
  LONG y; // r8d
  bool v25; // cc
  LONG v26; // r10d
  LONG v27; // eax
  LONG v28; // eax
  LONG v29; // edi
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // ecx
  LONG v39; // eax
  __int64 v41; // [rsp+20h] [rbp-A9h] BYREF
  int v42; // [rsp+28h] [rbp-A1h]
  int v43; // [rsp+2Ch] [rbp-9Dh]
  _QWORD v44[2]; // [rsp+30h] [rbp-99h] BYREF
  char v45[32]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v46[32]; // [rsp+60h] [rbp-69h] BYREF
  char v47[80]; // [rsp+80h] [rbp-49h] BYREF
  struct _POINTL v48; // [rsp+D0h] [rbp+7h] BYREF
  LONG v49; // [rsp+D8h] [rbp+Fh]
  LONG v50; // [rsp+DCh] [rbp+13h]
  LONG x; // [rsp+E0h] [rbp+17h]
  LONG v52; // [rsp+E4h] [rbp+1Bh]
  LONG v53; // [rsp+E8h] [rbp+1Fh]
  LONG v54; // [rsp+ECh] [rbp+23h]

  v3 = 0;
  v44[0] = 0LL;
  v44[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v45);
  XDCOBJ::vLock((XDCOBJ *)v44, a1);
  if ( !v44[0] || *(_WORD *)(v44[0] + 12LL) != 1 )
  {
    EngSetLastError(6u);
    goto LABEL_94;
  }
  DCOBJ::DCOBJ((DCOBJ *)v47);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v46, (struct XDCOBJ *)v44, 1);
  if ( (v46[24] & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v44) )
    {
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      v3 = 3;
    }
    goto LABEL_92;
  }
  v5 = v44[0];
  v6 = *(_QWORD *)(v44[0] + 1552LL);
  if ( !v6 )
    v6 = *(_QWORD *)(v44[0] + 1544LL);
  *(_OWORD *)a2 = *(_OWORD *)(v6 + 88);
  if ( *a2 >= a2[2] || a2[1] >= a2[3] )
  {
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    goto LABEL_88;
  }
  v42 = *(_DWORD *)(*(_QWORD *)(v5 + 80) + 68LL);
  v43 = *(_DWORD *)(*(_QWORD *)(v5 + 80) + 312LL) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v41, (struct XDCOBJ *)v44, 0x402u, 0);
  v7 = v41;
  if ( v41 )
  {
    v5 = v44[0];
    v8 = (_DWORD *)(v44[0] + 1416LL);
    if ( (*(_DWORD *)(v44[0] + 40LL) & 1) == 0 )
      v8 = (_DWORD *)(v44[0] + 1408LL);
    *a2 -= *v8;
    a2[2] -= *v8;
    a2[1] -= v8[1];
    a2[3] -= v8[1];
    v9 = *(_DWORD *)(v7 + 32);
    v10 = a2[3];
    if ( (v9 & 1) == 0 )
    {
      v13 = a2[2];
      v14 = a2[1];
      v48.x = *a2;
      v49 = v13;
      x = v48.x;
      v53 = v13;
      v52 = v10;
      v54 = v10;
      v48.y = v14;
      v50 = v14;
      EXFORMOBJ::bXform((EXFORMOBJ *)&v41, &v48, 4LL);
      v15 = v49;
      v16 = v49;
      v17 = v48.x;
      v18 = x;
      if ( v48.x < v49 )
        v16 = v48.x;
      if ( v16 >= x )
      {
        v19 = x;
      }
      else
      {
        v19 = v49;
        if ( v48.x < v49 )
          v19 = v48.x;
      }
      v20 = v53;
      if ( v19 >= v53 )
      {
        v22 = v53;
      }
      else
      {
        v21 = v49;
        if ( v48.x < v49 )
          v21 = v48.x;
        if ( v21 >= x )
        {
          v22 = x;
        }
        else
        {
          v22 = v49;
          if ( v48.x < v49 )
            v22 = v48.x;
        }
      }
      v23 = v50;
      y = v48.y;
      v25 = v48.y < v50;
      v26 = v52;
      *a2 = v22;
      v27 = v23;
      if ( v25 )
        v27 = y;
      if ( v27 >= v26 )
      {
        v28 = v26;
      }
      else
      {
        v28 = v23;
        if ( y < v23 )
          v28 = y;
      }
      v29 = v54;
      if ( v28 >= v54 )
      {
        v31 = v54;
      }
      else
      {
        v30 = v23;
        if ( y < v23 )
          v30 = y;
        if ( v30 >= v26 )
        {
          v31 = v26;
        }
        else
        {
          v31 = v23;
          if ( y < v23 )
            v31 = y;
        }
      }
      a2[1] = v31;
      v32 = v15;
      if ( v17 > v15 )
        v32 = v17;
      if ( v32 <= v18 )
      {
        v33 = v18;
      }
      else
      {
        v33 = v15;
        if ( v17 > v15 )
          v33 = v17;
      }
      if ( v33 <= v20 )
      {
        v15 = v20;
      }
      else
      {
        v34 = v15;
        if ( v17 > v15 )
          v34 = v17;
        if ( v34 <= v18 )
        {
          v15 = v18;
        }
        else if ( v17 > v15 )
        {
          v15 = v17;
        }
      }
      a2[2] = v15;
      v35 = v23;
      if ( y > v23 )
        v35 = y;
      if ( v35 <= v26 )
      {
        v36 = v26;
      }
      else
      {
        v36 = v23;
        if ( y > v23 )
          v36 = y;
      }
      if ( v36 <= v29 )
      {
        v23 = v29;
      }
      else
      {
        v37 = v23;
        if ( y > v23 )
          v37 = y;
        if ( v37 <= v26 )
        {
          v23 = v26;
        }
        else if ( y > v23 )
        {
          v23 = y;
        }
      }
      a2[3] = v23;
      v3 = 3;
      goto LABEL_89;
    }
    if ( (v9 & 0x43) == 0x43 || (v11 = (unsigned int)bCvtPts1(v7, a2, 2LL) == 0, v12 = 0, !v11) )
      v12 = 1;
    if ( v43 )
    {
      ++*a2;
      ++a2[2];
    }
    if ( !v12 )
      goto LABEL_92;
    if ( *(_DWORD *)(v6 + 84) != 1 )
    {
      LOBYTE(v3) = *(_DWORD *)(v6 + 80) > 0xA0u;
      v3 += 2;
LABEL_89:
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 312LL) & 1) != 0 )
      {
        v38 = *a2;
        v39 = a2[2];
        if ( *a2 > v39 )
        {
          *a2 = v39;
          a2[2] = v38;
        }
      }
      goto LABEL_92;
    }
LABEL_88:
    v3 = 1;
    goto LABEL_89;
  }
LABEL_92:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v46);
LABEL_94:
  DCOBJ::~DCOBJ((DCOBJ *)v44);
  return v3;
}

/*
 * XREFs of GreGetAppClipBox @ 0x1C00DD344
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C00DD2F0 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0019C8C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // r9
  _DWORD *v6; // rcx
  int v7; // eax
  LONG v8; // r8d
  int v9; // eax
  unsigned int v10; // edi
  bool v12; // zf
  LONG v13; // ecx
  LONG v14; // eax
  LONG v15; // edx
  LONG v16; // eax
  LONG v17; // r9d
  LONG v18; // r11d
  LONG v19; // eax
  LONG v20; // edi
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // ecx
  LONG y; // r8d
  bool v25; // cc
  LONG v26; // r10d
  LONG v27; // eax
  LONG v28; // eax
  LONG v29; // esi
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
  _QWORD v40[2]; // [rsp+20h] [rbp-69h] BYREF
  unsigned __int64 v41; // [rsp+30h] [rbp-59h] BYREF
  int v42; // [rsp+3Ch] [rbp-4Dh]
  _BYTE v43[32]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v44; // [rsp+60h] [rbp-29h]
  __int64 v45; // [rsp+68h] [rbp-21h]
  struct _POINTL v46; // [rsp+90h] [rbp+7h] BYREF
  LONG v47; // [rsp+98h] [rbp+Fh]
  LONG v48; // [rsp+9Ch] [rbp+13h]
  LONG x; // [rsp+A0h] [rbp+17h]
  LONG v50; // [rsp+A4h] [rbp+1Bh]
  LONG v51; // [rsp+A8h] [rbp+1Fh]
  LONG v52; // [rsp+ACh] [rbp+23h]

  v40[0] = 0LL;
  v40[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v40, a1);
  if ( v40[0] )
  {
    v44 = 0LL;
    v45 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v43, (struct XDCOBJ *)v40, 1);
    if ( (v43[24] & 1) != 0 )
    {
      v3 = v40[0];
      v4 = *(_QWORD *)(v40[0] + 1528LL);
      if ( !v4 )
        v4 = *(_QWORD *)(v40[0] + 1520LL);
      *(_OWORD *)a2 = *(_OWORD *)(v4 + 88);
      if ( *a2 >= a2[2] || a2[1] >= a2[3] )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
        goto LABEL_26;
      }
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v41, (struct XDCOBJ *)v40, 0x402u);
      v5 = v41;
      if ( v41 )
      {
        v3 = v40[0];
        v6 = (_DWORD *)(v40[0] + 1416LL);
        if ( (*(_DWORD *)(v40[0] + 40LL) & 1) == 0 )
          v6 = (_DWORD *)(v40[0] + 1408LL);
        *a2 -= *v6;
        a2[2] -= *v6;
        a2[1] -= v6[1];
        a2[3] -= v6[1];
        v7 = *(_DWORD *)(v5 + 32);
        v8 = a2[3];
        if ( (v7 & 1) == 0 )
        {
          v13 = a2[2];
          v14 = a2[1];
          v46.x = *a2;
          v47 = v13;
          x = v46.x;
          v51 = v13;
          v50 = v8;
          v52 = v8;
          v46.y = v14;
          v48 = v14;
          EXFORMOBJ::bXform((EXFORMOBJ *)&v41, &v46);
          v15 = v47;
          v16 = v47;
          v17 = v46.x;
          v18 = x;
          if ( v46.x < v47 )
            v16 = v46.x;
          if ( v16 >= x )
          {
            v19 = x;
          }
          else
          {
            v19 = v47;
            if ( v46.x < v47 )
              v19 = v46.x;
          }
          v20 = v51;
          if ( v19 >= v51 )
          {
            v22 = v51;
          }
          else
          {
            v21 = v47;
            if ( v46.x < v47 )
              v21 = v46.x;
            if ( v21 >= x )
            {
              v22 = x;
            }
            else
            {
              v22 = v47;
              if ( v46.x < v47 )
                v22 = v46.x;
            }
          }
          v23 = v48;
          y = v46.y;
          v25 = v46.y < v48;
          v26 = v50;
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
          v29 = v52;
          if ( v28 >= v52 )
          {
            v31 = v52;
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
          if ( v32 > v18 )
          {
            v33 = v15;
            if ( v17 > v15 )
              v33 = v17;
          }
          else
          {
            v33 = v18;
          }
          if ( v33 > v20 )
          {
            v37 = v15;
            if ( v17 > v15 )
              v37 = v17;
            if ( v37 <= v18 )
            {
              v15 = v18;
            }
            else if ( v17 > v15 )
            {
              v15 = v17;
            }
          }
          else
          {
            v15 = v20;
          }
          a2[2] = v15;
          v34 = v23;
          if ( y > v23 )
            v34 = y;
          if ( v34 > v26 )
          {
            v35 = v23;
            if ( y > v23 )
              v35 = y;
          }
          else
          {
            v35 = v26;
          }
          if ( v35 <= v29 )
          {
            v23 = v29;
          }
          else
          {
            v36 = v23;
            if ( y > v23 )
              v36 = y;
            if ( v36 > v26 )
            {
              if ( y > v23 )
                v23 = y;
            }
            else
            {
              v23 = v26;
            }
          }
          a2[3] = v23;
          v10 = 3;
          goto LABEL_18;
        }
        if ( (v7 & 0x43) == 0x43 || (v12 = (unsigned int)bCvtPts1(v5, a2, 2LL) == 0, v9 = 0, !v12) )
          v9 = 1;
        if ( v42 )
        {
          ++*a2;
          ++a2[2];
        }
        if ( v9 )
        {
          if ( *(_DWORD *)(v4 + 84) != 1 )
          {
            v10 = (*(_DWORD *)(v4 + 80) > 0xA0u) + 2;
LABEL_18:
            if ( (*(_DWORD *)(*(_QWORD *)(v3 + 80) + 312LL) & 1) != 0 )
            {
              v38 = *a2;
              v39 = a2[2];
              if ( *a2 > v39 )
              {
                *a2 = v39;
                a2[2] = v38;
              }
            }
            goto LABEL_19;
          }
LABEL_26:
          v10 = 1;
          goto LABEL_18;
        }
      }
    }
    else if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v40) )
    {
      *(_QWORD *)a2 = 0LL;
      v10 = 3;
      *((_QWORD *)a2 + 1) = 0LL;
LABEL_19:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v43);
      goto LABEL_20;
    }
    v10 = 0;
    goto LABEL_19;
  }
  EngSetLastError(6u);
  v10 = 0;
LABEL_20:
  if ( v40[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v40);
    _InterlockedDecrement((volatile signed __int32 *)(v40[0] + 12LL));
  }
  return v10;
}

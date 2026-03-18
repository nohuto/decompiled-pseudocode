/*
 * XREFs of ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C013A988
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C013A7A0 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C013AC44 (-vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 *     ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C013AD88 (-vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 */

void __fastcall vCalculateLine(struct _TRIVERTEX *a1, struct _TRIVERTEX *a2, struct _TRIANGLEDATA *a3)
{
  __int64 v4; // r15
  __int64 v6; // r12
  __int64 v8; // r13
  LONG y; // r11d
  LONG v10; // eax
  LONG x; // edi
  LONG v12; // r9d
  int v13; // r10d
  int v14; // r9d
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  LONG v19; // ecx
  LONG v20; // eax
  __int64 v21; // r8
  int v22; // edi
  int v23; // r9d
  __int64 v24; // rcx
  int v25; // esi
  int v26; // ecx
  int v27; // eax
  LONG v28; // [rsp+20h] [rbp-79h] BYREF
  LONG v29; // [rsp+24h] [rbp-75h]
  int v30; // [rsp+28h] [rbp-71h]
  int v31; // [rsp+2Ch] [rbp-6Dh]
  __int64 v32; // [rsp+30h] [rbp-69h]
  __int64 v33; // [rsp+38h] [rbp-61h]
  int v34; // [rsp+40h] [rbp-59h]
  int v35; // [rsp+44h] [rbp-55h]
  int v36; // [rsp+48h] [rbp-51h]
  LONG v37; // [rsp+4Ch] [rbp-4Dh]
  int v38; // [rsp+50h] [rbp-49h]
  int v39; // [rsp+54h] [rbp-45h]
  int v40; // [rsp+58h] [rbp-41h]
  __int64 v41; // [rsp+60h] [rbp-39h]
  __int64 v42; // [rsp+68h] [rbp-31h]
  __int64 v43; // [rsp+70h] [rbp-29h]
  __int64 v44; // [rsp+78h] [rbp-21h]
  __int64 v45; // [rsp+80h] [rbp-19h]
  __int64 v46; // [rsp+88h] [rbp-11h]
  __int64 v47; // [rsp+90h] [rbp-9h]
  __int64 v48; // [rsp+98h] [rbp-1h]
  __int64 v49; // [rsp+A0h] [rbp+7h]
  __int64 v50; // [rsp+A8h] [rbp+Fh]
  __int64 v51; // [rsp+100h] [rbp+67h]
  __int64 v52; // [rsp+110h] [rbp+77h]
  __int64 v53; // [rsp+118h] [rbp+7Fh]

  v4 = *((_QWORD *)a3 + 6);
  v6 = *((_QWORD *)a3 + 7);
  v8 = *((_QWORD *)a3 + 8);
  y = a1->y;
  v51 = *((_QWORD *)a3 + 9);
  v48 = v51;
  v10 = a2->y;
  v45 = v4;
  v46 = v6;
  v47 = v8;
  if ( v10 < y )
  {
    x = a2->x;
    v12 = a1->x;
    v13 = y - v10;
    v31 = y - v10;
    y = v10;
    v29 = v10;
  }
  else
  {
    x = a1->x;
    v12 = a2->x;
    v13 = v10 - y;
    v31 = v10 - y;
    v29 = y;
  }
  v28 = x;
  v14 = v12 - x;
  v15 = y - *((_DWORD *)a3 + 35);
  v16 = x - *((_DWORD *)a3 + 34);
  v52 = *((_QWORD *)a3 + 2);
  v30 = v14;
  v53 = *((_QWORD *)a3 + 3);
  v41 = *((_QWORD *)a3 + 10) + v4 * v15 + v16 * v52;
  v17 = *((_QWORD *)a3 + 11) + v6 * v15 + v16 * v53;
  v50 = *((_QWORD *)a3 + 4);
  v42 = v17;
  v18 = *((_QWORD *)a3 + 12) + v8 * v15 + v16 * v50;
  v49 = *((_QWORD *)a3 + 5);
  v43 = v18;
  v44 = *((_QWORD *)a3 + 13) + v51 * v15 + v16 * v49;
  if ( !v13 )
  {
    vHorizontalLine(a1, a2, a3, (struct _TRIDDA *)&v28);
    return;
  }
  v38 = 1;
  v19 = y + v13;
  v39 = y - *((_DWORD *)a3 + 28);
  v20 = *((_DWORD *)a3 + 3);
  v40 = v13;
  if ( y <= v20 && v19 >= *((_DWORD *)a3 + 1) )
  {
    if ( v19 > v20 )
      v40 = v20 - y;
    v37 = y;
    v21 = v13 + v13 * (__int64)x - v14 * (__int64)y - 1;
    v32 = v21;
    if ( v14 > 0 )
    {
      LODWORD(v33) = v14 / v13;
      v26 = v13 * (v14 / v13);
      v22 = v14 / v13;
    }
    else
    {
      if ( v14 >= 0 )
      {
        v22 = 0;
        v33 = 0LL;
        v23 = 0;
LABEL_11:
        v24 = v21 + y * v23;
        if ( v24 <= 0 )
        {
          if ( v24 >= 0 )
            v25 = 0;
          else
            v25 = -1 - (-1 - v24) / v13;
        }
        else
        {
          v25 = v24 / v13;
        }
        v34 = v24 - v25 * v13;
        v36 = v25 + y * v22;
        v35 = v13 - v34 - 1;
        v45 = v52 * v22 + v4;
        v46 = v53 * v22 + v6;
        v47 = v50 * v22 + v8;
        v48 = v49 * v22 + v51;
        vEdgeDDA(a3, (struct _TRIDDA *)&v28);
        return;
      }
      v26 = -v14;
      v30 = -v14;
      v27 = (-v14 - 1) / v13;
      v22 = -1 - v27;
      LODWORD(v33) = -1 - v27;
      v14 = v13 * (v27 + 1);
    }
    v23 = v14 - v26;
    HIDWORD(v33) = v23;
    goto LABEL_11;
  }
}

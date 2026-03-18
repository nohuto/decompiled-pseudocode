/*
 * XREFs of ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00834CC
 * Callers:
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00839B0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C00469A0 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0046CE0 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0046D60 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bOutline(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  struct EXFORMOBJ *v3; // r9
  EPATHOBJ *v4; // rsi
  _DWORD *v5; // r13
  int v6; // eax
  int v8; // r15d
  bool v9; // zf
  __int64 v10; // rbx
  _DWORD *v11; // rdi
  int v12; // r14d
  int v13; // r15d
  _DWORD *v14; // rsi
  int v15; // ebx
  int v16; // r12d
  __int64 v17; // rcx
  int v18; // r8d
  LONG v19; // edx
  int v20; // eax
  int v21; // ebx
  int v22; // r9d
  int v23; // eax
  signed int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  LONG v31; // eax
  signed int v32; // r14d
  int v33; // eax
  int v34; // r12d
  _DWORD *v35; // rsi
  int v36; // ebx
  int v37; // r8d
  LONG v38; // edx
  int v39; // r9d
  int v40; // ebx
  int v41; // eax
  int v42; // eax
  signed int v43; // ecx
  int v44; // ecx
  int v45; // eax
  int *v46; // rsi
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  LONG v50; // eax
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  LONG v56; // eax
  int v57; // eax
  int v58; // [rsp+20h] [rbp-28h]
  int v59; // [rsp+24h] [rbp-24h]
  __int64 i; // [rsp+28h] [rbp-20h]
  struct _POINTL v61; // [rsp+30h] [rbp-18h] BYREF
  int v62; // [rsp+38h] [rbp-10h]
  int v63; // [rsp+3Ch] [rbp-Ch]
  int v64; // [rsp+90h] [rbp+48h]
  int v67; // [rsp+A8h] [rbp+60h]

  v3 = a3;
  v4 = a2;
  v5 = (_DWORD *)(*(_QWORD *)this + 104LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  while ( 2 )
  {
    if ( !v6 )
      return 1LL;
    v8 = 0;
    v59 = v6 - 1;
    v9 = *v5 == 0;
    v58 = *v5;
LABEL_6:
    v67 = v8;
    if ( v9 )
    {
      v6 = v59;
      v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      continue;
    }
    break;
  }
  v10 = v8;
  if ( (int)v5[v8 + 3] > 0x7FFFFFF )
    goto LABEL_8;
  v61.x = v5[v8 + 3];
  v61.y = v5[1];
  v11 = v5;
  v12 = v8;
  if ( (unsigned int)EPATHOBJ::bMoveTo(v4, v3, &v61) )
  {
    v13 = v8 & 1;
    v64 = v13;
    v14 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
    v5[v10 + 3] += 0x10000000;
LABEL_11:
    v15 = *v14;
    v16 = 1;
    if ( !*v14 )
      goto LABEL_48;
    v17 = v13;
    for ( i = v13; ; v17 = i )
    {
      v18 = v11[v12 + 3];
      v19 = v18;
      if ( v18 > 0x7FFFFFF )
        v19 = v18 - 0x10000000;
      v20 = v14[v17 + 3];
      v21 = v15 - v13 - 1;
      v22 = v13;
      if ( v20 > 0x7FFFFFF )
        v20 -= 0x10000000;
      if ( v20 > v19 )
      {
        v21 = v13;
      }
      else
      {
        v23 = v14[v21 + 3];
        if ( v23 > 0x7FFFFFF )
          v23 -= 0x10000000;
        if ( v23 <= v19 )
          goto LABEL_48;
        v24 = (unsigned int)(v21 + v13) >> 1;
        if ( v24 != v13 )
        {
          do
          {
            v25 = v14[v24 + 3];
            if ( v25 > 0x7FFFFFF )
              v25 -= 0x10000000;
            if ( v25 <= v19 )
              v22 = v24;
            else
              v21 = v24;
            v24 = (unsigned int)(v21 + v22) >> 1;
          }
          while ( v24 != v22 );
        }
      }
      if ( (v21 & 1) == v13 )
      {
        v29 = v14[v21 + 3];
        if ( v29 > 0x7FFFFFF )
          v29 -= 0x10000000;
        v30 = v11[v12 + 4];
        if ( v30 > 0x7FFFFFF )
          v30 -= 0x10000000;
        if ( v29 >= v30 )
          goto LABEL_48;
      }
      else
      {
        if ( v12 )
        {
          v52 = v14[v21 + 2];
          if ( v52 > 0x7FFFFFF )
            v52 -= 0x10000000;
          v53 = v11[v12 + 2];
          if ( v53 > 0x7FFFFFF )
            v53 -= 0x10000000;
          if ( v52 < v53 )
          {
            v16 = -1;
LABEL_48:
            v31 = v11[v12 + 3];
            if ( v31 > 0x7FFFFFF )
              v31 -= 0x10000000;
            v61.x = v31;
            v32 = v16 + v12;
            v61.y = v11[2];
            v63 = v11[2];
            v33 = v11[v32 + 3];
            if ( v33 > 0x7FFFFFF )
              v33 -= 0x10000000;
            v62 = v33;
            if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
              return 0LL;
            v34 = -1;
            v35 = (_DWORD *)((char *)v11 - (unsigned int)(4 * *(v11 - 1) + 16));
            v11[v32 + 3] += 0x10000000;
            v36 = *v35;
            if ( *v35 )
            {
              while ( 1 )
              {
                v37 = v11[v32 + 3];
                v38 = v37;
                if ( v37 > 0x7FFFFFF )
                  v38 = v37 - 0x10000000;
                v39 = v13;
                v40 = v36 - v13 - 1;
                v41 = v35[v40 + 3];
                if ( v41 > 0x7FFFFFF )
                  v41 -= 0x10000000;
                if ( v41 >= v38 )
                {
                  v42 = v35[v13 + 3];
                  if ( v42 > 0x7FFFFFF )
                    v42 -= 0x10000000;
                  if ( v42 >= v38 )
                    break;
                  v43 = (unsigned int)(v40 + v13) >> 1;
                  if ( v43 != v13 )
                  {
                    do
                    {
                      v51 = v35[v43 + 3];
                      if ( v51 > 0x7FFFFFF )
                        v51 -= 0x10000000;
                      if ( v51 >= v38 )
                        v40 = v43;
                      else
                        v39 = v43;
                      v43 = (unsigned int)(v40 + v39) >> 1;
                    }
                    while ( v43 != v39 );
                  }
                  v40 = v39;
                }
                if ( (v40 & 1) == v13 )
                {
                  if ( v32 < (unsigned int)(*v11 - 1) )
                  {
                    v54 = v35[v40 + 4];
                    if ( v54 > 0x7FFFFFF )
                      v54 -= 0x10000000;
                    v55 = v11[v32 + 4];
                    if ( v55 > 0x7FFFFFF )
                      v55 -= 0x10000000;
                    if ( v54 > v55 )
                    {
                      v34 = 1;
                      break;
                    }
                  }
                  ++v40;
                }
                else
                {
                  v48 = v35[v40 + 3];
                  if ( v48 > 0x7FFFFFF )
                    v48 -= 0x10000000;
                  v49 = v11[v32 + 2];
                  if ( v49 > 0x7FFFFFF )
                    v49 -= 0x10000000;
                  if ( v48 <= v49 )
                    break;
                }
                v44 = v35[v40 + 3];
                v45 = v44;
                if ( v44 > 0x7FFFFFF )
                  v45 = v44 - 0x10000000;
                if ( v38 != v45 )
                  goto LABEL_123;
                if ( v37 > 0x7FFFFFF )
                  v37 -= 0x10000000;
                if ( v37 != v45 )
                  goto LABEL_123;
                if ( v44 > 0x7FFFFFF )
                  v44 -= 0x10000000;
                if ( v44 != v45 )
                {
LABEL_123:
                  v61.x = v38;
                  v61.y = v11[1];
                  v63 = v11[1];
                  v62 = v45;
                  if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
                    return 0LL;
                }
                v11 = v35;
                v32 = v40;
                v46 = v35 - 1;
                v47 = *v46;
                v11[v40 + 3] += 0x10000000;
                v35 = (int *)((char *)v46 - (unsigned int)(4 * v47 + 16) + 4);
                v36 = *v35;
                if ( !*v35 )
                  break;
                v13 = v64;
              }
            }
            if ( v5 != v11 || (v8 = v67, v67 != v32 - 1) )
            {
              v56 = v11[v32 + 3];
              if ( v56 > 0x7FFFFFF )
                v56 -= 0x10000000;
              v61.x = v56;
              v12 = v34 + v32;
              v61.y = v11[1];
              v63 = v11[1];
              v57 = v11[v12 + 3];
              if ( v57 > 0x7FFFFFF )
                v57 -= 0x10000000;
              v62 = v57;
              if ( (unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
              {
                v13 = v64;
                v14 = (_DWORD *)((char *)v11 + (unsigned int)(4 * *v11 + 16));
                v11[v12 + 3] += 0x10000000;
                goto LABEL_11;
              }
              return 0LL;
            }
            v50 = v11[v32 + 3];
            if ( v50 > 0x7FFFFFF )
              v50 -= 0x10000000;
            v4 = a2;
            v61.x = v50;
            v61.y = v11[1];
            if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 1) || !(unsigned int)EPATHOBJ::bCloseFigure(a2) )
              return 0LL;
            v3 = a3;
LABEL_8:
            v9 = ++v8 == v58;
            goto LABEL_6;
          }
        }
        --v21;
      }
      v26 = v14[v21 + 3];
      v27 = v26;
      if ( v26 > 0x7FFFFFF )
        v27 = v26 - 0x10000000;
      if ( v19 != v27 )
        goto LABEL_124;
      if ( v18 > 0x7FFFFFF )
        v18 -= 0x10000000;
      if ( v18 != v27 )
        goto LABEL_124;
      if ( v26 > 0x7FFFFFF )
        v26 -= 0x10000000;
      if ( v26 != v27 )
      {
LABEL_124:
        v61.x = v19;
        v61.y = v11[2];
        v63 = v11[2];
        v62 = v27;
        if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
          return 0LL;
      }
      v28 = *v14;
      v11 = v14;
      v12 = v21;
      v14[v21 + 3] += 0x10000000;
      v13 = v64;
      v14 = (_DWORD *)((char *)v14 + (unsigned int)(4 * v28 + 16));
      v15 = *v14;
      if ( !*v14 )
        goto LABEL_48;
    }
  }
  return 0LL;
}

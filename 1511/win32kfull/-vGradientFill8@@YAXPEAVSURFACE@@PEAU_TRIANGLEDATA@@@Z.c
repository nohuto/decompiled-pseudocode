/*
 * XREFs of ?vGradientFill8@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02CD0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C012CF38 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill8(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // esi
  char *v3; // r15
  __int64 v4; // r12
  struct SURFACE *v5; // r13
  struct _TRIANGLEDATA *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int8 *v10; // rax
  int v11; // edx
  _BYTE *v12; // rdi
  __int64 v13; // rdi
  int v14; // r14d
  int v15; // r11d
  int v16; // r10d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  int v21; // r9d
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rsi
  _BYTE *v25; // r14
  int v26; // r15d
  unsigned __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r11
  unsigned __int8 v31; // r10
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // r9
  int v34; // [rsp+20h] [rbp-B8h]
  int v35; // [rsp+24h] [rbp-B4h]
  __int64 v36; // [rsp+28h] [rbp-B0h]
  __int64 v37; // [rsp+30h] [rbp-A8h]
  char *v38; // [rsp+40h] [rbp-98h]
  __int64 v39; // [rsp+48h] [rbp-90h]
  unsigned __int8 *v40; // [rsp+50h] [rbp-88h]
  __int64 v41; // [rsp+58h] [rbp-80h]
  _BYTE *v42; // [rsp+60h] [rbp-78h]
  unsigned __int8 *Xlate555; // [rsp+68h] [rbp-70h]
  _BYTE *v44; // [rsp+70h] [rbp-68h]
  __int64 v45; // [rsp+80h] [rbp-58h]
  int v48; // [rsp+F0h] [rbp+18h]
  int v49; // [rsp+F8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a1;
  v6 = a2;
  v48 = v2;
  v38 = (char *)a2 + 168;
  v7 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v8 = *((_QWORD *)a2 + 19);
  v39 = *((_QWORD *)a2 + 2);
  v36 = *((_QWORD *)a2 + 3);
  v9 = *(_QWORD *)(v8 + 56);
  v37 = v7;
  v41 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v9 + 24) & 0x100000) != 0 )
  {
    v42 = &gDitherMatrix16x16Halftone;
    v10 = (unsigned __int8 *)&HalftoneSaturationTable;
  }
  else
  {
    v42 = gDitherMatrix16x16Default;
    v10 = DefaultSaturationTable;
  }
  v11 = *(_DWORD *)(v8 + 76);
  v40 = v10;
  if ( (v11 & 0x800) != 0 )
  {
    if ( (struct PALETTE *)v9 == ppalDefault )
    {
      v12 = &unk_1C0320E84;
    }
    else
    {
      if ( (v11 & 0x1000) != 0 )
        v13 = *(_QWORD *)(v9 + 80);
      else
        v13 = *(_QWORD *)(v9 + 72);
      v12 = (_BYTE *)(v13 + 4);
    }
  }
  else
  {
    v12 = vTranslateIdentity;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v8);
  if ( Xlate555 )
  {
    v14 = *((_DWORD *)v6 + 29);
    if ( *((_DWORD *)v6 + 3) < v14 )
      v14 = *((_DWORD *)v6 + 3);
    v49 = *((_DWORD *)v6 + 33);
    v35 = v14;
    v34 = *((_DWORD *)v6 + 32);
    if ( v2 < v14 )
    {
      v45 = v4;
      do
      {
        v15 = *(_DWORD *)v6;
        v16 = *((_DWORD *)v6 + 2);
        v17 = *((_QWORD *)v3 + 1);
        if ( *(_DWORD *)v3 > *(_DWORD *)v6 )
          v15 = *(_DWORD *)v3;
        v18 = *((_QWORD *)v3 + 2);
        if ( *((_DWORD *)v3 + 1) < v16 )
          v16 = *((_DWORD *)v3 + 1);
        v19 = *((_QWORD *)v3 + 3);
        v44 = &v42[16 * (((unsigned __int8)v2 + (unsigned __int8)v49) & 0xF)];
        v20 = v7 + v15;
        if ( *((_QWORD *)v5 + 9) <= v20 && v15 < v16 )
        {
          v21 = *(_DWORD *)v6 - *(_DWORD *)v3;
          v22 = v7 + v16;
          if ( v21 > 0 )
          {
            v17 += v39 * v21;
            v18 += v36 * v21;
            v19 += v41 * v21;
          }
          v23 = v22 - v20;
          if ( v20 > v22 )
            v23 = 0LL;
          if ( v23 )
          {
            v24 = 0LL;
            v25 = (_BYTE *)(v7 + v15);
            v26 = v15 + v34;
            do
            {
              v27 = v17;
              v17 += v39;
              v28 = v26++ & 0xF;
              ++v24;
              v29 = (unsigned __int8)v44[v28];
              v30 = (unsigned int)v29;
              v31 = v40[v29 + HIBYTE(v27)];
              v32 = v18;
              v18 += v36;
              LOBYTE(v29) = v40[v29 + HIBYTE(v32)];
              v33 = v19;
              v19 += v41;
              *v25++ = v12[Xlate555[(v40[v30 + HIBYTE(v33)] >> 3) | (unsigned __int64)(int)(4
                                                                                          * (v29 & 0xF8 | (32 * (v31 & 0xF8))))]];
            }
            while ( v24 < v23 );
            v6 = a2;
            v2 = v48;
            v7 = v37;
            v14 = v35;
            v3 = v38;
            v5 = a1;
          }
        }
        v7 += v45;
        v3 += 40;
        ++v2;
        v37 = v7;
        v38 = v3;
        v48 = v2;
      }
      while ( v2 < v14 );
    }
  }
}

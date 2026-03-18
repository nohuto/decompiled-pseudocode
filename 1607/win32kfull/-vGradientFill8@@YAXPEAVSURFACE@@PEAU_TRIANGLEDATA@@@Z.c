/*
 * XREFs of ?vGradientFill8@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02D0230
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0136668 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
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
  _BYTE *v20; // r8
  int v21; // r9d
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbp
  _BYTE *v25; // r14
  int v26; // r15d
  unsigned __int64 v27; // r9
  __int64 v28; // r8
  int v29; // r11d
  __int64 v30; // r8
  unsigned __int64 v31; // r9
  int v32; // r10d
  unsigned __int64 v33; // r9
  int v34; // [rsp+20h] [rbp-B8h]
  int v35; // [rsp+24h] [rbp-B4h]
  _BYTE *v36; // [rsp+28h] [rbp-B0h]
  unsigned __int8 *v37; // [rsp+38h] [rbp-A0h]
  __int64 v38; // [rsp+40h] [rbp-98h]
  __int64 v39; // [rsp+48h] [rbp-90h]
  __int64 v40; // [rsp+50h] [rbp-88h]
  __int64 v41; // [rsp+58h] [rbp-80h]
  char *v42; // [rsp+60h] [rbp-78h]
  unsigned __int8 *Xlate555; // [rsp+68h] [rbp-70h]
  __int64 v44; // [rsp+80h] [rbp-58h]
  int v47; // [rsp+F0h] [rbp+18h]
  int v48; // [rsp+F8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a1;
  v6 = a2;
  v47 = v2;
  v42 = (char *)a2 + 168;
  v7 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v8 = *((_QWORD *)a2 + 19);
  v38 = *((_QWORD *)a2 + 2);
  v39 = *((_QWORD *)a2 + 3);
  v9 = *(_QWORD *)(v8 + 56);
  v41 = v7;
  v40 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v9 + 24) & 0x100000) != 0 )
  {
    v36 = &gDitherMatrix16x16Halftone;
    v10 = (unsigned __int8 *)&HalftoneSaturationTable;
  }
  else
  {
    v36 = gDitherMatrix16x16Default;
    v10 = DefaultSaturationTable;
  }
  v11 = *(_DWORD *)(v8 + 76);
  v37 = v10;
  if ( (v11 & 0x800) != 0 )
  {
    if ( (struct PALETTE *)v9 == ppalDefault )
    {
      v12 = &unk_1C0325F44;
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
    v48 = *((_DWORD *)v6 + 33);
    v35 = v14;
    v34 = *((_DWORD *)v6 + 32);
    if ( v2 < v14 )
    {
      v44 = v4;
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
        v20 = (_BYTE *)(v7 + v15);
        if ( *((_QWORD *)v5 + 9) <= (unsigned __int64)v20 && v15 < v16 )
        {
          v21 = *(_DWORD *)v6 - *(_DWORD *)v3;
          v22 = v7 + v16;
          if ( v21 > 0 )
          {
            v17 += v38 * v21;
            v18 += v39 * v21;
            v19 += v40 * v21;
          }
          v23 = v22 - (_QWORD)v20;
          if ( (unsigned __int64)v20 > v22 )
            v23 = 0LL;
          if ( v23 )
          {
            v24 = 0LL;
            v25 = v20;
            v26 = v15 + v34;
            do
            {
              v27 = v17;
              v17 += v38;
              v28 = v26++ & 0xF;
              ++v24;
              v29 = (unsigned __int8)v36[16 * (((unsigned __int8)v2 + (unsigned __int8)v48) & 0xF) + v28];
              v30 = (int)(v29 + HIBYTE(v27));
              v31 = v18;
              v18 += v39;
              v32 = v37[(int)(v29 + HIBYTE(v31))] & 0xF8 | (32 * (v37[v30] & 0xF8));
              v33 = v19;
              v19 += v40;
              *v25++ = v12[Xlate555[(v37[(int)(v29 + HIBYTE(v33))] >> 3) | (unsigned __int64)(4 * v32)]];
            }
            while ( v24 < v23 );
            v6 = a2;
            v2 = v47;
            v7 = v41;
            v14 = v35;
            v3 = v42;
            v5 = a1;
          }
        }
        v7 += v44;
        v3 += 40;
        ++v2;
        v41 = v7;
        v42 = v3;
        v47 = v2;
      }
      while ( v2 < v14 );
    }
  }
}

/*
 * XREFs of ?vFillGRectDIB8@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CE990
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0136668 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB8(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rbx
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // r12
  char *v6; // r13
  int v7; // edx
  __int64 v8; // rdi
  _BYTE *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // r15
  int v15; // r11d
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r9
  char *v21; // rsi
  _BYTE *v22; // r12
  __int64 v23; // rbp
  __int64 v24; // r13
  char v25; // r8
  int v26; // r11d
  unsigned __int64 v27; // r8
  unsigned __int8 v28; // r9
  int v29; // [rsp+20h] [rbp-C8h]
  char v30; // [rsp+24h] [rbp-C4h]
  unsigned __int8 *v31; // [rsp+28h] [rbp-C0h]
  char *v32; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v33; // [rsp+38h] [rbp-B0h]
  __int64 v34; // [rsp+40h] [rbp-A8h]
  __int64 v35; // [rsp+48h] [rbp-A0h]
  __int64 v36; // [rsp+50h] [rbp-98h]
  __int64 v37; // [rsp+58h] [rbp-90h]
  __int64 v38; // [rsp+60h] [rbp-88h]
  __int64 v39; // [rsp+68h] [rbp-80h]
  __int64 v40; // [rsp+70h] [rbp-78h]
  __int64 v41; // [rsp+78h] [rbp-70h]
  __int64 v42; // [rsp+80h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+98h] [rbp-50h]
  int v44; // [rsp+F0h] [rbp+8h]
  int v46; // [rsp+100h] [rbp+18h]
  int v47; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v29 = *((_DWORD *)a1 + 22);
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_QWORD *)a2 + 20);
  v46 = v3 + *((_DWORD *)a2 + 11);
  v44 = v3;
  v5 = *((_QWORD *)a1 + 10) + v29 * v3;
  v36 = *((_QWORD *)a2 + 14);
  v37 = *((_QWORD *)a2 + 15);
  v38 = *((_QWORD *)a2 + 16);
  v40 = *((_QWORD *)a2 + 10);
  v41 = *((_QWORD *)a2 + 11);
  v42 = *((_QWORD *)a2 + 12);
  v39 = v5;
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 56) + 24LL) & 0x100000) != 0 )
  {
    v31 = (unsigned __int8 *)&HalftoneSaturationTable;
    v6 = (char *)&gDitherMatrix16x16Halftone;
  }
  else
  {
    v6 = (char *)&gDitherMatrix16x16Default;
    v31 = DefaultSaturationTable;
  }
  v32 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v4);
  if ( Xlate555 )
  {
    v7 = *(_DWORD *)(v4 + 76);
    if ( (v7 & 0x800) != 0 )
    {
      v8 = *(_QWORD *)(v4 + 56);
      if ( (struct PALETTE *)v8 == ppalDefault )
      {
        v6 = (char *)&gDitherMatrix16x16Default;
        v31 = DefaultSaturationTable;
        v32 = (char *)&gDitherMatrix16x16Default;
        v9 = &unk_1C0325F44;
      }
      else
      {
        if ( (v7 & 0x1000) != 0 )
          v10 = *(_QWORD *)(v8 + 80);
        else
          v10 = *(_QWORD *)(v8 + 72);
        v9 = (_BYTE *)(v10 + 4);
      }
    }
    else
    {
      v9 = vTranslateIdentity;
    }
    v11 = *((int *)v2 + 45);
    v12 = *((_QWORD *)v2 + 6);
    v13 = *((_QWORD *)v2 + 7);
    v14 = *((_QWORD *)v2 + 8);
    v33 = v12;
    v34 = v13;
    v35 = v14;
    if ( (_DWORD)v11 )
    {
      v12 += v40 * v11;
      v13 += v41 * v11;
      v33 = v12;
      v34 = v13;
      v14 += v42 * v11;
      v35 = v14;
    }
    v15 = *((_DWORD *)v2 + 37);
    v47 = *((_DWORD *)v2 + 36);
    v30 = v15;
    while ( v3 < v46 )
    {
      v16 = *((int *)v2 + 44);
      v17 = v12;
      v18 = v13;
      v19 = v14;
      if ( (_DWORD)v16 )
      {
        v17 = v12 + v36 * v16;
        v18 = v13 + v37 * v16;
        v19 = v14 + v38 * v16;
      }
      v20 = *((int *)v2 + 8);
      if ( (int)v20 < (int)v20 + *((_DWORD *)v2 + 10) )
      {
        v21 = &v6[16 * (((unsigned __int8)v15 + (unsigned __int8)v3) & 0xF)];
        v22 = (_BYTE *)(v5 + v20);
        v23 = *((unsigned int *)v2 + 10);
        v24 = (int)v20 + v47;
        do
        {
          v25 = v24++;
          v26 = (unsigned __int8)v21[v25 & 0xF];
          v27 = HIWORD(v17);
          v17 += v36;
          BYTE6(v27) = BYTE6(v18);
          v18 += v37;
          v28 = v31[v26 + BYTE6(v27)];
          BYTE6(v27) = BYTE6(v19);
          v19 += v38;
          *v22++ = v9[Xlate555[(v31[v26 + BYTE6(v27)] >> 3) | (unsigned __int64)(4
                                                                               * (v28 & 0xF8 | (32
                                                                                              * (v31[v26 + (unsigned __int8)v27] & 0xF8))))]];
          --v23;
        }
        while ( v23 );
        v2 = a2;
        v3 = v44;
        v12 = v33;
        v13 = v34;
        v14 = v35;
        v5 = v39;
        v6 = v32;
      }
      v12 += v40;
      v13 += v41;
      v14 += v42;
      LOBYTE(v15) = v30;
      v5 += v29;
      ++v3;
      v39 = v5;
      v44 = v3;
      v33 = v12;
      v34 = v13;
      v35 = v14;
    }
  }
}

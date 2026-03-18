/*
 * XREFs of ?vFillGRectDIB8@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CABB0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0101EA8 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
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
  __int64 v26; // r11
  unsigned __int64 v27; // r8
  int v28; // r10d
  char *v29; // [rsp+20h] [rbp-D8h]
  int v30; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v31; // [rsp+30h] [rbp-C8h]
  unsigned __int8 *v32; // [rsp+38h] [rbp-C0h]
  __int64 v33; // [rsp+40h] [rbp-B8h]
  char v34; // [rsp+48h] [rbp-B0h]
  __int64 v35; // [rsp+50h] [rbp-A8h]
  __int64 v36; // [rsp+58h] [rbp-A0h]
  __int64 v37; // [rsp+60h] [rbp-98h]
  __int64 v38; // [rsp+68h] [rbp-90h]
  __int64 v39; // [rsp+70h] [rbp-88h]
  __int64 v40; // [rsp+78h] [rbp-80h]
  __int64 v41; // [rsp+80h] [rbp-78h]
  __int64 v42; // [rsp+88h] [rbp-70h]
  unsigned __int8 *Xlate555; // [rsp+A0h] [rbp-58h]
  int v44; // [rsp+100h] [rbp+8h]
  int v46; // [rsp+110h] [rbp+18h]
  int v47; // [rsp+118h] [rbp+20h]

  v2 = a2;
  v30 = *((_DWORD *)a1 + 22);
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_QWORD *)a2 + 20);
  v46 = v3 + *((_DWORD *)a2 + 11);
  v44 = v3;
  v5 = *((_QWORD *)a1 + 10) + v30 * v3;
  v38 = *((_QWORD *)a2 + 14);
  v36 = *((_QWORD *)a2 + 15);
  v41 = *((_QWORD *)a2 + 16);
  v42 = *((_QWORD *)a2 + 10);
  v37 = *((_QWORD *)a2 + 11);
  v39 = *((_QWORD *)a2 + 12);
  v40 = v5;
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 56) + 24LL) & 0x100000) != 0 )
  {
    v32 = (unsigned __int8 *)&HalftoneSaturationTable;
    v6 = (char *)&gDitherMatrix16x16Halftone;
  }
  else
  {
    v6 = (char *)&gDitherMatrix16x16Default;
    v32 = DefaultSaturationTable;
  }
  v29 = v6;
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
        v32 = DefaultSaturationTable;
        v29 = (char *)&gDitherMatrix16x16Default;
        v9 = &unk_1C0320E84;
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
    v31 = v12;
    v33 = v13;
    v35 = v14;
    if ( (_DWORD)v11 )
    {
      v12 += v42 * v11;
      v13 += v37 * v11;
      v31 = v12;
      v33 = v13;
      v14 += v39 * v11;
      v35 = v14;
    }
    v15 = *((_DWORD *)v2 + 37);
    v47 = *((_DWORD *)v2 + 36);
    v34 = v15;
    while ( v3 < v46 )
    {
      v16 = *((int *)v2 + 44);
      v17 = v12;
      v18 = v13;
      v19 = v14;
      if ( (_DWORD)v16 )
      {
        v17 = v12 + v38 * v16;
        v18 = v13 + v36 * v16;
        v19 = v14 + v41 * v16;
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
          v17 += v38;
          BYTE6(v27) = BYTE6(v18);
          v18 += v36;
          v28 = v32[v26 + BYTE6(v27)] & 0xF8 | (32 * (v32[v26 + (unsigned __int8)v27] & 0xF8));
          BYTE6(v27) = BYTE6(v19);
          v19 += v41;
          *v22++ = v9[Xlate555[(v32[v26 + BYTE6(v27)] >> 3) | (unsigned __int64)(4 * v28)]];
          --v23;
        }
        while ( v23 );
        v2 = a2;
        v3 = v44;
        v12 = v31;
        v13 = v33;
        v14 = v35;
        v5 = v40;
        v6 = v29;
      }
      v12 += v42;
      v13 += v37;
      v14 += v39;
      LOBYTE(v15) = v34;
      v5 += v30;
      ++v3;
      v40 = v5;
      v44 = v3;
      v31 = v12;
      v33 = v13;
      v35 = v14;
    }
  }
}

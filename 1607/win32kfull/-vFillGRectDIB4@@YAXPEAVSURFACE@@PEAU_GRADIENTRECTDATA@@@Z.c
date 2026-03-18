/*
 * XREFs of ?vFillGRectDIB4@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CE640
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0136668 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB4(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // esi
  struct _GRADIENTRECTDATA *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r12
  int v9; // edx
  __int64 v10; // rdi
  _BYTE *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // r15
  int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // r13d
  char *v25; // r12
  char v26; // bl
  int v27; // r11d
  char v28; // dl
  char v29; // al
  int v30; // [rsp+20h] [rbp-B8h]
  char v31; // [rsp+24h] [rbp-B4h]
  __int64 v32; // [rsp+28h] [rbp-B0h]
  __int64 v33; // [rsp+30h] [rbp-A8h]
  __int64 v34; // [rsp+38h] [rbp-A0h]
  __int64 v35; // [rsp+40h] [rbp-98h]
  __int64 v36; // [rsp+48h] [rbp-90h]
  __int64 v37; // [rsp+50h] [rbp-88h]
  __int64 v38; // [rsp+58h] [rbp-80h]
  __int64 v39; // [rsp+60h] [rbp-78h]
  __int64 v40; // [rsp+68h] [rbp-70h]
  char *v41; // [rsp+70h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+78h] [rbp-60h]
  __int64 v43; // [rsp+80h] [rbp-58h]
  __int64 v44; // [rsp+88h] [rbp-50h]
  int v45; // [rsp+E0h] [rbp+8h]
  int v47; // [rsp+F0h] [rbp+18h]
  int v48; // [rsp+F8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 9);
  v3 = a2;
  v4 = *((int *)a1 + 22);
  v47 = v2 + *((_DWORD *)a2 + 11);
  v45 = v2;
  v5 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v6 = *((_QWORD *)a2 + 20);
  v32 = *((_QWORD *)a2 + 14);
  v33 = *((_QWORD *)a2 + 15);
  v38 = *((_QWORD *)a2 + 16);
  v39 = *((_QWORD *)a2 + 11);
  v7 = *((_QWORD *)a2 + 12);
  v34 = v5;
  v8 = *((_QWORD *)a2 + 10);
  v9 = *(_DWORD *)(v6 + 76);
  v44 = v8;
  v40 = v7;
  if ( (v9 & 0x800) != 0 )
  {
    v10 = *(_QWORD *)(v6 + 56);
    if ( (struct PALETTE *)v10 == ppalDefault )
    {
      v11 = &unk_1C0325F44;
    }
    else
    {
      if ( (v9 & 0x1000) != 0 )
        v12 = *(_QWORD *)(v10 + 80);
      else
        v12 = *(_QWORD *)(v10 + 72);
      v11 = (_BYTE *)(v12 + 4);
    }
  }
  else
  {
    v11 = vTranslateIdentity;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v6);
  if ( Xlate555 )
  {
    v13 = *((int *)v3 + 45);
    v14 = *((_QWORD *)v3 + 6);
    v15 = *((_QWORD *)v3 + 7);
    v16 = *((_QWORD *)v3 + 8);
    v35 = v14;
    v36 = v15;
    v37 = v16;
    if ( (_DWORD)v13 )
    {
      v15 += v39 * v13;
      v36 = v15;
      v14 += v8 * v13;
      v16 += v40 * v13;
      v35 = v14;
      v37 = v16;
    }
    v17 = *((_DWORD *)v3 + 37);
    v31 = v17;
    v48 = *((_DWORD *)v3 + 36);
    if ( v2 < v47 )
    {
      v18 = v32;
      v19 = v33;
      v43 = v4;
      do
      {
        v20 = v14;
        v21 = v15;
        v22 = *((int *)v3 + 44);
        v41 = (char *)&gDitherMatrix16x16Default + 16 * (((unsigned __int8)v17 + (unsigned __int8)v2) & 0xF);
        v23 = v16;
        if ( (_DWORD)v22 )
        {
          v20 = v14 + v18 * v22;
          v21 = v15 + v19 * v22;
          v23 = v16 + v38 * v22;
        }
        v24 = *((_DWORD *)v3 + 8);
        v25 = (char *)(v34 + v24 / 2);
        v30 = v24 + *((_DWORD *)v3 + 10);
        if ( v24 < v30 )
        {
          v26 = v24 + v48;
          do
          {
            v27 = (unsigned __int8)v41[v26 & 0xF];
            v28 = v11[Xlate555[(DefaultSaturationTable[v27 + BYTE6(v23)] >> 3) | (unsigned __int64)(4
                                                                                                  * (DefaultSaturationTable[v27 + BYTE6(v21)] & 0xF8 | (32 * (DefaultSaturationTable[v27 + BYTE6(v20)] & 0xF8))))]];
            v29 = *v25;
            if ( (v24 & 1) != 0 )
              *v25++ = v28 | v29 & 0xF0;
            else
              *v25 = (16 * v28) | v29 & 0xF;
            v21 += v33;
            ++v24;
            v23 += v38;
            ++v26;
            v20 += v32;
          }
          while ( v24 < v30 );
          v3 = a2;
          v2 = v45;
          v14 = v35;
          v15 = v36;
          v16 = v37;
          v18 = v32;
          v19 = v33;
        }
        v14 += v44;
        ++v2;
        v15 += v39;
        v16 += v40;
        v34 += v43;
        LOBYTE(v17) = v31;
        v35 = v14;
        v36 = v15;
        v37 = v16;
        v45 = v2;
      }
      while ( v2 < v47 );
    }
  }
}

/*
 * XREFs of ?vGradientFill4@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02CC180
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0101EA8 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill4(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // esi
  char *v3; // r12
  __int64 v4; // r14
  struct _TRIANGLEDATA *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rdi
  _BYTE *v11; // rdi
  __int64 v12; // rdi
  int v13; // ebp
  int v14; // edx
  int v15; // r11d
  int v16; // r10d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  int v20; // r13d
  char *v21; // r14
  int v22; // r13d
  __int64 v23; // rbx
  char v24; // bp
  __int64 v25; // r11
  char v26; // dl
  char v27; // al
  int v28; // [rsp+20h] [rbp-98h]
  int v29; // [rsp+28h] [rbp-90h]
  __int64 v30; // [rsp+30h] [rbp-88h]
  char *v31; // [rsp+38h] [rbp-80h]
  __int64 v32; // [rsp+40h] [rbp-78h]
  __int64 v33; // [rsp+48h] [rbp-70h]
  __int64 v34; // [rsp+50h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+58h] [rbp-60h]
  _BYTE *v36; // [rsp+60h] [rbp-58h]
  __int64 v37; // [rsp+68h] [rbp-50h]
  int v38; // [rsp+C0h] [rbp+8h]
  int v40; // [rsp+D8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v38 = v2;
  v31 = (char *)a2 + 168;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v7 = *((_QWORD *)a2 + 19);
  v34 = *((_QWORD *)a2 + 2);
  v32 = *((_QWORD *)a2 + 3);
  v8 = *((_QWORD *)a2 + 4);
  v9 = *(_DWORD *)(v7 + 76);
  v33 = v6;
  v30 = v8;
  if ( (v9 & 0x800) != 0 )
  {
    v10 = *(_QWORD *)(v7 + 56);
    if ( (struct PALETTE *)v10 == ppalDefault )
    {
      v11 = &unk_1C0320E84;
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
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v7);
  if ( Xlate555 )
  {
    v13 = *((_DWORD *)v5 + 29);
    v14 = *((_DWORD *)v5 + 33);
    if ( *((_DWORD *)v5 + 3) < v13 )
      v13 = *((_DWORD *)v5 + 3);
    v28 = v13;
    v29 = *((_DWORD *)v5 + 33);
    v40 = *((_DWORD *)v5 + 32);
    if ( v2 < v13 )
    {
      v37 = v4;
      do
      {
        v15 = *(_DWORD *)v5;
        v16 = *((_DWORD *)v5 + 2);
        v17 = *((_QWORD *)v3 + 1);
        v18 = *((_QWORD *)v3 + 2);
        if ( *(_DWORD *)v3 > *(_DWORD *)v5 )
          v15 = *(_DWORD *)v3;
        v19 = *((_QWORD *)v3 + 3);
        if ( *((_DWORD *)v3 + 1) < v16 )
          v16 = *((_DWORD *)v3 + 1);
        v36 = &gDitherMatrix16x16Default[16 * (((unsigned __int8)v14 + (unsigned __int8)v2) & 0xF)];
        if ( v15 < v16 )
        {
          v20 = *(_DWORD *)v5 - *(_DWORD *)v3;
          v21 = (char *)(v6 + v15 / 2);
          if ( v20 > 0 )
          {
            v17 += v34 * v20;
            v18 += v32 * v20;
            v19 += v30 * v20;
          }
          v22 = v15 & 1;
          v23 = (unsigned int)(v16 - v15);
          v24 = v15 + v40;
          do
          {
            v25 = (unsigned __int8)v36[v24 & 0xF];
            v26 = v11[Xlate555[(DefaultSaturationTable[v25 + HIBYTE(v19)] >> 3) | (unsigned __int64)(4 * (DefaultSaturationTable[v25 + HIBYTE(v18)] & 0xF8 | (32 * (DefaultSaturationTable[v25 + HIBYTE(v17)] & 0xF8))))]];
            v27 = *v21;
            if ( v22 )
            {
              v22 = 0;
              *v21++ = v26 | v27 & 0xF0;
            }
            else
            {
              v22 = 1;
              *v21 = (16 * v26) | v27 & 0xF;
            }
            v19 += v30;
            ++v24;
            v17 += v34;
            v18 += v32;
            --v23;
          }
          while ( v23 );
          v5 = a2;
          v2 = v38;
          v13 = v28;
          v6 = v33;
          v3 = v31;
          LOBYTE(v14) = v29;
        }
        v6 += v37;
        v3 += 40;
        ++v2;
        v33 = v6;
        v31 = v3;
        v38 = v2;
      }
      while ( v2 < v13 );
    }
  }
}

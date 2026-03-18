/*
 * XREFs of ?vFillGRectDIB16Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02C9C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vFillGRectDIB16Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r14d
  struct _GRADIENTRECTDATA *v3; // rbp
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _WORD *v21; // r8
  _WORD *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbp
  char v25; // al
  _WORD *v26; // r14
  int v27; // ecx
  __int16 v28; // ax
  __int64 v29; // [rsp+20h] [rbp-D8h]
  __int64 v30; // [rsp+28h] [rbp-D0h]
  char v31; // [rsp+30h] [rbp-C8h]
  __int64 v32; // [rsp+38h] [rbp-C0h]
  __int64 v33; // [rsp+40h] [rbp-B8h]
  __int64 v34; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+50h] [rbp-A8h]
  __int64 v36; // [rsp+58h] [rbp-A0h]
  __int64 v37; // [rsp+60h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-78h]
  __int64 v40; // [rsp+88h] [rbp-70h]
  __int64 v41; // [rsp+90h] [rbp-68h]
  __int64 v42; // [rsp+98h] [rbp-60h]
  __int64 v43; // [rsp+A0h] [rbp-58h]
  int v44; // [rsp+100h] [rbp+8h]
  int v46; // [rsp+110h] [rbp+18h]
  int v47; // [rsp+118h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 9);
  v3 = a2;
  v4 = *((int *)a1 + 22);
  v5 = v2 + *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 10);
  v7 = *((_QWORD *)a2 + 11);
  v8 = *((_QWORD *)a2 + 12);
  v9 = *((_QWORD *)a2 + 6);
  v10 = *((_QWORD *)a2 + 7);
  v11 = *((_QWORD *)a2 + 8);
  v12 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v37 = *((_QWORD *)v3 + 14);
  v36 = *((_QWORD *)v3 + 15);
  v34 = *((_QWORD *)v3 + 16);
  v40 = *((_QWORD *)v3 + 21);
  v13 = *((int *)v3 + 45);
  v46 = v2;
  v47 = v5;
  v33 = v12;
  v38 = v6;
  v39 = v7;
  v41 = v8;
  v29 = v9;
  v30 = v10;
  v32 = v11;
  if ( (_DWORD)v13 )
  {
    v9 += v6 * v13;
    v10 += v7 * v13;
    v29 = v9;
    v30 = v10;
    v11 += v8 * v13;
    v32 = v11;
  }
  v14 = *((_DWORD *)v3 + 37);
  v31 = v14;
  if ( v2 < v5 )
  {
    v43 = v4;
    do
    {
      v15 = v9;
      v16 = v10;
      v17 = v11;
      v42 = 0x1C0000000LL + 16LL * (((_BYTE)v14 + (_BYTE)v2) & 3) + 3282080;
      v18 = *((int *)v3 + 44);
      if ( (_DWORD)v18 )
      {
        v15 = v9 + v37 * v18;
        v16 = v10 + v36 * v18;
        v17 = v11 + v34 * v18;
      }
      v19 = *((int *)v3 + 8);
      v20 = *((int *)v3 + 10);
      v35 = 0LL;
      v44 = v19 + *((_DWORD *)v3 + 36);
      v21 = (_WORD *)(v12 + 2 * v19);
      v22 = &v21[v20];
      v23 = (unsigned __int64)(2 * v20 + 1) >> 1;
      if ( v21 > v22 )
        v23 = 0LL;
      if ( v23 )
      {
        v24 = v23;
        v25 = v44;
        v26 = v21;
        do
        {
          v27 = *(_DWORD *)(v42 + 4LL * (v25 & 3));
          v28 = XEPALOBJ::ulDispatchGFPEFunction(
                  v40,
                  *(unsigned int *)(*(_QWORD *)v40 + 104LL),
                  8
                * (Saturation16_5[(unsigned __int64)(unsigned int)(v27 + (HIDWORD(v15) >> 3)) >> 16] | ((Saturation16_5[(unsigned __int64)(unsigned int)(v27 + (HIDWORD(v16) >> 3)) >> 16] | (Saturation16_5[(unsigned __int64)(unsigned int)(v27 + (HIDWORD(v17) >> 3)) >> 16] << 8)) << 8)));
          v15 += v37;
          *v26++ = v28;
          v25 = v44 + 1;
          ++v35;
          v16 += v36;
          ++v44;
          v17 += v34;
        }
        while ( v35 < v24 );
        v3 = a2;
        v2 = v46;
        v9 = v29;
        v10 = v30;
        v11 = v32;
        v12 = v33;
        v5 = v47;
        v6 = v38;
        v7 = v39;
      }
      v11 += v41;
      v12 += v43;
      v9 += v6;
      LOBYTE(v14) = v31;
      v10 += v7;
      ++v2;
      v29 = v9;
      v30 = v10;
      v32 = v11;
      v46 = v2;
      v33 = v12;
    }
    while ( v2 < v5 );
  }
}

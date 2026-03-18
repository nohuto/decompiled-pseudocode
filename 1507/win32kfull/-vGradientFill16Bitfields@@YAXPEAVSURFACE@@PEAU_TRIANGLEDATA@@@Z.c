/*
 * XREFs of ?vGradientFill16Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02CAF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill16Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  __int64 v2; // r8
  struct _TRIANGLEDATA *v3; // r14
  int v4; // edx
  struct SURFACE *v5; // r9
  char *v6; // r12
  __int64 v7; // r15
  int v8; // ecx
  int v9; // eax
  __int64 v10; // r11
  int v11; // r13d
  int v12; // edx
  int v13; // r10d
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // r8d
  int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  _WORD *v22; // r14
  char v23; // al
  int v24; // ecx
  __int16 v25; // ax
  unsigned __int64 v26; // [rsp+20h] [rbp-A8h]
  __int64 v27; // [rsp+28h] [rbp-A0h]
  __int64 v28; // [rsp+30h] [rbp-98h]
  char *v29; // [rsp+38h] [rbp-90h]
  __int64 v30; // [rsp+40h] [rbp-88h]
  __int64 v31; // [rsp+48h] [rbp-80h]
  unsigned __int64 v32; // [rsp+50h] [rbp-78h]
  int v33; // [rsp+58h] [rbp-70h]
  __int64 v34; // [rsp+60h] [rbp-68h]
  __int64 v35; // [rsp+70h] [rbp-58h]
  __int64 v36; // [rsp+78h] [rbp-50h]
  int v39; // [rsp+E0h] [rbp+18h]
  int v40; // [rsp+E8h] [rbp+20h]

  v2 = *((int *)a1 + 22);
  v3 = a2;
  v4 = *((_DWORD *)a2 + 28);
  v5 = a1;
  v6 = (char *)v3 + 168;
  v29 = (char *)v3 + 168;
  v40 = *((_DWORD *)v3 + 32);
  v7 = *((_QWORD *)a1 + 10) + (int)v2 * v4;
  v8 = *((_DWORD *)v3 + 29);
  v35 = *((_QWORD *)v3 + 20);
  if ( *((_DWORD *)v3 + 3) < v8 )
    v8 = *((_DWORD *)v3 + 3);
  v28 = *((_QWORD *)v3 + 2);
  v34 = *((_QWORD *)v3 + 3);
  v30 = *((_QWORD *)v3 + 4);
  v9 = *((_DWORD *)v3 + 33);
  v27 = v7;
  if ( v4 < v8 )
  {
    v36 = v2;
    v10 = (unsigned int)(v8 - v4);
    v11 = v9 + v4;
    v31 = v10;
    v39 = v9 + v4;
    do
    {
      v12 = *((_DWORD *)v3 + 2);
      v13 = *(_DWORD *)v6;
      v14 = *((_QWORD *)v6 + 1);
      v15 = *((_QWORD *)v6 + 2);
      v16 = *((_QWORD *)v6 + 3);
      v17 = *(_DWORD *)v3;
      v18 = *(_DWORD *)v3;
      if ( *((_DWORD *)v6 + 1) < v12 )
        v12 = *((_DWORD *)v6 + 1);
      if ( v13 > v17 )
        v18 = *(_DWORD *)v6;
      if ( *((_QWORD *)v5 + 9) <= (unsigned __int64)(v7 + v18) && v18 < v12 )
      {
        v19 = v17 - v13;
        v32 = v7 + 2LL * v18;
        v20 = v7 + 2LL * v12;
        if ( v19 > 0 )
        {
          v14 += v28 * v19;
          v15 += v34 * v19;
          v16 += v30 * v19;
        }
        v26 = 0LL;
        v21 = (v20 - v32 + 1) >> 1;
        if ( v32 > v20 )
          v21 = 0LL;
        if ( v21 )
        {
          v22 = (_WORD *)(v7 + 2LL * v18);
          v23 = v18 + v40;
          v33 = v18 + v40;
          do
          {
            v24 = *(_DWORD *)(0x1C0000000LL + 16LL * (v11 & 3) + 3282080 + 4LL * (v23 & 3));
            v25 = XEPALOBJ::ulDispatchGFPEFunction(
                    v35,
                    *(unsigned int *)(*(_QWORD *)v35 + 104LL),
                    8
                  * (Saturation16_5[(unsigned __int64)(unsigned int)(v24 + (HIDWORD(v14) >> 11)) >> 16] | ((Saturation16_5[(unsigned __int64)(unsigned int)(v24 + (HIDWORD(v15) >> 11)) >> 16] | (Saturation16_5[(unsigned __int64)(unsigned int)(v24 + (HIDWORD(v16) >> 11)) >> 16] << 8)) << 8)));
            v14 += v28;
            *v22++ = v25;
            v23 = v33 + 1;
            ++v26;
            v15 += v34;
            ++v33;
            v16 += v30;
          }
          while ( v26 < v21 );
          v3 = a2;
          v7 = v27;
          v6 = v29;
          v11 = v39;
          v5 = a1;
          v10 = v31;
        }
      }
      v7 += v36;
      v6 += 40;
      v27 = v7;
      ++v11;
      v29 = v6;
      --v10;
      v39 = v11;
      v31 = v10;
    }
    while ( v10 );
  }
}

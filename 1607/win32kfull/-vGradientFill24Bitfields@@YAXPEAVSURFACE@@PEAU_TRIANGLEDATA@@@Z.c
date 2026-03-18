/*
 * XREFs of ?vGradientFill24Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02CF8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill24Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  __int64 v2; // r8
  struct _TRIANGLEDATA *v3; // r14
  int v4; // edx
  __int64 v5; // r10
  char *v6; // r15
  __int64 v7; // r11
  __int64 v8; // rbp
  int v9; // ecx
  __int64 v10; // r13
  int v11; // r8d
  int v12; // ecx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  int v16; // edx
  _BYTE *v17; // r12
  unsigned __int64 v18; // r14
  int v19; // eax
  __int64 v20; // [rsp+20h] [rbp-78h]
  char *v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  __int64 v25; // [rsp+A0h] [rbp+8h]
  __int64 v27; // [rsp+B0h] [rbp+18h]
  __int64 v28; // [rsp+B8h] [rbp+20h]

  v2 = *((int *)a1 + 22);
  v3 = a2;
  v4 = *((_DWORD *)a2 + 28);
  v5 = *((_QWORD *)v3 + 2);
  v6 = (char *)v3 + 168;
  v7 = *((_QWORD *)v3 + 3);
  v21 = (char *)v3 + 168;
  v8 = *((_QWORD *)a1 + 10) + (int)v2 * v4;
  v9 = *((_DWORD *)v3 + 29);
  if ( *((_DWORD *)v3 + 3) < v9 )
    v9 = *((_DWORD *)v3 + 3);
  v25 = *((_QWORD *)v3 + 4);
  v20 = v8;
  v27 = *((_QWORD *)v3 + 2);
  v28 = *((_QWORD *)v3 + 3);
  v23 = *((_QWORD *)v3 + 20);
  if ( v4 < v9 )
  {
    v24 = v2;
    v10 = (unsigned int)(v9 - v4);
    v22 = v10;
    do
    {
      v11 = *(_DWORD *)v3;
      v12 = *((_DWORD *)v3 + 2);
      v13 = *((_QWORD *)v6 + 1);
      v14 = *((_QWORD *)v6 + 2);
      if ( *(_DWORD *)v6 > *(_DWORD *)v3 )
        v11 = *(_DWORD *)v6;
      v15 = *((_QWORD *)v6 + 3);
      if ( *((_DWORD *)v6 + 1) < v12 )
        v12 = *((_DWORD *)v6 + 1);
      if ( v11 < v12 )
      {
        v16 = *(_DWORD *)v3 - *(_DWORD *)v6;
        v17 = (_BYTE *)(v8 + 3 * v11);
        if ( v16 > 0 )
        {
          v13 += v5 * v16;
          v14 += v7 * v16;
          v15 += v25 * v16;
        }
        if ( (unsigned __int64)v17 < v8 + 3 * v12 )
        {
          v18 = v8 + 3 * v12;
          do
          {
            v19 = XEPALOBJ::ulDispatchGFPEFunction(
                    v23,
                    *(unsigned int *)(*(_QWORD *)v23 + 100LL),
                    HIBYTE(v13) | ((HIBYTE(v14) | ((unsigned int)HIBYTE(v15) << 8)) << 8));
            *v17 = v19;
            v13 += v27;
            v14 += v28;
            v15 += v25;
            v17[1] = BYTE1(v19);
            v17[2] = BYTE2(v19);
            v17 += 3;
          }
          while ( (unsigned __int64)v17 < v18 );
          v3 = a2;
          v6 = v21;
          v8 = v20;
          v10 = v22;
          v5 = v27;
          v7 = v28;
        }
      }
      v8 += v24;
      v6 += 40;
      --v10;
      v20 = v8;
      v22 = v10;
      v21 = v6;
    }
    while ( v10 );
  }
}

/*
 * XREFs of CapCorrection @ 0x1C02DA144
 * Callers:
 *     sbit_EmboldenGrayFromMono @ 0x1C02DB8A4 (sbit_EmboldenGrayFromMono.c)
 * Callees:
 *     <none>
 */

void __fastcall CapCorrection(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  _BYTE *v4; // r14
  __int16 v5; // r11
  unsigned __int16 v6; // bp
  int v7; // ecx
  int v8; // r9d
  int v9; // r10d
  int v10; // ecx
  __int64 v11; // rdx
  int v12; // r8d
  _BYTE *v13; // rcx
  int v14; // r8d
  BOOL v15; // r9d
  __int16 v16; // ax
  unsigned __int16 v17; // r12
  unsigned __int16 v18; // r13
  __int16 v19; // r15
  __int16 v20; // di
  __int16 v21; // r11
  __int16 v22; // bx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int16 v25; // si
  __int64 v26; // rcx
  _BYTE *v27; // rax
  __int16 v28; // [rsp+0h] [rbp-68h]
  int v29; // [rsp+8h] [rbp-60h]
  int v30; // [rsp+Ch] [rbp-5Ch]
  int v31; // [rsp+10h] [rbp-58h]
  __int64 v32; // [rsp+20h] [rbp-48h]
  __int16 v34; // [rsp+80h] [rbp+18h]
  int v35; // [rsp+88h] [rbp+20h]

  if ( a3 )
  {
    v3 = a1;
    v4 = 0LL;
    if ( a2 )
    {
      v31 = a2;
      v5 = 1;
      v34 = 1;
      v6 = ((8 * a2 + 24) >> 3) & 0xFFFC;
      v29 = a2 - 1;
      if ( v29 > 1 )
      {
        v7 = a2 - 1;
        v30 = a3;
        v8 = a3 - 1;
        v35 = v8;
        do
        {
          v9 = 1;
          if ( v8 > 1 )
          {
            v10 = v6;
            v11 = v5;
            v32 = v5;
            do
            {
              v12 = -1;
              v13 = (_BYTE *)(v3 + v11 + v10 * (unsigned __int16)v9);
              if ( *(v13 - 1) == 16 && v13[1] == 16 && !*v13 )
              {
                v14 = v9 + 1;
                v4 = &v13[v6];
                while ( v14 < v8 && *(v4 - 1) == 16 && v4[1] == 16 && !*v4 )
                {
                  v4 += v6;
                  ++v14;
                }
                v12 = v14 - 1;
              }
              if ( (unsigned int)(v12 - v9) <= 1 && (v13[-v6] == 16 && *v4 != 16 || *v4 == 16 && v13[-v6] != 16) )
              {
                v15 = 1;
                if ( v13[-v6] == 16 )
                  v16 = 1;
                else
                  v16 = -1;
                v28 = v16;
                if ( v12 == v9 )
                  v17 = 1;
                else
                  v17 = 2;
                v18 = 0;
                v19 = v9;
                if ( v16 > 0 )
                  v19 = v12;
                v20 = v5 - 1;
                v21 = v5 + 1;
                while ( v15 )
                {
                  v19 += v16;
                  if ( v19 < 0 || v19 >= v30 )
                    v15 = 0;
                  if ( v15 )
                  {
                    ++v18;
                    v22 = v21;
                    v23 = v20;
                    v24 = v3 + v6 * (unsigned __int16)v19;
                    v25 = v20;
                    if ( *(_BYTE *)(v20 + v24 + 1) == 16 || *(_BYTE *)(v21 + v24 - 1) == 16 )
                      v15 = 0;
                    if ( v15 )
                    {
                      v21 = -1;
                      v20 = -1;
                      v15 = 1;
                      if ( *(_BYTE *)(v23 + v24) == 16 )
                      {
                        v20 = v25;
                      }
                      else if ( v25 - 1 >= 0 && *(_BYTE *)(v23 + v24 - 1) == 16 )
                      {
                        v20 = v25 - 1;
                      }
                      if ( *(_BYTE *)(v22 + v24) == 16 )
                      {
                        v21 = v22;
                      }
                      else if ( v22 + 1 < v31 && *(_BYTE *)(v22 + v24 + 1) == 16 )
                      {
                        v21 = v22 + 1;
                      }
                      if ( v20 < 0 || v21 < 0 )
                      {
                        v15 = 0;
                      }
                      else if ( v18 == 1 )
                      {
                        v15 = v21 - v20 > v22 - v25;
                      }
                    }
                    v3 = a1;
                  }
                  v16 = v28;
                  if ( v18 >= v17 )
                  {
                    if ( v15 && v9 <= v12 )
                    {
                      v26 = v12 - v9 + 1;
                      v27 = (_BYTE *)(v3 + v32 + v6 * (__int64)v9);
                      do
                      {
                        *v27 = 16;
                        v27 += v6;
                        --v26;
                      }
                      while ( v26 );
                    }
                    break;
                  }
                }
                v8 = v35;
                v5 = v34;
              }
              if ( v12 <= 0 )
                ++v9;
              else
                v9 = v12 + 1;
              v10 = v6;
              v11 = v5;
            }
            while ( v9 < v8 );
            v7 = v29;
          }
          v34 = ++v5;
        }
        while ( v5 < v7 );
      }
    }
  }
}

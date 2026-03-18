/*
 * XREFs of sbit_EmboldenGrayFromMono @ 0x1C02DB8A4
 * Callers:
 *     fs_ContourScan @ 0x1C00A9410 (fs_ContourScan.c)
 * Callees:
 *     CapCorrection @ 0x1C02DA144 (CapCorrection.c)
 */

void __fastcall sbit_EmboldenGrayFromMono(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // edi
  unsigned int v6; // ebp
  unsigned __int16 v7; // r12
  int v8; // ecx
  unsigned __int16 v9; // si
  unsigned __int16 v10; // bx
  __int64 i; // r15
  _BYTE *v12; // r11
  __int16 v13; // r9
  __int16 v14; // r8
  __int16 v15; // r10
  int v16; // edx
  int v17; // edi
  unsigned __int8 v18; // bp
  unsigned __int8 v19; // al
  unsigned __int8 v20; // cl
  _BYTE *v21; // rax
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+78h] [rbp+10h]
  unsigned int v25; // [rsp+88h] [rbp+20h]

  LOWORD(v3) = a3;
  v25 = 0;
  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      if ( a1 )
      {
        CapCorrection(a1, a2, a3);
        v8 = a2;
        v23 = a2;
        v9 = ((8 * a2 + 24) >> 3) & 0xFFFC;
        v10 = a2 - 1;
        if ( v10 )
        {
          v3 = (unsigned __int16)v3;
          v24 = (unsigned __int16)v3;
          for ( i = v10; ; --i )
          {
            v12 = (_BYTE *)(i + a1);
            v13 = -1;
            v14 = -1;
            v15 = 0;
            if ( v3 > 0 )
              break;
LABEL_39:
            if ( !--v10 )
              return;
          }
          v16 = 0;
          while ( !*(v12 - 1) )
          {
            if ( v13 >= 0 )
            {
              if ( v14 < 0 )
                v14 = v15 - 1;
              goto LABEL_29;
            }
LABEL_38:
            v8 = v23;
            ++v15;
            v12 += v9;
            v16 = v15;
            if ( v15 >= v3 )
              goto LABEL_39;
          }
          if ( v13 < 0 )
          {
            v7 = 0;
            v13 = v15;
            v6 = 0;
            v25 = 0;
          }
          v17 = v3 - 1;
          if ( v16 == v17 && v13 >= 0 && v14 < 0 )
            v14 = v15;
          if ( !*v12 )
          {
            ++v7;
            if ( v10 != v8 - 1 )
            {
              v18 = v12[1];
              v19 = 0;
              if ( v18 )
              {
                if ( v15 )
                {
                  v20 = v12[-v9];
                  v19 = 0;
                }
                else
                {
                  v20 = 0;
                }
                if ( v16 != v17 )
                  v19 = v12[v9];
                v6 = v25 + 2 * (v20 + v19) + v20 + v19 + 4 * v18;
                v25 = v6;
              }
              else
              {
                v6 = v25;
              }
            }
          }
          v3 = v24;
LABEL_29:
          if ( v13 >= 0 && v14 >= 0 )
          {
            if ( v7 )
            {
              v21 = (_BYTE *)(a1 + i + (unsigned __int16)v13 * v9);
              if ( v13 <= v14 )
              {
                v22 = (unsigned __int16)(v14 - v13 + 1);
                do
                {
                  if ( !*v21 )
                    *v21 = 16 - (v6 >> 4) / v7;
                  v21 += v9;
                  --v22;
                }
                while ( v22 );
              }
            }
            v13 = -1;
            v14 = -1;
          }
          goto LABEL_38;
        }
      }
    }
  }
}

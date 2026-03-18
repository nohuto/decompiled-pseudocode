/*
 * XREFs of DrawCornerLine @ 0x1C0114FDC
 * Callers:
 *     CreateStandardMonoPattern @ 0x1C0114B60 (CreateStandardMonoPattern.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void __fastcall DrawCornerLine(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        int a6)
{
  int v6; // esi
  char *v7; // r10
  int v8; // edi
  int v9; // ebp
  int v10; // r12d
  int v11; // r13d
  int v12; // ebx
  int v13; // eax
  int v14; // r15d
  int v15; // r9d
  int v16; // r8d
  int v17; // r11d
  int v18; // r14d
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  char *v22; // rax
  char v23; // cl
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+80h] [rbp+28h]

  v6 = 0;
  v7 = a1;
  if ( a5 )
  {
    if ( a2 == 1 || a3 == 1 || a5 >= a2 )
    {
      memset(a1, 255, a4 * a3);
    }
    else
    {
      v8 = a4;
      if ( !a6 )
      {
        v7 = &a1[a4 * (a3 - 1)];
        v8 = -a4;
      }
      v9 = a2;
      if ( a2 < a3 )
      {
        v10 = 0;
        v11 = 1;
        v12 = a3;
        v13 = a2;
      }
      else
      {
        v10 = 1;
        v11 = 0;
        v12 = a2;
        v13 = a3;
      }
      v14 = v13 - 2 * v12;
      v24 = 2 * v12;
      v15 = a5 - 1;
      v25 = 2 * v13;
      if ( a2 > a3 )
      {
        v15 -= a2 / (int)a3;
        if ( v15 < 0 )
          v15 = 0;
      }
      v16 = v15;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      if ( v12 )
      {
        v20 = v25;
        do
        {
          --v12;
          ++v16;
          v18 += v10;
          v17 += v11;
          v14 += v20;
          if ( v14 >= 0 )
          {
            v18 += v11;
            v17 += v10;
            v14 -= v24;
          }
          if ( v17 != v19 )
          {
            v21 = 128 >> (v6 & 7);
            v22 = &v7[(__int64)v6 >> 3];
LABEL_16:
            v23 = 0;
            while ( v16 )
            {
              --v16;
              v23 |= v21;
              if ( ++v6 >= v9 )
              {
                *v22 = v23;
                LOBYTE(v21) = 0x80;
                v23 = *v7;
                v22 = v7;
                v6 = 0;
              }
              else
              {
                LOBYTE(v21) = (unsigned __int8)v21 >> 1;
                if ( !(_BYTE)v21 )
                {
                  *v22 = v23;
                  LOBYTE(v21) = 0x80;
                  ++v22;
                  goto LABEL_16;
                }
              }
            }
            if ( (_BYTE)v21 != 0x80 )
              *v22 = v23;
            v20 = v25;
            v6 = v18;
            v16 = v15;
            v7 += v8;
            v19 = v17;
          }
        }
        while ( v12 );
      }
    }
  }
}

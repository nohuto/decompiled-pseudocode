/*
 * XREFs of DrawCornerLine @ 0x1401DC3F0
 * Callers:
 *     CreateStandardMonoPattern @ 0x1401DBE60 (CreateStandardMonoPattern.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall DrawCornerLine(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        int a6)
{
  char *v6; // r10
  int v7; // esi
  int v8; // r11d
  int v9; // r13d
  int v10; // r14d
  int v11; // eax
  int v12; // r15d
  int v13; // r12d
  int v14; // ebp
  int v15; // r9d
  int v16; // eax
  int v17; // ebx
  int v18; // edx
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  char *v22; // rcx
  char v23; // r8
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+24h] [rbp-34h]

  v6 = a1;
  v7 = 0;
  if ( a5 )
  {
    if ( a2 == 1 || a3 == 1 || a5 >= a2 )
    {
      memset_0(a1, 255, a4 * a3);
    }
    else
    {
      v8 = a4;
      if ( !a6 )
      {
        v6 = &a1[a4 * (a3 - 1)];
        v8 = -a4;
      }
      v9 = a2;
      v10 = a2;
      v11 = a3;
      if ( a2 < a3 )
      {
        v10 = a3;
        v11 = a2;
      }
      v12 = a2 >= a3;
      v13 = a2 < a3;
      v24 = 2 * v11;
      v14 = v11 - 2 * v10;
      v25 = 2 * v10;
      v15 = a5 - 1;
      if ( a2 > a3 )
      {
        v15 -= a2 / (unsigned int)a3;
        if ( v15 < 0 )
          v15 = 0;
      }
      v16 = 0;
      v17 = 0;
      v18 = v15;
      v19 = 0;
      if ( v10 )
      {
        v20 = v24;
        do
        {
          --v10;
          ++v18;
          v7 += v12;
          v19 += v13;
          v14 += v20;
          if ( v14 >= 0 )
          {
            v7 += v13;
            v19 += v12;
            v14 -= v25;
          }
          if ( v19 != v16 )
          {
            v21 = 128 >> (v17 & 7);
            v22 = &v6[(__int64)v17 >> 3];
LABEL_20:
            v23 = 0;
            while ( v18 )
            {
              --v18;
              v23 |= v21;
              if ( ++v17 >= v9 )
              {
                *v22 = v23;
                LOBYTE(v21) = 0x80;
                v23 = *v6;
                v22 = v6;
                v17 = 0;
              }
              else
              {
                LOBYTE(v21) = (unsigned __int8)v21 >> 1;
                if ( !(_BYTE)v21 )
                {
                  *v22 = v23;
                  LOBYTE(v21) = 0x80;
                  ++v22;
                  goto LABEL_20;
                }
              }
            }
            if ( (_BYTE)v21 != 0x80 )
              *v22 = v23;
            v20 = v24;
            v17 = v7;
            v18 = v15;
            v6 += v8;
            v16 = v19;
          }
        }
        while ( v10 );
      }
    }
  }
}

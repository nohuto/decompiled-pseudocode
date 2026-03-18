/*
 * XREFs of sbit_ExpandGrayFromMono @ 0x1C02DB460
 * Callers:
 *     fs_ContourScan @ 0x1C00AF620 (fs_ContourScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sbit_ExpandGrayFromMono(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5)
{
  char v6; // si
  char v9; // r10
  int v10; // ebp
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r8
  int v13; // ecx
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  int v16; // ebp
  __int16 v17; // si
  __int16 v18; // di
  unsigned __int64 v19; // r11
  __int64 v20; // r14
  __int64 v21; // r15
  char v22; // r13
  __int64 v23; // r12
  __int64 v24; // rbp
  _BYTE *i; // r8
  _BYTE *v26; // r10
  __int16 v27; // r9

  if ( a3 )
  {
    v6 = a3;
    v9 = 0;
    if ( a4 )
    {
      if ( a1 && a2 )
      {
        v10 = a3;
        v11 = ((a3 + 31) >> 3) & 0xFFFC;
        v12 = ((8 * a3 + 24) >> 3) & 0xFFFC;
        switch ( a5 )
        {
          case 1:
            v9 = 0;
            break;
          case 2:
            v9 = 2;
            break;
          case 4:
            v9 = 4;
            break;
          case 8:
            v9 = 6;
            break;
        }
        v13 = a4 - 1;
        v14 = a1 + v13 * v11;
        result = 1LL;
        v16 = v10 - 1;
        v17 = (v6 - 1) & 7;
        v18 = a4 - 1;
        if ( v18 >= 0 )
        {
          v19 = v16 + a2 + v13 * v12;
          v20 = v12 - 1 - (__int64)v16;
          v21 = v11;
          result = 0LL;
          v22 = v9;
          v23 = v12;
          v24 = (unsigned __int16)(v16 >> 3);
          do
          {
            for ( i = (_BYTE *)(v20 + v19); (unsigned __int64)i > v19; --i )
              *i = 0;
            v26 = (_BYTE *)(v14 + v24);
            v27 = v17;
            if ( v14 + v24 >= v14 )
            {
              do
              {
                do
                  *i-- = ((*v26 >> (7 - v27--)) & 1) << v22;
                while ( v27 >= 0 );
                --v26;
                v27 = 7;
              }
              while ( (unsigned __int64)v26 >= v14 );
              v21 = v11;
              result = 0LL;
            }
            v14 -= v21;
            v19 -= v23;
            --v18;
          }
          while ( v18 >= 0 );
        }
      }
    }
  }
  return result;
}

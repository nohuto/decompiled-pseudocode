/*
 * XREFs of ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01CC190
 * Callers:
 *     _GetRegisteredRawInputDevices @ 0x1C01CC858 (_GetRegisteredRawInputDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall SortRegisteredDevices(struct tagRAWINPUTDEVICE *a1, int a2)
{
  __int64 v2; // r9
  int v3; // r8d
  int v4; // edx
  __int64 v5; // r12
  int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // r13d
  __m128i *v10; // rdi
  __int64 v11; // rbx
  int v12; // r15d
  __int64 v13; // r14
  __m128i v14; // xmm1
  unsigned int v15; // r12d
  __m128i *v16; // rbp
  struct tagRAWINPUTDEVICE *v17; // [rsp+48h] [rbp+8h]
  __int64 v18; // [rsp+60h] [rbp+20h]

  if ( a2 > 0 )
  {
    v17 = a1;
    v2 = a2;
    v3 = 1;
    v4 = a2 / 9;
    if ( v4 <= 1 )
      goto LABEL_5;
    do
      v3 = 3 * v3 + 1;
    while ( v3 < v4 );
    if ( v3 > 0 )
    {
LABEL_5:
      v5 = v2;
      v18 = v2;
      do
      {
        v6 = v3;
        if ( v3 < v5 )
        {
          v7 = 16LL * v3;
          v8 = 0LL;
          v9 = -v3;
          v10 = (__m128i *)((char *)a1 + v7);
          v11 = v5 - v3;
          do
          {
            v12 = v6 + v9;
            v13 = v8;
            v14 = *v10;
            if ( v8 >= 0 )
            {
              v15 = (unsigned __int16)_mm_extract_epi16(v14, 1) | ((unsigned __int16)_mm_cvtsi128_si32(v14) << 16);
              v16 = &v10[-v3];
              do
              {
                if ( ((v16->m128i_u16[0] << 16) | (unsigned int)v16->m128i_u16[1]) <= v15 )
                  break;
                v12 -= v3;
                v16[(unsigned __int64)v7 / 0x10] = *v16;
                v16 = (__m128i *)((char *)v16 - v7);
                v13 -= v3;
              }
              while ( v13 >= 0 );
              v9 = -v3;
              a1 = v17;
            }
            if ( v6 != v12 + v3 )
              *((__m128i *)a1 + v3 + v13) = v14;
            ++v6;
            ++v10;
            ++v8;
            --v11;
          }
          while ( v11 );
          v5 = v18;
        }
        v3 /= 3;
      }
      while ( v3 > 0 );
    }
  }
}

/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x180017960
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180016F00 (RtlGetFullPathName_Ustr.c)
 *     RtlSetCurrentDirectory_U @ 0x180077BE0 (RtlSetCurrentDirectory_U.c)
 *     RtlIsDosDeviceName_U @ 0x18007B230 (RtlIsDosDeviceName_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800150E0 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180017C70 (RtlDetermineDosPathNameType_Ustr.c)
 *     iswdigit @ 0x180098DF0 (iswdigit.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__m128i *a1)
{
  __int32 v1; // ebp
  unsigned int v3; // eax
  __int16 v4; // r11
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // r8
  _WORD *v8; // rbx
  __int16 i; // cx
  int v10; // r10d
  __int16 *v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // ax
  _WORD *v17; // rcx
  _WORD *v18; // rdx
  _WORD *v19; // rax
  int v20; // esi
  __int16 v21; // di
  unsigned __int16 *v22; // rdx
  __m128i v24; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = RtlDetermineDosPathNameType_Ustr(a1);
  if ( v3 > 1 && v3 != 6 )
  {
    v5 = _mm_cvtsi128_si32(*a1);
    v24 = *a1;
    v6 = v5;
    v7 = v5 >> 1;
    if ( v5 >> 1 )
    {
      v8 = (_WORD *)v24.m128i_i64[1];
      if ( *(_WORD *)(v24.m128i_i64[1] + 2LL * v7 - 2) == 58 )
      {
        v5 -= 2;
        v4 = 1;
        --v7;
      }
      if ( v7 )
      {
        for ( i = *(_WORD *)(v24.m128i_i64[1] + 2LL * v7 - 2);
              i == 46 || i == 32;
              i = *(_WORD *)(v24.m128i_i64[1] + 2LL * v7 - 2) )
        {
          v5 -= 2;
          ++v4;
          if ( !--v7 )
            break;
        }
        if ( !v7 )
        {
LABEL_26:
          v17 = v8;
          v18 = &v8[v7];
          if ( v8 < v18 )
          {
            do
            {
              if ( *v17 == 46 )
                break;
              if ( *v17 == 58 )
                break;
              ++v17;
            }
            while ( v17 < v18 );
            if ( v17 > v8 )
            {
              do
              {
                v19 = v17 - 1;
                if ( *(v17 - 1) != 32 )
                  break;
                --v17;
              }
              while ( v19 > v8 );
            }
          }
          v20 = (unsigned __int16)(v17 - v8);
          v21 = 2 * (v17 - v8);
          v24.m128i_i16[0] = v21;
          if ( v20 == 3 )
          {
            if ( !RtlEqualUnicodeString((unsigned __int16 *)&v24, RtlpDosPRNDevice, 1)
              && !RtlEqualUnicodeString((unsigned __int16 *)&v24, RtlpDosAUXDevice, 1)
              && !RtlEqualUnicodeString((unsigned __int16 *)&v24, RtlpDosNULDevice, 1) )
            {
              v22 = (unsigned __int16 *)&RtlpDosCONDevice;
LABEL_47:
              if ( !RtlEqualUnicodeString((unsigned __int16 *)&v24, v22, 1) )
                return 0LL;
            }
          }
          else
          {
            if ( v20 != 4 )
            {
              if ( v20 == 6 )
              {
                v22 = (unsigned __int16 *)&RtlpDosCONINDevice;
              }
              else
              {
                if ( v20 != 7 )
                  return 0LL;
                v22 = (unsigned __int16 *)&RtlpDosCONOUTDevice;
              }
              goto LABEL_47;
            }
            if ( !iswdigit(v8[3]) || v8[3] == 48 )
              return 0LL;
            v24.m128i_i16[0] = v21 - 2;
            if ( !RtlEqualUnicodeString((unsigned __int16 *)&v24, RtlpDosLPTDevice, 1) )
            {
              v22 = (unsigned __int16 *)&RtlpDosCOMDevice;
              goto LABEL_47;
            }
          }
          return (v1 << 16) | (unsigned int)(2 * v20);
        }
        v10 = 43013;
        v11 = (__int16 *)(v24.m128i_i64[1] - 2 + 2LL * v7);
        if ( (unsigned __int64)v11 < v24.m128i_i64[1] )
          goto LABEL_24;
        while ( 1 )
        {
          v12 = *v11;
          if ( *v11 == 92 || v12 == 47 || v12 == 58 && v11 == (__int16 *)(v24.m128i_i64[1] + 2) )
            break;
          if ( (unsigned __int64)--v11 < v24.m128i_i64[1] )
            goto LABEL_24;
        }
        v13 = v11 + 1;
        if ( (unsigned __int64)v13 < v24.m128i_i64[1] + 2 * ((unsigned __int64)v6 >> 1) )
        {
          v14 = (*v13 | 0x20) - 97;
          if ( v14 <= 0xFu )
          {
            if ( _bittest(&v10, v14) )
            {
              v1 = (_DWORD)v13 - v24.m128i_i32[2];
              v15 = v6 + v24.m128i_i16[4] - (_WORD)v13;
              v24.m128i_i64[1] = (__int64)v13;
              v8 = v13;
              v7 = (v15 >> 1) - v4;
LABEL_24:
              v16 = (*v8 | 0x20) - 97;
              if ( v16 <= 0xFu && _bittest(&v10, v16) )
                goto LABEL_26;
            }
          }
        }
      }
    }
    return 0LL;
  }
  return 0LL;
}

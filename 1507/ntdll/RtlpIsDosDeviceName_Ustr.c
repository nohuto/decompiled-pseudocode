/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x180026A90
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180026020 (RtlGetFullPathName_Ustr.c)
 *     RtlSetCurrentDirectory_U @ 0x18006FB70 (RtlSetCurrentDirectory_U.c)
 *     RtlIsDosDeviceName_U @ 0x180070320 (RtlIsDosDeviceName_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180023F50 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180026DE4 (RtlDetermineDosPathNameType_Ustr.c)
 *     iswdigit @ 0x180087630 (iswdigit.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__int64 a1)
{
  int v1; // ebp
  __int16 v2; // di
  int v3; // eax
  __m128i *v4; // r11
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // r10
  unsigned __int16 v7; // r8
  unsigned __int16 *Buffer; // rbx
  unsigned __int16 i; // cx
  unsigned __int16 *v10; // rax
  unsigned __int16 v11; // cx
  int v12; // r9d
  unsigned __int16 *v13; // rax
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // ax
  unsigned __int16 *v17; // rcx
  unsigned __int16 *v18; // rdx
  unsigned __int16 *v19; // rax
  __int64 v20; // rcx
  int v21; // esi
  __int16 v22; // di
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  _UNICODE_STRING *v27; // rdx
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = RtlDetermineDosPathNameType_Ustr(a1);
  if ( v3 < 6 && v3 >= 2 || v3 < 0 || v3 != 6 && v3 > 1 )
  {
    v5 = _mm_cvtsi128_si32(*v4);
    String1 = (_UNICODE_STRING)*v4;
    v6 = v5;
    v7 = v5 >> 1;
    if ( v5 >> 1 )
    {
      Buffer = String1.Buffer;
      if ( String1.Buffer[v7 - 1] == 58 )
      {
        v5 -= 2;
        v2 = 1;
        --v7;
      }
      if ( v7 )
      {
        for ( i = String1.Buffer[v7 - 1]; i == 46 || i == 32; i = String1.Buffer[v7 - 1] )
        {
          v5 -= 2;
          ++v2;
          if ( !--v7 )
            break;
        }
        if ( !v7 )
        {
LABEL_24:
          v17 = Buffer;
          v18 = &Buffer[v7];
          if ( Buffer < v18 )
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
            if ( v17 > Buffer )
            {
              do
              {
                v19 = v17 - 1;
                if ( *(v17 - 1) != 32 )
                  break;
                --v17;
              }
              while ( v19 > Buffer );
            }
          }
          v20 = v17 - Buffer;
          v21 = (unsigned __int16)v20;
          v22 = 2 * v20;
          String1.Length = 2 * v20;
          if ( (unsigned __int16)v20 == 5 )
            return 0LL;
          v24 = (unsigned __int16)v20 - 3;
          if ( v21 == 3 )
          {
            if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosPRNDevice, 1u)
              || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosAUXDevice, 1u)
              || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosNULDevice, 1u)
              || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosCONDevice, 1u) )
            {
              return (v1 << 16) | (unsigned int)(2 * v21);
            }
          }
          else
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 2;
              if ( v26 )
              {
                if ( v26 != 1 )
                  return 0LL;
                v27 = (_UNICODE_STRING *)&RtlpDosCONOUTDevice;
              }
              else
              {
                v27 = (_UNICODE_STRING *)&RtlpDosCONINDevice;
              }
            }
            else
            {
              if ( !iswdigit(Buffer[3]) || Buffer[3] == 48 )
                return 0LL;
              String1.Length = v22 - 2;
              if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosLPTDevice, 1u) )
                return (v1 << 16) | (unsigned int)(2 * v21);
              v27 = (_UNICODE_STRING *)&RtlpDosCOMDevice;
            }
            if ( RtlEqualUnicodeString(&String1, v27, 1u) )
              return (v1 << 16) | (unsigned int)(2 * v21);
          }
          return 0LL;
        }
        v10 = &String1.Buffer[v7 - 1];
        if ( v10 < String1.Buffer )
        {
LABEL_16:
          v12 = 43013;
        }
        else
        {
          while ( 1 )
          {
            v11 = *v10;
            if ( *v10 == 92 || v11 == 47 || v11 == 58 && v10 == String1.Buffer + 1 )
              break;
            if ( --v10 < String1.Buffer )
              goto LABEL_16;
          }
          v13 = v10 + 1;
          if ( v13 >= &String1.Buffer[(unsigned __int64)v6 >> 1] )
            return 0LL;
          v14 = (*v13 | 0x20) - 97;
          if ( v14 > 0xFu )
            return 0LL;
          v12 = 43013;
          if ( !_bittest(&v12, v14) )
            return 0LL;
          v1 = (_DWORD)v13 - LODWORD(String1.Buffer);
          v15 = v6 + LOWORD(String1.Buffer) - (_WORD)v13;
          String1.Buffer = v13;
          Buffer = v13;
          v7 = (v15 >> 1) - v2;
        }
        v16 = (*Buffer | 0x20) - 97;
        if ( v16 <= 0xFu && _bittest(&v12, v16) )
          goto LABEL_24;
      }
    }
    return 0LL;
  }
  return 0LL;
}

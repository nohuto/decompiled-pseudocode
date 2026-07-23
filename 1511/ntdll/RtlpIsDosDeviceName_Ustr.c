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
  int v1; // ebp
  unsigned int v3; // eax
  __int16 v4; // r11
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // r8
  unsigned __int16 *Buffer; // rbx
  unsigned __int16 i; // cx
  int v10; // r10d
  unsigned __int16 *v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int16 *v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // ax
  unsigned __int16 *v17; // rcx
  unsigned __int16 *v18; // rdx
  unsigned __int16 *v19; // rax
  int v20; // esi
  unsigned __int16 v21; // di
  _UNICODE_STRING *v22; // rdx
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = RtlDetermineDosPathNameType_Ustr(a1);
  if ( v3 > 1 && v3 != 6 )
  {
    v5 = _mm_cvtsi128_si32(*a1);
    String1 = (_UNICODE_STRING)*a1;
    v6 = v5;
    v7 = v5 >> 1;
    if ( v5 >> 1 )
    {
      Buffer = String1.Buffer;
      if ( String1.Buffer[v7 - 1] == 58 )
      {
        v5 -= 2;
        v4 = 1;
        --v7;
      }
      if ( v7 )
      {
        for ( i = String1.Buffer[v7 - 1]; i == 46 || i == 32; i = String1.Buffer[v7 - 1] )
        {
          v5 -= 2;
          ++v4;
          if ( !--v7 )
            break;
        }
        if ( !v7 )
        {
LABEL_26:
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
          v20 = (unsigned __int16)(v17 - Buffer);
          v21 = 2 * (v17 - Buffer);
          String1.Length = v21;
          if ( v20 == 3 )
          {
            if ( !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosPRNDevice, 1u)
              && !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosAUXDevice, 1u)
              && !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosNULDevice, 1u) )
            {
              v22 = (_UNICODE_STRING *)&RtlpDosCONDevice;
LABEL_47:
              if ( !RtlEqualUnicodeString(&String1, v22, 1u) )
                return 0LL;
            }
          }
          else
          {
            if ( v20 != 4 )
            {
              if ( v20 == 6 )
              {
                v22 = (_UNICODE_STRING *)&RtlpDosCONINDevice;
              }
              else
              {
                if ( v20 != 7 )
                  return 0LL;
                v22 = (_UNICODE_STRING *)&RtlpDosCONOUTDevice;
              }
              goto LABEL_47;
            }
            if ( !iswdigit(Buffer[3]) || Buffer[3] == 48 )
              return 0LL;
            String1.Length = v21 - 2;
            if ( !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosLPTDevice, 1u) )
            {
              v22 = (_UNICODE_STRING *)&RtlpDosCOMDevice;
              goto LABEL_47;
            }
          }
          return (v1 << 16) | (unsigned int)(2 * v20);
        }
        v10 = 43013;
        v11 = &String1.Buffer[v7 - 1];
        if ( v11 < String1.Buffer )
          goto LABEL_24;
        while ( 1 )
        {
          v12 = *v11;
          if ( *v11 == 92 || v12 == 47 || v12 == 58 && v11 == String1.Buffer + 1 )
            break;
          if ( --v11 < String1.Buffer )
            goto LABEL_24;
        }
        v13 = v11 + 1;
        if ( v13 < &String1.Buffer[(unsigned __int64)v6 >> 1] )
        {
          v14 = (*v13 | 0x20) - 97;
          if ( v14 <= 0xFu )
          {
            if ( _bittest(&v10, v14) )
            {
              v1 = (_DWORD)v13 - LODWORD(String1.Buffer);
              v15 = v6 + LOWORD(String1.Buffer) - (_WORD)v13;
              String1.Buffer = v13;
              Buffer = v13;
              v7 = (v15 >> 1) - v4;
LABEL_24:
              v16 = (*Buffer | 0x20) - 97;
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

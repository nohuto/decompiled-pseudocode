/*
 * XREFs of RtlpValidAttribute @ 0x140684FD8
 * Callers:
 *     RtlpValidAttributeInfo @ 0x140685150 (RtlpValidAttributeInfo.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400C2600 (RtlStringCchLengthW.c)
 */

char __fastcall RtlpValidAttribute(__int64 a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // r11
  unsigned int v4; // ecx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // r8d
  __int64 v8; // rax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  pcchLength = 0LL;
  if ( !a1 )
    return 0;
  v2 = *(const wchar_t **)a1;
  if ( !v2 )
    return 0;
  if ( RtlStringCchLengthW(v2, 0xFFFFuLL, &pcchLength) < 0 )
    return 0;
  if ( pcchLength == v3 )
    return 0;
  if ( *(_WORD *)(a1 + 10) != (_WORD)v3 )
    return 0;
  if ( (*(_DWORD *)(a1 + 12) & 0xFFC0) != 0 )
    return 0;
  v4 = *(_DWORD *)(a1 + 16);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 )
    return 0;
  v6 = *(unsigned __int16 *)(a1 + 8);
  if ( !*(_WORD *)(a1 + 8) )
    return 0;
  if ( *(unsigned __int16 *)(a1 + 8) > 2u )
  {
    switch ( v6 )
    {
      case 3:
        v11 = v3;
        while ( *(_QWORD *)(v5 + 8LL * v11) != v3 )
        {
          if ( ++v11 >= v4 )
            return 1;
        }
        break;
      case 5:
        v10 = v3;
        while ( *(_QWORD *)(v5 + 16LL * v10) != v3 && *(_DWORD *)(v5 + 16LL * v10 + 8) != (_DWORD)v3 )
        {
          if ( ++v10 >= v4 )
            return 1;
        }
        break;
      case 6:
        while ( *(_QWORD *)(v5 + 8LL * (unsigned int)v3) <= 1uLL )
        {
          LODWORD(v3) = v3 + 1;
          if ( (unsigned int)v3 >= v4 )
            return 1;
        }
        break;
      case 16:
        v7 = v3;
        do
        {
          v8 = 16LL * v7;
          if ( *(_QWORD *)(v8 + v5) == v3 )
          {
            if ( *(_DWORD *)(v8 + v5 + 8) != (_DWORD)v3 )
              return 0;
          }
          else if ( *(_DWORD *)(v8 + v5 + 8) == (_DWORD)v3 )
          {
            return 0;
          }
          ++v7;
        }
        while ( v7 < v4 );
        return 1;
    }
    return 0;
  }
  return 1;
}

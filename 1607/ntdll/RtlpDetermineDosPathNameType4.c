/*
 * XREFs of RtlpDetermineDosPathNameType4 @ 0x18006C514
 * Callers:
 *     RtlpGetLengthWithoutLastPathElement @ 0x18006C414 (RtlpGetLengthWithoutLastPathElement.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001A1C0 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001E5E8 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x18006C6C0 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall RtlpDetermineDosPathNameType4(__int64 a1, _UNICODE_STRING *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  char v7; // r15
  char v8; // r12
  char v9; // r14
  char v10; // bp
  int v11; // eax
  bool v12; // zf
  _DWORD *v13; // r11
  __m128i v15; // xmm0
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v11 = RtlDetermineDosPathNameType_Ustr(&a2->Length);
  v12 = a2->Length == 4;
  *v13 = v11;
  if ( v12 )
    goto LABEL_30;
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    v10 = 1;
    v7 = 1;
  }
  else
  {
    if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
      return v4;
    v7 = 1;
  }
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    v10 = 1;
    v8 = 1;
    goto LABEL_29;
  }
  if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    v8 = 1;
    goto LABEL_29;
  }
  if ( v10 )
    goto LABEL_30;
  v15 = *(__m128i *)a2;
  v16[0] = *(_QWORD *)&a2->Length;
  v16[1] = _mm_srli_si128(v15, 8).m128i_u64[0] + 8;
  LOWORD(v16[0]) -= 8;
  WORD1(v16[0]) -= 8;
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)v16) != 2 )
  {
    *a4 |= 0x200u;
LABEL_29:
    v9 = 0;
    if ( !v10 )
      goto LABEL_20;
LABEL_30:
    *a4 |= 0x400u;
    if ( !v7 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v9 = 1;
LABEL_20:
  *a4 |= 0x10u;
LABEL_21:
  if ( v8 )
    *a4 |= 0x40u;
  if ( v9 )
    *a4 |= 0x20u;
  return v4;
}

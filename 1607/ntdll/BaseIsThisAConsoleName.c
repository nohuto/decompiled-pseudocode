/*
 * XREFs of BaseIsThisAConsoleName @ 0x18010306C
 * Callers:
 *     _ResCreateFile @ 0x180103AC0 (_ResCreateFile.c)
 * Callees:
 *     RtlIsDosDeviceName_U @ 0x180010170 (RtlIsDosDeviceName_U.c)
 *     RtlEqualUnicodeString @ 0x18001A1C0 (RtlEqualUnicodeString.c)
 */

const _UNICODE_STRING *__fastcall BaseIsThisAConsoleName(unsigned __int16 *a1, int a2)
{
  __int64 v3; // rbx
  _WORD *v4; // r8
  int v5; // r9d
  unsigned __int16 v6; // dx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  wchar_t *v11; // xmm0_8
  ULONG IsDosDeviceName_U; // eax
  const _UNICODE_STRING *v13; // rdi
  unsigned int v14; // esi
  _UNICODE_STRING String1; // [rsp+28h] [rbp-20h] BYREF

  v3 = 0LL;
  if ( *a1 )
  {
    if ( (v4 = (_WORD *)*((_QWORD *)a1 + 1),
          v5 = (unsigned __int16)v4[(__int64)(*a1 - 1) >> 1],
          v6 = *v4 - 67,
          v6 <= 0x20u)
      && (v7 = v6, v8 = 0x102000001LL, _bittest64(&v8, v7))
      || (unsigned __int16)(v5 - 36) <= 0x2Au && (v9 = 0x40000400001LL, _bittest64(&v9, (unsigned int)(v5 - 36)))
      || (_WORD)v5 == 110 )
    {
      v10 = *(__m128i *)a1;
      *(_QWORD *)&String1.Length = *(_QWORD *)a1;
      v11 = (wchar_t *)_mm_srli_si128(v10, 8).m128i_u64[0];
      String1.Buffer = v11;
      IsDosDeviceName_U = RtlIsDosDeviceName_U(v11);
      if ( IsDosDeviceName_U )
      {
        String1.Buffer = (wchar_t *)((char *)v11 + HIWORD(IsDosDeviceName_U));
        String1.Length = IsDosDeviceName_U;
        String1.MaximumLength = IsDosDeviceName_U + 2;
      }
      v3 = 0LL;
      if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&stru_1801095C0, 1u) )
        return &stru_1801095C0;
      v13 = &stru_1801095B0;
      if ( !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&stru_1801095B0, 1u) )
      {
        if ( !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&stru_1801095A0, 1u) )
          return (const _UNICODE_STRING *)v3;
        v14 = a2 & 0xC0000000;
        if ( v14 == 0x80000000 )
          return &stru_1801095C0;
        if ( v14 != 0x40000000 )
          return 0LL;
      }
      return v13;
    }
  }
  return (const _UNICODE_STRING *)v3;
}

/*
 * XREFs of AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14008A3A0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400E6034 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1400067F0 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x14009CF00 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14021AC1C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepGetSecurityAttributesCopyoutBufferSize(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // r14
  unsigned int v10; // r12d
  const UNICODE_STRING **v11; // rsi
  const UNICODE_STRING *v12; // rbx
  const UNICODE_STRING *v13; // rcx
  const UNICODE_STRING *v14; // rdx
  unsigned int *v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned int *v18; // rbx
  unsigned int *v19; // r13
  unsigned __int64 v20; // rcx
  unsigned __int64 i; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 *v22; // [rsp+78h] [rbp+20h]

  v22 = a4;
  if ( !a2 )
  {
    if ( is_mul_ok(0x28uLL, *a1) )
    {
      result = 0LL;
      v9 = 40LL * *a1 + 16;
      if ( v9 >= 0x10 )
      {
        v18 = (unsigned int *)*((_QWORD *)a1 + 1);
        v19 = a1 + 2;
        if ( v18 == a1 + 2 )
          goto LABEL_27;
        while ( 1 )
        {
          v20 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v20 < v9 || v20 + *((unsigned __int16 *)v18 + 16) < v20 )
            break;
          i = v20 + *((unsigned __int16 *)v18 + 16);
          result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v18, &i);
          if ( (int)result < 0 )
            return result;
          v18 = *(unsigned int **)v18;
          v9 = i;
          if ( v18 == v19 )
            goto LABEL_27;
        }
      }
    }
    return 3221225621LL;
  }
  v7 = 40LL * a3;
  if ( !is_mul_ok(0x28uLL, a3) )
    return 3221225621LL;
  result = 0LL;
  v9 = v7 + 16;
  if ( v7 >= 0xFFFFFFFFFFFFFFF0uLL )
    return 3221225621LL;
  v10 = 0;
  if ( !a3 )
  {
LABEL_27:
    *v22 = v9;
    return result;
  }
  v11 = (const UNICODE_STRING **)(a1 + 2);
  do
  {
    v12 = *v11;
    if ( *v11 == (const UNICODE_STRING *)v11 )
    {
LABEL_11:
      v16 = (unsigned int *)*((_QWORD *)a1 + 4);
      for ( i = (unsigned __int64)v16; v16 != a1 + 8; i = (unsigned __int64)v16 )
      {
        v12 = (const UNICODE_STRING *)(v16 - 4);
        if ( (v16[10] & 1) == 0 )
        {
          if ( AuthzBasepEqualUnicodeString(v12 + 2, (const UNICODE_STRING *)(a2 + 16LL * v10)) )
            goto LABEL_14;
          v16 = (unsigned int *)i;
        }
        v16 = *(unsigned int **)v16;
      }
      return 3221226021LL;
    }
    while ( 1 )
    {
      v13 = v12 + 2;
      v14 = (const UNICODE_STRING *)(a2 + 16LL * v10);
      if ( KeGetCurrentIrql() >= 2u
         ? AuthzBasepEqualUnicodeStringCaseSensitive(v13, v14)
         : RtlEqualUnicodeString(v13, v14, 1u) )
      {
        break;
      }
      v12 = *(const UNICODE_STRING **)&v12->Length;
      if ( v12 == (const UNICODE_STRING *)v11 )
        goto LABEL_11;
    }
LABEL_14:
    if ( !v12 )
      return 3221226021LL;
    v17 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 < v9 || v17 + v12[2].Length < v17 )
      return 3221225621LL;
    i = v17 + v12[2].Length;
    result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v12, &i);
    if ( (int)result < 0 )
      return result;
    v9 = i;
    ++v10;
  }
  while ( v10 < a3 );
  *v22 = i;
  return result;
}

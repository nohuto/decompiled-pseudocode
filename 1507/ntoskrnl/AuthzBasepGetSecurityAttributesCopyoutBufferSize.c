/*
 * XREFs of AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140044FA0
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14002C088 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140044E10 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x14002CB24 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepEqualUnicodeString @ 0x14002CD80 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14026A770 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepGetSecurityAttributesCopyoutBufferSize(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 result; // rax
  unsigned int v10; // r15d
  __int64 *v11; // rsi
  __int64 v12; // rbx
  const UNICODE_STRING *v13; // rdi
  const UNICODE_STRING *v14; // rcx
  const UNICODE_STRING *v15; // rdx
  unsigned int *v17; // r15
  __int64 v18; // rbx
  unsigned int *v19; // rbp
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22[9]; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+78h] [rbp+10h]

  if ( !a2 )
  {
    if ( is_mul_ok(0x28uLL, *a1) )
    {
      result = 0LL;
      v8 = 40LL * *a1 + 16;
      if ( v8 >= 0x10 )
      {
        v18 = *((_QWORD *)a1 + 1);
        v19 = a1 + 2;
        if ( (unsigned int *)v18 == a1 + 2 )
          goto LABEL_21;
        while ( 1 )
        {
          v20 = (v8 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v20 < v8 || v20 + *(unsigned __int16 *)(v18 + 32) < v20 )
            break;
          v22[0] = v20 + *(unsigned __int16 *)(v18 + 32);
          result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v18, v22);
          if ( (int)result < 0 )
            return result;
          v18 = *(_QWORD *)v18;
          v8 = v22[0];
          if ( (unsigned int *)v18 == v19 )
            goto LABEL_21;
        }
      }
    }
    return 3221225621LL;
  }
  v7 = 40LL * a3;
  if ( !is_mul_ok(0x28uLL, a3) )
    return 3221225621LL;
  v8 = v7 + 16;
  result = 0LL;
  v22[0] = v7 + 16;
  if ( v7 >= 0xFFFFFFFFFFFFFFF0uLL )
    return 3221225621LL;
  v23 = 0;
  v10 = 0;
  if ( !a3 )
  {
LABEL_21:
    *a4 = v8;
    return result;
  }
  v11 = (__int64 *)(a1 + 2);
  while ( 1 )
  {
    v12 = *v11;
    v13 = (const UNICODE_STRING *)(a2 + 16LL * v10);
    if ( (__int64 *)*v11 == v11 )
    {
LABEL_11:
      v17 = (unsigned int *)*((_QWORD *)a1 + 4);
      if ( v17 == a1 + 8 )
        return 3221226021LL;
      while ( 1 )
      {
        v12 = (__int64)(v17 - 4);
        if ( (v17[10] & 1) == 0 )
        {
          if ( AuthzBasepEqualUnicodeString((const UNICODE_STRING *)(v12 + 32), v13) )
            break;
        }
        v17 = *(unsigned int **)v17;
        if ( v17 == a1 + 8 )
          return 3221226021LL;
      }
      v8 = v22[0];
      v10 = v23;
    }
    else
    {
      while ( 1 )
      {
        v14 = (const UNICODE_STRING *)(v12 + 32);
        v15 = (const UNICODE_STRING *)(a2 + 16LL * v10);
        if ( KeGetCurrentIrql() >= 2u
           ? AuthzBasepEqualUnicodeStringCaseSensitive(v14, v15)
           : RtlEqualUnicodeString(v14, v15, 1u) )
        {
          break;
        }
        v12 = *(_QWORD *)v12;
        if ( (__int64 *)v12 == v11 )
          goto LABEL_11;
      }
    }
    if ( !v12 )
      return 3221226021LL;
    v21 = (v8 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v21 < v8 || v21 + *(unsigned __int16 *)(v12 + 32) < v21 )
      return 3221225621LL;
    v22[0] = v21 + *(unsigned __int16 *)(v12 + 32);
    result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v12, v22);
    if ( (int)result < 0 )
      return result;
    v8 = v22[0];
    v23 = ++v10;
    if ( v10 >= a3 )
      goto LABEL_21;
  }
}

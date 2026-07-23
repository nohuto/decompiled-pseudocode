/*
 * XREFs of AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14000E0F0
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14000CF3C (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000DF60 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x14000E5F0 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepEqualUnicodeString @ 0x14009ED84 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400AAFC8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepGetSecurityAttributesCopyoutBufferSize(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  unsigned int v10; // ecx
  unsigned int **v11; // rsi
  unsigned int *v12; // rbx
  const UNICODE_STRING *v13; // r15
  const UNICODE_STRING *v14; // rcx
  unsigned int *v16; // rax
  __int64 v17; // r11
  unsigned int *v18; // r14
  unsigned __int64 v19; // rcx
  __int64 *v20; // r11
  unsigned __int64 v21; // rcx
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+10h]

  if ( !a2 )
  {
    if ( is_mul_ok(0x28uLL, *a1) )
    {
      result = 0LL;
      v9 = 40LL * *a1 + 16;
      if ( v9 >= 0x10 )
      {
        v17 = *((_QWORD *)a1 + 1);
        v18 = a1 + 2;
        if ( (unsigned int *)v17 == a1 + 2 )
          goto LABEL_21;
        while ( 1 )
        {
          v19 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v19 < v9 || v19 + *(unsigned __int16 *)(v17 + 32) < v19 )
            break;
          v22[0] = v19 + *(unsigned __int16 *)(v17 + 32);
          result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v17, v22);
          if ( (int)result < 0 )
            return result;
          v17 = *v20;
          v9 = v22[0];
          if ( (unsigned int *)v17 == v18 )
            goto LABEL_21;
        }
      }
    }
    return 3221225621LL;
  }
  if ( !is_mul_ok(0x28uLL, a3) )
    return 3221225621LL;
  result = 0LL;
  v9 = 40LL * a3 + 16;
  if ( v9 < 0x10 )
    return 3221225621LL;
  v23 = 0;
  v10 = 0;
  if ( !a3 )
  {
LABEL_21:
    *a4 = v9;
    return result;
  }
  v11 = (unsigned int **)(a1 + 2);
  do
  {
    v12 = *v11;
    v13 = (const UNICODE_STRING *)(a2 + 16LL * v10);
    if ( *v11 == (unsigned int *)v11 )
    {
LABEL_11:
      v16 = (unsigned int *)*((_QWORD *)a1 + 4);
      v22[0] = v16;
      if ( v16 == a1 + 8 )
        return 3221226021LL;
      while ( 1 )
      {
        v12 = v16 - 4;
        if ( (v16[10] & 1) == 0 )
        {
          if ( (unsigned __int8)AuthzBasepEqualUnicodeString(v12 + 8, v13) )
            break;
        }
        v16 = *(unsigned int **)v22[0];
        v22[0] = v16;
        if ( v16 == a1 + 8 )
          return 3221226021LL;
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = (const UNICODE_STRING *)(v12 + 8);
        if ( KeGetCurrentIrql() >= 2u
           ? AuthzBasepEqualUnicodeStringCaseSensitive(v14, v13)
           : RtlEqualUnicodeString(v14, v13, 1u) )
        {
          break;
        }
        v12 = *(unsigned int **)v12;
        if ( v12 == (unsigned int *)v11 )
          goto LABEL_11;
      }
    }
    if ( !v12 )
      return 3221226021LL;
    v21 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v21 < v9 || v21 + *((unsigned __int16 *)v12 + 16) < v21 )
      return 3221225621LL;
    v22[0] = v21 + *((unsigned __int16 *)v12 + 16);
    result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v12, v22);
    if ( (int)result < 0 )
      return result;
    v9 = v22[0];
    v10 = v23 + 1;
    v23 = v10;
  }
  while ( v10 < a3 );
  *a4 = v22[0];
  return result;
}

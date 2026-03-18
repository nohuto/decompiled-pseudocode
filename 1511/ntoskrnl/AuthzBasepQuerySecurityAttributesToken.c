/*
 * XREFs of AuthzBasepQuerySecurityAttributesToken @ 0x1400E6034
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14008A3A0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14009C6E4 (AuthzBasepCopyoutSecurityAttributes.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributesToken(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        size_t Size,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  unsigned int v11; // edx
  __int64 result; // rax
  int v13; // ebx
  size_t v14; // r14
  __int64 v15; // rax
  unsigned __int16 v16; // r8
  unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v6 = a6;
  v17 = 0LL;
  *a6 = 0;
  if ( *a1 )
  {
    v11 = 0;
    if ( a3 )
    {
      v15 = a2 + 2;
      while ( 1 )
      {
        v16 = *(_WORD *)(v15 - 2);
        if ( !v16 || !*(_WORD *)v15 || v16 > *(_WORD *)v15 || !*(_QWORD *)(v15 + 6) )
          break;
        ++v11;
        v15 += 16LL;
        if ( v11 >= a3 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      result = AuthzBasepGetSecurityAttributesCopyoutBufferSize(a1, a2, a3, &v17);
      if ( (int)result < 0 )
        return result;
      v13 = v17;
      if ( v17 )
      {
        v14 = (unsigned int)Size;
        if ( (unsigned int)Size >= v17 )
        {
          memset(a4, 0, (unsigned int)Size);
          result = AuthzBasepCopyoutSecurityAttributes(a1, a2, a3, a4, v14);
        }
        else
        {
          result = 3221225507LL;
        }
        *v6 = v13;
        return result;
      }
    }
    return 3221225485LL;
  }
  if ( (unsigned int)Size >= 0x10 )
  {
    result = 0LL;
    *a4 = 0LL;
    a4[1] = 0LL;
    *(_WORD *)a4 = 1;
  }
  else
  {
    result = 3221225507LL;
  }
  *v6 = 16;
  return result;
}

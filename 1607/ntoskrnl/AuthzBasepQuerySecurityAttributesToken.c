/*
 * XREFs of AuthzBasepQuerySecurityAttributesToken @ 0x14000CF3C
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000DF60 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14000D284 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14000E0F0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributesToken(
        _DWORD *a1,
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
  __int64 v14; // r14
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

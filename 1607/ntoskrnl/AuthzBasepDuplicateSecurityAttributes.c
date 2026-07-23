/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x14000E910
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000DF60 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetAnonymousToken @ 0x14007F904 (SepGetAnonymousToken.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AA48 (SepValidateAndCopyGlobalEntry.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     SepDuplicateClaimAttributes @ 0x140695B64 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttribute @ 0x14000EB80 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x14000EC10 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x14000EDE8 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x14007C7CC (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // r14
  unsigned __int8 v4; // bp
  unsigned int v6; // ebx
  __int64 SecurityAttribute; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  __int64 *i; // rdi
  POOL_TYPE v12; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 *v18; // rdi
  __int64 SecurityAttributeValue; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r15
  void *v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // r9
  __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r9
  char v33; // [rsp+70h] [rbp+18h]
  __int64 *v34; // [rsp+78h] [rbp+20h]

  v33 = a3;
  v3 = *(__int64 **)(a1 + 8);
  v4 = 0;
  v34 = (__int64 *)(a1 + 8);
  v6 = 0;
  if ( v3 == (__int64 *)(a1 + 8) )
  {
LABEL_19:
    v4 = 1;
    goto LABEL_20;
  }
  while ( 1 )
  {
    if ( a3 && (*((_DWORD *)v3 + 13) & 1) != 0 )
      goto LABEL_17;
    SecurityAttribute = AuthzBasepAllocateSecurityAttribute((PCUNICODE_STRING)v3 + 2);
    v8 = SecurityAttribute;
    if ( !SecurityAttribute )
      goto LABEL_31;
    *(_DWORD *)(SecurityAttribute + 52) = *((_DWORD *)v3 + 13);
    *(_WORD *)(SecurityAttribute + 48) = *((_WORD *)v3 + 24);
    if ( (*(_DWORD *)(SecurityAttribute + 56) & 2) == 0 )
    {
      v9 = *(_QWORD **)(a2 + 40);
      v10 = (_QWORD *)(SecurityAttribute + 16);
      if ( *v9 != a2 + 32 )
        __fastfail(3u);
      *v10 = a2 + 32;
      *(_QWORD *)(SecurityAttribute + 24) = v9;
      *v9 = v10;
      *(_QWORD *)(a2 + 40) = v10;
      *(_DWORD *)(SecurityAttribute + 56) |= 2u;
      ++*(_DWORD *)(a2 + 24);
    }
    if ( *((_WORD *)v3 + 24) != 2 )
      break;
LABEL_8:
    for ( i = (__int64 *)v3[9]; i != v3 + 9; i = (__int64 *)*i )
    {
      v12 = PagedPool;
      if ( KeGetCurrentIrql() >= 2u )
        v12 = NonPagedPoolNx;
      PoolWithTag = ExAllocatePoolWithTag(v12, 0x40uLL, 0x74416553u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_31;
      memset(PoolWithTag, 0, 0x40uLL);
      v14[5] = i[5];
      if ( (v14[4] & 2) == 0 )
      {
        v15 = *(_QWORD **)(v8 + 104);
        v16 = v14 + 2;
        if ( *v15 != v8 + 96 )
          __fastfail(3u);
        *v16 = v8 + 96;
        v14[3] = v15;
        *v15 = v16;
        *(_QWORD *)(v8 + 104) = v16;
        *((_DWORD *)v14 + 8) |= 2u;
        ++*(_DWORD *)(v8 + 88);
      }
    }
LABEL_16:
    a3 = v33;
LABEL_17:
    v3 = (__int64 *)*v3;
    if ( v3 == v34 )
    {
      v6 = 0;
      goto LABEL_19;
    }
  }
  switch ( *((_WORD *)v3 + 24) )
  {
    case 1:
    case 6:
      goto LABEL_8;
    case 3:
      v18 = (__int64 *)v3[9];
      if ( v18 == v3 + 9 )
        goto LABEL_16;
      while ( 1 )
      {
        SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v18 + 20));
        v20 = SecurityAttributeValue;
        if ( !SecurityAttributeValue )
          goto LABEL_31;
        *(_WORD *)(SecurityAttributeValue + 40) = 0;
        *(_WORD *)(SecurityAttributeValue + 42) = *((_WORD *)v18 + 20);
        *(_QWORD *)(SecurityAttributeValue + 48) = SecurityAttributeValue + 64;
        RtlCopyUnicodeString((PUNICODE_STRING)(SecurityAttributeValue + 40), (PCUNICODE_STRING)(v18 + 5));
        if ( (*(_DWORD *)(v20 + 32) & 2) == 0 )
        {
          v21 = *(_QWORD **)(v8 + 104);
          v22 = (_QWORD *)(v20 + 16);
          if ( *v21 != v8 + 96 )
            __fastfail(3u);
          *v22 = v8 + 96;
          *(_QWORD *)(v20 + 24) = v21;
          *v21 = v22;
          *(_QWORD *)(v8 + 104) = v22;
          *(_DWORD *)(v20 + 32) |= 2u;
          ++*(_DWORD *)(v8 + 88);
        }
        v18 = (__int64 *)*v18;
        if ( v18 == v3 + 9 )
          goto LABEL_16;
      }
    case 4:
      v23 = (__int64 *)v3[9];
      if ( v23 == v3 + 9 )
        goto LABEL_16;
      while ( 1 )
      {
        v24 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v23 + 24));
        v25 = v24;
        if ( !v24 )
          goto LABEL_31;
        v26 = (void *)(v24 + 64);
        *(_QWORD *)(v24 + 40) = v23[5];
        v27 = *((unsigned __int16 *)v23 + 24);
        *(_WORD *)(v25 + 48) = v27;
        *(_QWORD *)(v25 + 56) = v25 + 64;
        memmove(v26, (const void *)v23[7], v27);
        LOBYTE(v28) = 1;
        AuthzBasepAddSecurityAttributeValueToLists(v8, v25, 0LL, v28);
        v23 = (__int64 *)*v23;
        if ( v23 == v3 + 9 )
          goto LABEL_16;
      }
    case 5:
    case 0x10:
      v29 = (__int64 *)v3[9];
      if ( v29 == v3 + 9 )
        goto LABEL_16;
      break;
    default:
      v6 = -1073741811;
      goto LABEL_20;
  }
  while ( 1 )
  {
    v30 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned int *)v29 + 12));
    v31 = v30;
    if ( !v30 )
      break;
    *(_QWORD *)(v30 + 40) = v30 + 64;
    *(_DWORD *)(v30 + 48) = *((_DWORD *)v29 + 12);
    memmove((void *)(v30 + 64), (const void *)v29[5], *((unsigned int *)v29 + 12));
    LOBYTE(v32) = 1;
    AuthzBasepAddSecurityAttributeValueToLists(v8, v31, 0LL, v32);
    v29 = (__int64 *)*v29;
    if ( v29 == v3 + 9 )
      goto LABEL_16;
  }
LABEL_31:
  v6 = -1073741670;
LABEL_20:
  AuthzBasepFinaliseSecurityAttributesList(a2, v4);
  return v6;
}

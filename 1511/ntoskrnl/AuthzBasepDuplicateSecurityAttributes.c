/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x14009E350
 * Callers:
 *     SepGetAnonymousToken @ 0x140003988 (SepGetAnonymousToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1402010E8 (SepValidateAndCopyGlobalEntry.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     SepDuplicateClaimAttributes @ 0x140656110 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x140005E88 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x14009E680 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x14009E7F8 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14021A0B8 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // r15
  char v4; // r12
  POOL_TYPE v6; // ecx
  PVOID PoolWithTag; // rax
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned __int16 v10; // cx
  const void *v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 *i; // rdi
  POOL_TYPE v17; // ecx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rcx
  char *v21; // rax
  unsigned int v22; // esi
  _QWORD *v23; // rbx
  void *v24; // rdi
  char v25; // al
  __int64 *v27; // rdi
  __int64 SecurityAttributeValue; // rax
  __int64 v29; // rbx
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rbp
  void *v35; // rcx
  unsigned int v36; // eax
  __int64 *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbp
  char v40; // [rsp+70h] [rbp+18h]
  __int64 *v41; // [rsp+78h] [rbp+20h]

  v40 = a3;
  v3 = *(__int64 **)(a1 + 8);
  v4 = 0;
  v41 = (__int64 *)(a1 + 8);
  if ( v3 == (__int64 *)(a1 + 8) )
  {
LABEL_24:
    v22 = 0;
    v4 = 1;
    goto LABEL_25;
  }
  while ( 1 )
  {
    if ( a3 && (*((_DWORD *)v3 + 13) & 1) != 0 )
      goto LABEL_23;
    v6 = PagedPool;
    if ( KeGetCurrentIrql() >= 2u )
      v6 = NonPagedPoolNx;
    PoolWithTag = ExAllocatePoolWithTag(v6, *((unsigned __int16 *)v3 + 16) + 112LL, 0x74416553u);
    v8 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_54;
    memset(PoolWithTag, 0, 0x70uLL);
    *(_WORD *)(v8 + 32) = 0;
    *(_WORD *)(v8 + 34) = *((_WORD *)v3 + 16);
    *(_QWORD *)(v8 + 40) = v8 + 112;
    v9 = *((unsigned __int16 *)v3 + 16);
    v10 = *(_WORD *)(v8 + 34);
    v11 = (const void *)v3[5];
    if ( (unsigned __int16)v9 > v10 )
      v9 = v10;
    *(_WORD *)(v8 + 32) = v9;
    v12 = v9;
    memmove((void *)(v8 + 112), v11, v9);
    if ( (unsigned __int64)*(unsigned __int16 *)(v8 + 32) + 2 <= *(unsigned __int16 *)(v8 + 34) )
      *(_WORD *)(v8 + 112 + 2 * (v12 >> 1)) = 0;
    v13 = v8 + 96;
    *(_QWORD *)(v8 + 80) = v8 + 72;
    *(_QWORD *)(v8 + 72) = v8 + 72;
    *(_QWORD *)(v8 + 104) = v8 + 96;
    *(_QWORD *)(v8 + 96) = v8 + 96;
    *(_DWORD *)(v8 + 52) = *((_DWORD *)v3 + 13);
    *(_WORD *)(v8 + 48) = *((_WORD *)v3 + 24);
    if ( (*(_DWORD *)(v8 + 56) & 2) == 0 )
    {
      v14 = *(__int64 **)(a2 + 40);
      v15 = v8 + 16;
      *(_QWORD *)(v8 + 16) = a2 + 32;
      *(_QWORD *)(v8 + 24) = v14;
      if ( *v14 != a2 + 32 )
        __fastfail(3u);
      *v14 = v15;
      *(_QWORD *)(a2 + 40) = v15;
      *(_DWORD *)(v8 + 56) |= 2u;
      ++*(_DWORD *)(a2 + 24);
    }
    if ( *((_WORD *)v3 + 24) != 2 )
      break;
LABEL_14:
    for ( i = (__int64 *)v3[9]; i != v3 + 9; i = (__int64 *)*i )
    {
      v17 = PagedPool;
      if ( KeGetCurrentIrql() >= 2u )
        v17 = NonPagedPoolNx;
      v18 = ExAllocatePoolWithTag(v17, 0x40uLL, 0x74416553u);
      v19 = v18;
      if ( !v18 )
        goto LABEL_54;
      memset(v18, 0, 0x40uLL);
      v19[5] = i[5];
      if ( (v19[4] & 2) == 0 )
      {
        v20 = *(_QWORD **)(v8 + 104);
        v21 = (char *)(v19 + 2);
        v19[2] = v13;
        v19[3] = v20;
        if ( *v20 != v13 )
          __fastfail(3u);
        *v20 = v21;
        *(_QWORD *)(v8 + 104) = v21;
        *((_DWORD *)v19 + 8) |= 2u;
        ++*(_DWORD *)(v8 + 88);
      }
    }
LABEL_22:
    a3 = v40;
LABEL_23:
    v3 = (__int64 *)*v3;
    if ( v3 == v41 )
      goto LABEL_24;
  }
  switch ( *((_WORD *)v3 + 24) )
  {
    case 1:
    case 6:
      goto LABEL_14;
    case 3:
      v27 = (__int64 *)v3[9];
      if ( v27 == v3 + 9 )
        goto LABEL_22;
      while ( 1 )
      {
        SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v27 + 20));
        v29 = SecurityAttributeValue;
        if ( !SecurityAttributeValue )
          goto LABEL_54;
        *(_WORD *)(SecurityAttributeValue + 40) = 0;
        *(_WORD *)(SecurityAttributeValue + 42) = *((_WORD *)v27 + 20);
        *(_QWORD *)(SecurityAttributeValue + 48) = SecurityAttributeValue + 64;
        RtlCopyUnicodeString((PUNICODE_STRING)(SecurityAttributeValue + 40), (PCUNICODE_STRING)(v27 + 5));
        if ( (*(_DWORD *)(v29 + 32) & 2) == 0 )
        {
          v30 = *(__int64 **)(v8 + 104);
          v31 = v29 + 16;
          *(_QWORD *)(v29 + 16) = v13;
          *(_QWORD *)(v29 + 24) = v30;
          if ( *v30 != v13 )
            __fastfail(3u);
          *v30 = v31;
          *(_QWORD *)(v8 + 104) = v31;
          *(_DWORD *)(v29 + 32) |= 2u;
          ++*(_DWORD *)(v8 + 88);
        }
        v27 = (__int64 *)*v27;
        if ( v27 == v3 + 9 )
          goto LABEL_22;
      }
    case 4:
      v32 = (__int64 *)v3[9];
      if ( v32 == v3 + 9 )
        goto LABEL_22;
      while ( 1 )
      {
        v33 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v32 + 24));
        v34 = v33;
        if ( !v33 )
          goto LABEL_54;
        v35 = (void *)(v33 + 64);
        *(_QWORD *)(v33 + 40) = v32[5];
        v36 = *((unsigned __int16 *)v32 + 24);
        *(_WORD *)(v34 + 48) = v36;
        *(_QWORD *)(v34 + 56) = v34 + 64;
        memmove(v35, (const void *)v32[7], v36);
        AuthzBasepAddSecurityAttributeValueToLists(v8, v34, 0, 1);
        v32 = (__int64 *)*v32;
        if ( v32 == v3 + 9 )
          goto LABEL_22;
      }
    case 5:
    case 0x10:
      v37 = (__int64 *)v3[9];
      if ( v37 == v3 + 9 )
        goto LABEL_22;
      break;
    default:
      v22 = -1073741811;
      goto LABEL_25;
  }
  while ( 1 )
  {
    v38 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned int *)v37 + 12));
    v39 = v38;
    if ( !v38 )
      break;
    *(_QWORD *)(v38 + 40) = v38 + 64;
    *(_DWORD *)(v38 + 48) = *((_DWORD *)v37 + 12);
    memmove((void *)(v38 + 64), (const void *)v37[5], *((unsigned int *)v37 + 12));
    AuthzBasepAddSecurityAttributeValueToLists(v8, v39, 0, 1);
    v37 = (__int64 *)*v37;
    if ( v37 == v3 + 9 )
      goto LABEL_22;
  }
LABEL_54:
  v22 = -1073741670;
LABEL_25:
  v23 = (_QWORD *)(a2 + 32);
  while ( (_QWORD *)*v23 != v23 )
  {
    v24 = (void *)(*v23 - 16LL);
    if ( v4 )
      v25 = AuthzBasepCommitSecurityAttributeChanges(a2, v24);
    else
      v25 = AuthzBasepRollbackSecurityAttributeChanges(a2, v24);
    if ( v25 )
      ExFreePoolWithTag(v24, 0);
  }
  return v22;
}

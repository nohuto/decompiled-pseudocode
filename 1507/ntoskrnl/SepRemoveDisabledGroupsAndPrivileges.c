/*
 * XREFs of SepRemoveDisabledGroupsAndPrivileges @ 0x14040F8F8
 * Callers:
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140044DF4 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     SepSidInSidAndAttributes @ 0x14040FBB4 (SepSidInSidAndAttributes.c)
 */

char __fastcall SepRemoveDisabledGroupsAndPrivileges(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // edi
  __int64 v7; // r10
  char v8; // r15
  unsigned int v10; // r9d
  char v11; // r12
  char v12; // r13
  unsigned int v13; // ebp
  __int64 v14; // r9
  char v15; // r14
  int v16; // r8d
  __int64 v18; // rcx
  void *v19; // r12
  UCHAR v20; // r15
  ULONG v21; // edx
  unsigned int v22; // ecx
  _DWORD *v23; // rax
  unsigned __int64 v24; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned int i; // ecx
  __int64 v29; // rdx
  unsigned int j; // ecx
  unsigned int v31; // [rsp+20h] [rbp-58h]
  char v32; // [rsp+80h] [rbp+8h]
  unsigned int v34; // [rsp+90h] [rbp+18h]

  v34 = a3;
  v6 = 0;
  v7 = a4;
  v8 = a2;
  v10 = 0;
  v31 = 0;
  v11 = 0;
  v32 = 0;
  v12 = 0;
  v13 = 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(a1 + 152);
      v15 = 0;
      if ( (*(_DWORD *)(v14 + 16LL * v13 + 8) & 0x30) == 0 )
      {
        v15 = SepSidInSidAndAttributes(v7, (unsigned int)a3, a3, *(_QWORD *)(v14 + 16LL * v13));
        if ( v15 )
          goto LABEL_22;
      }
      if ( (v8 & 4) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 152);
        if ( (*(_DWORD *)(v18 + 16LL * v13 + 8) & 0x30) == 0 )
        {
          v19 = *(void **)(v18 + 16LL * v13);
          v20 = *RtlSubAuthorityCountSid(v19);
          if ( v20 )
          {
            if ( *RtlSubAuthoritySid(v19, 0) - 80 > 0x1F )
            {
              v21 = *RtlSubAuthoritySid(v19, (unsigned int)v20 - 1);
              if ( v21 <= 0x239 )
                break;
            }
          }
        }
      }
LABEL_5:
      v8 = a2;
      ++v13;
      v7 = a4;
      a3 = v34;
      if ( v13 >= *(_DWORD *)(a1 + 124) )
      {
        v11 = v32;
        v10 = 0;
        goto LABEL_7;
      }
    }
    v22 = 0;
    v23 = &SepLUARids;
    while ( !v15 )
    {
      if ( v21 == *v23 )
      {
        v32 = 1;
        v15 = 1;
      }
      ++v22;
      ++v23;
      if ( v22 >= 0x13 )
      {
        if ( !v15 )
          goto LABEL_5;
        break;
      }
    }
LABEL_22:
    v12 = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v13 + 8) &= 0xFFFFFFF0;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v13 + 8) |= 0x10u;
    *(_DWORD *)(a1 + 200) |= 0x800u;
    if ( v13 == *(_DWORD *)(a1 + 144) )
      *(_DWORD *)(a1 + 144) = 0;
    goto LABEL_5;
  }
LABEL_7:
  v16 = *(_DWORD *)(a1 + 200);
  if ( (v16 & 0x800) == 0 )
  {
    v10 = 0;
    for ( i = 0; i <= 0x23; ++i )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( _bittest64(&v27, i) )
        ++v10;
    }
    v31 = v10;
  }
  if ( (v8 & 1) != 0 )
  {
    v12 = 1;
    *(_QWORD *)(a1 + 72) &= 0x800000uLL;
    *(_QWORD *)(a1 + 80) &= 0x800000uLL;
    *(_QWORD *)(a1 + 64) &= 0x800000uLL;
  }
  else if ( (v8 & 4) != 0 )
  {
    v12 = 1;
    v24 = 0x602880000LL;
    if ( !v11 )
      v24 = 0xFFFFFFFEDFE9F97BuLL;
    *(_QWORD *)(a1 + 72) &= v24;
    *(_QWORD *)(a1 + 80) &= v24;
    *(_QWORD *)(a1 + 64) &= v24;
  }
  else if ( a5 )
  {
    v26 = a5;
    do
    {
      if ( (unsigned int)(*a6 - 2) <= 0x21 )
      {
        *(_QWORD *)(a1 + 72) &= ~(1LL << *a6);
        *(_QWORD *)(a1 + 64) &= ~(1LL << *a6);
      }
      a6 += 3;
      --v26;
    }
    while ( v26 );
    v10 = v31;
  }
  if ( (v16 & 0x800) == 0 )
  {
    for ( j = 0; j <= 0x23; ++j )
    {
      v29 = *(_QWORD *)(a1 + 64);
      if ( _bittest64(&v29, j) )
        ++v6;
    }
    if ( v6 < v10 )
      *(_DWORD *)(a1 + 200) = v16 | 0x800;
  }
  return v12;
}

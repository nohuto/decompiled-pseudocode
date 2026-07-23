/*
 * XREFs of SepRemoveDisabledGroupsAndPrivileges @ 0x14047B964
 * Callers:
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     SepTokenPrivilegeCount @ 0x14000E6F0 (SepTokenPrivilegeCount.c)
 *     RtlSubAuthorityCountSid @ 0x14002CDC8 (RtlSubAuthorityCountSid.c)
 *     SepSidInSidAndAttributes @ 0x14047BBDC (SepSidInSidAndAttributes.c)
 */

char __fastcall SepRemoveDisabledGroupsAndPrivileges(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  char v6; // r14
  char v7; // r15
  unsigned int v8; // esi
  __int64 v9; // r10
  __int64 v12; // r9
  char v13; // bp
  int v14; // r10d
  __int64 v16; // rcx
  void *v17; // r12
  UCHAR v18; // r14
  ULONG v19; // edx
  unsigned int v20; // ecx
  _DWORD *v21; // rax
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  int v24; // r9d
  unsigned int v25; // r11d
  __int64 v27; // r8
  __int64 v28; // [rsp+20h] [rbp-48h]
  char v29; // [rsp+78h] [rbp+10h]
  unsigned int v30; // [rsp+80h] [rbp+18h]

  v30 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v29 = 0;
  v9 = a4;
  if ( *(_DWORD *)(a1 + 124) )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 152);
      v13 = 0;
      if ( (*(_DWORD *)(v12 + 16LL * v8 + 8) & 0x30) == 0 )
      {
        v13 = SepSidInSidAndAttributes(v9, (unsigned int)a3, a3, *(_QWORD *)(v12 + 16LL * v8), v28);
        if ( v13 )
          goto LABEL_23;
      }
      if ( (a2 & 4) != 0 )
      {
        v16 = *(_QWORD *)(a1 + 152);
        if ( (*(_DWORD *)(v16 + 16LL * v8 + 8) & 0x30) == 0 )
        {
          v17 = *(void **)(v16 + 16LL * v8);
          v18 = *RtlSubAuthorityCountSid(v17);
          if ( v18 )
          {
            if ( *RtlSubAuthoritySid(v17, 0) - 80 > 0x1F )
            {
              v19 = *RtlSubAuthoritySid(v17, (unsigned int)v18 - 1);
              if ( v19 <= 0x239 )
                break;
            }
          }
        }
      }
LABEL_5:
      v9 = a4;
      ++v8;
      a3 = v30;
      if ( v8 >= *(_DWORD *)(a1 + 124) )
      {
        v6 = v29;
        goto LABEL_7;
      }
    }
    v20 = 0;
    v21 = &SepLUARids;
    while ( !v13 )
    {
      if ( v19 == *v21 )
      {
        v29 = 1;
        v13 = 1;
      }
      ++v20;
      ++v21;
      if ( v20 >= 0x13 )
      {
        if ( !v13 )
          goto LABEL_5;
        break;
      }
    }
LABEL_23:
    v7 = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v8 + 8) &= 0xFFFFFFF0;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v8 + 8) |= 0x10u;
    *(_DWORD *)(a1 + 200) |= 0x800u;
    if ( v8 == *(_DWORD *)(a1 + 144) )
      *(_DWORD *)(a1 + 144) = 0;
    goto LABEL_5;
  }
LABEL_7:
  v14 = *(_DWORD *)(a1 + 200) & 0x800;
  if ( !v14 )
    SepTokenPrivilegeCount(a1);
  if ( (a2 & 1) != 0 )
  {
    v7 = 1;
    *(_QWORD *)(a1 + 72) &= 0x800000uLL;
    *(_QWORD *)(a1 + 80) &= 0x800000uLL;
    *(_QWORD *)(a1 + 64) &= 0x800000uLL;
  }
  else if ( (a2 & 4) != 0 )
  {
    v7 = 1;
    v22 = 0x602880000LL;
    if ( !v6 )
      v22 = 0xFFFFFFEEDFE9F97BuLL;
    *(_QWORD *)(a1 + 72) &= v22;
    *(_QWORD *)(a1 + 80) &= v22;
    *(_QWORD *)(a1 + 64) &= v22;
  }
  else if ( a5 )
  {
    v27 = a5;
    do
    {
      if ( (unsigned int)(*a6 - 2) <= 0x22 )
      {
        *(_QWORD *)(a1 + 72) &= ~(1LL << *a6);
        *(_QWORD *)(a1 + 64) &= ~(1LL << *a6);
      }
      a6 += 3;
      --v27;
    }
    while ( v27 );
  }
  if ( !v14 )
  {
    v23 = SepTokenPrivilegeCount(a1);
    if ( v23 < v25 )
      *(_DWORD *)(a1 + 200) = v24 | 0x800;
  }
  return v7;
}

/*
 * XREFs of AuthzBasepCommitSecurityAttributeChanges @ 0x14000EC70
 * Callers:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x14000EC10 (AuthzBasepFinaliseSecurityAttributesList.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14010C9B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x140234118 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCommitSecurityAttributeChanges(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // si
  __int64 v5; // rax
  _QWORD *v6; // rdx
  int v7; // eax
  _QWORD *v8; // rdx
  __int64 **v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  bool v12; // r9
  __int64 v13; // r8
  __int64 **v14; // rdx
  int v15; // eax
  __int64 *v16; // rdx
  __int64 v18; // rdx
  _QWORD *v19; // rax

  v3 = 0;
  if ( (*(_DWORD *)(a2 + 56) & 2) != 0 )
  {
    a3 = *(_QWORD *)(a2 + 16);
    v5 = a2 + 16;
    v6 = *(_QWORD **)(a2 + 24);
    if ( *(_QWORD *)(a3 + 8) != v5 || *v6 != v5 )
      __fastfail(3u);
    *v6 = a3;
    *(_QWORD *)(a3 + 8) = v6;
    *(_DWORD *)(a2 + 56) &= ~2u;
    if ( a1 )
      --*(_DWORD *)(a1 + 24);
  }
  v7 = *(_DWORD *)(a2 + 56);
  if ( (v7 & 4) != 0 )
  {
    LOBYTE(a3) = 1;
    AuthzBasepRemoveSecurityAttributeFromLists(a1, a2, a3, 0LL);
    AuthzBasepFreeSecurityAttributeValues(a2, 0LL);
    return 1;
  }
  else
  {
    if ( (v7 & 1) == 0 )
    {
      v8 = *(_QWORD **)(a1 + 16);
      if ( *v8 != a1 + 8 )
        __fastfail(3u);
      *(_QWORD *)a2 = a1 + 8;
      *(_QWORD *)(a2 + 8) = v8;
      *v8 = a2;
      *(_QWORD *)(a1 + 16) = a2;
      *(_DWORD *)(a2 + 56) |= 1u;
      ++*(_DWORD *)a1;
    }
    v9 = (__int64 **)(a2 + 96);
    while ( *v9 != (__int64 *)v9 )
    {
      v10 = (__int64)(*v9 - 2);
      v11 = *(_DWORD *)(v10 + 32);
      v12 = (v11 & 4) != 0;
      if ( (v11 & 2) != 0 )
      {
        v13 = **v9;
        v14 = *(__int64 ***)(v10 + 24);
        if ( *(__int64 **)(v13 + 8) != *v9 || *v14 != *v9 )
          __fastfail(3u);
        *v14 = (__int64 *)v13;
        *(_QWORD *)(v13 + 8) = v14;
        *(_DWORD *)(v10 + 32) &= ~2u;
        --*(_DWORD *)(a2 + 88);
      }
      v15 = *(_DWORD *)(v10 + 32);
      if ( v12 )
      {
        if ( (v15 & 1) != 0 )
        {
          v18 = *(_QWORD *)v10;
          v19 = *(_QWORD **)(v10 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || *v19 != v10 )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *(_DWORD *)(v10 + 32) &= ~1u;
          --*(_DWORD *)(a2 + 60);
          if ( (*(_DWORD *)(v10 + 32) & 4) != 0 )
            --*(_DWORD *)(a2 + 64);
        }
        ExFreePoolWithTag((PVOID)v10, 0);
      }
      else if ( (v15 & 1) == 0 )
      {
        v16 = *(__int64 **)(a2 + 80);
        if ( *v16 != a2 + 72 )
          __fastfail(3u);
        *(_QWORD *)v10 = a2 + 72;
        *(_QWORD *)(v10 + 8) = v16;
        *v16 = v10;
        *(_QWORD *)(a2 + 80) = v10;
        *(_DWORD *)(v10 + 32) |= 1u;
        ++*(_DWORD *)(a2 + 60);
      }
    }
  }
  return v3;
}

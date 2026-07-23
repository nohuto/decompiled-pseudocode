/*
 * XREFs of AuthzBasepFreeSecurityAttributeValues @ 0x14010C9B0
 * Callers:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140001514 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x14000EC70 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14007C854 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140234198 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400014CC (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributeValues(__int64 a1, char a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  void **v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  _QWORD **v9; // r8
  void **v10; // rdx
  int v11; // eax
  __int64 *v12; // rbp

  if ( !a2 )
  {
    v3 = a1 + 72;
    while ( *(_QWORD *)v3 != v3 )
    {
      v4 = *(_QWORD **)v3;
      if ( (*(_DWORD *)(*(_QWORD *)v3 + 32LL) & 2) != 0 )
      {
        v9 = (_QWORD **)v4[2];
        v10 = (void **)v4[3];
        if ( v9[1] != v4 + 2 || *v10 != v4 + 2 )
          __fastfail(3u);
        *v10 = v9;
        v9[1] = v10;
        *((_DWORD *)v4 + 8) &= ~2u;
        --*(_DWORD *)(a1 + 88);
      }
      if ( (v4[4] & 1) != 0 )
      {
        v5 = (_QWORD *)*v4;
        v6 = (void **)v4[1];
        if ( *(_QWORD **)(*v4 + 8LL) != v4 || *v6 != v4 )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = v6;
        *((_DWORD *)v4 + 8) &= ~1u;
        --*(_DWORD *)(a1 + 60);
        if ( (v4[4] & 4) != 0 )
          --*(_DWORD *)(a1 + 64);
      }
      ExFreePoolWithTag(v4, 0);
    }
  }
  v7 = (__int64 *)(a1 + 96);
  v8 = *(__int64 **)(a1 + 96);
  if ( (__int64 *)*v7 != v7 )
  {
    do
    {
      v11 = *((_DWORD *)v8 + 4);
      v12 = v8 - 2;
      v8 = (__int64 *)*v8;
      if ( (v11 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a1, v12, 0);
        ExFreePoolWithTag(v12, 0);
      }
    }
    while ( v8 != v7 );
  }
}

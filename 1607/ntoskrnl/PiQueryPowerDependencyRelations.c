/*
 * XREFs of PiQueryPowerDependencyRelations @ 0x140571314
 * Callers:
 *     PiQueryPowerRelations @ 0x140570F88 (PiQueryPowerRelations.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F3058 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F3088 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1403F3B88 (PiGetProviderList.c)
 *     PiEnumerateProviderListEntry @ 0x14062ADFC (PiEnumerateProviderListEntry.c)
 */

__int64 __fastcall PiQueryPowerDependencyRelations(__int64 a1)
{
  __int64 v2; // r13
  __int64 *ProviderList; // r14
  _QWORD *v4; // rsi
  unsigned int v5; // ebx
  _QWORD *v6; // r15
  __int64 *v7; // rdi
  _QWORD *v9; // r11
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rbp
  _QWORD *v17; // rax
  char *PoolWithTag; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rbp
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  PnpAcquireDependencyRelationsLock(0);
  v2 = a1 + 144;
  ProviderList = PiGetProviderList(*(_QWORD *)(a1 + 32));
  v4 = (_QWORD *)(a1 + 176);
  v5 = 0;
  v6 = (_QWORD *)*v4;
  while ( v6 != v4 )
  {
    v9 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v9 + 48) )
    {
      v10 = (__int64 *)*ProviderList;
      if ( (__int64 *)*ProviderList == ProviderList )
        goto LABEL_13;
      do
      {
        PiEnumerateProviderListEntry(v10, &v23, 0LL);
        if ( v23 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
          if ( v11 )
          {
            if ( v9[5] == v11 + 144 )
              break;
          }
        }
        v10 = (__int64 *)*v10;
      }
      while ( v10 != ProviderList );
      if ( v10 == ProviderList )
      {
LABEL_13:
        v12 = *v9;
        v13 = (_QWORD *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v13 != v9 )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        v14 = v9[3];
        v15 = (_QWORD *)v9[4];
        if ( *(_QWORD **)(v14 + 8) != v9 + 3 || (_QWORD *)*v15 != v9 + 3 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        ExFreePoolWithTag(v9, 0x72775044u);
      }
    }
  }
  v7 = (__int64 *)*ProviderList;
  while ( v7 != ProviderList )
  {
    PiEnumerateProviderListEntry(v7, &v23, 0LL);
    v7 = (__int64 *)*v7;
    if ( v23 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
      if ( v16 )
      {
        if ( *(_QWORD *)(v16 + 16) )
        {
          v17 = (_QWORD *)*v4;
          if ( (_QWORD *)*v4 == v4 )
            goto LABEL_27;
          do
          {
            if ( v17[5] == v16 + 144 )
              break;
            v17 = (_QWORD *)*v17;
          }
          while ( v17 != v4 );
          if ( v17 == v4 )
          {
LABEL_27:
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72775044u);
            if ( !PoolWithTag )
            {
              v5 = -1073741670;
              break;
            }
            PoolWithTag[48] = 1;
            *((_QWORD *)PoolWithTag + 5) = v16 + 144;
            *((_QWORD *)PoolWithTag + 2) = v2;
            v19 = (_QWORD *)v4[1];
            if ( (_QWORD *)*v19 != v4 )
              __fastfail(3u);
            *(_QWORD *)PoolWithTag = v4;
            v20 = v16 + 160;
            *((_QWORD *)PoolWithTag + 1) = v19;
            *v19 = PoolWithTag;
            v4[1] = PoolWithTag;
            v21 = PoolWithTag + 24;
            v22 = *(_QWORD **)(v20 + 8);
            if ( *v22 != v20 )
              __fastfail(3u);
            *v21 = v20;
            v21[1] = v22;
            *v22 = v21;
            *(_QWORD *)(v20 + 8) = v21;
          }
        }
      }
    }
  }
  PnpReleaseDependencyRelationsLock();
  return v5;
}

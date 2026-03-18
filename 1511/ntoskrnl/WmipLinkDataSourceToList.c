/*
 * XREFs of WmipLinkDataSourceToList @ 0x1405024B0
 * Callers:
 *     WmipAddDataSource @ 0x140501BD8 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x14065F59C (WmipUpdateAddGuid.c)
 * Callees:
 *     WmipFindGEByGuid @ 0x1403D370C (WmipFindGEByGuid.c)
 *     WmipAllocGuidEntry @ 0x14053EEA8 (WmipAllocGuidEntry.c)
 *     WmipRegisterEtwProvider @ 0x1405463AC (WmipRegisterEtwProvider.c)
 */

__int64 __fastcall WmipLinkDataSourceToList(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v3; // r15
  _QWORD *v5; // r14
  unsigned int v8; // esi
  _QWORD *v9; // rdi
  _QWORD *GEByGuid; // rcx
  _QWORD *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rcx

  v3 = (_QWORD *)(a1 + 40);
  v5 = *(_QWORD **)(a1 + 40);
  v8 = 0;
  while ( v5 != v3 )
  {
    v9 = v5 - 5;
    if ( (*(_DWORD *)(v5 - 3) & 8) != 0 )
    {
      GEByGuid = WmipFindGEByGuid((_QWORD *)v9[7], 0);
      if ( !GEByGuid )
      {
        GEByGuid = (_QWORD *)WmipAllocGuidEntry();
        if ( !GEByGuid )
          return (unsigned int)-1073741670;
        v12 = (__int64 *)WmipGEHeadPtr;
        *(_OWORD *)(GEByGuid + 9) = *(_OWORD *)v9[7];
        v13 = *v12;
        *GEByGuid = *v12;
        GEByGuid[1] = v12;
        if ( *(__int64 **)(v13 + 8) != v12 )
          __fastfail(3u);
        *(_QWORD *)(v13 + 8) = GEByGuid;
        *v12 = (__int64)GEByGuid;
      }
      *((_DWORD *)v9 + 4) &= ~8u;
      v9[7] = GEByGuid;
      v11 = (_QWORD *)GEByGuid[8];
      *v9 = GEByGuid + 7;
      v9[1] = v11;
      if ( (_QWORD *)*v11 != GEByGuid + 7 )
        __fastfail(3u);
      *v11 = v9;
      GEByGuid[8] = v9;
      ++*((_DWORD *)GEByGuid + 9);
      if ( (v9[2] & 0x80000) != 0 )
        WmipRegisterEtwProvider(v5 - 5, a3);
    }
    v5 = (_QWORD *)*v5;
  }
  if ( a2 )
  {
    *(_DWORD *)(a1 + 16) |= 0x40000000u;
    v14 = WmipDSHeadPtr;
    v15 = *(_QWORD **)(WmipDSHeadPtr + 8);
    *(_QWORD *)a1 = WmipDSHeadPtr;
    *(_QWORD *)(a1 + 8) = v15;
    if ( *v15 != v14 )
      __fastfail(3u);
    *v15 = a1;
    *(_QWORD *)(v14 + 8) = a1;
  }
  return v8;
}

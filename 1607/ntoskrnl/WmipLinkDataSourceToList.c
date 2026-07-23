/*
 * XREFs of WmipLinkDataSourceToList @ 0x1405381E4
 * Callers:
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x14069F3D0 (WmipUpdateAddGuid.c)
 * Callees:
 *     WmipFindGEByGuid @ 0x1404735A0 (WmipFindGEByGuid.c)
 *     WmipAllocGuidEntry @ 0x140538314 (WmipAllocGuidEntry.c)
 *     WmipRegisterEtwProvider @ 0x14057638C (WmipRegisterEtwProvider.c)
 */

__int64 __fastcall WmipLinkDataSourceToList(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v3; // r15
  _QWORD *v5; // r14
  unsigned int v8; // esi
  _QWORD *v9; // rdi
  _QWORD *GEByGuid; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
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
        v12 = WmipGEHeadPtr;
        *(_OWORD *)(GEByGuid + 9) = *(_OWORD *)v9[7];
        v13 = *(_QWORD *)v12;
        if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
          __fastfail(3u);
        *GEByGuid = v13;
        GEByGuid[1] = v12;
        *(_QWORD *)(v13 + 8) = GEByGuid;
        *(_QWORD *)v12 = GEByGuid;
      }
      *((_DWORD *)v9 + 4) &= ~8u;
      v9[7] = GEByGuid;
      v11 = (_QWORD *)GEByGuid[8];
      if ( (_QWORD *)*v11 != GEByGuid + 7 )
        __fastfail(3u);
      *v9 = GEByGuid + 7;
      v9[1] = v11;
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
    v14 = WmipDSHeadPtr;
    *(_DWORD *)(a1 + 16) |= 0x40000000u;
    v15 = *(_QWORD **)(v14 + 8);
    if ( *v15 != v14 )
      __fastfail(3u);
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = v15;
    *v15 = a1;
    *(_QWORD *)(v14 + 8) = a1;
  }
  return v8;
}

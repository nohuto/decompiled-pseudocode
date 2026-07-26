/*
 * XREFs of ndisQueryDriverImageName @ 0x1C00AE38C
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001C6DC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisFRegisterFilterDriver @ 0x1C001CB10 (NdisFRegisterFilterDriver.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001CF98 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisRegisterMiniportDriver @ 0x1C00F4828 (ndisRegisterMiniportDriver.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 */

void __fastcall ndisQueryDriverImageName(__int64 a1, _UNICODE_STRING *a2)
{
  const WCHAR *v3; // rbx
  unsigned __int16 v4; // di
  void *v5; // rcx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // ax
  _WORD *v8; // r8
  unsigned __int16 v9; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v11; // rax
  _QWORD v12[2]; // [rsp+38h] [rbp-39h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+48h] [rbp-29h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( !*(_WORD *)a1
    || (v3 = *(const WCHAR **)(a1 + 8)) == 0LL
    || (memset(QueryTable, 0, sizeof(QueryTable)),
        QueryTable[0].QueryRoutine = 0LL,
        QueryTable[0].Name = L"ImagePath",
        QueryTable[0].Flags = 304,
        QueryTable[0].EntryContext = v12,
        QueryTable[0].DefaultType = 0x2000000,
        RtlQueryRegistryValuesEx(1u, v3, QueryTable, 0LL, 0LL)) )
  {
LABEL_12:
    v5 = (void *)v12[1];
    goto LABEL_13;
  }
  v4 = 0;
  v5 = (void *)v12[1];
  v6 = 0;
  v7 = LOWORD(v12[0]) >> 1;
  if ( LOWORD(v12[0]) >> 1 )
  {
    v8 = (_WORD *)v12[1];
    do
    {
      if ( *v8 == 92 )
        v4 = v6 + 1;
      ++v6;
      ++v8;
    }
    while ( v6 < v7 );
  }
  if ( v4 < v7 )
  {
    v9 = LOWORD(v12[0]) + 2 * (1 - v4);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x6E61444Eu);
    a2->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      v11 = v12[1];
      a2->Length = 0;
      a2->MaximumLength = v9;
      RtlAppendUnicodeToString(a2, (PCWSTR)(v11 + 2LL * v4));
    }
    goto LABEL_12;
  }
LABEL_13:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}

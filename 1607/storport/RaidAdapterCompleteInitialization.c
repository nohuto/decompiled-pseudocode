/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x1C0015260
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C000D588 (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     StorCreateScsiSymbolicLink @ 0x1C0010328 (StorCreateScsiSymbolicLink.c)
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     RaInitializePower @ 0x1C0015458 (RaInitializePower.c)
 *     RaInitializeRaidResources @ 0x1C00154B4 (RaInitializeRaidResources.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0019BC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaFreeRaidResources @ 0x1C0039A1C (RaFreeRaidResources.c)
 *     RaidInitializeDma @ 0x1C00581F8 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C005AAC8 (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  int v1; // edx
  union _SLIST_HEADER *v3; // rbp
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rdx
  const struct _TlgProvider_t *v10; // rcx
  int ScsiSymbolicLink; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  const WCHAR *v15; // rdx
  LPCWSTR v16; // r10
  TraceLoggingHProvider v17; // rcx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  int v20; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  __int64 v22; // [rsp+60h] [rbp-58h]
  int v23; // [rsp+68h] [rbp-50h]
  int v24; // [rsp+6Ch] [rbp-4Ch]
  int *v25; // [rsp+70h] [rbp-48h]
  int v26; // [rsp+78h] [rbp-40h]
  int v27; // [rsp+7Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+90h] [rbp-28h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 402) == 1 )
  {
    v1 = 184;
    if ( *(char *)(*(_QWORD *)(a1 + 528) + 184LL) < 0 )
      v1 = 224;
  }
  v3 = (union _SLIST_HEADER *)(a1 + 832);
  result = RaInitializeRaidResources((PSLIST_HEADER)(a1 + 832), *(_BYTE *)(a1 + 4450), v1);
  if ( (int)result >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 904);
    *(_DWORD *)(a1 + 800) = v5;
    *(_DWORD *)(a1 + 796) = v5;
    if ( *(_BYTE *)(a1 + 4450) )
    {
      if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 696) )
      {
        ScsiSymbolicLink = RaidInitializeDma(v6, *(_QWORD *)(a1 + 32), a1 + 304);
        if ( ScsiSymbolicLink < 0 )
          goto LABEL_17;
      }
    }
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 352);
    if ( v8 > *(_DWORD *)(v7 + 152) )
      *(_DWORD *)(v7 + 152) = v8;
    ScsiSymbolicLink = StorCreateScsiSymbolicLink((PUNICODE_STRING)(a1 + 40), (unsigned int *)(a1 + 56));
    if ( ScsiSymbolicLink < 0 )
    {
LABEL_17:
      RaFreeRaidResources(v3);
      return (unsigned int)ScsiSymbolicLink;
    }
    else
    {
      if ( (unsigned int)dword_1C004F010 > 5 )
      {
        if ( TlgKeywordOn(v10, 0x400000000000uLL) )
        {
          v14 = *(_DWORD *)(a1 + 56);
          v15 = *(const WCHAR **)(a1 + 4808);
          v24 = 0;
          v27 = 0;
          v20 = v14;
          v22 = a1 + 5192;
          v25 = &v20;
          v23 = 16;
          v26 = 4;
          TlgCreateWsz(&pDesc, v15);
          TlgCreateWsz(&v29, v16);
          TlgWrite(v17, &unk_1C0045DD1, v18, v19, 6u, &pData);
        }
      }
      RaInitializePower(a1, v9, v12, v13);
      *(_DWORD *)(a1 + 272) = 0;
      *(_BYTE *)(a1 + 276) = 0;
      result = 0LL;
      *(_DWORD *)(a1 + 264) = 1;
      *(_DWORD *)(a1 + 268) = 1;
    }
  }
  return result;
}

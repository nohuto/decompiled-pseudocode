/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x1C0012168
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0011F28 (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     StorCreateScsiSymbolicLink @ 0x1C000BED0 (StorCreateScsiSymbolicLink.c)
 *     _TlgKeywordOn @ 0x1C0011B18 (_TlgKeywordOn.c)
 *     RaInitializePower @ 0x1C0012340 (RaInitializePower.c)
 *     RaInitializeRaidResources @ 0x1C001239C (RaInitializeRaidResources.c)
 *     _TlgWrite @ 0x1C0014C54 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0014CF0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaFreeRaidResources @ 0x1C00367E8 (RaFreeRaidResources.c)
 *     RaidIsDmaInitialized @ 0x1C005399C (RaidIsDmaInitialized.c)
 *     RaidInitializeDma @ 0x1C0053A14 (RaidInitializeDma.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rdx
  const struct _TlgProvider_t *v9; // rcx
  int ScsiSymbolicLink; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  const WCHAR *v14; // rdx
  LPCWSTR v15; // r10
  TraceLoggingHProvider v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int v19; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+60h] [rbp-58h]
  int v22; // [rsp+68h] [rbp-50h]
  int v23; // [rsp+6Ch] [rbp-4Ch]
  int *v24; // [rsp+70h] [rbp-48h]
  int v25; // [rsp+78h] [rbp-40h]
  int v26; // [rsp+7Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+90h] [rbp-28h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 402) == 1 )
  {
    v1 = 184;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 528) + 184LL) & 0x80) != 0 )
      v1 = 224;
  }
  result = RaInitializeRaidResources((PSLIST_HEADER)(a1 + 832), *(_BYTE *)(a1 + 4450), v1);
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 904);
    *(_DWORD *)(a1 + 800) = v4;
    *(_DWORD *)(a1 + 796) = v4;
    if ( *(_BYTE *)(a1 + 4450) )
    {
      if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 696) )
      {
        ScsiSymbolicLink = RaidInitializeDma(v5, *(_QWORD *)(a1 + 32), a1 + 304);
        if ( ScsiSymbolicLink < 0 )
          goto LABEL_17;
      }
    }
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 352);
    if ( v7 > *(_DWORD *)(v6 + 152) )
      *(_DWORD *)(v6 + 152) = v7;
    ScsiSymbolicLink = StorCreateScsiSymbolicLink((PUNICODE_STRING)(a1 + 40), (unsigned int *)(a1 + 56));
    if ( ScsiSymbolicLink < 0 )
    {
LABEL_17:
      RaFreeRaidResources((PSLIST_HEADER)(a1 + 832));
      return (unsigned int)ScsiSymbolicLink;
    }
    else
    {
      if ( (unsigned int)dword_1C0048030 > 5 )
      {
        if ( TlgKeywordOn(v9, 0x400000000000uLL) )
        {
          v13 = *(_DWORD *)(a1 + 56);
          v14 = *(const WCHAR **)(a1 + 4808);
          v23 = 0;
          v26 = 0;
          v19 = v13;
          v21 = a1 + 5192;
          v24 = &v19;
          v22 = 16;
          v25 = 4;
          TlgCreateWsz(&pDesc, v14);
          TlgCreateWsz(&v28, v15);
          TlgWrite(v16, &unk_1C003FBC9, v17, v18, 6u, &pData);
        }
      }
      RaInitializePower(a1, v8, v11, v12);
      *(_DWORD *)(a1 + 272) = 0;
      *(_BYTE *)(a1 + 276) = 0;
      result = 0LL;
      *(_DWORD *)(a1 + 264) = 1;
      *(_DWORD *)(a1 + 268) = 1;
    }
  }
  return result;
}

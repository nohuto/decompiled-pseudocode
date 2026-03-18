/*
 * XREFs of KiSynchNumaCounterSetCallback @ 0x140698B8C
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PcwAddInstance @ 0x14053C6D4 (PcwAddInstance.c)
 *     KiAddSynchCounters @ 0x1405C7458 (KiAddSynchCounters.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406E7E10 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406E7E60 (EtwReferenceSpinLockCounters.c)
 */

int __fastcall KiSynchNumaCounterSetCallback(int a1, __int64 a2)
{
  int v2; // ecx
  struct _PCW_BUFFER *v3; // r12
  unsigned __int16 v4; // cx
  unsigned int v5; // esi
  bool i; // cf
  __int64 v7; // rdx
  unsigned __int64 v8; // r15
  int v9; // r14d
  int v10; // eax
  int v11; // r13d
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  const void *v14; // rbx
  __int64 v15; // rdx
  int result; // eax
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  struct _PCW_DATA v18; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _PCW_DATA v20; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v21[48]; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v22[48]; // [rsp+128h] [rbp+20h] BYREF
  wchar_t pszDest[12]; // [rsp+1E8h] [rbp+E0h] BYREF

  if ( !a1 )
  {
    EtwReferenceSpinLockCounters();
    return 0;
  }
  v2 = a1 - 1;
  if ( !v2 )
  {
    EtwDereferenceSpinLockCounters();
    return 0;
  }
  if ( (unsigned int)(v2 - 1) > 1 )
    return 0;
  v3 = *(struct _PCW_BUFFER **)(a2 + 24);
  memset(v21, 0, 0xB8uLL);
  v4 = KeNumberNodes;
  v5 = 0;
  for ( i = KeNumberNodes != 0; i; i = v5 < v4 )
  {
    v7 = KeNodeBlock[v5];
    v8 = *(_QWORD *)(v7 + 136);
    if ( v8 )
    {
      v9 = *(unsigned __int16 *)(v7 + 144);
      memset(v22, 0, 0xB8uLL);
      v10 = v9;
      v11 = 0;
      while ( 1 )
      {
        while ( v8 )
        {
          _BitScanForward64(&v12, v8);
          v8 &= ~(1LL << v12);
          v13 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v9 + (unsigned __int8)v12];
          v14 = (const void *)(KiProcessorBlock[v13] + 24960);
          KiAddSynchCounters(v22, (__int64)v14);
          KiAddSynchCounters(v21, v15);
          LODWORD(Data) = v11;
          RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,%u", v5, Data);
          RtlInitUnicodeString(&DestinationString, pszDest);
          v20.Data = v14;
          v20.Size = 184;
          result = PcwAddInstance(v3, &DestinationString, v13, 1u, &v20);
          if ( result < 0 )
            return result;
          v10 = (unsigned __int16)v9;
          ++v11;
        }
        LOWORD(v9) = v9 + 1;
        if ( (unsigned __int16)v9 >= (unsigned int)(v10 + 1) )
          break;
        v8 = *(_QWORD *)(8LL * (unsigned __int16)v9 + 8);
      }
      RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,_Total", v5);
      RtlInitUnicodeString(&DestinationString, pszDest);
      v18.Data = v22;
      v18.Size = 184;
      result = PcwAddInstance(v3, &DestinationString, v5 + KeMaximumProcessors, 1u, &v18);
      if ( result < 0 )
        return result;
      v4 = KeNumberNodes;
    }
    ++v5;
  }
  RtlStringCbPrintfW(pszDest, 0x16uLL, L"_Total");
  RtlInitUnicodeString(&DestinationString, pszDest);
  v18.Data = v21;
  v18.Size = 184;
  return PcwAddInstance(v3, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v18);
}

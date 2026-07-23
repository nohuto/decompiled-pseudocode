/*
 * XREFs of KiSynchNumaCounterSetCallback @ 0x14064F884
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PcwAddInstance @ 0x1404D4324 (PcwAddInstance.c)
 *     KiAddSynchCounters @ 0x140581F0C (KiAddSynchCounters.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406A56B0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406A5700 (EtwReferenceSpinLockCounters.c)
 */

int __fastcall KiSynchNumaCounterSetCallback(int a1, __int64 a2)
{
  int v2; // ecx
  struct _PCW_BUFFER *v3; // rsi
  unsigned __int16 v4; // cx
  unsigned int v5; // edi
  bool i; // cf
  __int64 v7; // rdx
  unsigned __int16 *v8; // r15
  __int16 v9; // bx
  int v10; // r14d
  const void *v11; // rbx
  __int64 v12; // rdx
  int result; // eax
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  ULONG Id; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _PCW_DATA v17; // [rsp+48h] [rbp-B8h] BYREF
  struct _PCW_DATA v18; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v19[2]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v20; // [rsp+78h] [rbp-88h]
  _DWORD v21[48]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v22[48]; // [rsp+140h] [rbp+40h] BYREF
  wchar_t pszDest[12]; // [rsp+200h] [rbp+100h] BYREF

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
  memset(v22, 0, 0xB8uLL);
  v4 = KeNumberNodes;
  v5 = 0;
  for ( i = KeNumberNodes != 0; i; i = v5 < v4 )
  {
    v7 = KeNodeBlock[v5];
    v8 = *(unsigned __int16 **)(v7 + 136);
    if ( v8 )
    {
      v9 = *(_WORD *)(v7 + 144);
      memset(v21, 0, 0xB8uLL);
      v19[1] = v8;
      v10 = 0;
      v20 = v9;
      v19[0] = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&Id, v19) )
      {
        v11 = (const void *)(KiProcessorBlock[Id] + 25088);
        KiAddSynchCounters(v21, (__int64)v11);
        KiAddSynchCounters(v22, v12);
        LODWORD(Data) = v10;
        RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,%u", v5, Data);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v18.Data = v11;
        v18.Size = 184;
        result = PcwAddInstance(v3, &DestinationString, Id, 1u, &v18);
        if ( result < 0 )
          return result;
        ++v10;
      }
      RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,_Total", v5);
      RtlInitUnicodeString(&DestinationString, pszDest);
      v17.Data = v21;
      v17.Size = 184;
      result = PcwAddInstance(v3, &DestinationString, v5 + KeMaximumProcessors, 1u, &v17);
      if ( result < 0 )
        return result;
      v4 = KeNumberNodes;
    }
    ++v5;
  }
  RtlStringCbPrintfW(pszDest, 0x16uLL, L"_Total");
  RtlInitUnicodeString(&DestinationString, pszDest);
  v17.Data = v22;
  v17.Size = 184;
  return PcwAddInstance(v3, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v17);
}

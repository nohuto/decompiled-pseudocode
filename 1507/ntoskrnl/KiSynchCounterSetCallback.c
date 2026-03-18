/*
 * XREFs of KiSynchCounterSetCallback @ 0x140698A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x14053C6D4 (PcwAddInstance.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406E7E10 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406E7E60 (EtwReferenceSpinLockCounters.c)
 */

NTSTATUS __fastcall KiSynchCounterSetCallback(int a1, __int64 a2)
{
  int v2; // ecx
  ULONG v3; // ebp
  ULONG v4; // edi
  struct _PCW_BUFFER *v5; // r14
  __int64 *i; // rsi
  __int64 v7; // rbx
  NTSTATUS result; // eax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-38h] BYREF

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
  v3 = KeNumberProcessors_0;
  v4 = 0;
  v5 = *(struct _PCW_BUFFER **)(a2 + 24);
  if ( !(_DWORD)KeNumberProcessors_0 )
    return 0;
  for ( i = KiProcessorBlock; ; ++i )
  {
    v7 = *i;
    RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u", v4);
    RtlInitUnicodeString(&DestinationString, pszDest);
    Data.Size = 184;
    Data.Data = (const void *)(v7 + 24960);
    result = PcwAddInstance(v5, &DestinationString, v4, 1u, &Data);
    if ( result < 0 )
      break;
    if ( ++v4 >= v3 )
      return 0;
  }
  return result;
}

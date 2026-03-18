/*
 * XREFs of Counter_CreateInterrupterInstance @ 0x1C0049348
 * Callers:
 *     Interrupter_CreateInterrupter @ 0x1C0047A80 (Interrupter_CreateInterrupter.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00062A0 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Counter_CreateInterrupterInstance(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  int Data; // [rsp+20h] [rbp-68h]
  int v5; // [rsp+28h] [rbp-60h]
  struct _PCW_DATA v6; // [rsp+30h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+50h] [rbp-38h] BYREF

  result = WPP_MAIN_CB.Dpc.ProcessorHistory;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 28) && !*(_QWORD *)(a1 + 96) )
  {
    v5 = *(_DWORD *)(a1 + 32);
    Data = *(_DWORD *)(v3 + 144);
    if ( *(_DWORD *)(v3 + 148) == 1 )
      RtlStringCchPrintfW(pszDest, 0x10uLL, L"%04X.%u.%u", *(unsigned __int16 *)(v3 + 152), Data, v5);
    else
      RtlStringCchPrintfW(pszDest, 0x10uLL, L"%S.%u.%u", v3 + 200, Data, v5);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v6.Data = (const void *)(a1 + 48);
    v6.Size = 56;
    return PcwCreateInstance(
             (PPCW_INSTANCE *)(a1 + 96),
             *(PPCW_REGISTRATION *)&WPP_MAIN_CB.ActiveThreadCount,
             &DestinationString,
             1u,
             &v6);
  }
  return result;
}

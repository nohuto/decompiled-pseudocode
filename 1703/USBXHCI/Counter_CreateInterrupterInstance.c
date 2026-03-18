/*
 * XREFs of Counter_CreateInterrupterInstance @ 0x1C004E3D0
 * Callers:
 *     Interrupter_CreateInterrupter @ 0x1C004C88C (Interrupter_CreateInterrupter.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00092F0 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
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

  result = (NTSTATUS)WPP_MAIN_CB.Dpc.DpcListEntry.Next;
  v3 = *(_QWORD *)(a1 + 8);
  if ( BYTE4(WPP_MAIN_CB.Dpc.DpcListEntry.Next[3].Next) && !*(_QWORD *)(a1 + 88) )
  {
    v5 = *(_DWORD *)(a1 + 32);
    Data = *(_DWORD *)(v3 + 144);
    if ( *(_DWORD *)(v3 + 148) == 1 )
      RtlStringCchPrintfW(pszDest, 0x10uLL, L"%04X.%u.%u", *(unsigned __int16 *)(v3 + 152), Data, v5);
    else
      RtlStringCchPrintfW(pszDest, 0x10uLL, L"%S.%u.%u", v3 + 200, Data, v5);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v6.Data = (const void *)(a1 + 40);
    v6.Size = 56;
    return PcwCreateInstance(
             (PPCW_INSTANCE *)(a1 + 88),
             (PPCW_REGISTRATION)WPP_MAIN_CB.Dpc.ProcessorHistory,
             &DestinationString,
             1u,
             &v6);
  }
  return result;
}

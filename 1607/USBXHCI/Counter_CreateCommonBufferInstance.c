/*
 * XREFs of Counter_CreateCommonBufferInstance @ 0x1C004B7A0
 * Callers:
 *     CommonBuffer_Create @ 0x1C004B870 (CommonBuffer_Create.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0007C50 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Counter_CreateCommonBufferInstance(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rdx
  int Data; // [rsp+20h] [rbp-58h]
  struct _PCW_DATA v5; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-28h] BYREF

  result = (NTSTATUS)WPP_MAIN_CB.Dpc.DpcListEntry.Next;
  v3 = *(_QWORD *)(a1 + 8);
  if ( BYTE4(WPP_MAIN_CB.Dpc.DpcListEntry.Next[3].Next) && !*(_QWORD *)(a1 + 32) )
  {
    Data = *(_DWORD *)(v3 + 144);
    if ( *(_DWORD *)(v3 + 148) == 1 )
      RtlStringCchPrintfW(pszDest, 0xAuLL, L"%04X.%u", *(unsigned __int16 *)(v3 + 152), Data);
    else
      RtlStringCchPrintfW(pszDest, 0xAuLL, L"%S.%u", v3 + 200, Data);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v5.Data = (const void *)(a1 + 16);
    v5.Size = 24;
    return PcwCreateInstance(
             (PPCW_INSTANCE *)(a1 + 32),
             (PPCW_REGISTRATION)WPP_MAIN_CB.Dpc.DeferredContext,
             &DestinationString,
             1u,
             &v5);
  }
  return result;
}

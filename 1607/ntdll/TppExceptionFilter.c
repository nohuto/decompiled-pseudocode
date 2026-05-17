/*
 * XREFs of TppExceptionFilter @ 0x180090F04
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180090EDC (TppWorkerpInnerExceptionFilter.c)
 * Callees:
 *     RtlReportException @ 0x180006A80 (RtlReportException.c)
 *     RtlDecodePointer @ 0x180051BE0 (RtlDecodePointer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall TppExceptionFilter(__int64 *a1)
{
  __int64 (__fastcall *v2)(__int64 *); // rax
  __int64 result; // rax

  v2 = (__int64 (__fastcall *)(__int64 *))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v2 )
    result = v2(a1);
  else
    result = RtlUnhandledExceptionFilter2(a1, &unk_18010C822);
  if ( !(_DWORD)result && *(_DWORD *)*a1 == -1073741571 )
  {
    RtlReportException(*a1, a1[1], 3u);
    return 1LL;
  }
  return result;
}

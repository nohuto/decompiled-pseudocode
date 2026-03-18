/*
 * XREFs of _RegRtlSetValue @ 0x1404BFC84
 * Callers:
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140699E7C (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 */

int __fastcall RegRtlSetValue(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, void *a4, ULONG DataSize)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, a3, a4, DataSize);
  return result;
}

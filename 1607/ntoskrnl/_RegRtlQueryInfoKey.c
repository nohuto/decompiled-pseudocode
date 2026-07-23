/*
 * XREFs of _RegRtlQueryInfoKey @ 0x1404C5308
 * Callers:
 *     _PnpCtxRegQueryInfoKey @ 0x1404B910C (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x14056260C (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1405629F4 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0260 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x1406E0808 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 */

__int64 __fastcall RegRtlQueryInfoKey(void *a1, _DWORD *a2, unsigned int *a3, _DWORD *a4, unsigned int *a5, _DWORD *a6)
{
  NTSTATUS v9; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  _BYTE KeyInformation[12]; // [rsp+38h] [rbp-60h] BYREF
  int v13; // [rsp+44h] [rbp-54h]
  unsigned int v14; // [rsp+48h] [rbp-50h]
  int v15; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+54h] [rbp-44h]

  v9 = ZwQueryKey(a1, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( v9 >= 0 )
  {
    if ( a2 )
      *a2 = v13;
    if ( a3 )
      *a3 = v14 >> 1;
    if ( a4 )
      *a4 = v15;
    if ( a5 )
      *a5 = v16 >> 1;
    if ( a6 )
      *a6 = v17;
  }
  return (unsigned int)v9;
}

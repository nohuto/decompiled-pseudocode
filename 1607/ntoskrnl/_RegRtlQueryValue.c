/*
 * XREFs of _RegRtlQueryValue @ 0x1404E09F0
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x1404E2E64 (_PnpRegQueryValueIndirect.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 *     _SysCtxOpenControlSet @ 0x140579DF4 (_SysCtxOpenControlSet.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v8; // rsi
  NTSTATUS inited; // ebx
  ULONG Length; // ebx
  PVOID PoolWithTag; // rax
  char *v12; // rdi
  NTSTATUS v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char v19; // [rsp+48h] [rbp-D0h] BYREF

  v8 = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    if ( a4 && *a5 > 0x80 )
    {
      Length = *a5 + 12;
      if ( Length < 0xC )
        return (unsigned int)-1073741675;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v12 = (char *)PoolWithTag;
    }
    else
    {
      v12 = &v19;
      Length = 140;
    }
    v13 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v12, Length, &ResultLength);
    inited = v13;
    if ( !v13 || v13 == -2147483643 )
    {
      v14 = *a5;
      v15 = *((_DWORD *)v12 + 2);
      *a5 = v15;
      if ( v14 < v15 )
        inited = -1073741789;
      else
        memmove(a4, v12 + 12, *((unsigned int *)v12 + 2));
      if ( a3 )
        *a3 = *((_DWORD *)v12 + 1);
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)inited;
}

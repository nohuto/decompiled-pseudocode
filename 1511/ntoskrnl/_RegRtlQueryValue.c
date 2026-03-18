/*
 * XREFs of _RegRtlQueryValue @ 0x14043BD34
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x14043CA58 (_PnpRegQueryValueIndirect.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 *     _SysCtxOpenControlSet @ 0x14052423C (_SysCtxOpenControlSet.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v8; // rsi
  NTSTATUS inited; // ebx
  char *p_KeyValueInformation; // rdi
  ULONG Length; // ebx
  NTSTATUS v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char KeyValueInformation; // [rsp+48h] [rbp-D0h] BYREF

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
      p_KeyValueInformation = (char *)PoolWithTag;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
    v12 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    inited = v12;
    if ( !v12 || v12 == -2147483643 )
    {
      v13 = *a5;
      v14 = *((_DWORD *)p_KeyValueInformation + 2);
      *a5 = v14;
      if ( v13 < v14 )
        inited = -1073741789;
      else
        memmove(a4, p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
      if ( a3 )
        *a3 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)inited;
}

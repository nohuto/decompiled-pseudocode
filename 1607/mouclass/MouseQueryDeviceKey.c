/*
 * XREFs of MouseQueryDeviceKey @ 0x1C000BEC0
 * Callers:
 *     MouseClassGetWaitWakeEnableState @ 0x1C000BD40 (MouseClassGetWaitWakeEnableState.c)
 * Callees:
 *     memmove @ 0x1C0002A80 (memmove.c)
 */

__int64 __fastcall MouseQueryDeviceKey(HANDLE KeyHandle, __int64 a2, void *a3, ULONG a4)
{
  SIZE_T v6; // rdx
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // rbx
  NTSTATUS v9; // edi
  unsigned int v11; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  Length = a4;
  RtlInitUnicodeString(&DestinationString, L"WaitWakeEnabled");
  v6 = (unsigned int)DestinationString.MaximumLength + 28;
  if ( (unsigned int)v6 < (unsigned int)DestinationString.MaximumLength + 24 )
    return 3221225621LL;
  Length = DestinationString.MaximumLength + 28;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v6, 0x43756F4Du);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, PoolWithTag, Length, &Length);
    if ( v9 >= 0 )
    {
      v11 = v8[3];
      if ( v11 > 4 )
        v9 = -1073741789;
      else
        memmove(a3, (char *)v8 + v8[2], v11);
    }
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}

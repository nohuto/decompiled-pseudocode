/*
 * XREFs of DpiPdoHandleQueryDeviceText @ 0x1C00FC770
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceText(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  const WCHAR *v6; // rdx
  PVOID PoolWithTag; // rax
  void *v8; // rsi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) )
  {
    return *(unsigned int *)(a2 + 48);
  }
  else if ( !*(_QWORD *)(a2 + 56) )
  {
    v6 = (const WCHAR *)(v3 + 818);
    if ( !*(_WORD *)(v3 + 818) )
    {
      v6 = L"Generic Monitor";
      if ( *(_DWORD *)(v3 + 496) != 1 )
        v6 = L"Unknown Video Device";
    }
    RtlInitUnicodeString(&DestinationString, v6);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x74727044u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.MaximumLength);
      memmove(v8, DestinationString.Buffer, DestinationString.MaximumLength);
      *(_QWORD *)(a2 + 56) = v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v2;
}

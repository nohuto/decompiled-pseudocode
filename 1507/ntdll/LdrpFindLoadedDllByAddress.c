/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x180069F00
 * Callers:
 *     LdrFindEntryForAddress @ 0x180069EB0 (LdrFindEntryForAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800C4AE0 (AVrfCallAPILookupCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpCompareModuleBaseAddressRange @ 0x180069FC8 (LdrpCompareModuleBaseAddressRange.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  _QWORD *v7; // rbx
  int v8; // eax
  volatile signed __int32 *v9; // rdx
  __int64 v10; // rax

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, a2, (__int64)a3, a4);
  v7 = (_QWORD *)LdrpModuleBaseAddressIndex;
  if ( LdrpModuleBaseAddressIndex )
  {
    do
    {
      v8 = LdrpCompareModuleBaseAddressRange(a1, v7);
      if ( v8 < 0 )
      {
        v7 = (_QWORD *)*v7;
      }
      else
      {
        if ( v8 <= 0 )
          break;
        v7 = (_QWORD *)v7[1];
      }
    }
    while ( v7 );
    if ( v7 )
    {
      v9 = (volatile signed __int32 *)(v7 - 25);
      v10 = *(v7 - 6);
      if ( *(_DWORD *)(v10 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v10 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement(v9 + 69);
      *(_QWORD *)a2 = v9;
      if ( a3 )
        *a3 = *(_DWORD *)(*((_QWORD *)v9 + 19) + 56LL);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v7 == 0LL ? 0xC0000135 : 0;
}

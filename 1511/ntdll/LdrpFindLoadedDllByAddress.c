/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x18003F040
 * Callers:
 *     LdrFindEntryForAddress @ 0x18003EFF0 (LdrFindEntryForAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800CDE10 (AVrfCallAPILookupCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCompareModuleBaseAddressRange @ 0x18003F108 (LdrpCompareModuleBaseAddressRange.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(__int64 a1, volatile signed __int32 **a2, _DWORD *a3)
{
  _RTL_BALANCED_NODE *Root; // rbx
  int v7; // eax
  volatile signed __int32 *v8; // rdx
  _RTL_BALANCED_NODE *v9; // rax

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  Root = LdrpModuleBaseAddressIndex.Root;
  if ( LdrpModuleBaseAddressIndex.Root )
  {
    do
    {
      v7 = LdrpCompareModuleBaseAddressRange(a1, Root);
      if ( v7 < 0 )
      {
        Root = Root->Children[0];
      }
      else
      {
        if ( v7 <= 0 )
          break;
        Root = Root->Children[1];
      }
    }
    while ( Root );
    if ( Root )
    {
      v8 = (volatile signed __int32 *)&Root[-9].16;
      v9 = Root[-2].Children[0];
      if ( LODWORD(v9[1].Children[0]) != -1 && (*(_BYTE *)&v9->Children[0][-3].0 & 0x20) == 0 )
        _InterlockedIncrement(v8 + 69);
      *a2 = v8;
      if ( a3 )
        *a3 = *(_DWORD *)(*((_QWORD *)v8 + 19) + 56LL);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return Root == 0LL ? 0xC0000135 : 0;
}

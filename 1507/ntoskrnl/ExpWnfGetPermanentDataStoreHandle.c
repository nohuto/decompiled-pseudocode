/*
 * XREFs of ExpWnfGetPermanentDataStoreHandle @ 0x1405BF00C
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeletePermanentStateData @ 0x1406FC328 (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1405BF084 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 */

__int64 __fastcall ExpWnfGetPermanentDataStoreHandle(__int64 a1, int a2, int a3, volatile signed __int64 *a4)
{
  volatile signed __int64 *v5; // rbx
  __int64 result; // rax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  v5 = (volatile signed __int64 *)(a1 + 72);
  if ( (unsigned int)(a2 - 2) > 1 )
    v5 = (volatile signed __int64 *)(a1 + 64);
  if ( *v5 )
  {
    *a4 = *v5;
    return 0LL;
  }
  result = ExpWnfGetPermanentDataStoreHandleByScopeId(
             *(_DWORD *)(a1 + 16),
             a2,
             a3,
             (unsigned int)(a2 - 2) <= 1,
             a3,
             &Handle);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(v5, (signed __int64)Handle, 0LL) )
      ZwClose(Handle);
    *a4 = *v5;
    return 0LL;
  }
  return result;
}

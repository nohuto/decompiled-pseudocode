/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x1403DB2CC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpParseCacheLookupByHash @ 0x1403BB5A4 (CmpParseCacheLookupByHash.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

char __fastcall CmpReferenceKeyControlBlockUnsafe(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *a1;
  while ( v1 != -1 )
  {
    if ( !v1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v2 = v1;
    v1 = _InterlockedCompareExchange(a1, v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}

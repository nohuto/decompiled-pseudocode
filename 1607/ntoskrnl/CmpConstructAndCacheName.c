/*
 * XREFs of CmpConstructAndCacheName @ 0x1404E2780
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B4B50 (CmpLogTransactionAbortedWithChildName.c)
 *     CmCallbackGetKeyObjectID @ 0x1405FAEB8 (CmCallbackGetKeyObjectID.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14002D218 (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x140437710 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructAndCacheName(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  int v5; // ebx
  bool v7; // cf
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  v3 = *(_QWORD *)(a1 + 288);
  if ( (v3 & 1) != 0 )
    v3 &= ~1uLL;
  if ( !v3 )
  {
    v5 = CmpConstructNameWithStatus(a1, &P);
    if ( v5 < 0 )
      goto LABEL_7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 288), (signed __int64)P, 0LL) != 0;
    v3 = *(_QWORD *)(a1 + 288);
    P = (PVOID)(-(__int64)v7 & (unsigned __int64)P);
    if ( (v3 & 1) != 0 )
      v3 &= ~1uLL;
  }
  if ( a2 )
    *a2 = v3;
  v5 = 0;
LABEL_7:
  if ( P )
    CmpFreeTransientPoolWithTag(P, 0x624E4D43u);
  return (unsigned int)v5;
}

/*
 * XREFs of CmpRefreshParent @ 0x14060F9BC
 * Callers:
 *     <none>
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14010BF00 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpRefreshParent(__int64 a1, __int64 a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v5; // rcx

  v3 = *a3;
  v5 = a3[1];
  if ( *(volatile signed __int32 **)(a1 + 64) == *a3 )
  {
    *(_QWORD *)(a1 + 64) = v5;
    if ( *v3 )
    {
      CmpReferenceKeyControlBlockUnsafe(v5);
      CmpDereferenceKeyControlBlockUnsafe(v3);
    }
  }
  return 0LL;
}

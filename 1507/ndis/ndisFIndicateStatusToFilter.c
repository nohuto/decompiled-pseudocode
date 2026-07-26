/*
 * XREFs of ndisFIndicateStatusToFilter @ 0x1C0016BF0
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C0016828 (ndisIndicateInitialStateToFilter.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFIndicateStatusToFilter(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL) )
    ndisFInvokeStatus(a1, a2);
  else
    ndisFIndicateStatusInternal(a1, a2);
}

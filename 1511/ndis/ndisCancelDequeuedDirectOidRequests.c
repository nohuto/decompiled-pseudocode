/*
 * XREFs of ndisCancelDequeuedDirectOidRequests @ 0x1C00663FC
 * Callers:
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 *     ndisRequestPowerResume @ 0x1C0067384 (ndisRequestPowerResume.c)
 * Callees:
 *     ndisMOidRequestCompleteInternal @ 0x1C0025A0C (ndisMOidRequestCompleteInternal.c)
 */

void __fastcall ndisCancelDequeuedDirectOidRequests(__int64 a1, __int64 **a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rax

  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == (__int64 *)a2 )
      break;
    v5 = *v4;
    if ( (__int64 **)v4[1] != a2 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *a2 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = a2;
    ndisMOidRequestCompleteInternal(a1, (__int64)(v4 - 9), -1073676276, 0LL);
  }
}

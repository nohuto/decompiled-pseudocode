/*
 * XREFs of ndisOidPostRcvFilterQueueParameters @ 0x1C00393C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C003A8A8 (ndisUpdateRcvFilterQueueParameters.c)
 */

__int64 __fastcall ndisOidPostRcvFilterQueueParameters(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[4];
  result = *a1;
  if ( *(_DWORD *)(v1 + 4) == 1 && result && !*((_DWORD *)a1 + 10) )
    return ndisUpdateRcvFilterQueueParameters(*a1, *(_QWORD *)(v1 + 40));
  return result;
}

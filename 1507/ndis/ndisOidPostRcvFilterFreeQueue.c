/*
 * XREFs of ndisOidPostRcvFilterFreeQueue @ 0x1C0038510
 * Callers:
 *     <none>
 * Callees:
 *     ndisFreeReceiveQueue @ 0x1C00381C0 (ndisFreeReceiveQueue.c)
 */

__int64 __fastcall ndisOidPostRcvFilterFreeQueue(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = *(_QWORD *)a1;
  result = *(_QWORD *)(a1 + 32);
  v4 = *(_DWORD *)(*(_QWORD *)(result + 40) + 8LL);
  if ( v2 )
  {
    result = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)result || (_DWORD)result == 65539 && (result = *(unsigned int *)(v2 + 120), (result & 4) != 0) )
    {
      result = ndisFreeReceiveQueue(v2, v4);
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  return result;
}

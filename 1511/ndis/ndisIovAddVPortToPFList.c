/*
 * XREFs of ndisIovAddVPortToPFList @ 0x1C0063D40
 * Callers:
 *     ndisOidPostIovCreateVPort @ 0x1C0064BC0 (ndisOidPostIovCreateVPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovAddVPortToPFList(__int64 a1, __int64 a2)
{
  __int64 *i; // rax
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 result; // rax

  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 19) > *(_DWORD *)(a2 + 124) )
      break;
  }
  v4 = (__int64 *)(a2 + 48);
  v5 = (__int64 *)i[1];
  result = *v5;
  *v4 = *v5;
  v4[1] = (__int64)v5;
  if ( *(__int64 **)(result + 8) != v5 )
    __fastfail(3u);
  *(_QWORD *)(result + 8) = v4;
  *v5 = (__int64)v4;
  ++*(_DWORD *)(a1 + 28);
  return result;
}

/*
 * XREFs of ndisIovAddVPortToVFList @ 0x1C006814C
 * Callers:
 *     ndisOidPostIovCreateVPort @ 0x1C0069110 (ndisOidPostIovCreateVPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovAddVPortToVFList(__int64 a1, __int64 a2)
{
  __int64 *i; // rax
  _QWORD *v4; // rcx
  __int64 *v5; // rdx
  __int64 result; // rax

  for ( i = *(__int64 **)(a1 + 80); i != (__int64 *)(a1 + 80); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 19) > *(_DWORD *)(a2 + 124) )
      break;
  }
  v4 = (_QWORD *)(a2 + 48);
  v5 = (__int64 *)i[1];
  result = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    __fastfail(3u);
  *v4 = result;
  v4[1] = v5;
  *(_QWORD *)(result + 8) = v4;
  *v5 = (__int64)v4;
  ++*(_DWORD *)(a1 + 76);
  return result;
}

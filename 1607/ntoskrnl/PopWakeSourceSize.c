/*
 * XREFs of PopWakeSourceSize @ 0x14066E680
 * Callers:
 *     PopGetWakeSource @ 0x1405333F8 (PopGetWakeSource.c)
 *     PopCopyWakeSource @ 0x14066E1D4 (PopCopyWakeSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopWakeSourceSize(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  _QWORD *v3; // rcx

  v1 = *(_DWORD *)(a1 + 16);
  result = 0LL;
  if ( !v1 )
    return (unsigned int)*(unsigned __int16 *)(a1 + 24) + 8 + 2LL;
  if ( v1 == 1 )
    return 12LL;
  if ( v1 > 3 )
  {
    if ( v1 != 4 )
      return result;
    return 12LL;
  }
  v3 = *(_QWORD **)(a1 + 24);
  if ( v3 )
    return *v3 + 8LL;
  else
    return 48LL;
}

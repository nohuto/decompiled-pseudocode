/*
 * XREFs of PopWakeSourceSize @ 0x1406B5AD8
 * Callers:
 *     PopGetWakeSource @ 0x1405677BC (PopGetWakeSource.c)
 *     PopCopyWakeSource @ 0x1406B5628 (PopCopyWakeSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopWakeSourceSize(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  _QWORD *v3; // rax

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0LL;
  if ( !v1 )
    return (unsigned int)*(unsigned __int16 *)(a1 + 24) + 8 + 2LL;
  if ( v1 == 1 )
    return 12LL;
  if ( (unsigned int)(v1 - 2) <= 1 )
  {
    v3 = *(_QWORD **)(a1 + 24);
    if ( v3 )
      return *v3 + 8LL;
    else
      return 48LL;
  }
  return v2;
}

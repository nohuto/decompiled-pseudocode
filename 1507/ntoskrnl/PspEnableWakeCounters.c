/*
 * XREFs of PspEnableWakeCounters @ 0x140559FB8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnableWakeCounters(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // r8
  __int64 v4; // r10

  v1 = *(_QWORD *)(a1 + 1064);
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 1296) & 0x1000) != 0 )
      return 0LL;
    v3 = (_QWORD *)(v1 + 896);
    v4 = 5LL;
    do
    {
      *v3 += *(_QWORD *)((char *)v3 + a1 - v1);
      ++v3;
      --v4;
    }
    while ( v4 );
    *(_QWORD *)(v1 + 936) += *(_QWORD *)(a1 + 936);
  }
  if ( (*(_DWORD *)(a1 + 1296) & 0x1000) == 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 1296), 0xCu);
  return 0LL;
}

/*
 * XREFs of IoSetIoPriorityHintIntoThread @ 0x140009A64
 * Callers:
 *     <none>
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x14000A100 (KeAbProcessBaseIoPriorityChange.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoThread(__int64 a1, unsigned int a2)
{
  signed __int32 v4; // eax
  unsigned int v5; // edx
  unsigned __int32 v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // ebx

  if ( a2 >= 5 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1724);
    v5 = a2 << 9;
    do
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1724), v5 | v4 & 0xFFFFF1FF, v4);
    }
    while ( v4 != v6 );
    v7 = 0;
    v8 = (v6 >> 9) & 7;
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
      EtwTracePriority(a1, 1332, v8, a2, 0LL);
    if ( a2 != v8 )
      KeAbProcessBaseIoPriorityChange(a1, v8, a2);
  }
  return v7;
}

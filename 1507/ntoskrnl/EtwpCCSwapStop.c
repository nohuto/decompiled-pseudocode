/*
 * XREFs of EtwpCCSwapStop @ 0x14054B224
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x14054A404 (EtwpUpdateGroupMasks.c)
 *     EtwpFlushTrace @ 0x14054D090 (EtwpFlushTrace.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpCCSwapStop(unsigned int a1, char a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r8d
  __int64 *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx

  v2 = KeNumberProcessors_0;
  v3 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v5 = KiProcessorBlock;
    do
    {
      if ( v3 >= (unsigned int)KeNumberProcessors_0 )
        v6 = 0LL;
      else
        v6 = *v5;
      v7 = *(_QWORD *)(v6 + 24536);
      if ( *(_QWORD *)(v7 + 8LL * a1 + 2848) )
        *(_BYTE *)(a1 + v7 + 2840) = 1;
      ++v3;
      ++v5;
    }
    while ( v3 < v2 );
  }
  if ( a2 )
    --CCSwapNumLoggersPerClockType[a1];
}

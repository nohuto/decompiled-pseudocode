/*
 * XREFs of KiSetClockInterval @ 0x1400D6020
 * Callers:
 *     KeAccumulateTicks @ 0x1400A9AB0 (KeAccumulateTicks.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1400D5EB0 (ExpUpdateTimerConfigurationWorker.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, __int64 a2)
{
  BOOLEAN v2; // bl
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v6; // rax

  v2 = 0;
  if ( *(_BYTE *)(a2 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)a2);
  *(_DWORD *)(a2 + 28) = a1;
  Root = KiClockIntervalRequests.Root;
  if ( KiClockIntervalRequests.Root )
  {
    while ( 1 )
    {
      if ( a1 >= HIDWORD(Root[1].Left) )
      {
        v6 = Root->Children[1];
        if ( !v6 )
        {
          v2 = 1;
          break;
        }
      }
      else
      {
        v6 = Root->Children[0];
        if ( !Root->Children[0] )
          break;
      }
      Root = v6;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, Root, v2, (PRTL_BALANCED_NODE)a2);
  *(_BYTE *)(a2 + 24) = 1;
  return KiSetClockIntervalToMinimumRequested();
}

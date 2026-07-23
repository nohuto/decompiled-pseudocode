/*
 * XREFs of KiSetClockInterval @ 0x14009D6E4
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x14009D5D0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiCheckForTimerExpiration @ 0x1400DA690 (KiCheckForTimerExpiration.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14009D780 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  BOOLEAN v6; // r8
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v8; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)a3);
  *(_DWORD *)(a3 + 28) = a1;
  v6 = 0;
  Root = KiClockIntervalRequests.Root;
  if ( KiClockIntervalRequests.Root )
  {
    while ( 1 )
    {
      if ( a1 >= HIDWORD(Root[1].Left) )
      {
        v8 = Root->Children[1];
        if ( !v8 )
        {
          v6 = 1;
          break;
        }
      }
      else
      {
        v8 = Root->Children[0];
        if ( !Root->Children[0] )
        {
          v6 = 0;
          break;
        }
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, Root, v6, (PRTL_BALANCED_NODE)a3);
  *(_BYTE *)(a3 + 24) = 1;
  result = KiSetClockIntervalToMinimumRequested();
  if ( a2 )
    KeNonHrTimeIncrement = a1;
  return result;
}

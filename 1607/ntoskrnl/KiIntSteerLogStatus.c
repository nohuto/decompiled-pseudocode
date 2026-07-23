/*
 * XREFs of KiIntSteerLogStatus @ 0x1401DA6E8
 * Callers:
 *     KiIntSteerEventTraceControlCallback @ 0x140581BE8 (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     KiIntSteerLogState @ 0x14012DC88 (KiIntSteerLogState.c)
 *     KiIntSteerEtwEventEnabled @ 0x14012DCE8 (KiIntSteerEtwEventEnabled.c)
 *     KiIntSteerLogMask @ 0x1401DA510 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x1401DA604 (KiIntSteerLogProc.c)
 */

char __fastcall KiIntSteerLogStatus(char a1)
{
  const EVENT_DESCRIPTOR *v2; // r14
  ULONG_PTR v3; // rax
  ULONG_PTR *i; // rbx
  ULONG_PTR *j; // rdi

  KiIntSteerLogMask(a1);
  KiIntSteerLogProc(a1);
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET;
  if ( a1 )
    v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN;
  LOBYTE(v3) = KiIntSteerEtwEventEnabled(v2);
  if ( (_BYTE)v3 )
  {
    for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
    {
      if ( !a1 )
      {
        v3 = i[20];
        if ( i[22] == v3 )
          continue;
      }
      for ( j = (ULONG_PTR *)i[2]; j != i + 2; j = (ULONG_PTR *)*j )
        LOBYTE(v3) = KiIntSteerLogState((__int64)j, v2);
    }
  }
  return v3;
}

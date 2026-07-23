/*
 * XREFs of KdpGetStateChange @ 0x1406F3504
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 */

void __fastcall KdpGetStateChange(__int64 a1, __int64 a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx

  if ( *(int *)(a1 + 16) >= 0 )
  {
    if ( *(_DWORD *)(a1 + 20) )
      *(_DWORD *)(a2 + 68) |= 0x100u;
    else
      *(_DWORD *)(a2 + 68) &= ~0x100u;
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( ActiveProcessorCount )
    {
      v4 = KiProcessorBlock;
      v5 = ActiveProcessorCount;
      do
      {
        v6 = *v4++;
        *(_QWORD *)(v6 + 128) = 0LL;
        *(_QWORD *)(v6 + 136) = *(_QWORD *)(a1 + 24);
        --v5;
      }
      while ( v5 );
    }
  }
}

/*
 * XREFs of KdpGetStateChange @ 0x14072D36C
 * Callers:
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

void __fastcall KdpGetStateChange(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdx
  __int64 v4; // r9
  __int64 v5; // rcx

  if ( *(int *)(a1 + 16) >= 0 )
  {
    if ( *(_DWORD *)(a1 + 20) )
      *(_DWORD *)(a2 + 68) |= 0x100u;
    else
      *(_DWORD *)(a2 + 68) &= ~0x100u;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v3 = KiProcessorBlock;
      v4 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v5 = *v3++;
        *(_QWORD *)(v5 + 128) = 0LL;
        *(_QWORD *)(v5 + 136) = *(_QWORD *)(a1 + 24);
        --v4;
      }
      while ( v4 );
    }
  }
}

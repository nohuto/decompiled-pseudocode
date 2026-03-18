/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x140423900
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1404234B0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     AlpcpSignal @ 0x14007A0C0 (AlpcpSignal.c)
 */

void __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  void *v5; // rcx

  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
  {
    AlpcpSignal(a1, 0, 0, a4);
    v5 = *(void **)(a1 + 32);
    if ( v5 )
      ObfDereferenceObject(v5);
  }
}

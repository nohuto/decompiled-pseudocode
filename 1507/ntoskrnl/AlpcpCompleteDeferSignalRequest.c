/*
 * XREFs of AlpcpCompleteDeferSignalRequest @ 0x14047652C
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140475F20 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 */

void __fastcall AlpcpCompleteDeferSignalRequest(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  void *v5; // rcx

  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
  {
    AlpcpSignal(a1, 0, a3, a4);
    v5 = *(void **)(a1 + 32);
    if ( v5 )
      ObfDereferenceObject(v5);
  }
}

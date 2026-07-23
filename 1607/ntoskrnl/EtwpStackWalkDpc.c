/*
 * XREFs of EtwpStackWalkDpc @ 0x140229400
 * Callers:
 *     <none>
 * Callees:
 *     EtwpQueueStackWalkApc @ 0x140229060 (EtwpQueueStackWalkApc.c)
 */

void __fastcall EtwpStackWalkDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  void *EtwSupport; // rbx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF
  int v6; // [rsp+44h] [rbp+1Ch]

  v5 = (unsigned int)SystemArgument1;
  v6 = (int)SystemArgument2;
  EtwSupport = KeGetCurrentPrcb()->EtwSupport;
  EtwpQueueStackWalkApc(*((_QWORD *)EtwSupport + 139), 2u, *((_DWORD *)EtwSupport + 277), &v5);
  _interlockedbittestandreset((volatile signed __int32 *)EtwSupport + 276, 1u);
}

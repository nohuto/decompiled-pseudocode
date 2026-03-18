/*
 * XREFs of EtwpQueueStackWalkDpc @ 0x14026015C
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x140260000 (EtwpQueueStackWalkApc.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

struct _KPRCB *__fastcall EtwpQueueStackWalkDpc(__int64 a1, int a2, unsigned int *a3)
{
  struct _KPRCB *result; // rax
  void *EtwSupport; // rcx

  result = KeGetCurrentPrcb();
  EtwSupport = result->EtwSupport;
  if ( !_interlockedbittestandset((volatile signed __int32 *)EtwSupport + 276, 1u) )
  {
    *((_DWORD *)EtwSupport + 277) = a2;
    *((_QWORD *)EtwSupport + 139) = a1;
    return (struct _KPRCB *)KiInsertQueueDpc((__int64)EtwSupport + 1120, *a3, a3[1], 0LL, 0);
  }
  return result;
}

/*
 * XREFs of EtwpAddNotificationEvent @ 0x140546790
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall EtwpAddNotificationEvent(void *a1)
{
  _KPROCESS *Process; // rbx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ActiveProcessors.Bitmap[9] )
    return -1073741823;
  result = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&Process[1].ActiveProcessors.Bitmap[9],
           (unsigned __int64)Object | 1,
           0LL) )
    {
      ObfDereferenceObject(Object);
      return -1073740008;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

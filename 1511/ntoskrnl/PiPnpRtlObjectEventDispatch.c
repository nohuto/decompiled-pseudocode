/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x140440E78
 * Callers:
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PiDcHandleObjectEvent @ 0x140496F84 (PiDcHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1404E04AC (PiDqGetObjectManagerForPnpObjectType.c)
 */

__int64 __fastcall PiPnpRtlObjectEventDispatch(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0xB) != 0 || *(_DWORD *)(a1 + 76) )
  {
    PiDcHandleObjectEvent();
    result = PiDqGetObjectManagerForPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1 + 8) + 28LL));
    if ( result )
      return PiDqObjectManagerHandleObjectEvent(result, a1);
  }
  return result;
}

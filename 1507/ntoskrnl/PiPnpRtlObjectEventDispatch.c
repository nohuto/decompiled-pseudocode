/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x14043C09C
 * Callers:
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PiDcHandleObjectEvent @ 0x140537140 (PiDcHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x140542C18 (PiDqGetObjectManagerForPnpObjectType.c)
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

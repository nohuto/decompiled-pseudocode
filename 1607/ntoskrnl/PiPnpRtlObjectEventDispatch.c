/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x140501F50
 * Callers:
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1404DE384 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDcHandleObjectEvent @ 0x1404DF8B0 (PiDcHandleObjectEvent.c)
 */

void __fastcall PiPnpRtlObjectEventDispatch(__int64 a1)
{
  struct _ERESOURCE *ObjectManagerForPnpObjectType; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0xB) != 0 || *(_DWORD *)(a1 + 76) )
  {
    PiDcHandleObjectEvent(a1);
    ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL));
    if ( ObjectManagerForPnpObjectType )
      PiDqObjectManagerHandleObjectEvent((__int64)ObjectManagerForPnpObjectType, a1);
  }
}

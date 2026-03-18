/*
 * XREFs of DeviceSlot_Initialize @ 0x1C0005F04
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C001B1A8 (Controller_InternalReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 */

__int64 __fastcall DeviceSlot_Initialize(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // r8
  char v4; // cl
  __int64 v5; // rdx
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+20h] [rbp-18h]

  result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)result )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL) + 32LL);
    v3[14] = (unsigned __int8)*(_DWORD *)(a1 + 16);
    _InterlockedOr(v6, 0);
    result = *(_QWORD *)(a1 + 24);
    v4 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 1;
    v7 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
    v5 = *(_QWORD *)(result + 24);
    if ( v4 )
    {
      v3[12] = v5;
      _InterlockedOr(v6, 0);
      v3[13] = HIDWORD(v5);
    }
    else
    {
      *((_QWORD *)v3 + 6) = v5;
    }
    _InterlockedOr(v6, 0);
  }
  return result;
}

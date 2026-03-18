/*
 * XREFs of DeviceSlot_Initialize @ 0x1C0006FC4
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0007640 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 */

__int64 __fastcall DeviceSlot_Initialize(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // r8
  __int64 v4; // rdx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)result )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL) + 32LL);
    v3[14] = (unsigned __int8)*(_DWORD *)(a1 + 16);
    _InterlockedOr(v5, 0);
    result = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(result + 24);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 232LL) & 1) != 0 )
    {
      v3[12] = v4;
      _InterlockedOr(v5, 0);
      v3[13] = HIDWORD(v4);
    }
    else
    {
      *((_QWORD *)v3 + 6) = v4;
    }
    _InterlockedOr(v5, 0);
  }
  return result;
}

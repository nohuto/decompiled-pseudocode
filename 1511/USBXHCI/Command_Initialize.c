/*
 * XREFs of Command_Initialize @ 0x1C0007028
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0007640 (Controller_WdfEvtDeviceD0Entry.c)
 *     Command_ControllerResetPostReset @ 0x1C001B130 (Command_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 *     memset @ 0x1C0011000 (memset.c)
 */

_DWORD *__fastcall Command_Initialize(__int64 a1)
{
  _DWORD *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+20h] [rbp-18h]

  result = (_DWORD *)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)result )
  {
    v3 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 68) = 0;
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 76) = 1;
    memset(*(void **)(v3 + 16), 0, *(unsigned int *)(v3 + 40));
    *((_QWORD *)&v7 + 1) = 0x180200000000LL;
    v4 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)&v7 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 24LL);
    *(_OWORD *)(v4 + 16LL * *(unsigned int *)(a1 + 64)) = v7;
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 24LL) ^ ((unsigned __int8)*(_DWORD *)(a1 + 76) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(a1 + 120) + 24LL)) & 1;
    result = *(_DWORD **)(a1 + 40);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 232LL) & 1) != 0 )
    {
      *result = v5;
      _InterlockedOr(v6, 0);
      result[1] = HIDWORD(v5);
    }
    else
    {
      *(_QWORD *)result = v5;
    }
    _InterlockedOr(v6, 0);
  }
  return result;
}

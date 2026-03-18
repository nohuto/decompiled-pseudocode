/*
 * XREFs of Command_Initialize @ 0x1C0005F78
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     Command_ControllerResetPostReset @ 0x1C0017874 (Command_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     memset @ 0x1C0010E80 (memset.c)
 */

unsigned __int64 __fastcall Command_Initialize(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _DWORD *v5; // rcx
  char v6; // dl
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-18h]

  result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)result )
  {
    v3 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 68) = 0;
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 76) = 1;
    memset(*(void **)(v3 + 16), 0, *(unsigned int *)(v3 + 40));
    *((_QWORD *)&v8 + 1) = 0x180200000000LL;
    v4 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)&v8 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 24LL);
    *(_OWORD *)(v4 + 16LL * *(unsigned int *)(a1 + 64)) = v8;
    result = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 24LL) ^ ((unsigned __int8)*(_DWORD *)(a1 + 76) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(a1 + 120) + 24LL)) & 1;
    v5 = *(_DWORD **)(a1 + 40);
    v6 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 1;
    v9 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
    if ( v6 )
    {
      *v5 = result;
      _InterlockedOr(v7, 0);
      result >>= 32;
      v5[1] = result;
    }
    else
    {
      *(_QWORD *)v5 = result;
    }
    _InterlockedOr(v7, 0);
  }
  return result;
}

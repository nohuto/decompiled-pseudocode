/*
 * XREFs of Register_SetClearSSICPortUnused @ 0x1C0006CC8
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003EE0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_ControllerReset @ 0x1C0005790 (Register_ControllerReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0006D00 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     <none>
 */

int __fastcall Register_SetClearSSICPortUnused(__int64 a1, char a2)
{
  int result; // eax
  int *v3; // rcx
  int v4; // eax
  unsigned int v5; // eax
  signed __int32 v6[6]; // [rsp+0h] [rbp-18h] BYREF

  *(_OWORD *)v6 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
  result = v6[0];
  if ( (*(_QWORD *)v6 & 0x200000000000000LL) != 0 )
  {
    v3 = (int *)(*(_QWORD *)(a1 + 24) + 34876LL);
    *v3 &= ~0x40000000u;
    _InterlockedOr(v6, 0);
    v4 = *v3;
    if ( a2 )
      v5 = v4 | 0x80000000;
    else
      v5 = v4 & 0x7FFFFFFF;
    *v3 = v5;
    _InterlockedOr(v6, 0);
    result = *v3 | 0x40000000;
    *v3 = result;
    _InterlockedOr(v6, 0);
  }
  return result;
}

/*
 * XREFs of Register_SetClearSSICPortUnused @ 0x1C0007620
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0004F40 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_ControllerReset @ 0x1C00071C0 (Register_ControllerReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0007640 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     <none>
 */

int __fastcall Register_SetClearSSICPortUnused(__int64 a1, char a2)
{
  __int64 v2; // rax
  unsigned int *v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
  if ( (v2 & 0x200000000000000LL) != 0 )
  {
    v3 = (unsigned int *)(*(_QWORD *)(a1 + 24) + 34876LL);
    *v3 &= ~0x40000000u;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v4 = *v3;
    if ( a2 )
      v5 = v4 | 0x80000000;
    else
      v5 = v4 & 0x7FFFFFFF;
    *v3 = v5;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    LODWORD(v2) = *v3 | 0x40000000;
    *v3 = v2;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return v2;
}

/*
 * XREFs of Interrupter_ControllerResetPostReset @ 0x1C0022B10
 * Callers:
 *     Controller_InternalReset @ 0x1C001B1A8 (Controller_InternalReset.c)
 * Callees:
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C00057C0 (Interrupter_InterrupterRegisterIntialize.c)
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     Interrupter_Initialize @ 0x1C0022C08 (Interrupter_Initialize.c)
 */

char __fastcall Interrupter_ControllerResetPostReset(__int64 a1)
{
  int v2; // eax
  __int64 i; // rdx
  __int64 v4; // rcx
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  LOBYTE(v2) = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)v2 )
  {
    Interrupter_Initialize(a1);
    LOBYTE(v2) = (unsigned __int8)Interrupter_InterrupterRegisterIntialize(a1);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
      v2 = *(_DWORD *)(v4 + 96);
      if ( (v2 & 4) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4LL) = 200;
        _InterlockedOr(v6, 0);
        v2 = **(_DWORD **)(v4 + 24) | 2;
        **(_DWORD **)(v4 + 24) = v2;
        _InterlockedOr(v6, 0);
      }
    }
  }
  return v2;
}

/*
 * XREFs of PspGetSetContextSpecialApc @ 0x14015B7C0
 * Callers:
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 * Callees:
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 */

void __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  if ( (unsigned __int8)PspGetSetContextInternal(a1, *a4, v6) )
    _fxrstor((void *)(v4 + 256));
  if ( v6[0] )
    KeSignalGate(v6[0], 1LL, v5);
}

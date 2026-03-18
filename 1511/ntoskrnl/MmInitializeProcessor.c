/*
 * XREFs of MmInitializeProcessor @ 0x1403A91A8
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmInitializeProcessor(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax
  __int64 v5; // rdx

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 25144) = -1LL;
  result = MiReservePtes((__int64)&qword_1402FF7B0, 0x40u, a3);
  if ( result )
  {
    *(_QWORD *)(a1 + 24520) = (__int64)(result << 25) >> 16;
    *(_DWORD *)(a1 + 23532) = dword_1402FE708;
    v5 = qword_1402FFD68 + 1336LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 1600) + 146LL);
    *(_DWORD *)(a1 + 23524) = *(unsigned __int8 *)(v5 + 1228);
    *(_DWORD *)(a1 + 23528) = *(_DWORD *)(v5 + 1224);
    return 1LL;
  }
  return result;
}

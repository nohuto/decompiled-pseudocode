/*
 * XREFs of MmInitializeProcessor @ 0x1403FA854
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 */

__int64 *__fastcall MmInitializeProcessor(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *result; // rax
  __int64 v5; // rdx

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 25144) = -1LL;
  result = MiReservePtes((__int64)&qword_14034FC70, 0x40u, a3);
  if ( result )
  {
    *(_QWORD *)(a1 + 24520) = (__int64)((_QWORD)result << 25) >> 16;
    *(_DWORD *)(a1 + 23532) = dword_14034EBB8;
    v5 = qword_140353D28 + 1336LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 1600) + 146LL);
    *(_DWORD *)(a1 + 23524) = *(unsigned __int8 *)(v5 + 1228);
    *(_DWORD *)(a1 + 23528) = *(_DWORD *)(v5 + 1224);
    return (__int64 *)1;
  }
  return result;
}

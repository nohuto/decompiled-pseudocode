/*
 * XREFs of MmInitializeProcessor @ 0x1403D3D40
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F040 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmInitializeProcessor(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax
  __int64 v5; // rdx

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 25272) = -1LL;
  result = MiReservePtes((__int64)&qword_140327870, 0x40uLL, a3);
  if ( result )
  {
    *(_QWORD *)(a1 + 24520) = (__int64)(result << 25) >> 16;
    *(_DWORD *)(a1 + 23532) = dword_1403269F8;
    v5 = qword_140323570 + 2184LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 1600) + 146LL);
    *(_DWORD *)(a1 + 23524) = *(unsigned __int8 *)(v5 + 2068);
    *(_DWORD *)(a1 + 23528) = *(_DWORD *)(v5 + 2064);
    return 1LL;
  }
  return result;
}

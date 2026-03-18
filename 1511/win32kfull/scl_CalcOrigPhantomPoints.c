/*
 * XREFs of scl_CalcOrigPhantomPoints @ 0x1C00B0584
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 *     fsg_CompositeInnerGridFit @ 0x1C00B2D90 (fsg_CompositeInnerGridFit.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall scl_CalcOrigPhantomPoints(
        __int64 a1,
        __int16 *a2,
        __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  int v7; // ebx
  int v9; // edi
  int v10; // r9d
  int v11; // r9d
  __int64 result; // rax

  v7 = a3;
  v9 = a4;
  memset(
    (void *)(*(_QWORD *)(a1 + 40)
           + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 1)),
    0,
    0x20uLL);
  memset(
    (void *)(*(_QWORD *)(a1 + 32)
           + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 1)),
    0,
    0x20uLL);
  v10 = *a2 - v7;
  *(_DWORD *)(*(_QWORD *)(a1 + 32)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 1)) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 32)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 2)) = v10 + a5;
  *(_DWORD *)(*(_QWORD *)(a1 + 32)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 5)) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 32)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 6)) = *a2;
  v11 = v9 + a2[3];
  *(_DWORD *)(*(_QWORD *)(a1 + 40)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 3)) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 40)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 4)) = v11 - a6;
  *(_DWORD *)(*(_QWORD *)(a1 + 40)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 7)) = v11;
  result = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(result + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 8)) = a2[3];
  return result;
}

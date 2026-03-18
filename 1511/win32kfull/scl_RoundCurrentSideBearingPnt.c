/*
 * XREFs of scl_RoundCurrentSideBearingPnt @ 0x1C00B0BA0
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 *     fsg_CompositeInnerGridFit @ 0x1C00B2D90 (fsg_CompositeInnerGridFit.c)
 * Callees:
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

__int64 __fastcall scl_RoundCurrentSideBearingPnt(__int64 a1, __int64 a2, __int16 a3)
{
  __int16 v5; // r10
  int v6; // eax
  unsigned int v7; // r10d
  unsigned int v8; // edx
  __int16 v9; // r9
  __int16 v10; // dx
  int v11; // eax
  int v12; // r11d
  int v13; // r10d
  __int64 v14; // r9
  __int64 result; // rax

  v5 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2);
  v6 = (int)(CompDiv(
               (unsigned int)a3,
               *(int *)(a2 + 376)
             * (__int64)(__int16)(*(_WORD *)(*(_QWORD *)(a1 + 32) + 4LL * (unsigned __int16)(v5 + 2))
                                - *(_WORD *)(*(_QWORD *)(a1 + 32) + 4LL * (unsigned __int16)(v5 + 1))))
           + 512) >> 10;
  if ( (*(_BYTE *)(a2 + 452) & 5) == 1 )
    v8 = (v6 + 2) & 0xFFFFFFFC;
  else
    v8 = (v6 + 32) & 0xFFFFFFC0;
  v9 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2);
  *(_DWORD *)(*(_QWORD *)a1 + 4LL * (unsigned __int16)(v9 + 2)) = *(_DWORD *)(*(_QWORD *)a1
                                                                            + 4LL * (unsigned __int16)(v9 + 1))
                                                                + v8;
  v10 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2);
  v11 = CompDiv(
          v7,
          *(int *)(a2 + 380)
        * (__int64)(__int16)(*(_WORD *)(*(_QWORD *)(a1 + 40) + 4LL * (unsigned __int16)(v10 + 4))
                           - *(_WORD *)(*(_QWORD *)(a1 + 40) + 4LL * (unsigned __int16)(v10 + 3))));
  v13 = (v12 + v11) >> 10;
  v14 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 3);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v14) = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v14) + 32) & 0xFFFFFFC0;
  LOWORD(v14) = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2);
  result = (unsigned __int16)(v14 + 4);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * result) = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL * (unsigned __int16)(v14 + 3))
                                                 + v13
                                                 + 32) & 0xFFFFFFC0;
  return result;
}

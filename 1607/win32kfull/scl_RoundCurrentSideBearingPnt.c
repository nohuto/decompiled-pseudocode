/*
 * XREFs of scl_RoundCurrentSideBearingPnt @ 0x1C00CA08C
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C001E1A8 (fsg_CompositeInnerGridFit.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall scl_RoundCurrentSideBearingPnt(__int64 a1, __int64 a2, __int16 a3)
{
  __int16 v4; // r10
  int v5; // eax
  unsigned int v6; // r10d
  __int64 v7; // r11
  unsigned int v8; // edx
  __int16 v9; // r9
  __int16 v10; // dx
  int v11; // eax
  __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // r8
  __int16 v15; // r9
  __int64 result; // rax

  v4 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1));
  v5 = (int)(CompDiv(
               (unsigned int)a3,
               *(int *)(a2 + 376)
             * (__int64)(__int16)(*(_WORD *)(*(_QWORD *)(a1 + 32) + 4LL * (unsigned __int16)(v4 + 2))
                                - *(_WORD *)(*(_QWORD *)(a1 + 32) + 4LL * (unsigned __int16)(v4 + 1))))
           + 512) >> 10;
  if ( (*(_BYTE *)(a2 + 452) & 5) == 1 )
    v8 = (v5 + 2) & 0xFFFFFFFC;
  else
    v8 = (v5 + 32) & 0xFFFFFFC0;
  v9 = *(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1));
  *(_DWORD *)(*(_QWORD *)v7 + 4LL * (unsigned __int16)(v9 + 2)) = *(_DWORD *)(*(_QWORD *)v7
                                                                            + 4LL * (unsigned __int16)(v9 + 1))
                                                                + v8;
  v10 = *(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1));
  v11 = CompDiv(
          v6,
          *(int *)(a2 + 380)
        * (__int64)(__int16)(*(_WORD *)(*(_QWORD *)(v7 + 40) + 4LL * (unsigned __int16)(v10 + 4))
                           - *(_WORD *)(*(_QWORD *)(v7 + 40) + 4LL * (unsigned __int16)(v10 + 3))));
  v13 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v12 + 64) + 2LL * (*(__int16 *)(v12 + 80) - 1)) + 3);
  *(_DWORD *)(*(_QWORD *)(v12 + 8) + 4 * v13) = (*(_DWORD *)(*(_QWORD *)(v12 + 8) + 4 * v13) + 32) & 0xFFFFFFC0;
  v14 = *(_QWORD *)(v12 + 8);
  v15 = *(_WORD *)(*(_QWORD *)(v12 + 64) + 2LL * (*(__int16 *)(v12 + 80) - 1));
  LODWORD(v13) = (*(_DWORD *)(v14 + 4LL * (unsigned __int16)(v15 + 3)) + ((v11 + 512) >> 10) + 32) & 0xFFFFFFC0;
  result = (unsigned __int16)(v15 + 4);
  *(_DWORD *)(v14 + 4 * result) = v13;
  return result;
}

/*
 * XREFs of ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0012658
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0001460 (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00014D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C001B084 (VidSchiTryEnterIndependentFlip.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckPlaneIndependentFlipCondition(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ecx

  if ( a2 == -1 )
    return 0;
  v5 = a2;
  v6 = 280LL * a3;
  v7 = *((_QWORD *)a1 + v5 + 330);
  v8 = *(_DWORD *)(v7 + v6 + 148);
  if ( v8 != 1 )
    return v8 == 2;
  if ( !*(_BYTE *)(v7 + v6 + 146) || *(_DWORD *)(v7 + v6 + 152) || !*(_BYTE *)(v7 + v6 + 144) )
    return 0;
  return *(_DWORD *)(v7 + v6 + 156) == 0;
}

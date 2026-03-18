/*
 * XREFs of ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C00126B4
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0001460 (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00014D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCheckTokenIndependentFlipCondition(
        struct _VIDSCH_GLOBAL *a1,
        const struct VIDSCH_SUBMIT_DATA2 *a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // r8d
  bool v5; // zf
  int v6; // eax
  char v7; // dl
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx

  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    v4 = *((_DWORD *)a2 + 29);
    v5 = !_BitScanForward((unsigned int *)&v6, (unsigned __int8)*((_DWORD *)a2 + 90));
    v7 = -1;
    if ( !v5 )
      v7 = v6;
    v5 = v7 == -1;
    v8 = v7;
    v9 = v4;
    if ( v5 )
      v8 = 0;
    v10 = 280LL * (unsigned int)v8;
    v11 = *((_QWORD *)a1 + v9 + 330);
    if ( *(_DWORD *)(v11 + v10 + 120) == *((_DWORD *)a2 + 38)
      && *(_DWORD *)(v11 + v10 + 124) == *((_DWORD *)a2 + 39)
      && *(_QWORD *)(v11 + v10 + 128) == *((_QWORD *)a2 + 20)
      && *(_QWORD *)(v11 + v10 + 136) == *((_QWORD *)a2 + 21) )
    {
      return 1;
    }
    v3 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v11, v9);
    v3[3] = *((_QWORD *)a2 + 13);
    v3[4] = *((unsigned int *)a2 + 28);
    v3[5] = *((_QWORD *)a2 + 19);
    v3[6] = *((_QWORD *)a2 + 20);
    v3[7] = *((_QWORD *)a2 + 21);
  }
  else
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    v3[3] = *((_QWORD *)a2 + 13);
    v3[4] = *((unsigned int *)a2 + 28);
  }
  WdLogEvent5_WdPresentTokenEvent(v3);
  return 0;
}

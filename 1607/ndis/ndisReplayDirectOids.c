/*
 * XREFs of ndisReplayDirectOids @ 0x1C006BC30
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006A990 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C006C3CC (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ndisMOidRequestCompleteInternal @ 0x1C0025D70 (ndisMOidRequestCompleteInternal.c)
 *     ndisMDoDirectOidRequest @ 0x1C0045DF8 (ndisMDoDirectOidRequest.c)
 */

_QWORD *__fastcall ndisReplayDirectOids(__int64 a1, _QWORD **a2, char a3)
{
  _QWORD *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // eax

  while ( 1 )
  {
    result = *a2;
    if ( *a2 == a2 )
      break;
    v7 = *result;
    if ( (_QWORD **)result[1] != a2 || *(_QWORD **)(v7 + 8) != result )
      __fastfail(3u);
    *a2 = (_QWORD *)v7;
    v8 = (__int64)(result - 9);
    *(_QWORD *)(v7 + 8) = a2;
    v9 = ndisMDoDirectOidRequest(a1, (_DWORD *)result - 18, a3);
    if ( v9 != 259 )
      ndisMOidRequestCompleteInternal(a1, v8, v9, 0LL);
  }
  return result;
}

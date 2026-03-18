/*
 * XREFs of DpiGdoHandleVideoParameters @ 0x1C0174D30
 * Callers:
 *     DpiGdoDispatchIoctl @ 0x1C00C47A0 (DpiGdoDispatchIoctl.c)
 * Callees:
 *     DxgkHandleVideoParameters @ 0x1C0153088 (DxgkHandleVideoParameters.c)
 */

__int64 __fastcall DpiGdoHandleVideoParameters(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  __int64 result; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v4 + 16) < 0x164u || *(_DWORD *)(v4 + 8) < 0x164u )
  {
    v5 = -1073741306;
    v6 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v6[3] = DpiGdoHandleVideoParameters;
    v6[4] = 0LL;
    v6[5] = -1073741306LL;
    WdLogEvent5_WdError(v6);
  }
  else
  {
    v5 = DxgkHandleVideoParameters(
           *(DXGADAPTER ****)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL) + 2544LL),
           *(_DWORD *)(*(_QWORD *)(a1 + 64) + 156LL),
           *(char **)(a2 + 24));
    v3 = 356LL;
  }
  *(_DWORD *)(a2 + 48) = v5;
  result = v5;
  *(_QWORD *)(a2 + 56) = v3;
  return result;
}

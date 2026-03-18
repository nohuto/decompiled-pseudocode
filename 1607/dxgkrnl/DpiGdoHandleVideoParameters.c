/*
 * XREFs of DpiGdoHandleVideoParameters @ 0x1C019E6E8
 * Callers:
 *     DpiGdoDispatchIoctl @ 0x1C00C4D40 (DpiGdoDispatchIoctl.c)
 * Callees:
 *     DxgkHandleVideoParameters @ 0x1C01780F4 (DxgkHandleVideoParameters.c)
 */

__int64 __fastcall DpiGdoHandleVideoParameters(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 result; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v4 + 16) < 0x164u || *(_DWORD *)(v4 + 8) < 0x164u )
  {
    v5 = -1073741306;
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = -1073741306LL;
    WdLogEvent5_WdError(v6);
  }
  else
  {
    v5 = DxgkHandleVideoParameters(
           *(DXGADAPTER ****)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL) + 3688LL),
           *(_DWORD *)(*(_QWORD *)(a1 + 64) + 156LL),
           *(char **)(a2 + 24));
    v3 = 356LL;
  }
  *(_DWORD *)(a2 + 48) = v5;
  result = v5;
  *(_QWORD *)(a2 + 56) = v3;
  return result;
}

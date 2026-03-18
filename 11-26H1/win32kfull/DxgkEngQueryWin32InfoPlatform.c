/*
 * XREFs of DxgkEngQueryWin32InfoPlatform @ 0x140252E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngQueryWin32InfoPlatform(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  if ( *(_DWORD *)a1 != 1 )
    return 3221225474LL;
  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) != 32 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1761;
  }
  *(_QWORD *)(v1 + 8) = 12LL;
  *(_QWORD *)(v1 + 16) = L"d";
  *(_QWORD *)(v1 + 24) = DesktopScaleFactorCutoffs;
  result = 0LL;
  *(_DWORD *)v1 = 800;
  *(_DWORD *)(v1 + 4) = 600;
  return result;
}

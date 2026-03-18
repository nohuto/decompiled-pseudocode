/*
 * XREFs of RIMStartHoldingFrame @ 0x1C00C97F4
 * Callers:
 *     RIMStoreFrameNodes @ 0x1C00C9870 (RIMStoreFrameNodes.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMStartHoldingFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  unsigned int v7; // edi
  unsigned __int64 v9; // rcx
  void *v10; // rax
  __int64 result; // rax

  v7 = a5 + a6;
  if ( a5 + a6 < a5 )
    return 0LL;
  if ( v7 && (v9 = 168LL * v7, v9 <= 0xFFFFFFFF) && (_DWORD)v9 )
    v10 = Win32AllocPoolZInit((unsigned int)v9);
  else
    v10 = 0LL;
  *(_QWORD *)(a3 + 64) = v10;
  if ( !v10 )
    return 0LL;
  *(_DWORD *)(a3 + 36) = 0;
  result = 1LL;
  *(_DWORD *)(a3 + 32) = v7;
  *(_QWORD *)(a3 + 24) = a4;
  return result;
}

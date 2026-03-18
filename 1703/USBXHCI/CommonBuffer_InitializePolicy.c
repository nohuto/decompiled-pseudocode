/*
 * XREFs of CommonBuffer_InitializePolicy @ 0x1C004FD84
 * Callers:
 *     CommonBuffer_Create @ 0x1C004F9F0 (CommonBuffer_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CommonBuffer_InitializePolicy(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v2 + 368) == 1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), 4u, 7u, 0xAu, (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids);
    result = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 44) = 1;
    *(_DWORD *)(a1 + 48) = 1;
    result = 8LL;
    *(_DWORD *)(a1 + 56) = 8;
    *(_DWORD *)(a1 + 64) = 8;
    *(_DWORD *)(a1 + 40) = 4;
    *(_DWORD *)(a1 + 52) = 2;
    *(_DWORD *)(a1 + 60) = 4;
    *(_DWORD *)(a1 + 68) = 16;
  }
  return result;
}

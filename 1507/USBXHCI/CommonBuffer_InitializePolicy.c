/*
 * XREFs of CommonBuffer_InitializePolicy @ 0x1C00488FC
 * Callers:
 *     CommonBuffer_Create @ 0x1C0048950 (CommonBuffer_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CommonBuffer_InitializePolicy(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v2 + 360) == 1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), 4u, 7u, 0xAu, (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids);
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

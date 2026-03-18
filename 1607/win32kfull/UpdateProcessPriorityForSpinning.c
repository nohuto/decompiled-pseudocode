/*
 * XREFs of UpdateProcessPriorityForSpinning @ 0x1C00A80D4
 * Callers:
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C00827E0 (-HandleProcessSpinning@@YAHXZ.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00A8094 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     NtUserYieldTask @ 0x1C021C130 (NtUserYieldTask.c)
 * Callees:
 *     ?SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C00A817C (-SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYC.c)
 */

__int64 __fastcall UpdateProcessPriorityForSpinning(__int64 a1)
{
  __int64 v1; // r9
  __int64 result; // rax
  int v4; // edx
  __int64 i; // rcx
  int v6; // ecx
  __int64 v7; // r8

  v1 = *(_QWORD *)(a1 + 376);
  result = 2048LL;
  if ( (*(_DWORD *)(a1 + 440) & 0x400) != 0 )
  {
    v6 = *(_DWORD *)(v1 + 12);
    if ( (v6 & 0x800) == 0 )
    {
      *(_DWORD *)(v1 + 12) = v6 | 0x800;
      result = *(_QWORD *)(a1 + 376);
      if ( (*(_BYTE *)(result + 770) & 3) == 1 )
      {
        v7 = 2LL;
        return SetForegroundPriorityProcess(v1, a1, v7);
      }
    }
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 12);
    if ( (v4 & 0x800) != 0 )
    {
      for ( i = *(_QWORD *)(v1 + 288); i; i = *(_QWORD *)(i + 584) )
      {
        if ( (*(_DWORD *)(i + 440) & 0x400) != 0 )
          return result;
      }
      *(_DWORD *)(v1 + 12) = v4 & 0xFFFFF7FF;
      result = *(_QWORD *)(a1 + 376);
      if ( (*(_BYTE *)(result + 770) & 3) == 2 )
      {
        v7 = 1LL;
        return SetForegroundPriorityProcess(v1, a1, v7);
      }
    }
  }
  return result;
}

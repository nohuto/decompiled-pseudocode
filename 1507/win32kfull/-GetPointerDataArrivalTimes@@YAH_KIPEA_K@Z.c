/*
 * XREFs of ?GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z @ 0x1C01F7E54
 * Callers:
 *     GetPointerFrameArrivalTimesInternal @ 0x1C01E0BE8 (GetPointerFrameArrivalTimesInternal.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F1B4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C022F774 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 */

__int64 __fastcall GetPointerDataArrivalTimes(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  struct tagPOINTERINPUTFRAME *FrameById; // r9
  __int64 v7; // r10
  unsigned int v8; // r10d
  unsigned int v9; // ebx
  struct tagPOINTERINPUTFRAME *i; // rax
  unsigned int v11; // r11d

  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById || a2 > *(_DWORD *)(*((_QWORD *)FrameById + 9) + 216LL * *(unsigned int *)(v7 + 32) + 124) )
    return 0LL;
  v8 = 1;
  *a3 = *((_QWORD *)FrameById + 6);
  v9 = 1;
  if ( a2 > 1 )
  {
    for ( i = GetPreviousFrameByDeviceInt(FrameById); v9 < a2 && i && v11 > v8; i = GetPreviousFrameByDeviceInt(i) )
    {
      a3[v9] = *((_QWORD *)i + 6);
      v9 += v8;
    }
  }
  return v8;
}

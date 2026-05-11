/*
 * XREFs of USBType1AdjustPositionWithin1Ms @ 0x1C0002F3C
 * Callers:
 *     USBType1RenderBytePosition @ 0x1C0003000 (USBType1RenderBytePosition.c)
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C0001FD0 (WPP_RECORDER_SF_ii.c)
 *     USBMidiInGetCurrentTime @ 0x1C00026E0 (USBMidiInGetCurrentTime.c)
 */

unsigned __int64 __fastcall USBType1AdjustPositionWithin1Ms(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  unsigned __int64 CurrentTime; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx

  v4 = *(_QWORD *)(a1 + 136);
  CurrentTime = USBMidiInGetCurrentTime();
  v10 = *(_QWORD *)(a3 + 8) + a2 * (unsigned int)(a4 - *(_DWORD *)a3);
  if ( CurrentTime < v10 )
    v10 = CurrentTime;
  v11 = CurrentTime - v10;
  v12 = (CurrentTime - v10) * (unsigned int)(*(_DWORD *)(v4 + 8) * *(_DWORD *)(a1 + 88)) / (1000 * a2);
  v13 = v11 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 8) * *(_DWORD *)(a1 + 88)) / (1000 * a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ii(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 8) * *(_DWORD *)(a1 + 88)) % (1000 * a2),
      v11,
      0xAu,
      (__int64)&WPP_2bd6422770bdda6d82260a118f6146de_Traceguids,
      v12,
      v11);
  return v13;
}

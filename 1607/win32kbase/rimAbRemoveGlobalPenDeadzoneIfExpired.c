/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C00D0EB4
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00D19A8 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  if ( *(_DWORD *)(a1 + 620) )
  {
    result = MEMORY[0xFFFFF78000000320];
    v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 632) )
    {
      *(_DWORD *)(a1 + 620) = 0;
      *(_QWORD *)(a1 + 624) = 0LL;
      *(_DWORD *)(a1 + 632) = 0;
      LOBYTE(v2) = 3;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v2,
               5,
               11,
               (__int64)&WPP_2fabf283dbf0365d553201ec077de623_Traceguids);
    }
  }
  return result;
}

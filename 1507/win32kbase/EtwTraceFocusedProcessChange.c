/*
 * XREFs of EtwTraceFocusedProcessChange @ 0x1C0015080
 * Callers:
 *     <none>
 * Callees:
 *     Template_ddd @ 0x1C00A929C (Template_ddd.c)
 */

char __fastcall EtwTraceFocusedProcessChange(__int64 a1, __int64 a2)
{
  char result; // al
  int v5; // ecx
  int v6; // edx

  if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x8000000000020000uLL) != 0 )
  {
    result = byte_1C00FEA58 - 1;
    if ( (unsigned __int8)(byte_1C00FEA58 - 1) > 2u && (qword_1C00FEA40 & 0x8000000000020000uLL) != 0 )
    {
      result = 0;
      if ( (qword_1C00FEA48 & 0x8000000000020000uLL) == qword_1C00FEA48 )
      {
        v5 = 0;
        if ( a1 )
          v6 = *(_DWORD *)(*(_QWORD *)(a1 + 384) + 56LL);
        else
          LOBYTE(v6) = 0;
        if ( a2 )
          v5 = *(_DWORD *)(*(_QWORD *)(a2 + 384) + 56LL);
        result = Microsoft_Windows_Win32kEnableBits;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
          return Template_ddd(v5, (unsigned int)&FocusedProcessChangeEvent, a1, gSessionId, v5, v6);
      }
    }
  }
  return result;
}

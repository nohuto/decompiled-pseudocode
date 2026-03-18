/*
 * XREFs of EtwTraceFocusedProcessChange @ 0x1C007C610
 * Callers:
 *     <none>
 * Callees:
 *     Template_ddd @ 0x1C00B6F5C (Template_ddd.c)
 */

char __fastcall EtwTraceFocusedProcessChange(__int64 a1, __int64 a2)
{
  char result; // al
  int v5; // ecx
  int v6; // edx

  if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x8000000000020000uLL) != 0 )
  {
    result = byte_1C0118B28 - 1;
    if ( (unsigned __int8)(byte_1C0118B28 - 1) > 2u && (qword_1C0118B10 & 0x8000000000020000uLL) != 0 )
    {
      result = 0;
      if ( (qword_1C0118B18 & 0x8000000000020000uLL) == qword_1C0118B18 )
      {
        v5 = 0;
        if ( a1 )
          v6 = *(_DWORD *)(*(_QWORD *)(a1 + 376) + 56LL);
        else
          LOBYTE(v6) = 0;
        if ( a2 )
          v5 = *(_DWORD *)(*(_QWORD *)(a2 + 376) + 56LL);
        result = Microsoft_Windows_Win32kEnableBits;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
          return Template_ddd(v5, (unsigned int)&FocusedProcessChangeEvent, a1, gSessionId, v5, v6);
      }
    }
  }
  return result;
}

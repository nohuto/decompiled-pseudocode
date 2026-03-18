/*
 * XREFs of ?GetInputProcessContext@@YAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C01FC87C
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01FD048 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 */

struct tagPROCESSINFO *__fastcall GetInputProcessContext(unsigned __int64 a1)
{
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = HMValidateHandleNoSecure(a1, 19);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 416);
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 252) & 0x20) != 0 && (unsigned int)(*(_DWORD *)(v4 + 24) - 1) <= 4 )
      {
        v5 = *(_QWORD *)(v3 + 368);
        if ( v5 )
          return *(struct tagPROCESSINFO **)(v5 + 88);
      }
    }
  }
  return (struct tagPROCESSINFO *)CurrentProcessWin32Process;
}

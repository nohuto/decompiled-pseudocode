/*
 * XREFs of ?GetInputProcessContext@@YAKPEAX@Z @ 0x1C01F3B1C
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01F42C8 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetInputProcessContext(unsigned __int64 a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  LOBYTE(v4) = 19;
  v5 = *(_DWORD *)(CurrentProcessWin32Process + 56);
  v8 = HMValidateHandleNoSecure(a1, v4, v6, v7);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 480);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 252) & 0x20) != 0 && (unsigned int)(*(_DWORD *)(v9 + 24) - 1) <= 3 )
      {
        v10 = *(_QWORD *)(v8 + 384);
        if ( v10 )
          return *(unsigned int *)(v10 + 84);
      }
    }
  }
  return v5;
}

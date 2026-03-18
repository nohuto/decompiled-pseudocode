/*
 * XREFs of ?GetInputThreadContext@@YAPEAUtagTHREADINFO@@PEAX@Z @ 0x1C01FC3E8
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01FCBA8 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

struct tagTHREADINFO *__fastcall GetInputThreadContext(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  v1 = gptiCurrent;
  v2 = HMValidateHandleNoSecure(a1, 19);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 416);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 236) & 8) != 0 && (unsigned int)(*(_DWORD *)(v3 + 24) - 1) <= 4 )
      {
        v4 = *(_QWORD *)(v2 + 376);
        if ( v4 )
          return *(struct tagTHREADINFO **)(v4 + 88);
      }
    }
  }
  return (struct tagTHREADINFO *)v1;
}

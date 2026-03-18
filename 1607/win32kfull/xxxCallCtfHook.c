/*
 * XREFs of xxxCallCtfHook @ 0x1C007F1EC
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     fnHkINLPMSG @ 0x1C0084D00 (fnHkINLPMSG.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     fnHkINDWORD @ 0x1C01068A8 (fnHkINDWORD.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0115264 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C01285A8 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallCtfHook(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v7; // r9
  int v10; // esi
  int v11; // ebx
  int v12; // ebx
  int v15; // ebx
  int v16; // ebx
  unsigned int ThreadId; // eax
  int v18; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]

  v4 = 0;
  v5 = a1;
  v7 = gpsi;
  v10 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v18 = 0;
  if ( gpsi
    && *(_QWORD *)(gpsi + 840LL)
    && gptiCurrent != gptiRit
    && (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000000D) == 0
    && *(_QWORD *)(gptiCurrent + 408LL) )
  {
    if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x400) == 0 )
      goto LABEL_7;
    ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
    v19[1] = 0;
    v19[0] = ThreadId;
    v22 = a2;
    v21 = a3;
    v20 = a4;
    if ( !(unsigned int)xxxCallHook(0LL, v5, v19, 9LL) )
    {
      v7 = gpsi;
LABEL_7:
      v11 = v5 - 2;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
          return (unsigned int)fnHkINLPMSG(v10, a3, a4, 0, *(_QWORD *)(*(_QWORD *)v7 + 840LL), 0, (__int64)&v18);
        v15 = v12 - 2;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( !v16 )
            return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(
                                   v10,
                                   a3,
                                   a4,
                                   0,
                                   *(_QWORD *)(*(_QWORD *)v7 + 840LL),
                                   (__int64)&v18);
          if ( v16 != 3 || a2 == 5 )
            return v4;
        }
        else if ( a2 == 5 )
        {
          return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(v10, a3, a4, 0, *(_QWORD *)(*(_QWORD *)v7 + 840LL));
        }
      }
      return (unsigned int)fnHkINDWORD(v10, a3, a4, 0, *(_QWORD *)(*(_QWORD *)v7 + 840LL), (__int64)&v18);
    }
  }
  return 0LL;
}

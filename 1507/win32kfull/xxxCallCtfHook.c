/*
 * XREFs of xxxCallCtfHook @ 0x1C0067860
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     fnHkINLPMSG @ 0x1C006CF90 (fnHkINLPMSG.c)
 *     fnHkINDWORD @ 0x1C00E1EC4 (fnHkINDWORD.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00EE5E8 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallCtfHook(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v7; // r9
  int v10; // esi
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rax
  int v15; // ebx
  int v16; // ebx
  unsigned int ThreadId; // eax
  int v18; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]

  v4 = 0;
  v7 = gpsi;
  v10 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v18 = 0;
  if ( gpsi
    && *(_QWORD *)(gpsi + 840LL)
    && gptiCurrent != gptiRit
    && (*(_DWORD *)(gptiCurrent + 448LL) & 0x1000000D) == 0
    && *(_QWORD *)(gptiCurrent + 416LL) )
  {
    if ( ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x400) == 0 )
    {
LABEL_7:
      v11 = a1 - 2;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          v13 = fnHkINLPMSG(v10, a3, a4, 0, *(_QWORD *)(*(_QWORD *)v7 + 840LL), 0, (__int64)&v18);
          goto LABEL_10;
        }
        v15 = v12 - 2;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( !v16 )
          {
            v13 = fnHkINLPMOUSEHOOKSTRUCTEX(v10, a3, a4, 0, *(_QWORD *)(*(_QWORD *)v7 + 840LL), (__int64)&v18);
LABEL_10:
            if ( v13 )
              return 1;
            return v4;
          }
          if ( v16 != 3 )
            return v4;
        }
      }
      v13 = fnHkINDWORD(v10, a3, a4, 0, *(_QWORD *)(*(_QWORD *)v7 + 840LL), (__int64)&v18);
      goto LABEL_10;
    }
    ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
    v19[1] = 0;
    v19[0] = ThreadId;
    v22 = a2;
    v21 = a3;
    v20 = a4;
    if ( !(unsigned int)xxxCallHook(0, a1, (__int64)v19, 9u) )
    {
      v7 = gpsi;
      goto LABEL_7;
    }
  }
  return 0LL;
}

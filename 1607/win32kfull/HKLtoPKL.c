/*
 * XREFs of HKLtoPKL @ 0x1C00E8460
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00E67CC (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     NtUserVkKeyScanEx @ 0x1C00E7920 (NtUserVkKeyScanEx.c)
 *     xxxInternalToUnicode @ 0x1C00E7C78 (xxxInternalToUnicode.c)
 *     NtUserMapVirtualKeyEx @ 0x1C00E8290 (NtUserMapVirtualKeyEx.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C00E84C0 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     xxxActivateKeyboardLayout @ 0x1C01D56D0 (xxxActivateKeyboardLayout.c)
 *     NtUserSetThreadLayoutHandles @ 0x1C021A820 (NtUserSetThreadLayoutHandles.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C021B860 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HKLtoPKL(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 392);
  result = 0LL;
  if ( !v2 )
    return result;
  v4 = *(_QWORD *)(a1 + 392);
  if ( !a2 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v4 + 24);
      if ( (*(_DWORD *)(v4 + 32) & 0x20000000) == 0 )
        break;
      if ( v4 == v2 )
        return result;
    }
    return v4;
  }
  if ( a2 == 1 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v4 + 16);
      if ( (*(_DWORD *)(v4 + 32) & 0x20000000) == 0 )
        break;
      if ( v4 == v2 )
        return result;
    }
    return v4;
  }
  if ( (a2 & 0xFFFF0000) != 0 )
  {
    do
    {
      if ( *(_QWORD *)(v4 + 40) == a2 )
      {
        result = v4;
        if ( *(int *)(v4 + 32) >= 0 )
          break;
      }
      v4 = *(_QWORD *)(v4 + 16);
    }
    while ( v4 != v2 );
  }
  else
  {
    do
    {
      if ( *(_WORD *)(v4 + 40) == (_WORD)a2 )
      {
        result = v4;
        if ( *(int *)(v4 + 32) >= 0 )
          break;
      }
      v4 = *(_QWORD *)(v4 + 16);
    }
    while ( v4 != v2 );
  }
  return result;
}

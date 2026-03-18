/*
 * XREFs of HKLtoPKL @ 0x1C0099B34
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0097694 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     NtUserVkKeyScanEx @ 0x1C00991B0 (NtUserVkKeyScanEx.c)
 *     xxxInternalToUnicode @ 0x1C0099650 (xxxInternalToUnicode.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0099BB8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     xxxActivateKeyboardLayout @ 0x1C0099F54 (xxxActivateKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C00DB750 (NtUserMapVirtualKeyEx.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     NtUserSetThreadLayoutHandles @ 0x1C02208C0 (NtUserSetThreadLayoutHandles.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C0221720 (NtUserUnloadKeyboardLayout.c)
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
  if ( v2 )
  {
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
  }
  return result;
}

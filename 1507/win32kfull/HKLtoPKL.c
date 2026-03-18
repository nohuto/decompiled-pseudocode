/*
 * XREFs of HKLtoPKL @ 0x1C00DAB90
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserMapVirtualKeyEx @ 0x1C00D70D0 (NtUserMapVirtualKeyEx.c)
 *     NtUserVkKeyScanEx @ 0x1C00DA230 (NtUserVkKeyScanEx.c)
 *     xxxInternalToUnicode @ 0x1C00DA574 (xxxInternalToUnicode.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0139D2C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C013B2F0 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     xxxActivateKeyboardLayout @ 0x1C01DD7BC (xxxActivateKeyboardLayout.c)
 *     NtUserSetThreadLayoutHandles @ 0x1C0220A80 (NtUserSetThreadLayoutHandles.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C0221700 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HKLtoPKL(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 400);
  result = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 400);
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

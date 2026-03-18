/*
 * XREFs of AllocateAndLinkHidTLCInfo @ 0x1C00E5248
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00E22D4 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall AllocateAndLinkHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 *i; // rax

  result = Win32AllocPoolZInit(48LL, 1416131413LL);
  v5 = result;
  if ( result )
  {
    *(_WORD *)(result + 16) = a1;
    *(_WORD *)(result + 18) = a2;
    if ( *(_QWORD *)(RawInputManagerObject::gHidRequestTable[0] + 8LL) != RawInputManagerObject::gHidRequestTable[0] )
      __fastfail(3u);
    *(_QWORD *)result = RawInputManagerObject::gHidRequestTable[0];
    *(_QWORD *)(result + 8) = RawInputManagerObject::gHidRequestTable[0];
    *(_QWORD *)(RawInputManagerObject::gHidRequestTable[0] + 8LL) = result;
    RawInputManagerObject::gHidRequestTable[0] = result;
    for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable[2];
          i != &RawInputManagerObject::gHidRequestTable[2];
          i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 8) == a1 )
      {
        *(_DWORD *)(v5 + 28) = *((_DWORD *)i + 5);
        return v5;
      }
    }
    return v5;
  }
  return result;
}

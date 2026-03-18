/*
 * XREFs of SearchHidTLCInfo @ 0x1C00E4A14
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00E22D4 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall SearchHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 *result; // rax

  for ( result = (__int64 *)RawInputManagerObject::gHidRequestTable[0];
        result != (__int64 *)RawInputManagerObject::gHidRequestTable[0];
        result = (__int64 *)*result )
  {
    if ( *((_WORD *)result + 8) == a1 && *((_WORD *)result + 9) == a2 )
      return result;
  }
  return 0LL;
}

/*
 * XREFs of SearchHidTLCInfo @ 0x1C010243C
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C0089BAC (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     HidCreateDeviceInfo @ 0x1C01D5214 (HidCreateDeviceInfo.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

struct tagHID_PAGEONLY_REQUEST *__fastcall SearchHidTLCInfo(__int16 a1, __int16 a2)
{
  struct tagHID_PAGEONLY_REQUEST *v2; // r8
  int v3; // r10d
  struct tagHID_PAGEONLY_REQUEST **v4; // rax

  v2 = gHidRequestTable;
  v3 = aDeviceTemplate[154];
  if ( v3 )
    v2 = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[0];
  while ( 1 )
  {
    v4 = &gHidRequestTable;
    if ( v3 )
      v4 = (struct tagHID_PAGEONLY_REQUEST **)RawInputManagerObject::gHidRequestTable[0];
    if ( v2 == (struct tagHID_PAGEONLY_REQUEST *)v4 )
      break;
    if ( *((_WORD *)v2 + 8) == a1 && *((_WORD *)v2 + 9) == a2 )
      return v2;
    v2 = *(struct tagHID_PAGEONLY_REQUEST **)v2;
  }
  return 0LL;
}

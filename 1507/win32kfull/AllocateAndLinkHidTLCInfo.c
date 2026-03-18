/*
 * XREFs of AllocateAndLinkHidTLCInfo @ 0x1C0155544
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C0078ED8 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     HidCreateDeviceInfo @ 0x1C01D3794 (HidCreateDeviceInfo.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DEB78 (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateAndLinkHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  struct tagHID_PAGEONLY_REQUEST **v6; // rdx
  struct tagHID_PAGEONLY_REQUEST *v7; // rax
  int v8; // r9d
  struct tagHID_PAGEONLY_REQUEST *i; // rax
  struct tagHID_PAGEONLY_REQUEST **v10; // rcx

  result = Win32AllocPoolZInit(48LL, 1416131413LL);
  v5 = result;
  if ( result )
  {
    *(_WORD *)(result + 16) = a1;
    v6 = &gHidRequestTable;
    *(_WORD *)(result + 18) = a2;
    if ( LODWORD(aDeviceTemplate[154]) )
      v6 = (struct tagHID_PAGEONLY_REQUEST **)RawInputManagerObject::gHidRequestTable[0];
    v7 = *v6;
    *(_QWORD *)v5 = *v6;
    *(_QWORD *)(v5 + 8) = v6;
    if ( *((struct tagHID_PAGEONLY_REQUEST ***)v7 + 1) != v6 )
      __fastfail(3u);
    *((_QWORD *)v7 + 1) = v5;
    *v6 = (struct tagHID_PAGEONLY_REQUEST *)v5;
    v8 = aDeviceTemplate[154];
    i = qword_1C0328800;
    if ( !v8 )
      goto LABEL_12;
    for ( i = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[2];
          ;
          i = *(struct tagHID_PAGEONLY_REQUEST **)i )
    {
      if ( v8 )
        v10 = (struct tagHID_PAGEONLY_REQUEST **)&RawInputManagerObject::gHidRequestTable[2];
      else
LABEL_12:
        v10 = &qword_1C0328800;
      if ( i == (struct tagHID_PAGEONLY_REQUEST *)v10 )
        break;
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

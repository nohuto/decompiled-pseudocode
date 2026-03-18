/*
 * XREFs of ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C0121384
 * Callers:
 *     InternalSetClipboardData @ 0x1C0120A30 (InternalSetClipboardData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0121244 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C0128CAC (xxxEmptyClipboard.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F0308 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F0480 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F063C (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

void __fastcall UT_FreeCBFormat(struct tagCLIP *a1)
{
  unsigned __int64 v1; // r8
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rax

  v1 = *((_QWORD *)a1 + 1);
  if ( !v1 )
    return;
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      goto LABEL_18;
    case 3:
      goto LABEL_17;
    case 9:
      goto LABEL_18;
    case 0xE:
LABEL_17:
      v3 = 3;
      goto LABEL_11;
    case 0x80:
      v3 = 0;
      goto LABEL_11;
    case 0x82:
LABEL_18:
      v3 = 1;
      goto LABEL_11;
    case 0x83:
    case 0x8E:
      goto LABEL_17;
  }
  v3 = 2;
LABEL_11:
  if ( !v3 )
  {
    if ( !*((_DWORD *)a1 + 4) )
      return;
    goto LABEL_25;
  }
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      if ( v1 - 1 <= 1 )
        return;
LABEL_25:
      v6 = HMValidateHandleNoSecure(v1, 6);
      if ( v6 )
        HMUnlockDestroyObject(v6);
      return;
    }
    if ( v5 == 1 && v1 - 3 > 1 )
      GreDeleteServerMetaFile(v1);
  }
  else if ( v1 != 2 )
  {
    GreDeleteObject(v1);
  }
}

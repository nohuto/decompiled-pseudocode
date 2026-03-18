/*
 * XREFs of ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01D9504
 * Callers:
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8E30 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 *     GetActiveHKL @ 0x1C0084850 (GetActiveHKL.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall RemoteSyncToggleKeys(int a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  char v3; // r9
  _BYTE v4[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v5; // [rsp+32h] [rbp-2Eh]
  __int64 v6; // [rsp+38h] [rbp-28h]

  v6 = 0LL;
  v1 = a1 | 0x8000;
  gSetLedReceived = a1 | 0x8000;
  if ( gpqForeground )
  {
    v2 = (v1 >> 14) & 1;
    if ( (((unsigned __int8)~(_BYTE)a1 >> 2) & 1) != (((unsigned __int8)~byte_1C0322AA5 >> 1) & 1) )
    {
      v4[0] = 58;
      v5 = 20;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      v4[0] = 58;
      v5 = -32748;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      LOBYTE(v1) = gSetLedReceived;
    }
    v3 = byte_1C0322AC4;
    if ( (((unsigned __int8)~(_BYTE)v1 >> 1) & 1) != (((unsigned __int8)~byte_1C0322AC4 >> 1) & 1) )
    {
      v4[0] = 69;
      v5 = 144;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      v4[0] = 69;
      v5 = -32624;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      LOBYTE(v1) = gSetLedReceived;
      v3 = byte_1C0322AC4;
    }
    if ( ((v1 & 1) == 0) != (((unsigned __int8)~v3 >> 3) & 1) )
    {
      v4[0] = 70;
      v5 = 145;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      v4[0] = 70;
      v5 = -32623;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
    }
    if ( (GetActiveHKL() & 0x3FF) == 0x11
      && (((unsigned __int8)~(_BYTE)gSetLedReceived >> 3) & 1) != (((unsigned __int8)~byte_1C0322AA5 >> 3) & 1) )
    {
      v4[0] = 112;
      v5 = 21;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      v4[0] = 112;
      v5 = -32747;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
    }
    gSetLedReceived = 0;
  }
}

/*
 * XREFs of ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01D0B68
 * Callers:
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C00E8688 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     GetActiveHKL @ 0x1C00A41B4 (GetActiveHKL.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall RemoteSyncToggleKeys(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE v8[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v9; // [rsp+32h] [rbp-2Eh]
  __int64 v10; // [rsp+38h] [rbp-28h]

  v4 = a1;
  v10 = 0LL;
  LODWORD(v4) = a1 | 0x8000;
  gSetLedReceived = a1 | 0x8000;
  if ( gpqForeground )
  {
    v5 = ((unsigned int)v4 >> 14) & 1;
    if ( (((unsigned __int8)~(_BYTE)a1 >> 2) & 1) != (((unsigned __int8)~byte_1C0327725 >> 1) & 1) )
    {
      v8[0] = 58;
      v9 = 20;
      xxxProcessKeyEvent((struct tagKE *)v8, 0LL, v5, 0, 0LL);
      v8[0] = 58;
      v9 = -32748;
      xxxProcessKeyEvent((struct tagKE *)v8, 0LL, v5, 0, 0LL);
      v4 = gSetLedReceived;
    }
    LOBYTE(a4) = byte_1C0327744;
    v6 = ((unsigned __int8)~(_BYTE)v4 >> 1) & 1;
    if ( (_DWORD)v6 != (((unsigned __int8)~byte_1C0327744 >> 1) & 1) )
    {
      v8[0] = 69;
      v9 = 144;
      xxxProcessKeyEvent((struct tagKE *)v8, 0LL, v5, 0, 0LL);
      v8[0] = 69;
      v9 = -32624;
      xxxProcessKeyEvent((struct tagKE *)v8, 0LL, v5, 0, 0LL);
      v4 = gSetLedReceived;
      LOBYTE(a4) = byte_1C0327744;
    }
    LOBYTE(a4) = ~(_BYTE)a4;
    LOBYTE(v4) = ~(_BYTE)v4;
    v7 = v4 & 1;
    if ( (_DWORD)v7 != (((unsigned __int8)a4 >> 3) & 1) )
    {
      v8[0] = 70;
      v9 = 145;
      xxxProcessKeyEvent((struct tagKE *)v8, 0LL, v5, 0, 0LL);
      v8[0] = 70;
      v9 = -32623;
      xxxProcessKeyEvent((struct tagKE *)v8, 0LL, v5, 0, 0LL);
    }
    if ( (GetActiveHKL(v7, v6, v4, a4) & 0x3FF) == 0x11
      && (((unsigned __int8)~(_BYTE)gSetLedReceived >> 3) & 1) != (((unsigned __int8)~byte_1C0327725 >> 3) & 1) )
    {
      v8[0] = 112;
      v9 = 21;
      xxxProcessKeyEvent((struct tagKE *)v8, 0LL, v5, 0, 0LL);
      v8[0] = 112;
      v9 = -32747;
      xxxProcessKeyEvent((struct tagKE *)v8, 0LL, v5, 0, 0LL);
    }
    gSetLedReceived = 0;
  }
}

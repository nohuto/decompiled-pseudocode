/*
 * XREFs of ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C022A244
 * Callers:
 *     xxxKELocaleProcs @ 0x1C004A420 (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 */

void __fastcall xxxAltGr(struct tagKE *a1)
{
  __int16 v1; // dx
  unsigned __int16 v3; // cx

  v1 = *((_WORD *)a1 + 1);
  if ( (_BYTE)v1 == 0xA5 )
  {
    if ( v1 < 0 )
    {
      gbAltGrDown = 0;
      if ( (byte_1C03230F8 & 0x10) != 0 )
        return;
      v3 = -32606;
    }
    else
    {
      if ( (byte_1C03230D4 & 4) != 0 )
        return;
      gbAltGrDown = 1;
      v3 = 162;
    }
    xxxKeyEvent(v3, 0x21Du, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
  }
}

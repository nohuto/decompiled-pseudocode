/*
 * XREFs of NtGdiMakeFontDir @ 0x1C02A8E00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     __report_rangecheckfailure @ 0x1C01BF698 (__report_rangecheckfailure.c)
 *     GreMakeFontDir @ 0x1C02B5C2C (GreMakeFontDir.c)
 */

__int64 __fastcall NtGdiMakeFontDir(unsigned int a1, _OWORD *a2, unsigned int a3, char *a4, unsigned int Size)
{
  unsigned int FontDir; // esi
  unsigned int v10; // edi
  unsigned int v11; // edi
  _OWORD *v12; // rbx
  _OWORD v14[16]; // [rsp+30h] [rbp-358h] BYREF
  _WORD v15[264]; // [rsp+130h] [rbp-258h] BYREF

  memset(v14, 0, 0xFBuLL);
  FontDir = 0;
  v10 = Size;
  if ( Size <= 0x20A && a3 >= 0xFB )
  {
    if ( &a4[Size] < a4 || (unsigned __int64)&a4[Size] > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    memmove(v15, a4, Size);
    if ( Size < 2 )
      v10 = 2;
    v11 = v10 >> 1;
    if ( 2 * (unsigned __int64)(v11 - 1) >= 0x20A )
      _report_rangecheckfailure();
    v15[v11 - 1] = 0;
    FontDir = GreMakeFontDir(a1, v14, v15);
    if ( FontDir )
    {
      if ( (unsigned __int64)a2 + 251 > W32UserProbeAddress || (_OWORD *)((char *)a2 + 251) <= a2 )
        *W32UserProbeAddress = 0;
      *a2 = v14[0];
      a2[1] = v14[1];
      a2[2] = v14[2];
      a2[3] = v14[3];
      a2[4] = v14[4];
      a2[5] = v14[5];
      a2[6] = v14[6];
      v12 = a2 + 8;
      *(v12 - 1) = v14[7];
      *v12 = v14[8];
      v12[1] = v14[9];
      v12[2] = v14[10];
      v12[3] = v14[11];
      v12[4] = v14[12];
      v12[5] = v14[13];
      v12[6] = v14[14];
      *((_QWORD *)v12 + 14) = *(_QWORD *)&v14[15];
      *((_WORD *)v12 + 60) = WORD4(v14[15]);
      *((_BYTE *)v12 + 122) = BYTE10(v14[15]);
    }
  }
  return FontDir;
}

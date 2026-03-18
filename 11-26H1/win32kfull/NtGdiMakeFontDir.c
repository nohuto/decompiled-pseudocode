/*
 * XREFs of NtGdiMakeFontDir @ 0x140226E50
 * Callers:
 *     <none>
 * Callees:
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x140226FB4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     __report_rangecheckfailure @ 0x140297D70 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiMakeFontDir(unsigned int a1, void *a2, unsigned int a3, const void *a4, unsigned int a5)
{
  unsigned int FontDir; // ebx
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned __int8 v13[256]; // [rsp+40h] [rbp-348h] BYREF
  unsigned __int16 v14[264]; // [rsp+140h] [rbp-248h] BYREF

  memset_0(v13, 0, 0xFBuLL);
  FontDir = 0;
  if ( a5 <= 0x20A && a3 >= 0xFB )
  {
    v9 = 2;
    GreProbeAndReadFromUntrustedVa(v14, a5, a4, a5, 2uLL);
    if ( a5 >= 2 )
      v9 = a5;
    v10 = v9 >> 1;
    if ( 2 * (unsigned __int64)(v10 - 1) >= 0x20A )
      _report_rangecheckfailure();
    v14[v10 - 1] = 0;
    FontDir = GreMakeFontDir(a1, v13, v14);
    if ( FontDir )
      GreProbeAndWriteToUntrustedVa(a2, 0xFBuLL, v13, 0xFBuLL, 1uLL);
  }
  return FontDir;
}

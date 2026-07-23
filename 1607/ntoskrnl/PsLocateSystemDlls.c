/*
 * XREFs of PsLocateSystemDlls @ 0x140554B44
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14013D6B0 (VslGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x14013D6F8 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PspLocateSystemDll @ 0x140554BC0 (PspLocateSystemDll.c)
 */

__int64 PsLocateSystemDlls()
{
  _QWORD *v0; // rbx
  __int64 v1; // rsi
  int v2; // edi
  int SystemDll; // eax

  if ( !ExVerifySuite(EmbeddedNT) || (PsEmbeddedNTMask & 1) == 0 )
  {
    v0 = &PspSystemDlls;
    v1 = VslGetNestedPageProtectionFlags() & 4;
    v2 = 0;
    do
    {
      if ( *v0 )
      {
        SystemDll = PspLocateSystemDll(*v0, (unsigned int)v1);
        if ( SystemDll < 0 && (*(_DWORD *)(*v0 + 16LL) & 1) != 0 )
          KeBugCheckEx(0x6Bu, SystemDll, 2uLL, v2, 0LL);
      }
      ++v2;
      ++v0;
    }
    while ( (__int64)v0 <= (__int64)&off_140747128 );
  }
  return 0LL;
}

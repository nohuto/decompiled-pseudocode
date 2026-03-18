/*
 * XREFs of PsLocateSystemDlls @ 0x1405B5788
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     HvlGetNestedPageProtectionFlags @ 0x14015A5A4 (HvlGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x14016C2D4 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PspLocateSystemDll @ 0x1405B57F8 (PspLocateSystemDll.c)
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
    v1 = HvlGetNestedPageProtectionFlags() & 4;
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
    while ( (__int64)v0 <= (__int64)&off_14077E0E0 );
  }
  return 0LL;
}

/*
 * XREFs of PsLocateSystemDlls @ 0x14053F938
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     HvlGetNestedPageProtectionFlags @ 0x140126EC8 (HvlGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x14013E80C (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PspLocateSystemDll @ 0x14053F9A8 (PspLocateSystemDll.c)
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
    while ( (__int64)v0 <= (__int64)&off_1406FB0E8 );
  }
  return 0LL;
}

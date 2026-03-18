/*
 * XREFs of NtDCompositionEnableDDASupport @ 0x1C00D5F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0013BE8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0046E88 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z @ 0x1C00D6980 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z.c)
 */

__int64 NtDCompositionEnableDDASupport()
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  __int64 v1; // r8
  DirectComposition::CConnection *v2; // rbx
  unsigned int v3; // edi
  unsigned int v4; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v2 = DefaultConnection;
  if ( DefaultConnection )
  {
    LOBYTE(v1) = 1;
    v3 = DirectComposition::CConnection::ForceRender(DefaultConnection, 0LL, v1, 0LL);
    DirectComposition::CConnection::Release(v2, v4);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}

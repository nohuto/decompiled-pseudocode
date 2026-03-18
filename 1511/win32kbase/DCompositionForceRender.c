/*
 * XREFs of DCompositionForceRender @ 0x1C00D5AF0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 *     NtGdiDdDDISetHwProtectionTeardownRecovery @ 0x1C00B92C0 (NtGdiDdDDISetHwProtectionTeardownRecovery.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0013BE8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0046E88 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z @ 0x1C00D6980 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z.c)
 */

__int64 __fastcall DCompositionForceRender(int a1, int a2, int a3)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  __int64 v7; // rdx
  DirectComposition::CConnection *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r9
  unsigned int v11; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v8 = DefaultConnection;
  if ( DefaultConnection )
  {
    v10 = 0LL;
    if ( a2 )
      v10 = 2 - (unsigned int)(a3 != 0);
    LOBYTE(v7) = a1 != 0;
    v9 = DirectComposition::CConnection::ForceRender(DefaultConnection, v7, 0LL, v10);
    DirectComposition::CConnection::Release(v8, v11);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v9;
}
